module mux (input [31:0] in2, 
            input [31:0] in1, 
            input sel,
            output [31:0] out);

    case (sel)
        1'b0: out = in1;
        1'b1: out = in2;

endmodule 
