`include "opcodes.v"


module control_unit(
    input [6:0] opcode,
    input reg [31:0] x17_val,
    output reg is_jal,
    output reg is_jalr,
    output reg branch,
    output reg mem_read,
    output reg mem_to_reg,
    output reg mem_write,
    output reg alu_src,
    output reg write_enable,
    output reg pc_to_reg,
    output reg is_ecall,
    output reg [1:0] ALUSRC
);



    //combinational logic which makes control signals using part_of_inst(i.e. opcode)
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
        is_ecall = 0;
        ALUSRC = 2'b01;

        if(opcode == `JAL) is_jal = 1;
        else is_jal = 0;
        
        if(opcode == `JALR) is_jalr = 1;
        else is_jalr = 0;
        
        if(opcode == `BRANCH) branch = 1;
        else branch = 0;

        if(opcode == `LOAD) mem_read = 1;
        else mem_read = 0;

        if(opcode == `LOAD) mem_to_reg = 1;
        else mem_to_reg = 0;

        if(opcode == `STORE) mem_write = 1;
        else mem_write = 0;
        
        if(opcode==`ARITHMETIC_IMM || opcode==`LOAD || opcode==`STORE) alu_src = 1;
        else alu_src = 0;

//RegWrite in the lecture note equals to write_enable
//store 하거나 branch (not) taken 이면 RegWrite was 0.
        if(opcode != `STORE && opcode != `BRANCH) write_enable = 1;
        else write_enable = 0;

        if(opcode == `JAL || opcode==`JALR) pc_to_reg = 1;
        else pc_to_reg = 0;

        if(opcode == `AUIPC) begin
            ALUSRC= 2'b0;
        end else if(opcode == `LUI) begin
            ALUSRC= 2'b10;
        end else begin
            ALUSRC= 2'b01;
        end

        if(opcode == `ECALL && x17_val ==10) is_ecall = 1;
        else is_ecall = 0;
    
    end

endmodule
