module PC(
    input reset,
    input clk,
    input pc_write,
    input [31:0] next_pc,
    output reg [31:0] current_pc
);

//sequential logic
//every one clock, pc is updated
always @(posedge clk) begin
    if(reset) begin

        current_pc <= 32'b0;   
        //$display("----------------"); //! DEBUGGING
         //$display("reset: %d", current_pc); //! DEBUGGING 
    end else if(pc_write) begin

        current_pc <= next_pc;   
        $display("----------------"); //! DEBUGGING
        $display("instruction: %d", current_pc/4+3); //! DEBUGGING
        
        
        
        /*  
        if(current_pc==0 )$display("----------------"); //! DEBUGGING
        if(current_pc==0 ) $display("instruction: %d", current_pc); //! DEBUGGING

        if(current_pc/4+1==1 )$display("----------------"); //! DEBUGGING
        if(current_pc/4+1==1 ) $display("instruction: %d", current_pc/4+1); //! DEBUGGING
        
        if(current_pc/4+1==2 )$display("----------------"); //! DEBUGGING
        if(current_pc/4+1==2 ) $display("instruction: %d", current_pc/4+1); //! DEBUGGING

        if(current_pc/4+1==3 )$display("----------------"); //! DEBUGGING
        if(current_pc/4+1==3 ) $display("instruction: %d", current_pc/4+1); //! DEBUGGING
        if(current_pc/4+1==4 )$display("----------------"); //! DEBUGGING*/
       

        
    end
end





endmodule
