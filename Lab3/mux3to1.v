module mux3to1 (
    input [31:0] in0,
    input [31:0] in1,
    input [31:0] in2, 
    input [1:0] sel, 
    output reg [31:0] out);
    always @(*)
        case(sel)
            2'b00: out = in0;
            2'b01: out = in1;
            2'b10: out = in2;
            default: out = 32'b0;
        endcase
endmodule 
