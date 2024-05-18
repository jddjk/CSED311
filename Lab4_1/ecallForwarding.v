module ecallForwarding(
    input isecallForward,
    input [31:0] rs1_dout,
    output reg [31:0] rs1_dout_ecallout
);


always @(*) 
        if (isecallForward == 1) rs1_dout_ecallout=10;
        else rs1_dout_ecallout=rs1_dout;



endmodule
