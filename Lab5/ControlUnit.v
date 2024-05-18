`include "opcodes.v"

module ControlUnit(
    input [6:0] opcode,       // input
    input is_stall,
    input is_flush,
    output reg is_jal,        // output
    output reg is_jalr,       // output
    output reg is_branch,     // output  
    output reg mem_read,      // output
    output reg mem_to_reg,    // output
    output reg mem_write,     // output
    output reg alu_src,       // output
    output reg write_enable,  // output
    output reg pc_to_reg,     // output
    output reg is_ecall       // output (ecall inst)
    );

    always @(*) begin
        if (is_stall) begin
            is_jal = 0;
            is_jalr = 0;
            is_branch = 0;
            mem_read = 0;
            mem_to_reg = 0;
            mem_write = 0;
            alu_src = 0;
            write_enable = 0;
            pc_to_reg = 0;
            is_ecall = 0;
        end
        else if (is_flush) begin
            is_jal = 0;
            is_jalr = 0;
            is_branch = 0;
            mem_read = 0;
            mem_to_reg = 0;
            mem_write = 0;
            alu_src = 0;
            write_enable = 0;
            pc_to_reg = 0;
            is_ecall = 0;
        end
        else begin
        case (opcode)
            `ARITHMETIC: begin
                is_jal = 0;
                is_jalr = 0;
                is_branch = 0;
                mem_read = 0;
                mem_to_reg = 0;
                mem_write = 0;
                alu_src = 0;
                write_enable = 1;
                pc_to_reg = 0;
                is_ecall = 0;
            end
            `ARITHMETIC_IMM: begin
                is_jal = 0;
                is_jalr = 0;
                is_branch = 0;
                mem_read = 0;
                mem_to_reg = 0;
                mem_write = 0;
                alu_src = 1;
                write_enable = 1;
                pc_to_reg = 0;
                is_ecall = 0;
            end
            `LOAD: begin
                is_jal = 0;
                is_jalr = 0;
                is_branch = 0;
                mem_read = 1;
                mem_to_reg = 1;
                mem_write = 0;
                alu_src = 1;
                write_enable = 1;
                pc_to_reg = 0;
                is_ecall = 0;
            end
            `STORE: begin
                is_jal = 0;
                is_jalr = 0;
                is_branch = 0;
                mem_read = 0;
                mem_to_reg = 0;
                mem_write = 1;
                alu_src = 1;
                write_enable = 0;
                pc_to_reg = 0;
                is_ecall = 0;
            end
            `JAL: begin
                is_jal = 1;
                is_jalr = 0;
                is_branch = 0;
                mem_read = 0;
                mem_to_reg = 0;
                mem_write = 0;
                alu_src = 0;
                write_enable = 1;
                pc_to_reg = 1;
                is_ecall = 0;
            end
            `JALR: begin
                is_jal = 0;
                is_jalr = 1;
                is_branch = 0;
                mem_read = 0;
                mem_to_reg = 0;
                mem_write = 0;
                alu_src = 1;
                write_enable = 1;
                pc_to_reg = 1;
                is_ecall = 0;
            end
            `BRANCH: begin
                is_jal = 0;
                is_jalr = 0;
                is_branch = 1;
                mem_read = 0;
                mem_to_reg = 0;
                mem_write = 0;
                alu_src = 0;
                write_enable = 0;
                pc_to_reg = 0;
                is_ecall = 0;
            end
            `ECALL: begin
                is_jal = 0;
                is_jalr = 0;
                is_branch = 0;
                mem_read = 0;
                mem_to_reg = 0;
                mem_write = 0;
                alu_src = 0;
                write_enable = 0;
                pc_to_reg = 0;
                is_ecall = 1; 
            end
            default: begin
                is_jal = 0;
                is_jalr = 0;
                is_branch = 0;
                mem_read = 0;
                mem_to_reg = 0;
                mem_write = 0;
                alu_src = 0;
                write_enable = 0;
                pc_to_reg = 0;
                is_ecall = 0;
            end
        endcase
        end
    end
endmodule
