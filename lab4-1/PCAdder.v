module PCAdder(input [31:0] current_pc,
                output reg [31:0] next_pc);
    
    always @(*) begin
        next_pc = current_pc + 4;
    end

endmodule
