`include "opcodes.v"

// instruction fetch
`define IF          4'b0000

// instruction decode
`define ID          4'b0001

// execution
`define EX_LW       4'b0010
`define EX_SW       4'b0011
`define EX_R        4'b0100
`define EX_JAL      4'b0101
`define EX_JALR     4'b0110
`define EX_BRANCH1   4'b0111
`define EX_BRANCH2  4'b1000

// memory access
`define MEM_LW      4'b1001
`define MEM_SW      4'b1010

// write back
`define WB_R        4'b1011
`define WB_LW       4'b1100
`define WB_I        4'b1101
`define WB_JALR     4'b1110

// ecall
`define EC          4'b1111


module ControlUnit(
    input [6:0] opcode,
    input clk,
    input reset,
    input bcond,
    output reg [1:0] ALUop,
    output reg [1:0] alu_src_B,
    output reg alu_src_A,
    output reg PCWriteNotCond,
    output reg PC_Write,
    output reg MemRead,
    output reg MemWrite,
    output reg MemToReg,
    output reg IorD,
    output reg IRWrite,
    output reg PCSource,
    output reg reg_write,
    output reg is_ecall
);

    reg [3:0] current_state;
    wire [3:0] next_state;

    assign current_state =  4'b0000;

    always @(posedge clk) begin
        if (!reset) begin
            current_state <= next_state;
        end
        else begin
            current_state <= 4'b0000;
        end
    end

    initial begin
        PCWriteNotCond = 0;
        PC_Write = 0;
        IorD = 0;
        MemRead = 0;
        MemWrite = 0;
        MemToReg = 0;
        IRWrite = 0;
        PCSource = 0;
        ALUop = 0;
        alu_src_B = 0;
        alu_src_A = 0;
        reg_write = 0;
    end

    always @(*) begin
        PCWriteNotCond = 0;
        PC_Write = 0;
        IorD = 0;
        MemRead = 0;
        MemWrite = 0;
        MemToReg = 0;
        IRWrite = 0;
        PCSource = 0;
        ALUop = 0;
        alu_src_B = 0;
        alu_src_A = 0;
        reg_write = 0;

        if (current_state == `IF) begin
            IorD = 0;
            MemRead = 1;
            IRWrite = 1;
            PCWriteNotCond = 0;
            PC_Write = 0;
            MemWrite = 0;
            MemToReg = 0;
            PCSource = 0;
            ALUop = 0;
            alu_src_B = 0;
            alu_src_A = 0;
            reg_write = 0;
        end else if (current_state == `ID) begin
            ALUop = 2'b00;
            alu_src_B = 2'b01;
            alu_src_A = 0;
            PCWriteNotCond = 0;
            PC_Write = 0;
            IorD = 0;
            MemRead = 0;
            MemWrite = 0;
            MemToReg = 0;
            IRWrite = 0;
            PCSource = 0;
            reg_write = 0;
        end else if (current_state == `EX_R) begin
            IorD = 0;
            MemRead = 0;
            MemWrite = 0;
            MemToReg = 0;
            IRWrite = 0;
            ALUop = 2'b10;
            alu_src_B = 2'b00;
            alu_src_A = 1;
            PCWriteNotCond = 0;
            PC_Write = 0;
            PCSource = 0;
            reg_write = 0;
        end else if (current_state == `EX_LW) begin
            ALUop = 2'b00;
            MemToReg = 0;
            IRWrite = 0;
            PCSource = 0;
            reg_write = 0;
            alu_src_B = 2'b10;
            alu_src_A = 1;
            PCWriteNotCond = 0;
            PC_Write = 0;
            IorD = 0;
            MemRead = 0;
            MemWrite = 0;
        end else if (current_state == `EX_BRANCH1) begin
            PCWriteNotCond = 0;
            IorD = 0;
            MemRead = 0;
            MemWrite = 0;
            MemToReg = 0;
            IRWrite = 0;
            PCSource = 1;
            ALUop = 2'b01;
            alu_src_B = 2'b00;
            alu_src_A = 1;
            reg_write = 0;
            if (bcond) begin
                PC_Write = 0;
            end else begin
                PC_Write = 1;
            end
        end else if (current_state == `EX_SW) begin
            ALUop = 2'b00;
            alu_src_B = 2'b10;
            alu_src_A = 1;
            PCWriteNotCond = 0;
            PC_Write = 0;
            IorD = 0;
            MemRead = 0;
            MemWrite = 0;
            MemToReg = 0;
            IRWrite = 0;
            PCSource = 0;
            reg_write = 0;
        end else if (current_state == `EX_JAL) begin
            PC_Write = 1;
            MemToReg = 0;
            PCSource = 0;
            ALUop = 2'b00;
            alu_src_B = 2'b10;
            alu_src_A = 0;
            reg_write = 1;
            PCWriteNotCond = 0;
            IorD = 0;
            MemRead = 0;
            MemWrite = 0;
            IRWrite = 0;
        end else if (current_state == `EX_JALR) begin
            PC_Write = 1;
            MemToReg = 1;
            PCSource = 0;
            ALUop = 2'b00;
            alu_src_B = 2'b10;
            alu_src_A = 1;
            reg_write = 1;
            PCWriteNotCond = 0;
            IorD = 0;
            MemRead = 0;
            MemWrite = 0;
            IRWrite = 0;
        end else if (current_state == `WB_R) begin
            PC_Write = 1;
            MemToReg = 0;
            PCSource = 0;
            ALUop = 2'b00;
            alu_src_B = 2'b01;
            alu_src_A = 0;
            reg_write = 1;
            PCWriteNotCond = 0;
            IorD = 0;
            MemRead = 0;
            MemWrite = 0;
            IRWrite = 0;
        end else if (current_state == `MEM_LW) begin
            IorD = 1;
            MemRead = 1;
            PCWriteNotCond = 0;
            PC_Write = 0;
            MemWrite = 0;
            MemToReg = 0;
            IRWrite = 0;
            PCSource = 0;
            ALUop = 0;
            alu_src_B = 0;
            alu_src_A = 0;
            reg_write = 0;
        end else if (current_state == `MEM_SW) begin
            PC_Write = 1;
            IorD = 1;
            MemWrite = 1;
            PCSource = 0;
            ALUop = 2'b00;
            alu_src_B = 2'b01;
            alu_src_A = 0;
            PCWriteNotCond = 0;
            MemRead = 0;
            MemToReg = 0;
            IRWrite = 0;
            reg_write = 0;
        end else if (current_state == `EX_BRANCH2) begin
            PC_Write = 1;
            PCSource = 0;
            ALUop = 2'b00;
            alu_src_B = 2'b10;
            alu_src_A = 0;
            PCWriteNotCond = 0;
            IorD = 0;
            MemRead = 0;
            MemWrite = 0;
            MemToReg = 0;
            IRWrite = 0;
            reg_write = 0;
        end else if (current_state == `WB_LW) begin
            PC_Write = 1;
            MemToReg = 1;
            PCSource = 0;
            ALUop = 2'b00;
            alu_src_B = 2'b01;
            alu_src_A = 0;
            reg_write = 1;
            PCWriteNotCond = 0;
            IorD = 0;
            MemRead = 0;
            MemWrite = 0;
            IRWrite = 0;
        end else if (current_state == `WB_I) begin
            ALUop = 2'b10;
            alu_src_B = 2'b10;
            alu_src_A = 1;
            PCWriteNotCond = 0;
            PC_Write = 0;
            IorD = 0;
            MemRead = 0;
            MemWrite = 0;
            MemToReg = 0;
            IRWrite = 0;
            PCSource = 0;
            reg_write = 0;
        end else if (current_state == `EC) begin
            PC_Write = 1;
            PCSource = 0;
            ALUop = 2'b00;
            alu_src_B = 2'b01;
            alu_src_A = 0;
            PCWriteNotCond = 0;
            IorD = 0;
            MemRead = 0;
            MemWrite = 0;
            MemToReg = 0;
            IRWrite = 0;
            reg_write = 0;
        end else if (current_state == `WB_JALR) begin
            PC_Write = 1;
            MemToReg = 0;
            PCSource = 1;
            ALUop = 2'b00;
            alu_src_B = 2'b01;
            alu_src_A = 0;
            reg_write = 1;
            PCWriteNotCond = 0;
            IorD = 0;
            MemRead = 0;
            MemWrite = 0;
            IRWrite = 0;
        end else begin
            PC_Write = 0;
            PCWriteNotCond = 0;
            IorD = 0;
            MemRead = 0;
            MemWrite = 0;
            MemToReg = 0;
            IRWrite = 0;
            PCSource = 0;
            ALUop = 0;
            alu_src_B = 0;
            alu_src_A = 0;
            reg_write = 0;
        end
    end

    assign is_ecall = (opcode == `ECALL);

    MicroSequencer MicroSequencer(
        .opcode(opcode),
        .current_state(current_state),
        .bcond(bcond),
        .next_state(next_state)
    );

endmodule
