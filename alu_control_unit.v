`include "opcodes.v"
`define ALU_ADD  3'b000
`define ALU_SUB  3'b001
`define ALU_SLL  3'b010
`define ALU_XOR  3'b011
`define ALU_OR   3'b100
`define ALU_AND  3'b101
`define ALU_SRL  3'b110
`define ALU_SRA  3'b111

module alu_control_unit(
    input [6:0] opcode,
    input [2:0] funct3,
    input [6:0] funct7,
    output reg[2:0] alu_op
);

    //combinational logic to determine the alu operation using part_of_inst(i.e. opcode, funct3, funct7)
    always @(*) begin
        case (opcode)
            `ARITHMETIC: begin
                case (funct3)
                    //`FUNCT3_ADD: alu_op = `ALU_ADD;
                    `FUNCT3_SUB: begin
                        if (funct7 == `FUNCT7_SUB)
                            alu_op = `ALU_SUB;
                        else
                            alu_op = `ALU_ADD;
                    end
                    `FUNCT3_SLL: alu_op = `ALU_SLL;
                    `FUNCT3_XOR: alu_op = `ALU_XOR;
                    `FUNCT3_OR:  alu_op = `ALU_OR;
                    `FUNCT3_AND: alu_op = `ALU_AND;
                    `FUNCT3_SRL: begin
                        if (funct7 == `FUNCT7_SUB)
                            alu_op = `ALU_SRA;
                        else
                            alu_op = `ALU_SRL;
                    end
                    default: alu_op = `ALU_ADD;
                endcase
            end
            `ARITHMETIC_IMM: begin
                case (funct3)
                    `FUNCT3_ADD: alu_op = `ALU_ADD;
                    `FUNCT3_SLL: alu_op = `ALU_SLL;
                    `FUNCT3_XOR: alu_op = `ALU_XOR;
                    `FUNCT3_OR:  alu_op = `ALU_OR;
                    `FUNCT3_AND: alu_op = `ALU_AND;
                    `FUNCT3_SRL: alu_op = `ALU_SRL;
                    default: alu_op = `ALU_ADD;
                endcase
            end
            `BRANCH: begin
                case (funct3)
                    `FUNCT3_BEQ: alu_op = `ALU_SUB;
                    `FUNCT3_BNE: alu_op = `ALU_SUB;
                    `FUNCT3_BLT: alu_op = `ALU_SLL;
                    `FUNCT3_BGE: alu_op = `ALU_SRL;
                    default: alu_op = `ALU_SUB;
                endcase
            end
            `LOAD:  alu_op = `ALU_ADD;
            `STORE: alu_op = `ALU_ADD;
            default: alu_op = `ALU_ADD;
        endcase
    end
endmodule 
