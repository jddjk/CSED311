`include "opcodes.v"


module alu_control_unit(opcode, func3, func7,alu_op);
    input [6:0] opcode;
    input [2:0] func3;
    input [6:0] func7;
    output reg [2:0] alu_op;

//combinational logic to determine the alu operation using part_of_inst(i.e. opcode, func3, func7)
always @(*)begin
//have to implement alu accordingly to this operation constants

//may fully implemented
    if(func3==`FUNCT3_BEQ && opcode==`BRANCH) begin
        alu_op= `FUNCT3_BEQ;
    end else if (func3==`FUNCT3_BNE && opcode==`BRANCH) begin
        alu_op= `FUNCT3_BNE;
    end else if (func3==`FUNCT3_BLT && opcode==`BRANCH) begin
        alu_op= `FUNCT3_BLT;
    end else if (func3==`FUNCT3_BGE && opcode==`BRANCH) begin
        alu_op= `FUNCT3_BGE;

//this part is not fully implemented
    end else if (func3==`FUNCT3_LW && opcode==`LOAD) begin
        alu_op= `FUNCT3_LW;
    end else if (func3==`FUNCT3_SW && opcode==`STORE) begin
        alu_op= `FUNCT3_SW;


//this part is not fully implemented
    end else if (func3==`FUNCT3_ADD && (opcode==`ARITHMETIC || opcode==`ARITHMETIC_IMM)) begin
        alu_op= `FUNCT3_ADD;
    end else if (func3==`FUNCT3_SUB && (opcode==`ARITHMETIC || opcode==`ARITHMETIC_IMM)) begin
        alu_op= `FUNCT3_SUB;

//may fully implemented
    end else if (func3==`FUNCT3_XOR && func3==`FUNCT3_SUB && (opcode==`ARITHMETIC || opcode==`ARITHMETIC_IMM)) begin
        alu_op= `FUNCT3_XOR;
    end else if (func3==`FUNCT3_OR && func3==`FUNCT3_SUB && (opcode==`ARITHMETIC || opcode==`ARITHMETIC_IMM)) begin
        alu_op= `FUNCT3_OR;
    end else if (func3==`FUNCT3_AND && func3==`FUNCT3_SUB && (opcode==`ARITHMETIC || opcode==`ARITHMETIC_IMM)) begin
        alu_op= `FUNCT3_AND;

//this part is not fully implemented
    end else if (func3==`FUNCT3_SLL && (opcode==`ARITHMETIC || opcode==`ARITHMETIC_IMM)) begin
        alu_op= `FUNCT3_SLL;

//this part is not fully implemented
    end else if (func3==`FUNCT3_SRL && (opcode==`ARITHMETIC || opcode==`ARITHMETIC_IMM)) begin
        alu_op= `FUNCT3_SRL;

//have to change output
    end else if (func7==`FUNCT7_SUB && (opcode==`ARITHMETIC || opcode==`ARITHMETIC_IMM)) begin
        alu_op= `FUNCT3_SUB;
    end else begin
        alu_op= `FUNCT3_ADD;
    end


end


endmodule
