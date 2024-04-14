`include "opcodes.v"
`include "alu_func.v"

module ALUControlUnit (
    input [31:0]instruction,
    input [2:0] funct3,
    input [6:0] funct7,
    input [1:0]alu_ctrl_op, // by Control unit
    output reg [3:0] alu_op // by alu_control_unit
);

    
    always @(*) begin
        alu_op = `FUNC_ADD;

        if (alu_ctrl_op == 2'b00) begin
            alu_op = `FUNC_ADD;

        end else if (alu_ctrl_op == 2'b01) begin
            if (funct3 == `FUNCT3_ADD && funct7 != `FUNCT7_SUB) begin
                alu_op = `FUNC_ADD; // Addition

            end else if (funct3 == `FUNCT3_SUB && funct7 == `FUNCT7_SUB) begin
                alu_op = `FUNC_SUB; // Subtraction


            end else if (funct3 == `FUNCT3_SLL) begin
                alu_op = `FUNC_SLL; // Logical Left Shift

            end else if (funct3 == `FUNCT3_SRL) begin
                alu_op = `FUNC_SRL; // Logical Right Shift

            end else if (funct3 == `FUNCT3_XOR) begin
                alu_op = `FUNC_XOR; // XOR

            end else if (funct3 == `FUNCT3_OR) begin
                alu_op = `FUNC_OR; // OR

            end else if (funct3 == `FUNCT3_AND) begin
                alu_op = `FUNC_AND; // AND
            end else begin  end

        end else if (alu_ctrl_op == 2'b10) begin
            if (funct7 == `JALR) begin
                alu_op = `FUNC_JALR; // JALR
            end else begin
                alu_op = `FUNC_ADD; // JAL
            end

        end else if (alu_ctrl_op == 2'b11) begin
            if (funct3 == `FUNCT3_BEQ) begin
                alu_op = `FUNC_BEQ; // BEQ

            end else if (funct3 == `FUNCT3_BNE) begin
                alu_op = `FUNC_BNE; // BNE

            end else if (funct3 == `FUNCT3_BLT) begin
                alu_op = `FUNC_BLT; // BLT

            end else if (funct3 == `FUNCT3_BGE) begin
                alu_op = `FUNC_BGE; // BGE
            end else begin  end
        end else begin  end
    end
    

endmodule
