`include "opcodes.v"
`include "alu_func.v"


module alu_control_unit(opcode, func3, func7,alu_op);
    input [6:0] opcode;
    input [2:0] func3;
    input [6:0] func7;
    output reg [3:0] alu_op;

//combinational logic to determine the alu operation using part_of_inst(i.e. opcode, func3, func7)
always @(*)begin
//have to implement alu accordingly to this operation constants

//JAL doea not use this ALU
    if(opcode==`JALR) begin
        alu_op= `FUNC_JALR;  //JALR instruction
    end else if(opcode==`BRANCH && func3==`FUNCT3_BEQ) begin
        alu_op= `FUNC_BEQ;     //BEQ instruction
    end else if(opcode==`BRANCH && func3==`FUNCT3_BNE) begin
        alu_op= `FUNC_BNE;     //BNE instruction
    end else if(opcode==`BRANCH && func3==`FUNCT3_BLT) begin
        alu_op= `FUNC_BLT;     //BLT instruction
    end else if(opcode==`BRANCH && func3==`FUNCT3_BGE) begin
        alu_op= `FUNC_BGE;     //BGE instruction
    end else if((func3==`FUNCT3_LW && opcode==`LOAD) || (func3==`FUNCT3_SW && opcode==`STORE) || opcode==`ARITHMETIC_IMM && func3==`FUNCT3_ADD &&func7 != `FUNCT7_SUB ||opcode==`ARITHMETIC && func3==`FUNCT3_ADD &&func7 != `FUNCT7_SUB  ) begin
        alu_op= `FUNC_ADD;     //LW, SW, ADDI, ADD instruction (add와 sub의 func3가 같아서 add와 sub는 각각 func7도 조건에 포함해야 add와 sub 구분이 가능하다)
    end else if(opcode==`ARITHMETIC_IMM && func3==`FUNCT3_XOR || opcode==`ARITHMETIC && func3==`FUNCT3_XOR) begin
        alu_op= `FUNC_XOR;     //XORI,XOR instruction
    end else if(opcode==`ARITHMETIC_IMM && func3==`FUNCT3_OR || opcode==`ARITHMETIC && func3==`FUNCT3_OR) begin
        alu_op= `FUNC_OR;     //ORI, OR instruction
    end else if(opcode==`ARITHMETIC_IMM && func3==`FUNCT3_AND || opcode==`ARITHMETIC && func3==`FUNCT3_AND) begin
        alu_op= `FUNC_AND;     //ANDI, AND instruction
    end else if(opcode==`ARITHMETIC_IMM && func3==`FUNCT3_SLL || opcode==`ARITHMETIC && func3==`FUNCT3_SLL) begin
        alu_op= `FUNC_SLL;     //SLLI, SLL instruction
    end else if(opcode==`ARITHMETIC_IMM && func3==`FUNCT3_SRL || opcode==`ARITHMETIC && func3==`FUNCT3_SRL ) begin
        alu_op= `FUNC_SRL;     //SRLI,SRL instruction
    end else if(opcode==`ARITHMETIC && func3==`FUNCT3_SUB && func7 == `FUNCT7_SUB) begin
        alu_op= `FUNC_SUB;     //SUB instruction
    end else begin
        alu_op = 0;
    end
end


endmodule
