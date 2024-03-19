module control_unit(
    input [31:0] instruction,
    output reg RegWrite,
    output reg ALUSrc,
    output reg MemRead,
    output reg MemWrite,
    output reg MemtoReg,
    output reg PCtoReg,
    output reg PCSrc1,
    output reg PCSrc2
);
    wire [6:0]opcode = instruction[6:0];
    always@(*) begin
        case(opcode)

    end
endmodule
