module mux4to1(
    input [31:0] in0,
    input [31:0] in1,
    input [31:0] in2,
    input [31:0] in3,
    input [1:0] sel,
    output reg [31:0] out
);
    always @(*) begin
        if (sel == 2'b00) begin
            out = in0;
        end else if (sel == 2'b01) begin
            out = in1;
        end else if (sel == 2'b10) begin
            out = in2;
        end else begin
            out = in3;
        end
    end
endmodule
