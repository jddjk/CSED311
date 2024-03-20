`include "alu_func.v"

module alu #(parameter data_width = 32) (
	input [data_width - 1 : 0] alu_in_1, 
	input [data_width - 1 : 0] alu_in_2, 
	input [3:0] alu_op,
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

`define ALU_ADD  4'b0000
`define ALU_SUB  4'b0001
`define ALU_SLL  4'b0010
`define ALU_XOR  4'b0011
`define ALU_OR   4'b0100
`define ALU_AND  4'b0101
`define ALU_SRL  4'b0110

// Branch conditions
`define ALU_BEQ  4'b0111
`define ALU_BNE  4'b1000
`define ALU_BLT  4'b1001
`define ALU_BGE  4'b1010

// TODO: You should implement the functionality of ALU!
// (HINT: Use 'always @(...) begin ... end')
/*
	YOUR ALU FUNCTIONALITY IMPLEMENTATION...
*/

	always @(*) begin
		alu_result = 0;
		bcond = 1'b0;
		case(alu_op)
			`ALU_ADD: alu_result = alu_in_1 + alu_in_2;
			`ALU_SUB: alu_result = alu_in_1 - alu_in_2;
			`ALU_XOR: alu_result = alu_in_1 ^ alu_in_2;
			`ALU_OR: alu_result = alu_in_1 | alu_in_2;
			`ALU_AND: alu_result = alu_in_1 & alu_in_2;
			`ALU_SLL: alu_result = alu_in_1 << alu_in_2[4:0];
			`ALU_SRL: alu_result = alu_in_1 >> alu_in_2[4:0];
			// Branch conditions set bcond
			`ALU_BEQ: bcond = (alu_in_1 == alu_in_2);
			`ALU_BNE: bcond = (alu_in_1 != alu_in_2);
			`ALU_BLT: bcond = $signed(alu_in_1) < $signed(alu_in_2);
			`ALU_BGE: bcond = $signed(alu_in_1) >= $signed(alu_in_2);
			default: begin
				alu_result = 0;
				bcond = 1'b0;
			end
		endcase
	end

endmodule

