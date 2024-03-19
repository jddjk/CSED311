module immediate_generator(
    input [31:0] instruction,
    output reg [31:0] ex_immediate
);
    wire [6:0] opcode = instruction[6:0];
    always@(*) begin
        case(opcode)
            7'b0110011: ex_immediate = 32'd0; // R-type: 연산에 Immediate 값이 필요 없음
            7'b0010011: ex_immediate = {{20{instruction[31]}}, instruction[31:20]}; // I-type ALU: 상위 20비트는 sign-extended
            7'b0000011: ex_immediate = {{20{instruction[31]}}, instruction[31:20]}; // Load (I-type): 상위 20비트는 sign-extended
            7'b1100111: ex_immediate = {{20{instruction[31]}}, instruction[31:20]}; // I-type (JALR): 상위 20비트는 sign-extended
            7'b0100011: ex_immediate = {{20{instruction[31]}}, instruction[31:25], instruction[11:7]}; // S-type: 상위 20비트는 sign-extended
            7'b1100011: ex_immediate = {{20{instruction[31]}}, instruction[7], instruction[30:25], instruction[11:8], 1'b0}; // SB-type: 상위 19비트는 sign-extended, 최하위 비트는 0
            7'b0010111: ex_immediate = {instruction[31:12], 12'b0}; // U-type (AUIPC, LUI): 상위 20비트 사용, 하위 12비트는 0
            7'b1101111: ex_immediate = {{12{instruction[31]}}, instruction[19:12], instruction[20], instruction[30:21], 1'b0}; // UJ-type (JAL): 상위 11비트는 sign-extended, 최하위 비트는 0
            default: ex_immediate = 32'd0; // 기본값: 0
        endcase
    end
endmodule 
