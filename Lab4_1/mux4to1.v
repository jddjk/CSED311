module mux4to1 (
    input [31:0] in0,
    input [31:0] in1,
    input [31:0] in2,
    input [31:0] in3,
    input [1:0] sel_forward,
    input sel_alu_src,
    output reg [31:0] out1,
    output reg [31:0] out2
    );
    always @(*) begin
        if (sel_alu_src == 1'b0) begin
            if (sel_forward == 2'b00) begin
                out1 = in0;
                out2 = in0;
            end
            else if (sel_forward == 2'b01) begin
                out1 = in1;
                out2 = in1;
            end
            else if (sel_forward == 2'b10) begin
                out1 = in2;
                out2 = in2;
            end
            else begin
                out1 = in0;
                out2 = in0;
            end
        end
        else begin
            out1 = in3;
            if (sel_forward == 2'b00) begin
                out2 = in0;
            end
            else if (sel_forward == 2'b01) begin
                out2 = in1;
            end
            else if (sel_forward == 2'b10) begin
                out2 = in2;
            end
            else begin
                out2 = in0;
            end
        end
    end
endmodule
