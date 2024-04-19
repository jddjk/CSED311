module halt_rs (
    input [4:0] rs1,
    input is_ecall,
    output reg [4:0] rs1_halt_considered
    );
    
    always @(*) begin
        if (is_ecall) begin
            rs1_halt_considered = 17;
        end else begin
            rs1_halt_considered = rs1;
        end
    end

endmodule
