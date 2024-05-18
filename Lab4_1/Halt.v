module Halt(
    input reset,
    input clk,
    input MEM_WB_is_halted,
    output reg is_halted
);
  always @(*) begin // always@(posedge clk), always@(posedge clk or negedge clk)로 할 경우 47 cycle
    if (reset) begin
      is_halted = 1'b0;

    end else begin
      is_halted = MEM_WB_is_halted;

    end
  end
endmodule
