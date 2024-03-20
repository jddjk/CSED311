module immediate_generator(
    input [31:0] instruction,
    output reg [31:0] ex_immediate
);
    wire [6:0] opcode = instruction[6:0];
    always@(*) begin
        case(opcode)
            // U-type
            `LUI: ex_immediate = {instruction[31], instruction[30:20], instruction[19:12], 12'b0};
            `AUIPC: ex_immediate = {instruction[31], instruction[30:20], instruction[19:12], 12'b0};
            // I-type
            `ARITHMETIC_IMM: ex_immediate = {{21{instruction[31]}}, instruction[30:25], instruction[24:21], instruction[20]};
            // LW(I-type)
            `LOAD: ex_immediate = {{21{instruction[31]}}, instruction[30:25], instruction[24:21], instruction[20]};
            // JALR(I-type)
            `JALR: ex_immediate = {{21{instruction[31]}}, instruction[30:25], instruction[24:21], instruction[20]};
            // S-type
            `STORE: ex_immediate = {{21{instruction[31]}}, instruction[30:25], instruction[11:8], instruction[7]};
            // SB-type
            `BRANCH: ex_immediate = {{20{instruction[31]}}, instruction[7], instruction[30:25], instruction[11:8], 1'b0};
            //JAL(J-type)
            `JAL: ex_immediate = {{12{instruction[31]}}, instruction[19:12], instruction[20], instruction[30:25], instruction[24:21], 1'b0};
            default : ex_immediate = 0; // R-type or NO CASE
        endcase
    end
endmodule 
