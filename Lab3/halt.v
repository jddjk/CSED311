module halt(input is_ecall,
            input [31:0] gpr_17,
            output reg is_halted);
    
    always @(*) begin
        if (is_ecall && gpr_17 == 10) begin
            is_halted = 1;
        end else begin
            is_halted = 0;
        end
    end

endmodule
