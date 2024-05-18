`include "opcodes.v"

module PC(input	reset,
          input clk,
          input is_flush,
          input is_stall,
          input [31:0] next_pc,
          output reg [31:0] current_pc);
    
    always @(posedge clk) begin
        if (reset) begin
            current_pc <= 0;
        end
        else if (is_stall) begin
            if (is_flush) begin // flush가 먼저 일어나면
                current_pc <= 0;
            end
            else begin
                current_pc <= current_pc;
            end
        end
        else begin
            current_pc <= next_pc;
        end
    end
endmodule
