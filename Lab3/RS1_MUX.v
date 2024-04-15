module RS1_MUX(input [4:0] rs1,
               input is_ecall,
               output reg [4:0] rs1_in);
    
    always @(*) begin
        if (is_ecall) begin
            rs1_in = 17;
            //        rs1_in=rs1;     
        end else begin
            rs1_in=rs1;
        end
        
    end

endmodule
