module mux2to1 (
    input [31:0] in0, 
    input [31:0] in1, 
    input sel, 
    output reg [31:0]out);
    
    assign out = (sel == 1'b0) ? in0 : in1;

endmodule 
