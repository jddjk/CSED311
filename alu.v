`include "alu_func.v"

module alu #(parameter data_width = 32) (
	input [data_width - 1 : 0] A, 
	input [data_width - 1 : 0] B, 
	input [3 : 0] FuncCode,
       	output reg [data_width - 1: 0] C,
       	output reg OverflowFlag);
// Do not use delay in your implementation.

// You can declare any variables as needed.
/*
	YOUR VARIABLE DECLARATION...
*/

initial begin
	C = 0;
	OverflowFlag = 0;
end   	

// TODO: You should implement the functionality of ALU!
// (HINT: Use 'always @(...) begin ... end')
/*
	YOUR ALU FUNCTIONALITY IMPLEMENTATION...
*/
	always @(A, B, FuncCode) begin
		OverflowFlag = 1'b0; // Initializing OverflowFlag
		case(FuncCode)
			`FUNC_ADD: begin
				C = A + B;

				if (((A[15] == 1'b0) && (B[15] == 1'b0) && (C[15] != 1'b0)) || ((A[15] != 1'b0) && (B[15] != 1'b0) && (C[15] == 1'b0))) begin
					OverflowFlag = 1'b1;
				end
			end
			`FUNC_SUB: begin
				C = A - B;
				if (((A[15] != 1'b0) && (B[15] == 1'b0) && (C[15] == 1'b0)) || ((A[15] == 1'b0) && (B[15] != 1'b0) && (C[15] != 1'b0))) begin
					OverflowFlag = 1'b1;
				end
			end
			`FUNC_ID: begin
				C = A;
			end
			`FUNC_NOT: begin
				C = ~A;
			end
			`FUNC_AND: begin
				C = A & B;
			end
			`FUNC_OR: begin
				C = A | B;
			end
			`FUNC_NAND: begin
				C = ~(A & B);
			end
			`FUNC_NOR: begin
				C = ~(A | B);
			end
			`FUNC_XOR: begin
				C = A ^ B;
			end
			`FUNC_XNOR: begin
				C = ~(A ^ B);
			end
			`FUNC_LLS: begin
				C[15:1] = A[14:0];
				C[0] = 1'b0;
			end
			`FUNC_LRS: begin
				C[14:0] = A[15:1];
				C[15] = 1'b0;
			end
			`FUNC_ALS: begin
				C[15:1] = A[14:0];
				C[0] = 1'b0;
			end
			`FUNC_ARS: begin
				C[14:0] = A[15:1];
				C[15] = A[15];
			end
			`FUNC_TCP: begin
				C = -A;
			end
			`FUNC_ZERO: begin
				C = 0;
			end
			default: begin
			end

		endcase

	end

endmodule

