module control_unit(
    input [31:0] instruction,
    output reg RegWrite,
    output reg ALUSrc,
    output reg MemRead,
    output reg MemWrite,
    output reg MemtoReg,
    output reg PCtoReg,
    output reg JAL,
    output reg JALR,
    output reg branch
    output reg is_halted
);
    wire [6:0]opcode = instruction[6:0];
    always @(*) begin

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
//store 하거나 branch (not) taken 이면 RegWrite was 0. why??
        if(opcode != `STORE && opcode != `BRANCH) write_enable = 1;
        else write_enable = 0;

        if(opcode == `JAL || opcode==`JALR) pc_to_reg = 1;
        else pc_to_reg = 0;

        if(opcode == `ECALL) is_halted = 1;
        else is_halted = 0;
    
    end
endmodule
