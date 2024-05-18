`include "alu_func.v"

module ALU(input [31:0] alu_in_1,
           input [31:0] alu_in_2,
           input [3:0] alu_op,
           output reg [31:0] alu_result,        
           output reg alu_bcond);

	always @(alu_in_1, alu_in_2, alu_op) begin
        alu_result <= 0;
        alu_bcond <= 1'b0;
		case(alu_op)
			`FUNC_JALR: alu_result <= (alu_in_1 + alu_in_2);//&32'hfffffffe;
			`FUNC_JAL: alu_result <= alu_in_1 + alu_in_2;
			`FUNC_ADD: begin
                alu_result <= alu_in_1 + alu_in_2;
                //$display("Add %d=%d+%d",alu_result,alu_in_1 ,alu_in_2); //! DEBUGGING
            end

			`FUNC_XOR: alu_result <= alu_in_1 ^ alu_in_2;
			`FUNC_OR: alu_result <= alu_in_1 | alu_in_2;
			`FUNC_AND: alu_result <= alu_in_1 & alu_in_2;
			`FUNC_SLL: alu_result <= alu_in_1 << alu_in_2;
			`FUNC_SRL: alu_result <= alu_in_1 >> alu_in_2;
			`FUNC_SUB: alu_result <= alu_in_1 - alu_in_2;

			`FUNC_BEQ: alu_bcond <= (alu_in_1 == alu_in_2);
			`FUNC_BNE: alu_bcond <= (alu_in_1 != alu_in_2);
			`FUNC_BLT: alu_bcond <= (alu_in_1 < alu_in_2);
			`FUNC_BGE: alu_bcond <= (alu_in_1 >= alu_in_2);
				//$display("BLT rs1: %d | rs2: %d", in_1, in_2);
			default: begin
				alu_result <= 0;
				alu_bcond <= 1'b0;
			end
		endcase
	end
endmodule
