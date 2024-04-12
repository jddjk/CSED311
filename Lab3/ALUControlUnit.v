`include "opcodes.v"
`include "alu_func.v"

module ALUControlUnit (
    input [31:0]instruction,
    input [1:0]alu_ctrl_op, // by Control unit
    output reg [3:0] alu_op // by alu_control_unit
);

    // alu_ctrl_op = 2'b00 -> ALU performs an add operation (LW,SW, inst.)
    // alu_ctrl_op = 2'b01 -> ALU performs a subtract operation(branch inst.)
    // alu_ctrl_op = 2'b10 -> funct field determines the ALU operation(r-type, i-type inst.)
    // alu_ctrl_op = 2'b11 -> JAL,JALR type instruction

    /* 
    alu_op
        00 : LW, STORE, nextPC
        01 : R/I type
        10 : JAL, JALR type
        11 : Bxx type
    */
    always @(*) begin
        case (alu_ctrl_op)
            2'b00: begin // l/s inst.
                alu_op = `FUNC_ADD; // ADD
            end

            2'b01: begin // branch inst.
                case(instruction[14:12])  //case(funct3)
                    `FUNCT3_BGE: begin  
                        alu_op = `FUNC_BGE; // BGE
                    end
                    `FUNCT3_BLT: begin
                        alu_op = `FUNC_BLT; // BLT
                    end
                    `FUNCT3_BNE: begin
                        alu_op = `FUNC_BNE; // BNE
                    end
                    `FUNCT3_BEQ: begin
                        alu_op = `FUNC_BEQ; // BEQ
                    end
                    default: begin
                        alu_op = `FUNC_ADD; // NOP
                    end
                endcase
            end
            2'b10: begin // r-type inst.
                case (instruction[6:0])   //case(opcode)
                    `ARITHMETIC: begin
                        case (instruction[31:25])   //case(funct7)
                            `FUNCT7_SUB: begin
                                if(instruction[14:12]==`FUNCT3_SUB) begin
                                    alu_op = `FUNC_SUB; // SUB
                                end else if(instruction[14:12]==`FUNCT3_SRL) begin
                                    alu_op = `FUNC_SRL; // Shift Right Logical
                                end else begin
                                    alu_op = `FUNC_ADD; // prevent letch error
                                end 

                            end
                        
                            default: begin
                                case (instruction[14:12])  //case(funct3)
                                    `FUNCT3_SLL: begin
                                        alu_op = `FUNC_SLL; // SLL
                                    end
                                    `FUNCT3_SRL: begin
                                        alu_op = `FUNC_SRL; // SRL
                                    end
                                    `FUNCT3_AND: begin
                                        alu_op = `FUNC_AND; // AND
                                    end
                                    `FUNCT3_OR: begin
                                        alu_op = `FUNC_OR; // OR
                                    end
                                    `FUNCT3_XOR: begin
                                        alu_op = `FUNC_XOR; // XOR
                                    end
                                    default: begin
                                        alu_op = `FUNC_ADD; // ADD
                                    end
                                endcase
                            end
                        endcase
                    end
                    default: begin
                        alu_op = `FUNC_ADD; // NOP
                    end
                endcase
            end

            2'b11: begin //
                if (instruction[6:0] == `JALR) begin //opcode == JALR
                    alu_op = `FUNC_JALR; // JALR
                end else begin
                    alu_op = `FUNC_ADD; // JAL
                end 
                                    
            end

            default: begin
                alu_op = 4'b0000; // NOP
            end
        endcase
    end

    

endmodule
