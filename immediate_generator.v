`include "opcodes.v"

module immediate_generator(instruction, imm_gen_out);
    input [31:0] instruction;   //followed the size written in the lecture note
    output reg [31:0] imm_gen_out;

    wire [6:0] opcode;
    assign opcode = instruction[6:0];

    wire [11:0] immediate; //I-type immediate
    assign immediate=instruction[31:20];

    wire [11:0] imm; //S-type immediate
    assign imm= {instruction[31:25], instruction[11:7]};
   


    always @(*) begin


        if(opcode == `ARITHMETIC_IMM) begin// I-type instruction opcodes
            imm_gen_out = { {20{instruction[31]}},immediate};  //sign-extend(immediate)
        
        end else if(opcode == `LOAD) begin  // I-type instruction opcodes
            imm_gen_out = { {20{instruction[31]}},immediate};  //sign-extend(immediate)

        end else if(opcode == `JALR) begin  // I-type instruction opcodes
            imm_gen_out = { {20{instruction[31]}},immediate};  //sign-extend(immediate)

        end else if(opcode == `STORE) begin  // S-type instruction opcodes
            imm_gen_out = { {20{instruction[31]}},imm};  //sign-extend(imm)

        end else if(opcode == `BRANCH) begin  // B-type instruction opcodes
            imm_gen_out = { {19{instruction[31]}}, instruction[31], instruction[7], instruction[30:25], instruction[11:8], 1'b0};  //sign-extend(31, 7, 30-25, 11-8) SBtype

        end else if(opcode == `JAL) begin  // J-type instruction opcodes
            imm_gen_out = { {11{instruction[31]}}, instruction[31], instruction[19:12], instruction[20], instruction[30:21], 1'b0};  //sign-extend(31, 19-12, 20, 30-21)  UJ-type
        
        
        end else if(opcode == `LUI) begin  // LUI
            imm_gen_out = { instruction[31:12], 12'b0};  //sign-extend(top 20 bits, lower 12 bits filled with 0s) 

        end else if(opcode == `AUIPC) begin  // AUIPC
            imm_gen_out = { instruction[31:12], 12'b0};  //sign-extend(31, 19-12, 20, 30-21)  UJ-type
        


        end else begin //prevents letch error    
            imm_gen_out = instruction;
        end    

    end

endmodule 
