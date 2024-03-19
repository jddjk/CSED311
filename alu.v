`include "alu_func.v"

module alu #(parameter data_width = 32) (
	input [data_width - 1 : 0] alu_in_1, 
	input [data_width - 1 : 0] alu_in_2, 
	input [data_width - 1 : 0] sign_extended_imm,
	input [2 : 0] alu_op,
       	output reg [data_width - 1: 0] alu_result,
       	output reg bcond);
// Do not use delay in your implementation.

// You can declare any variables as needed.
/*
	YOUR VARIABLE DECLARATION...
*/

initial begin
	alu_result = 0;
	bcond = 1'b0;
end   	

// TODO: You should implement the functionality of ALU!
// (HINT: Use 'always @(...) begin ... end')
/*
	YOUR ALU FUNCTIONALITY IMPLEMENTATION...
*/
	always @(alu_in_1, alu_in_2, alu_op) begin
		case(alu_op)
			`FUNCT3_ADD: begin
				assign alu_result = alu_in_1 + alu_in_2;
			end
			`FUNCT3_SUB: begin
				assign alu_result = alu_in_1 - alu_in_2;
			end
			`FUNCT3_SLL: begin
				assign alu_result = alu_in_1 << alu_in_2;
			end
			`FUNCT3_XOR: begin
				assign alu_result = alu_in_1 ^ alu_in_2;
			end
			`FUNCT3_OR: begin
				assign alu_result = alu_in_1 | alu_in_2;
			end
			`FUNCT3_AND: begin
				assign alu_result = alu_in_1 & alu_in_2;
			end
			`FUNCT3_SRL: begin
				assign alu_result = alu_in_1 >> alu_in_2;
			end
			`FUNCT3_LW: begin
				assign alu_result = alu_in_1 + sign_extended_imm; // rs1 + imm(sign-extended)
			end
			`FUNCT3_SW: begin
				assign alu_result = alu_in_1 + sign_extended_imm; // rs1 + imm(sign-extended)
			end
			`FUNCT3_BEQ: begin
				assign bcond = 1'b1;
			end
			`FUNCT3_BNE: begin
				assign bcond = 1'b1;
			end
			`FUNCT3_BLT: begin
				assign bcond = 1'b1;
			end
			`FUNCT3_BGE: begin
				assign bcond = 1'b1;
			end
			default: begin
			end
		endcase
	end

endmodule

