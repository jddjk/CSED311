module add_alu_four #(parameter data_width = 32)(
    input [data_width - 1 : 0] alu_in1,
    output [data_width - 1 : 0] alu_result
);
 
    assign alu_result = alu_in1 + 32'b100;


endmodule 
