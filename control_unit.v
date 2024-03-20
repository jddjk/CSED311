`include "opcodes.v"

module control_unit(
    input [6:0] instruction,
    input [31:0] is_x17_ten,
    output reg write_enable,
    output reg alu_src,
    output reg mem_read,
    output reg mem_write,
    output reg mem_to_reg,
    output reg pc_to_reg,
    output reg is_jal,
    output reg is_jalr,
    output reg branch,
    output reg is_halted,
    output reg ishalted
);
    wire [6:0]opcode = instruction[6:0];
    initial begin
        write_enable = 0;
        alu_src = 0;
        mem_read = 0;
        mem_write = 0;
        mem_to_reg = 0;
        pc_to_reg = 0;
        is_jal = 0;
        is_jalr = 0;
        branch = 0;
        is_halted = 0;
        ishalted = 0;
    end

    always @(*) begin
        write_enable = 0;
        alu_src = 0;
        mem_read = 0;
        mem_write = 0;
        mem_to_reg = 0;
        pc_to_reg = 0;
        is_jal = 0;
        is_jalr = 0;
        branch = 0;
        is_halted = 0;
        ishalted = 0;
        case(opcode)
            `ARITHMETIC: begin
                write_enable = 1;
            end
            `ARITHMETIC_IMM: begin
                write_enable = 1;
                alu_src = 1;
            end
            `LOAD: begin
                write_enable = 1;
                alu_src = 1;
                mem_read = 1;
                mem_to_reg = 1;
            end
            `STORE: begin
                alu_src = 1;
                mem_write = 1;
            end
            `BRANCH: begin
                branch = 1;
            end
            `JAL: begin
                write_enable = 1;
                pc_to_reg = 1;
                is_jal = 1;
            end
            `JALR: begin
                write_enable = 1;
                alu_src = 1;
                pc_to_reg = 1;
                is_jalr = 1;
            end
            `ECALL: begin
                if (is_x17_ten == 10) begin
                    is_halted = 1;
                    ishalted = 1;
                end
            end
            default: begin
            end
        endcase
    end
endmodule
