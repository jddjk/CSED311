`include "alu_func.v"

module alu #(parameter data_width = 32) (
	input [data_width - 1 : 0] alu_in_1, 
	input [data_width - 1 : 0] alu_in_2, 
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

`define ALU_ADD  3'b000
`define ALU_SUB  3'b001
`define ALU_SLL  3'b010
`define ALU_XOR  3'b011
`define ALU_OR   3'b100
`define ALU_AND  3'b101
`define ALU_SRL  3'b110
`define ALU_SRA  3'b111

// TODO: You should implement the functionality of ALU!
// (HINT: Use 'always @(...) begin ... end')
/*
	YOUR ALU FUNCTIONALITY IMPLEMENTATION...
*/
	always @(alu_in_1, alu_in_2, alu_op) begin
		case(alu_op)
			`ALU_ADD: alu_result <= alu_in_1 + alu_in_2;
			`ALU_SUB: alu_result <= alu_in_1 - alu_in_2;
			`ALU_SLL: alu_result <= alu_in_1 << alu_in_2;
			`ALU_XOR: alu_result <= alu_in_1 ^ alu_in_2;
			`ALU_OR: alu_result <= alu_in_1 | alu_in_2;
			`ALU_AND: alu_result <= alu_in_1 & alu_in_2;
			`ALU_SRL: alu_result <= alu_in_1 >> alu_in_2;
			`ALU_SRA: alu_result <= $signed(alu_in_1) >>> alu_in_2;
			default: begin
				alu_result <= 0;
				bcond <= 1'b0;
			end
		endcase

		case(alu_op)
			`ALU_ADD: bcond <= (alu_in_1 == alu_in_2);
			`ALU_SUB: bcond <= (alu_in_1 != alu_in_2);
			`ALU_SLL: bcond <= ($signed(alu_in_1) < $signed(alu_in_2));
			`ALU_XOR: bcond <= ($signed(alu_in_1) >= $signed(alu_in_2));
			default: bcond <= 1'b0;
		endcase
	end

endmodule

