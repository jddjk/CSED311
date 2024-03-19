module add_alu #(parameter data_width = 32)(
    input [data_width - 1 : 0] A, 
	input [data_width - 1 : 0] B, 
    output reg [data_width - 1 : 0] C
);

initial begin
    C = 0;
end
 
always @(A, B) begin
    C = A + B;
end

endmodule 
