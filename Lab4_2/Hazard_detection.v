`include "opcodes.v"

module Hazard_detection (
    input [31:0] current_inst,

    input [4:0] ID_EX_rd,
    input ID_EX_reg_write,
    input ID_EX_mem_read,
    input ID_EX_mem_write,

    input [4:0] EX_MEM_rd,
    input EX_MEM_reg_write,


    output reg isStall
    );

    wire [6:0] opcode;   
    wire [4:0] rs1;   
    wire [4:0] rs2;         
    assign opcode=current_inst[6:0];
    assign rs1=current_inst[19:15];
    assign rs2=current_inst[24:20];

    always @(*) begin
        isStall = 0; 
        
        if (opcode == `ECALL) begin
            if (ID_EX_rd == 17 && ID_EX_reg_write) begin
                isStall = 1; //ecall이라서 isStall at ID_EX
                //$display("스탈1"); //! DEBUGGING
                
           // end else if (EX_MEM_rd == 17 && EX_MEM_reg_write) begin
             //   isStall = 1; //ecall이라서 isStall at EX_MEM
               // $display("스탈2"); //! DEBUGGING
            end else begin
                isStall = 0;
            end
        end


        
        // Hazard detection for ARITHMETIC
        if (current_inst[6:0] == `ARITHMETIC) begin
            if ((current_inst[19:15] == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) ||
                (current_inst[24:20] == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read)) begin
                isStall = 1;
            end
        end

        // Hazard detection for ARITHMETIC_IMM
        else if (current_inst[6:0] == `ARITHMETIC_IMM) begin
            if (current_inst[19:15] == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) begin
                isStall = 1;
            end
            // ARITHMETIC_IMM does not use rs2 for data that might need stalling
        end

        // Hazard detection for LOAD
        else if (current_inst[6:0] == `LOAD) begin
            if ((current_inst[19:15] == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) ||
                (current_inst[24:20] == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read)) begin
                isStall = 1;
            end
        end

        // Hazard detection for STORE
        else if (current_inst[6:0] == `STORE) begin
            if (current_inst[19:15] == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) begin
                isStall = 1;
            end
            if (current_inst[24:20] == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) begin
                isStall = 1;
            end
        end

        // Hazard detection for JAL
        else if (current_inst[6:0] == `JAL) begin
            if ((current_inst[19:15] == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) ||
                (current_inst[24:20] == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read)) begin
                isStall = 1;
            end
        end

        // Hazard detection for JALR
        else if (current_inst[6:0] == `JALR) begin
            if ((current_inst[19:15] == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) ||
                (current_inst[24:20] == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read)) begin
                isStall = 1;
            end
        end

        // Hazard detection for BRANCH
        else if (current_inst[6:0] == `BRANCH) begin
            if ((current_inst[19:15] == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) ||
                (current_inst[24:20] == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read)) begin
                isStall = 1;
            end
        end 
    end
endmodule

