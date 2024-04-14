`include "opcodes.v"
`include "states.v"




module ControlUnit(
    input [6:0] opcode,  // input
    input reg [31:0] x17_val,
    input clk,
    input reset,
    output reg pc_write,
    output reg pc_write_cond,
    output reg ir_write,
    output reg [1:0] alu_op,
    output reg mem_read,
    output reg mem_to_reg,            
    output reg mem_write,                
    output reg alu_src_a, 
    output reg [1:0] alu_src_b,               
    output reg reg_write,
    output reg pc_source, 
    output reg iord,
    output reg is_ecall
);
    reg [3:0] current_state, next_state;
    reg [1:0] addr_clt;




/*
    // State transition logic
    always @(posedge clk) begin
        if (reset) current_state <= `IF1;
        else current_state <= next_state;
    end
*/
    always @(posedge clk) begin
        if (reset) begin
            current_state <= 4'b1111; //! CHANGE TO NON-BLOCKING
        end else begin
            current_state <= next_state; //! CHANGE TO NON-BLOCKING
        end
        // $display("current_state: %d", current_state); //! DEBUGGING
    end



//get next state
    always @(*) begin
        case (addr_clt)
            2'b00:   next_state = 4'b0000;
            2'b01: begin  
                case (opcode)
                    `ARITHMETIC:     next_state = `STATE6;
                    `ARITHMETIC_IMM: next_state = `STATE10;
                    `BRANCH:         next_state = `STATE8;
                    `LOAD:           next_state = `STATE2;
                    `STORE:          next_state = `STATE2;
                    `JAL:            next_state = `STATE9;
                    `JALR:           next_state = `STATE9;
 
                    `ECALL:          next_state = `STATE11;
                    default:         next_state = `STATE0;
                endcase 
            end

            2'b10: begin   
                case (opcode)
                    `LOAD:           next_state = `STATE3;
                    `STORE:          next_state = `STATE5;
                    `ARITHMETIC_IMM: next_state = `STATE7;
                    `JAL:            next_state = `STATE12;
                    `JALR:           next_state = `STATE13;
                    default:         next_state = `STATE0;
                endcase
            end

            2'b11: begin
                if (reset) begin
                    next_state = 0;
                end else begin
                    next_state = current_state + 1;
                end
            end

            default: next_state = 4'b0000;
        endcase
    end


