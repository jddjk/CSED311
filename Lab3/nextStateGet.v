`include "opcodes.v"
`include "states.v"

module nextStateGet(input [3:0] current_state,
                        input reset,
                        input [6:0] opcode,
                        output reg [3:0] next_state);
    
    always @(*) begin
        if (reset) begin
            next_state = 0;
        end else begin

            $display("current state:%d ", current_state); // FOR DEBUGGING
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
    end
endmodule

