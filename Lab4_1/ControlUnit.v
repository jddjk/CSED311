`include "opcodes.v"

module ControlUnit(
    input [6:0] opcode,
    input isStall,
    output reg mem_read,
    output reg mem_to_reg,
    output reg mem_write,
    output reg alu_src,
    output reg write_enable,
    output reg is_ecall
);
    always @(*) begin
        mem_read = 0;
        mem_to_reg = 0;
        mem_write = 0;
        alu_src = 0;
        write_enable = 0;
        is_ecall = 0;

        if (!isStall) begin
            case (opcode)
                `ARITHMETIC: begin
                    alu_src = 0;
                    write_enable = 1;
                    mem_read = 0;
                    mem_to_reg = 0;
                    mem_write = 0;
                    is_ecall = 0;
                end
                `ARITHMETIC_IMM: begin
                    alu_src = 1;
                    mem_read = 0;
                    mem_to_reg = 0;
                    mem_write = 0;
                    is_ecall = 0;
                    if (opcode != 7'b0) begin
                        write_enable = 1;
                    end
                    else begin
                        write_enable = 0;
                    end
                end
                `LOAD: begin
                    mem_read = 1;
                    mem_to_reg = 1;
                    alu_src = 1;
                    mem_write = 0;
                    is_ecall = 0;
                    if (opcode != 7'b0) begin
                        write_enable = 1;
                    end
                    else begin
                        write_enable = 0;
                    end
                end
                `STORE: begin
                    mem_write = 1;
                    alu_src = 1;
                    write_enable = 0;
                    mem_read = 0;
                    mem_to_reg = 0;
                    is_ecall = 0;
                end
                `BRANCH: begin
                    write_enable = 0;
                end
                `ECALL: begin
                    mem_read = 0;
                    mem_to_reg = 0;
                    mem_write = 0;
                    alu_src = 0;
                    write_enable = 0;
                    is_ecall = 1;
                end
                default: begin
                    if (opcode != `BRANCH && opcode != 7'b0) begin
                        write_enable = 1;
                    end
                end
            endcase
        end
        else begin
            mem_read = 0;
            mem_to_reg = 0;
            mem_write = 0;
            alu_src = 0;
            write_enable = 0;
        end
    end
endmodule
