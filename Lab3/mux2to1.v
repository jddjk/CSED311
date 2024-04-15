module mux2to1 (
    input [31:0] in0, 
    input [31:0] in1, 
    input sel, 
    output reg [31:0]out);
    
    
        always @(*) begin
            //if(in1==1) $display("okay"); //! DEBUGGING
        out = (sel == 1'b0) ? in0 : in1;
       // if(in1==1) $display("out: %d", out); //! DEBUGGING
        //if(in1==1) $display("sel: %d", sel); //! DEBUGGING
    end

endmodule 
