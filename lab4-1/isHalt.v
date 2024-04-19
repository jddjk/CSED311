module isHalt(input is_ecall,
              input [31:0] rs1_dout,
              input isStall,
              output reg ID_is_halted);

    always @(*) begin
        if (isStall) begin
            ID_is_halted = 0;
        end else if (is_ecall && rs1_dout == 10) begin
            ID_is_halted = 1;
        end else begin
            ID_is_halted = 0;
        end
    end
endmodule
