module mux3to1 (
    input [31:0] in0,
    input [31:0] in1,
    input [31:0] in2, 
    input [1:0] sel, 
    output reg [31:0] out);
    


    always @(*) begin
            //if (in2!=0) $display("sel: %d", sel); //! DEBUGGING
            //if (in2!=0) $display("in2: %d", in2); //! DEBUGGING
        case(sel)
            2'b00: out = in0;
            2'b01: out = in1;
            2'b10: out = in2;
            default: out = 32'b0;
        endcase
            end


endmodule 