/*
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
                IRWrite = 1;
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
                //IRWrite = 1;
                alu_srcA = 1;
                alu_srcB = 2'b01;
                RegWrite = 1;
            end
            `EX1: begin
                ALUCtrlOp = 2'b00;
                alu_srcA = 1;
                alu_srcB = 2'b10;
                ALUCtrlOp = 2'b10;
                //PCSource = 2'b01;
                PCSource = 1;
               
            end
            `EX2: begin
                ALUCtrlOp = 2'b00;
                alu_srcB = 2'b10;
                //PCSource = 2'b01;
                PCSource = 1;
               RegWrite = 1;
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
                //$display("rd_din: "); //! DEBUGGING
             

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
    */



    always @(*) begin
        if(current_state!=0 && current_state !=1)$display("current_state: %d", current_state); //! DEBUGGING
            pc_write_cond = 0;
            pc_write = 0; //!
            iord = 0;
            mem_read = 0;
            mem_write = 0;
            ir_write = 0;
            mem_to_reg = 0; // DON'T CARE
            reg_write = 0;
            alu_src_a = 0; // DON'T CARE
            alu_src_b = 2'b00; // DON'T CARE
            alu_op = 2'b00; // DON'T CARE
            pc_source = 0; // DON'T CARE
            is_ecall = 0;

        case (current_state)
            `STATE0: begin // IF Stage
                pc_write_cond = 0;
                pc_write = 0; //!
                iord = 0;
                mem_read = 1;
                mem_write = 0;
                ir_write = 1;
                mem_to_reg = 0; // DON'T CARE
                reg_write = 0;
                alu_src_a = 0; // DON'T CARE
                alu_src_b = 2'b01; // DON'T CARE
                alu_op = 2'b00; // DON'T CARE
                pc_source = 1; // DON'T CARE
                is_ecall = 0;
            end
            `STATE1: begin // ID Stage
                pc_write_cond = 0;
                pc_write = 0;
                iord = 0;
                mem_read = 0;
                mem_write = 0;
                ir_write = 0;
                mem_to_reg = 0;
                reg_write = 0;
                alu_src_a = 0;
                alu_src_b = 2'b01;
                alu_op = 2'b00; // DON'T CARE
                pc_source = 1; // DON'T CARE
                is_ecall = 0;
            end
            `STATE2: begin // LOAD and STORE EX Stage
                pc_write_cond = 0;
                pc_write = 0;
                iord = 0;
                mem_read = 0;
                mem_write = 0;
                ir_write = 0;
                mem_to_reg = 0;
                reg_write = 0;
                alu_src_a = 1;
                alu_src_b = 2'b10;
                alu_op = 2'b00;
                pc_source = 1; // DON'T CARE
                is_ecall = 0;
            end
            `STATE3: begin // LOAD MEM Stage
                pc_write_cond = 0;
                pc_write = 0;
                iord = 1;
                mem_read = 1;
                mem_write = 0;
                ir_write = 0;
                mem_to_reg = 0;
                reg_write = 0;
                alu_src_a = 0; // DON'T CARE
                alu_src_b = 2'b00; // DON'T CARE
                alu_op = 2'b00; // DON'T CARE
                pc_source = 1; // DON'T CARE
                is_ecall = 0;
            end
            `STATE4: begin // LOAD WB Stage
                pc_write_cond = 0;
                pc_write = 1; //!
                iord = 0;
                mem_read = 0;
                mem_write = 0;
                ir_write = 0;
                mem_to_reg = 1;
                reg_write = 1;
                alu_src_a = 0;
                alu_src_b = 2'b01;
                alu_op = 2'b00;
                pc_source = 1;
                is_ecall = 0;
            end
            `STATE5: begin // STORE MEM Stage
                pc_write_cond = 0;
                pc_write = 1; //!
                iord = 1;
                mem_read = 0;
                mem_write = 1;
                ir_write = 0;
                mem_to_reg = 0;
                reg_write = 0;
                alu_src_a = 0;
                alu_src_b = 2'b01;
                alu_op = 2'b00;
                pc_source = 1;
                is_ecall = 0;
            end
            `STATE6: begin // R-type EX Stage
                pc_write_cond = 0;
                pc_write = 0;
                iord = 0;
                mem_read = 0;
                mem_write = 0;
                ir_write = 0;
                mem_to_reg = 0;
                reg_write = 0;
                alu_src_a = 1;
                alu_src_b = 2'b00;
                alu_op = 2'b01;
                pc_source = 1; // DON'T CARE
                is_ecall = 0;
            end
            `STATE7: begin // R/I-type WB Stage
                pc_write_cond = 0;
                pc_write = 1; //!
                iord = 0;
                mem_read = 0;
                mem_write = 0;
                ir_write = 0;
                mem_to_reg = 0;
                reg_write = 1;
                alu_src_a = 0;
                alu_src_b = 2'b01;
                alu_op = 2'b00;
                pc_source = 1;
                is_ecall = 0;
            end
            `STATE8: begin // BRANCH Ex Stage
                pc_write_cond = 0;
                pc_write = 1; //!
                iord = 0;
                mem_read = 0;
                mem_write = 0;
                ir_write = 0;
                mem_to_reg = 0;
                reg_write = 0;
                alu_src_a = 0;
                alu_src_b = 2'b10;
                alu_op = 2'b11;
                pc_source = 0;
                is_ecall = 0;
            end
            `STATE9: begin // JAL/JALR Ex Stage
                pc_write_cond = 0;
                pc_write = 0;
                iord = 0;
                mem_read = 0;
                mem_write = 0;
                ir_write = 0;
                mem_to_reg = 0;
                reg_write = 0;
                alu_src_a = 0;
                alu_src_b = 2'b01;
                alu_op = 2'b10;
                pc_source = 1;
                is_ecall = 0;
             end
            `STATE10: begin // I-type EX Stage
                pc_write_cond = 0;
                pc_write = 0;
                iord = 0;
                mem_read = 0;
                mem_write = 0;
                ir_write = 0;
                mem_to_reg = 0;
                reg_write = 0;
                alu_src_a = 1;
                alu_src_b = 2'b10;
                alu_op = 2'b01;
                pc_source = 1; // DON'T CARE
                is_ecall = 0;

            end
            `STATE11: begin // IS_HALTED Stage
                pc_write_cond = 0;
                pc_write = 1; //!
                iord = 0;
                mem_read = 0;
                mem_write = 0;
                ir_write = 0;
                mem_to_reg = 0;
                reg_write = 0;
                alu_src_a = 0;
                alu_src_b = 2'b01;
                pc_source = 1;
                is_ecall = 1;
            end
            `STATE12: begin // JAL WB Stage
                pc_write_cond = 0;
                pc_write = 1; //!
                iord = 0;
                mem_read = 0;
                mem_write = 0;
                ir_write = 0;
                mem_to_reg = 0;
                reg_write = 1;
                alu_src_a = 0;
                alu_src_b = 2'b10;
                alu_op = 2'b00;
                pc_source = 1;
                is_ecall = 0;
            end
            `STATE13: begin // JALR WB Stage
                pc_write_cond = 0;
                pc_write = 1; //!
                iord = 0;
                mem_read = 0;
                mem_write = 0;
                ir_write = 0;
                mem_to_reg = 0;
                reg_write = 1;
                alu_src_a = 1;
                alu_src_b = 2'b10;
                alu_op = 2'b00;
                pc_source = 1;
                is_ecall = 0;
            end
            `STATE15: begin // RESET State
                pc_write_cond = 0;
                pc_write = 0;
                iord = 0;
                mem_read = 0;
                mem_write = 0;
                ir_write = 0;
                mem_to_reg = 0;
                reg_write = 0;
                alu_src_a = 0;
                alu_src_b = 2'b11;
                alu_op = 2'b00;
                pc_source = 1;
                is_ecall = 0;
            end
            default: begin 
            pc_write_cond = 0;
            pc_write = 0; //!
            iord = 0;
            mem_read = 0;
            mem_write = 0;
            ir_write = 0;
            mem_to_reg = 0; // DON'T CARE
            reg_write = 0;
            alu_src_a = 0; // DON'T CARE
            alu_src_b = 2'b00; // DON'T CARE
            alu_op = 2'b00; // DON'T CARE
            pc_source = 0; // DON'T CARE
            is_ecall = 0;
            end

        endcase

        if (current_state == `STATE4 || current_state == `STATE5 || current_state == `STATE7 || current_state == `STATE8 || current_state == `STATE11 || current_state == `STATE12 || current_state == `STATE13 || current_state == `STATE15) begin
            addr_clt = 2'b00; // GOTO STATE0
        end else if (current_state == `STATE1) begin
            addr_clt = 2'b01; // ROM1
        end else if (current_state == `STATE2 || current_state == `STATE10 || current_state == `STATE9) begin
            addr_clt = 2'b10; // ROM2
        end else if (current_state == `STATE0 || current_state == `STATE3 || current_state == `STATE6) begin
            addr_clt = 2'b11; // STATE N + 1
        end else begin
            addr_clt = 2'b00; // GOTO STATE0
        end

    end

    always @(*) begin
        if (opcode == `ECALL && x17_val==10) is_ecall = 1;
        else is_ecall = 0;
    end

endmodule 
