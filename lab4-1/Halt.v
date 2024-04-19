module Halt(
    input reset,
    input clk,
    input MEM_WB_is_halted,
    output reg is_halted
);
  always @(posedge clk) begin
    if (reset) begin
      is_halted <= 1'b0;

    end else begin
      is_halted <= MEM_WB_is_halted;

    end
  end
endmodule
