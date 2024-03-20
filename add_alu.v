module add_alu #(parameter data_width = 32)(
    input [data_width - 1 : 0] alu_in1, 
	input [data_width - 1 : 0] alu_in2, 
    output [data_width - 1 : 0] alu_result
);

    assign alu_result = alu_in1 + alu_in2;


endmodule 
