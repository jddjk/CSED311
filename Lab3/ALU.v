`include "opcodes.v"

module ALU (
    input [2:0] ALUCtrlOp,
    input [31:0] in_1_ALU,
    input [31:0] in_2_ALU,
    input [2:0] FUNCT,
    output reg [31:0] ALUResult,
    output reg bcond
);

    initial begin
        ALUResult = 0;
        bcond = 0;
    end

    always @(*) begin
        if (ALUCtrlOp == `FUNCT3_ADD) begin
            ALUResult = in_1_ALU + in_2_ALU;
            bcond = 1'b0;
        end 
        
        else if (ALUCtrlOp == 3'b010) begin
            ALUResult = in_1_ALU - in_2_ALU;
            bcond = 1'b0;
            
            if (FUNCT == `FUNCT3_BEQ) begin
                if (ALUResult == 32'b0) begin
                    bcond = 1'b1;
                end else begin
                    bcond = 1'b0;
                end
            end else if (FUNCT == `FUNCT3_BNE) begin
                if (ALUResult != 32'b0) begin
                    bcond = 1'b1;
                end else begin
                    bcond = 1'b0;
                end
            end else if (FUNCT == `FUNCT3_BLT) begin
                if (ALUResult[31] == 1'b1) begin
                    bcond = 1'b1;
                end else begin
                    bcond = 1'b0;
                end
            end else if (FUNCT == `FUNCT3_BGE) begin
                if (ALUResult[31] != 1'b1) begin
                    bcond = 1'b1;
                end else begin
                    bcond = 1'b0;
                end
            end else begin
                bcond = 1'b0;
            end
        end 
        
        
        else if (ALUCtrlOp == `FUNCT3_XOR) begin
            ALUResult = in_1_ALU ^ in_2_ALU;
            bcond = 1'b0;
        end else if (ALUCtrlOp == `FUNCT3_OR) begin
            ALUResult = in_1_ALU | in_2_ALU;
            bcond = 1'b0;
        end else if (ALUCtrlOp == `FUNCT3_AND) begin
            ALUResult = in_1_ALU & in_2_ALU;
            bcond = 1'b0;
        end else if (ALUCtrlOp == `FUNCT3_SLL) begin
            ALUResult = in_1_ALU << in_2_ALU;
            bcond = 1'b0;
        end else if (ALUCtrlOp == `FUNCT3_SRL) begin
            ALUResult = in_1_ALU >> in_2_ALU;
            bcond = 1'b0;
        end else begin
            ALUResult = 0;
            bcond = 1'b0;
        end

        if(ALUCtrlOp != 3'b010) begin
            bcond = 1'b0;
        end
    end
endmodule
