`include "opcodes.v"

module ForwardCheck(
    input [31:0] instruction_id_ex,
    input [31:0] instruction_ex_mem,
    input [31:0] instruction_mem_wb,
    input reg_write_ex_mem,
    input reg_write_mem_wb,
    output reg [1:0] forward_check_rs1,
    output reg [1:0] forward_check_rs2
);
    wire [6:0]opcode_id_ex = instruction_id_ex[6:0];
    wire [4:0] rs1_id_ex = instruction_id_ex[19:15];
    wire [4:0] rs2_id_ex = instruction_id_ex[24:20];
    wire [4:0] rd_ex_mem = instruction_ex_mem[11:7];
    wire [4:0] rd_mem_wb = instruction_mem_wb[11:7];

    always @(*) begin
        forward_check_rs1 = 2'b00;
        forward_check_rs2 = 2'b00;
        if (opcode_id_ex == `ARITHMETIC) begin
            if (rs1_id_ex == rd_ex_mem && rd_ex_mem != 0 && reg_write_ex_mem) begin
                forward_check_rs1 = 2'b01;
            end else if (rs1_id_ex == rd_mem_wb && rd_mem_wb != 0 && reg_write_mem_wb) begin
                forward_check_rs1 = 2'b10;
            end else begin
                forward_check_rs1 = 2'b00;
            end
            if (rs2_id_ex == rd_ex_mem && rd_ex_mem != 0 && reg_write_ex_mem) begin
                forward_check_rs2 = 2'b01;
            end else if (rs2_id_ex == rd_mem_wb && rd_mem_wb != 0 && reg_write_mem_wb) begin
                forward_check_rs2 = 2'b10;
            end else begin
                forward_check_rs2 = 2'b00;
            end

        end
        if (opcode_id_ex == `ARITHMETIC_IMM) begin
            if (rs1_id_ex == rd_ex_mem && rd_ex_mem != 0 && reg_write_ex_mem) begin
                forward_check_rs1 = 2'b01;
            end else if (rs1_id_ex == rd_mem_wb && rd_mem_wb != 0 && reg_write_mem_wb) begin
                forward_check_rs1 = 2'b10;
            end else begin
                forward_check_rs1 = 2'b00;
            end
            if (rs2_id_ex == rd_ex_mem && rd_ex_mem != 0 && reg_write_ex_mem) begin
                forward_check_rs2 = 2'b01;
            end else if (rs2_id_ex == rd_mem_wb && rd_mem_wb != 0 && reg_write_mem_wb) begin
                forward_check_rs2 = 2'b10;
            end else begin
                forward_check_rs2 = 2'b00;
            end
        end
        if (opcode_id_ex == `LOAD) begin
            if (rs1_id_ex == rd_ex_mem && rd_ex_mem != 0 && reg_write_ex_mem) begin
                forward_check_rs1 = 2'b01;
            end else if (rs1_id_ex == rd_mem_wb && rd_mem_wb != 0 && reg_write_mem_wb) begin
                forward_check_rs1 = 2'b10;
            end else begin
                forward_check_rs1 = 2'b00;
            end
            if (rs2_id_ex == rd_ex_mem && rd_ex_mem != 0 && reg_write_ex_mem) begin
                forward_check_rs2 = 2'b01;
            end else if (rs2_id_ex == rd_mem_wb && rd_mem_wb != 0 && reg_write_mem_wb) begin
                forward_check_rs2 = 2'b10;
            end else begin
                forward_check_rs2 = 2'b00;
            end
        end
        if (opcode_id_ex == `STORE) begin
            if (rs1_id_ex == rd_ex_mem && rd_ex_mem != 0 && reg_write_ex_mem) begin
                forward_check_rs1 = 2'b01;
            end else if (rs1_id_ex == rd_mem_wb && rd_mem_wb != 0 && reg_write_mem_wb) begin
                forward_check_rs1 = 2'b10;
            end else begin
                forward_check_rs1 = 2'b00;
            end
            if (rs2_id_ex == rd_ex_mem && rd_ex_mem != 0 && reg_write_ex_mem) begin
                forward_check_rs2 = 2'b01;
            end else if (rs2_id_ex == rd_mem_wb && rd_mem_wb != 0 && reg_write_mem_wb) begin
                forward_check_rs2 = 2'b10;
            end else begin
                forward_check_rs2 = 2'b00;
            end
        end
        if (opcode_id_ex == `JAL) begin
            if (rs1_id_ex == rd_ex_mem && rd_ex_mem != 0 && reg_write_ex_mem) begin
                forward_check_rs1 = 2'b01;
            end else if (rs1_id_ex == rd_mem_wb && rd_mem_wb != 0 && reg_write_mem_wb) begin
                forward_check_rs1 = 2'b10;
            end else begin
                forward_check_rs1 = 2'b00;
            end
            if (rs2_id_ex == rd_ex_mem && rd_ex_mem != 0 && reg_write_ex_mem) begin
                forward_check_rs2 = 2'b01;
            end else if (rs2_id_ex == rd_mem_wb && rd_mem_wb != 0 && reg_write_mem_wb) begin
                forward_check_rs2 = 2'b10;
            end else begin
                forward_check_rs2 = 2'b00;
            end
        end
        if (opcode_id_ex == `JALR) begin
            if (rs1_id_ex == rd_ex_mem && rd_ex_mem != 0 && reg_write_ex_mem) begin
                forward_check_rs1 = 2'b01;
            end else if (rs1_id_ex == rd_mem_wb && rd_mem_wb != 0 && reg_write_mem_wb) begin
                forward_check_rs1 = 2'b10;
            end else begin
                forward_check_rs1 = 2'b00;
            end
            if (rs2_id_ex == rd_ex_mem && rd_ex_mem != 0 && reg_write_ex_mem) begin
                forward_check_rs2 = 2'b01;
            end else if (rs2_id_ex == rd_mem_wb && rd_mem_wb != 0 && reg_write_mem_wb) begin
                forward_check_rs2 = 2'b10;
            end else begin
                forward_check_rs2 = 2'b00;
            end
        end
        if (opcode_id_ex == `BRANCH) begin
            if (rs1_id_ex == rd_ex_mem && rd_ex_mem != 0 && reg_write_ex_mem) begin
                forward_check_rs1 = 2'b01;
            end else if (rs1_id_ex == rd_mem_wb && rd_mem_wb != 0 && reg_write_mem_wb) begin
                forward_check_rs1 = 2'b10;
            end else begin
                forward_check_rs1 = 2'b00;
            end
            if (rs2_id_ex == rd_ex_mem && rd_ex_mem != 0 && reg_write_ex_mem) begin
                forward_check_rs2 = 2'b01;
            end else if (rs2_id_ex == rd_mem_wb && rd_mem_wb != 0 && reg_write_mem_wb) begin
                forward_check_rs2 = 2'b10;
            end else begin
                forward_check_rs2 = 2'b00;
            end
        end
    end
endmodule
