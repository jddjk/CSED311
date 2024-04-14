module pcMux(input [31:0] alu_out,
              input [31:0] alu_out_reg,
              
              input bcond,
              input pc_source,
              
              output reg [31:0] next_pc);

    always @(*) begin
        if (!pc_source && !bcond) begin
            // $display("BRANCH NOT TAKEN"); //! DEBUGGING
            next_pc = alu_out_reg;
        end else begin
            // $display("BRACNH TAKEN"); //! DEBUGGING
            next_pc = alu_out;
        end
        // $display("PC MUX next_pc: %d", next_pc); //! DEBUGGING
    end

endmodule
