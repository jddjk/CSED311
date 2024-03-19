module add_alu_four (
    input [data_width - 1 : 0] alu_in1,
    output reg [data_width - 1 : 0] alu_result
);

initial begin
    alu_result = 0;
end
 
always @(A, B) begin
    alu_result = alu_in1 + 3b'100;
end

endmodule