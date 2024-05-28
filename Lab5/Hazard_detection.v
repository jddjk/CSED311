`include "opcodes.v"

module Hazard_detection (
    input [31:0] current_inst,

    input [4:0] ID_EX_rd,
    input ID_EX_reg_write,
    input ID_EX_mem_read,
    input ID_EX_mem_write,

    input [4:0] EX_MEM_rd,
    input EX_MEM_reg_write,
    input is_input_valid,
    input is_ready,
    input is_hit,
    input is_output_valid,

    output reg isCacheStall,
    output reg isStall
);

    wire [6:0] opcode;   
    wire [4:0] rs1;   
    wire [4:0] rs2;         
    assign opcode = current_inst[6:0];
    assign rs1 = current_inst[19:15];
    assign rs2 = current_inst[24:20];

    always @(*) begin
        isStall = 0; 
        isCacheStall = 0;
        if (opcode == `ECALL) begin
            if (ID_EX_rd == 17 && ID_EX_reg_write) begin
                isStall = 1;
            end else begin
                isStall = 0;
            end
        end

        if (current_inst[6:0] == `ARITHMETIC) begin
            if ((rs1 == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) ||
                (rs2 == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read)) begin
                isStall = 1;
            end
            if (is_input_valid) begin
                if (!is_ready) begin
                    isCacheStall = 1;
                    isStall = 1;
                end else if (!is_hit) begin
                    isCacheStall = 1;
                    isStall = 1;
                end else if (!is_output_valid) begin
                    isCacheStall = 1;
                    isStall = 1;
                end
            end
        end

        else if (current_inst[6:0] == `ARITHMETIC_IMM) begin
            if (rs1 == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) begin
                isStall = 1;
            end
            if (is_input_valid) begin
                if (!is_ready) begin
                    isCacheStall = 1;
                    isStall = 1;
                end else if (!is_hit) begin
                    isCacheStall = 1;
                    isStall = 1;
                end else if (!is_output_valid) begin
                    isCacheStall = 1;
                    isStall = 1;
                end
            end
        end

        else if (current_inst[6:0] == `LOAD) begin
            if ((rs1 == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) ||
                (rs2 == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read)) begin
                isStall = 1;
            end
            if (is_input_valid) begin
                if (!is_ready) begin
                    isCacheStall = 1;
                    isStall = 1;
                end else if (!is_hit) begin
                    isCacheStall = 1;
                    isStall = 1;
                end else if (!is_output_valid) begin
                    isCacheStall = 1;
                    isStall = 1;
                end
            end
        end

        else if (current_inst[6:0] == `STORE) begin
            if (rs1 == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) begin
                isStall = 1;
            end
            if (rs2 == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) begin
                isStall = 1;
            end
            if (is_input_valid) begin
                if (!is_ready) begin
                    isCacheStall = 1;
                    isStall = 1;
                end else if (!is_hit) begin
                    isCacheStall = 1;
                    isStall = 1;
                end else if (!is_output_valid) begin
                    isCacheStall = 1;
                    isStall = 1;
                end
            end
        end

        else if (current_inst[6:0] == `JAL) begin
            if ((rs1 == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) ||
                (rs2 == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read)) begin
                isStall = 1;
            end
            if (is_input_valid) begin
                if (!is_ready) begin
                    isCacheStall = 1;
                    isStall = 1;
                end else if (!is_hit) begin
                    isCacheStall = 1;
                    isStall = 1;
                end else if (!is_output_valid) begin
                    isCacheStall = 1;
                    isStall = 1;
                end
            end
        end

        else if (current_inst[6:0] == `JALR) begin
            if ((rs1 == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) ||
                (rs2 == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read)) begin
                isStall = 1;
            end
            if (is_input_valid) begin
                if (!is_ready) begin
                    isCacheStall = 1;
                    isStall = 1;
                end else if (!is_hit) begin
                    isCacheStall = 1;
                    isStall = 1;
                end else if (!is_output_valid) begin
                    isCacheStall = 1;
                    isStall = 1;
                end
            end
        end

        else if (current_inst[6:0] == `BRANCH) begin
            if ((rs1 == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) ||
                (rs2 == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read)) begin
                isStall = 1;
            end
            if (is_input_valid) begin
                if (!is_ready) begin
                    isCacheStall = 1;
                    isStall = 1;
                end else if (!is_hit) begin
                    isCacheStall = 1;
                    isStall = 1;
                end else if (!is_output_valid) begin
                    isCacheStall = 1;
                    isStall = 1;
                end
            end
        end
    end

endmodule
