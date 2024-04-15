	module branchPrediction(input [3:0] _alu_op,
    					input [31:0] in_1,
						input [31:0] in_2,
						output reg bcond);

	always @(*) begin
		if (_alu_op == `FUNC_BEQ) begin
			if (in_1 == in_2) bcond = 1;
			else bcond = 0;

			// $display("BEQ bcond: %d", bcond); //! DEBUGGING

		end else if (_alu_op == `FUNC_BNE) begin
			if (in_1 != in_2) bcond = 1;
			else bcond = 0;

		end else if (_alu_op == `FUNC_BLT) begin
			if ($signed(in_1) < $signed(in_2)) bcond = 1;
			else bcond = 0;

		end else if (_alu_op == `FUNC_BGE) begin
			if ($signed(in_1) >= $signed(in_2)) bcond = 1;
			else bcond = 0;

		end else begin
			bcond = 0;
		end
	end


endmodule
