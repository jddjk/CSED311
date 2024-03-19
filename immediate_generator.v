`include "opcodes.v"

module immediate_generator(instruction, imm_gen_out);
    input [31:0] instruction;   //followed the size written in the lecture note
    output reg [31:0] imm_gen_out;

    wire [6:0] opcode;
    assign opcode = instruction[6:0];

    if(opcode == `ARITHMETIC) begin
    d;
    
    end else if() 


endmodule 
