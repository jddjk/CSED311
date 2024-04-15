//여기서 '로 정의한 신호 opcode& alu control unit이랑 같은지 확인
//구현 확인
`include "alu_func.v"

module ALU #(parameter data_width = 32) (
	input [data_width - 1 : 0] alu_in_1, 
	input [data_width - 1 : 0] alu_in_2, 
	input [3 : 0] alu_op,
       	output reg [data_width - 1: 0] alu_result,
       	output reg alu_bcond);
// Do not use delay in your implementation.

// You can declare any variables as needed.
/*
	YOUR VARIABLE DECLARATION...
*/

initial begin
	alu_result = 0;
	alu_bcond = 1'b0;
end

// TODO: You should implement the functionality of ALU!
// (HINT: Use 'always @(...) begin ... end')

/*
	YOUR ALU FUNCTIONALITY IMPLEMENTATION...
*/
	always @(*) begin
	

		//if (alu_in_2!=0)$display("alu_in_2: %d", alu_in_2); //! DEBUGGING
		//if (alu_in_2!=0)$display("alu_op: %d", alu_op); //! DEBUGGING
		
		case(alu_op)

			`FUNC_JALR: alu_result = (alu_in_1 + alu_in_2)&32'hfffffffe;
			`FUNC_ADD: begin 
			
			alu_result = alu_in_1 + alu_in_2;
			//if (alu_in_1!=0)$display("alu_in_1: %d", alu_in_1); //! DEBUGGING

			
			end
			`FUNC_XOR: alu_result = alu_in_1 ^ alu_in_2;
			`FUNC_OR: begin alu_result = alu_in_1 | alu_in_2;
			
			//if (alu_result!=0)$display("alu_result: %d", alu_result); //! DEBUGGING
			//			if (alu_result!=0)$display("alu_in_1: %d", alu_in_1); //! DEBUGGING
			//						if (alu_result!=0)$display("alu_in_2: %d", alu_in_2); //! DEBUGGING
			//						if (alu_result!=0)$display("alu_in_1 | alu_in_2: %d", alu_in_1 | alu_in_2); //! DEBUGGING
			end

			`FUNC_AND: alu_result = alu_in_1 & alu_in_2;
			`FUNC_SLL: alu_result = alu_in_1 << alu_in_2[4:0];
			`FUNC_SRL: alu_result = alu_in_1 >> alu_in_2[4:0];
			`FUNC_SUB: begin alu_result = alu_in_1 - alu_in_2;


			end

			`FUNC_BEQ: begin
				alu_result = alu_in_1 + alu_in_2;
			end

			`FUNC_BNE: begin
				alu_result = alu_in_1 + alu_in_2;
			end

			`FUNC_BLT: begin
				alu_result = alu_in_1 + alu_in_2;
			end

			`FUNC_BGE: begin
				alu_result = alu_in_1 + alu_in_2;
			end
			default: begin
				alu_result = 0;
				alu_bcond = 1'b0;
			end
		endcase

		case(alu_op)
			`FUNC_BEQ: alu_bcond = (alu_in_1 == alu_in_2);
			`FUNC_BNE: begin alu_bcond = (alu_in_1 != alu_in_2);
			//$display("branch left operand: %d", alu_in_1);
			//$display("branch right operand: %d", alu_in_2);
				//$display("alu_bcond: %d", alu_bcond);
			end

			`FUNC_BLT: alu_bcond = ($signed(alu_in_1) < $signed(alu_in_2));
			`FUNC_BGE: alu_bcond = ($signed(alu_in_1) >= $signed(alu_in_2));
			//	$display("BLT rs1: %d | rs2: %d", in_1, in_2);
			default: alu_bcond = 1'b0;
		endcase
	end

endmodule

