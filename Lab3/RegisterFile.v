module RegisterFile(input	reset,
                    input clk,
                    input [4:0] rs1,
                    input [4:0] rs2,
                    input [4:0] rd,
                    input [31:0] rd_din,
                    input write_enable,
                    output [31:0] rs1_dout,
                    output [31:0] rs2_dout,
                    output [31:0] print_reg[0:31]);
  integer i;
  reg [31:0] rf[0:31];
  assign print_reg = rf;
  // Asynchronously read register file
  assign rs1_dout = rf[rs1];
  assign rs2_dout = rf[rs2];

  always @(posedge clk) begin
    // Initialize register file (do not touch)
    if (reset) begin
      for (i = 0; i < 32; i = i + 1)
        rf[i] <= 32'b0;
      rf[2] <= 32'h2ffc; // stack pointer
    end

    // Synchronously write data to the register
    else begin
      if (write_enable && rd != 0)
        rf[rd] <= rd_din;
    end
  end
endmodule
