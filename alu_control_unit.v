`include "opcodes.v"
`define ALU_ADD  4'b0000
`define ALU_SUB  4'b0001
`define ALU_SLL  4'b0010
`define ALU_XOR  4'b0011
`define ALU_OR   4'b0100
`define ALU_AND  4'b0101
`define ALU_SRL  4'b0110
`define ALU_BEQ  4'b0111
`define ALU_BNE  4'b1000
`define ALU_BLT  4'b1001
`define ALU_BGE  4'b1010

module alu_control_unit(
    input [6:0] opcode,
    input [2:0] funct3,
    input [6:0] funct7,
    output reg[3:0] alu_op
);

    //combinational logic to determine the alu operation using part_of_inst(i.e. opcode, funct3, funct7)
    always @(*) begin
        alu_op = `ALU_ADD; // Initialize to ADD
        case (opcode)
            `ARITHMETIC: begin
                case (funct3)
                    `FUNCT3_SUB: alu_op = (funct7 == `FUNCT7_SUB) ? `ALU_SUB : `ALU_ADD;
                    `FUNCT3_XOR: alu_op = `ALU_XOR;
                    `FUNCT3_OR:  alu_op = `ALU_OR;
                    `FUNCT3_AND: alu_op = `ALU_AND;
                    `FUNCT3_SLL: alu_op = `ALU_SLL;
                    `FUNCT3_SRL: alu_op = `ALU_SRL;
                    default: alu_op = `ALU_ADD;
                endcase
            end
            `ARITHMETIC_IMM: begin
                case (funct3)
                    `FUNCT3_ADD: alu_op = `ALU_ADD;
                    `FUNCT3_XOR: alu_op = `ALU_XOR;
                    `FUNCT3_OR:  alu_op = `ALU_OR;
                    `FUNCT3_AND: alu_op = `ALU_AND;
                    `FUNCT3_SLL: alu_op = (funct7[5] == 0) ? `ALU_SLL : `ALU_ADD;
                    `FUNCT3_SRL: alu_op = (funct7[5] == 0) ? `ALU_SRL : `ALU_ADD;
                    default: alu_op = `ALU_ADD;
                endcase
            end
            `BRANCH: begin
                case (funct3)
                    `FUNCT3_BEQ: alu_op = `ALU_BEQ;
                    `FUNCT3_BNE: alu_op = `ALU_BNE;
                    `FUNCT3_BLT: alu_op = `ALU_BLT;
                    `FUNCT3_BGE: alu_op = `ALU_BGE;
                    default: alu_op = `ALU_ADD;
                endcase
            end
            `LOAD, `STORE: alu_op = `ALU_ADD;
            default: alu_op = `ALU_ADD;
        endcase
    end
endmodule 
