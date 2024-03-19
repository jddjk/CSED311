module immediate_generator(
    input [31:0] instruction,
    output [31:0] ex_immediate
);
    wire [6:0] opcode = instruction[6:0];
    always@(*) begin
        case(opcode)
            7'b0110011: ex_immediate = 0; // R-type
            7'b0010011: ex_immediate = {{20{instruction[31]}}, instruction[31:20]}; // I-type ALU
            7'b0000011: ex_immediate = {{20{instruction[31]}}, instruction[31:20]}; // Load (I-type)
            7'b1100111: ex_immediate = {{20{instruction[31]}}, instruction[31:20]}; // I-type (JALR)
            7'b0100011: ex_immediate = {{20{instruction[31]}}, instruction[31:25], instruction[11:7]}; // S-type
            7'b1100011: ex_immediate = {{19{instruction[31]}}, instruction[7], instruction[30:25], instruction[11:8], 1'b0}; // SB-type
            7'b0010111: ex_immediate = {instruction[31:12], 12'b0}; // U-type (AUIPC, LUI)
            7'b1101111: ex_immediate = {{11{instruction[31]}}, instruction[19:12], instruction[20], instruction[30:21], 1'b0}; // UJ-type (JAL)
            default: ex_immediate = 0;
        endcase
    end
endmodule 
