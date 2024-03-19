module add_alu #(parameter data_width = 32)(
    input [data_width - 1 : 0] alu_in1, 
	input [data_width - 1 : 0] alu_in2, 
    output reg [data_width - 1 : 0] alu_result
);

initial begin
    alu_result = 0;
end
 
always @(A, B) begin
    alu_result = alu_in1 + alu_in2;
end

endmodule 
