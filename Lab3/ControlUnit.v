`include "opcodes.v"
`include "states.v"

module ControlUnit(
    input [6:0] opcode,  // input
    input reg [31:0] x17_val,
    input clk,
    input reset,
    output reg PCWrite,      // output
    output reg PCWriteNotCond, // output
    output reg IRWrite,      // output
    output reg [1:0] ALUCtrlOp,    // output
    output reg mem_read,      // output
    output reg mem_to_reg,    // output
    output reg mem_write,     // output
    output reg alu_srcA,       // output
    output reg [1:0] alu_srcB,       // output
    output reg RegWrite,     // output
    //output reg [1:0] PCSource,      // output 
    output reg PCSource,
    output reg IorD,        // output
    output reg is_ecall       // output (ecall inst)
);
    reg [3:0] current_state, next_state;

    // State transition logic
    always @(posedge clk) begin
        if (reset) current_state <= `IF1;
        else current_state <= next_state;
    end

    always @(*) begin
        case (current_state)
            `IF1: next_state = `IF2;
            `IF2: next_state = `IF3;
            `IF3: next_state = `IF4;
            `IF4: begin
                next_state = (opcode == `JAL) ? `EX1 : `ID;
            end 
            `ID: next_state = `EX1;
            `EX1: next_state = `EX2;
            `EX2: begin
                case(opcode)
                    `LOAD: next_state = `MEM1;
                    `STORE: next_state = `MEM1;
                    `BRANCH: next_state = `IF1;
                    `ARITHMETIC: next_state = `WB;
                    `ARITHMETIC_IMM: next_state = `WB;
                    `JALR: next_state = `WB;
                    `JAL: next_state = `WB;
                    default: next_state = `WB;
                endcase
            end 
            `MEM1: next_state = `MEM2;
            `MEM2: next_state = `MEM3;
            `MEM3: next_state = `MEM4;
            `MEM4: begin
                case(opcode)
                    `LOAD: next_state = `WB;
                    `STORE: next_state = `IF1;
                    default: next_state = `WB;
                endcase
            end
            `WB: begin
                case(opcode)
                    `LOAD: next_state = `IF1;
                    `ARITHMETIC: next_state = `IF1;
                    `ARITHMETIC_IMM: next_state = `IF1;
                    `JALR: next_state = `IF1;
                    `JAL: next_state = `IF1;
                    default: next_state = `IF1;
                endcase
            end
            default: next_state = `IF1;
        endcase
    end

    // Control signal
    always @(*) begin
        PCWrite = 0;
        mem_read = 0;
        mem_write = 0;
        IRWrite = 0;
        ALUCtrlOp = 2'b00;
        mem_to_reg = 0;
        alu_srcA = 0;
        alu_srcB = 2'b00;
        RegWrite = 0;
        //PCSource = 2'b00;
        PCSource = 0;
        IorD = 0;

        case (current_state)
            `IF1: begin
                PCWrite = 1;
                mem_read = 1;
                mem_write = 1;
            end
            `IF2: begin
                PCWrite = 1;
                mem_read = 1;
                mem_write = 1;
            end
            `IF3: begin
                PCWrite = 1;
                mem_read = 1;
                mem_write = 1;
            end
            `IF4: begin
                PCWrite = 1;
                mem_read = 1;
                mem_write = 1;
            end
            `ID: begin
                IRWrite = 1;
                alu_srcA = 1;
                alu_srcB = 2'b01;
                RegWrite = 1;
            end
            `EX1: begin
                ALUCtrlOp = 2'b00;
                alu_srcB = 2'b10;
                //PCSource = 2'b01;
                PCSource = 1;
            end
            `EX2: begin
                ALUCtrlOp = 2'b00;
                alu_srcB = 2'b10;
                //PCSource = 2'b01;
                PCSource = 1;
            end
            `MEM1: begin
                mem_write = 1;
                alu_srcB = 2'b10;
                //PCSource = 2'b01;
                PCSource = 1;
            end
            `MEM2: begin
                mem_write = 1;
                alu_srcB = 2'b10;
                //PCSource = 2'b01;
                PCSource = 1;
            end
            `MEM3: begin
                mem_write = 1;
                alu_srcB = 2'b10;
                //PCSource = 2'b01;
                PCSource = 1;
            end
            `MEM4: begin
                mem_write = 1;
                alu_srcB = 2'b10;
                //PCSource = 2'b01;
                PCSource = 1;
            end
            `WB: begin
                RegWrite = 1;
            end
            default: begin
                PCWrite = 0;
                mem_read = 0;
                mem_write = 0;
                IRWrite = 0;
                ALUCtrlOp = 2'b00;
                mem_to_reg = 0;
                alu_srcA = 0;
                alu_srcB = 2'b00;
                RegWrite = 0;
                //PCSource = 2'b00;
                PCSource = 0;
                IorD = 0;
            end
        endcase
    end
    
    always @(*) begin
        if (opcode == `ECALL && x17_val==10) is_ecall = 1;
        else is_ecall = 0;
    end

endmodule 
