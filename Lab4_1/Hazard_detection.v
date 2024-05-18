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
    
    // load만 확인, ECALL은 모르겠음. ForwardCheck에서 나머지 다 옮기고
    // cpu 단에서 inst 넘겨주는 거 구현 - 중간 register 추가
    // stall 로직 구현해서 load 케이스만 수정
    // cpu 단에서 mux로 datapath 추가도 구현

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
            // Typically, STORE checks for hazards that could delay storing the address or value
            if (current_inst[19:15] == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) begin
                isStall = 1;
            end
            // STORE uses rs2 as the value to store, so we check if rs2 is being fetched from a prior instruction
            if (current_inst[24:20] == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) begin
                isStall = 1;
            end
        end
    end

endmodule

