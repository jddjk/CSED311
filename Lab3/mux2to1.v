module mux2to1(
    input [31:0] in1,
    input [31:0] in0,
    input sel,
    output reg [31:0] out
);
    always @(*) begin
        if (sel) begin
            out = in0;
        end else begin
            out = in1;
        end
    end
endmodule

