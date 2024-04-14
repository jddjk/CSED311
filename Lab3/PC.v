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
    end else if(pc_write) begin
        $display("current_pc: %d", current_pc); //! DEBUGGING
        current_pc <= next_pc;
        
    end
end


endmodule
