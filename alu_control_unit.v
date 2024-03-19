`include "opcode.v"

module alu_control_unit(
    input [31:0] instruction,
    output reg[2:0] alu_op
);
    wire [6:0] opcode = instruction[6:0];
    wire [2:0] funct3 = instruction[14:12];
    wire [6:0] funct7 = instruction[31:25];

    //combinational logic to determine the alu operation using part_of_inst(i.e. opcode, funct3, funct7)
    always(*)begin
    //have to implement alu accordingly to this operation constants

    //may fully implemented
        if(funct3==`FUNCT3_BEQ && opcode==`branch) begin
            alu_op= `FUNCT3_BEQ;
        end else if (funct3==`FUNCT3_BNE && opcode==`branch) begin
            alu_op= `FUNCT3_BNE;
        end else if (funct3==`FUNCT3_BLT && opcode==`branch) begin
            alu_op= `FUNCT3_BLT;
        end else if (funct3==`FUNCT3_BGE && opcode==`branch) begin
            alu_op= `FUNCT3_BGE;

    //this part is not fully implemented
        end else if (funct3==`FUNCT3_LW && opcode==`LOAD) begin
            alu_op= `FUNCT3_LW;
        end else if (funct3==`FUNCT3_SW && opcode==`STORE) begin
            alu_op= `FUNCT3_SW;


    //this part is not fully implemented
        end else if (funct3==`FUNCT3_ADD && (opcode==`ARITHMETIC || opcode==`ARITHMETIC_IMM)) begin
            alu_op= `FUNCT3_ADD;
        end else if (funct3==`FUNCT3_SUB && (opcode==`ARITHMETIC || opcode==`ARITHMETIC_IMM)) begin
            alu_op= `FUNCT3_SUB;

    //may fully implemented
        end else if (funct3==`FUNCT3_XOR && funct3==`FUNCT3_SUB && (opcode==`ARITHMETIC || opcode==`ARITHMETIC_IMM)) begin
            alu_op= `FUNCT3_XOR;
        end else if (funct3==`FUNCT3_OR && funct3==`FUNCT3_SUB && (opcode==`ARITHMETIC || opcode==`ARITHMETIC_IMM)) begin
            alu_op= `FUNCT3_OR;
        end else if (funct3==`FUNCT3_AND && funct3==`FUNCT3_SUB && (opcode==`ARITHMETIC || opcode==`ARITHMETIC_IMM)) begin
            alu_op= `FUNCT3_AND;

    //this part is not fully implemented
        end else if (funct3==`FUNCT3_SLL && (opcode==`ARITHMETIC || opcode==`ARITHMETIC_IMM)) begin
            alu_op= `FUNCT3_SLL;

    //this part is not fully implemented
        end else if (funct3==`FUNCT3_SRL && (opcode==`ARITHMETIC || opcode==`ARITHMETIC_IMM)) begin
            alu_op= `FUNCT3_SRL;

    //this part is not fully implemented
        end else if (funct7==`FUNCT7_SUB && (opcode==`ARITHMETIC || opcode==`ARITHMETIC_IMM)) begin
            alu_op= `FUNCT7_SUB;
        end esle begin
            alu_op= `FUNCT7_OTHERS;
        end


    end

endmodule
