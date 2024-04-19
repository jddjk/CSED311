`include "opcodes.v"

module ControlUnit(
    input [6:0] opcode,
    input isStall,
    output reg mem_read,
    output reg mem_to_reg,
    output reg mem_write,
    output reg alu_src,
    output reg write_enable,
    //output reg pc_to_reg,
    //output reg [1:0] ALUop,
    output reg is_ecall
);
    always @(*) begin
        //mem_read
        if (opcode == `LOAD) mem_read = 1;
        else mem_read = 0;

        //reg mem_to_reg
        if (opcode == `LOAD) mem_to_reg = 1;
        else mem_to_reg = 0;

        //mem_write
        if (opcode == `STORE) begin
            mem_write = 1;
            //$display("Store instruction"); //! DEBUGGING
        end

        else mem_write = 0;

        //alu_src
        if (opcode == `ARITHMETIC_IMM || opcode == `LOAD || opcode == `STORE) alu_src = 1;
        else alu_src = 0;

        //write_enable
        if (opcode != `STORE && opcode != `BRANCH && opcode != `ECALL && opcode != 7'b0) write_enable = 1;
        else write_enable = 0;
        
        //pc_to_reg

        //alu_op

        //is_ecall
        if (opcode == `ECALL) begin 
            is_ecall = 1;
            //$display("ECALL instruction"); //! DEBUGGING
        end
        else is_ecall = 0;

        if (isStall) begin
            mem_read = 0;
            write_enable = 0;
            mem_write = 0;
        end
    end
endmodule
