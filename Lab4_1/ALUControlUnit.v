`include "opcodes.v"
`include "alu_func.v"

module ALUControlUnit(
    input [31:0] instruction,
    output reg [3:0] alu_op
    );

    wire [6:0] opcode;
    wire [2:0] func3;
    wire [6:0] func7;

    assign opcode = instruction[6:0];
    assign func3 = instruction[14:12];
    assign func7 = instruction[31:25];

    always @(*) begin
        case (opcode)
            `ARITHMETIC: begin
                case (func3)
                    `FUNCT3_ADD: begin
                        case (func7)
                            `FUNCT7_SUB: alu_op = `FUNC_SUB; // SUB instruction
                            default: alu_op = `FUNC_ADD;     // ADD instruction
                        endcase
                    end
                    `FUNCT3_XOR: alu_op = `FUNC_XOR;    // XOR instruction
                    `FUNCT3_OR: alu_op = `FUNC_OR;     // OR instruction
                    `FUNCT3_AND: alu_op = `FUNC_AND;    // AND instruction
                    `FUNCT3_SLL: alu_op = `FUNC_SLL;    // SLL instruction
                    `FUNCT3_SRL: alu_op = `FUNC_SRL;    // SRL instruction
                    default: alu_op = 0;
                endcase
            end
            `ARITHMETIC_IMM: begin
                case (func3)
                    `FUNCT3_ADD: alu_op = `FUNC_ADD;    // ADDI instruction
                    `FUNCT3_XOR: alu_op = `FUNC_XOR;    // XORI instruction
                    `FUNCT3_OR: alu_op = `FUNC_OR;     // ORI instruction
                    `FUNCT3_AND: alu_op = `FUNC_AND;    // ANDI instruction
                    `FUNCT3_SLL: alu_op = `FUNC_SLL;    // SLLI instruction
                    `FUNCT3_SRL: alu_op = `FUNC_SRL;    // SRLI instruction
                    default: alu_op = 0;
                endcase
            end
            `LOAD: begin
                case (func3)
                    `FUNCT3_LW: alu_op = `FUNC_ADD;    // LW instruction
                    default: alu_op = 0;
                endcase
            end
            `STORE: begin
                case (func3)
                    `FUNCT3_SW: alu_op = `FUNC_ADD;    // SW instruction
                    default: alu_op = 0;
                endcase
            end
            `BRANCH: begin
                case (func3)
                    `FUNCT3_BEQ: alu_op = `FUNC_BEQ;    // BEQ instruction
                    `FUNCT3_BNE: alu_op = `FUNC_BNE;    // BNE instruction
                    `FUNCT3_BLT: alu_op = `FUNC_BLT;    // BLT instruction
                    `FUNCT3_BGE: alu_op = `FUNC_BGE;    // BGE instruction
                    default: alu_op = 0;
                endcase
            end
            `JALR: alu_op = `FUNC_JALR;          // JALR instruction
            default: alu_op = 0;
        endcase
    end
endmodule
