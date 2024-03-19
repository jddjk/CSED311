`include "opcodes.v"

module immediate_generator(instruction, imm_gen_out);
intput [31:0] instruction;
output reg [31:0] imm_gen_out;
endmodule 
