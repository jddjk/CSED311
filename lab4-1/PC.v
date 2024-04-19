module PC(input reset,
          input clk,
          input isStall,
          input [31:0] next_pc,
          output reg [31:0] current_pc);

    reg [31:0] current_pc_reg;
    
    always @(posedge clk) begin
        
        if (reset) begin
            current_pc <= 32'b0;
            current_pc_reg <= 32'b0;
        end else if (isStall) begin
            //$display("current_line: %d ", current_pc); //! DEBUGGING
            current_pc <= current_pc_reg; 
        end else begin
            //$display("---------------------------------"); //! DEBUGGING
            
            
            current_pc <= next_pc;
            current_pc_reg <= next_pc;
        end
    end
endmodule

