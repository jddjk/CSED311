`include "opcodes.v"

module ALUControlUnit (
    input [31:0] instruction,
    input [1:0] ALUop,
    output reg [2:0] ALUCtrlOp
);
    wire [6:0] opcode;
    wire [6:0] FUNCT7;
    wire [2:0] FUNCT3;

    assign opcode = instruction[6:0];
    assign FUNCT7 = instruction[31:25];
    assign FUNCT3 = instruction[14:12];

    always @(*) begin
        if (ALUop == 2'b00) begin
            ALUCtrlOp = `FUNCT3_ADD;
        end 
        else if (ALUop == 2'b01) begin
            ALUCtrlOp = 3'b010;
        end 
        else if (ALUop == 2'b10) begin
            if (opcode == `ARITHMETIC) begin
                if (FUNCT7 == `FUNCT7_SUB) begin
                    ALUCtrlOp = 3'b010;
                end else begin
                    ALUCtrlOp = FUNCT3;
                end
            end else if (opcode == `ARITHMETIC_IMM) begin
                ALUCtrlOp = FUNCT3;
            end else if (opcode == `LOAD) begin
                ALUCtrlOp = `FUNCT3_ADD;
            end else if (opcode == `STORE) begin
                ALUCtrlOp = `FUNCT3_ADD;
            end else if (opcode == `JAL) begin
                ALUCtrlOp = `FUNCT3_ADD;
            end else if (opcode == `JALR) begin
                ALUCtrlOp = `FUNCT3_ADD;
            end else if (opcode == `BRANCH) begin
                ALUCtrlOp = 3'b010;
            end else begin
                ALUCtrlOp = 3'b000;
            end
        end else begin
            ALUCtrlOp = 3'b000;
        end
    end
endmodule
