module MicroSequencer (
    input [6:0] opcode,
    input [3:0] current_state,
    input bcond,
    output reg [3:0] next_state
);

    always @(*) begin
        if (current_state == `IF) begin
            next_state = `ID;
        end 
        else if (current_state == `ID) begin
            if (opcode == `ARITHMETIC) begin
                next_state = `EX_R;
            end else if (opcode == `ARITHMETIC_IMM) begin
                next_state = `WB_I;
            end else if (opcode == `LOAD) begin
                next_state = `EX_LW;
            end else if (opcode == `STORE) begin
                next_state = `EX_SW;
            end else if (opcode == `BRANCH) begin
                next_state = `EX_BRANCH1;
            end else if (opcode == `JAL) begin
                next_state = `EX_JAL;
            end else if (opcode == `JALR) begin
                next_state = `EX_JALR;
            end 
            
            else if (opcode == `ECALL) begin
                next_state = `EC;
            end else begin
                next_state = `IF;
            end
        end 
        
        else if (current_state == `EX_JAL) begin
            next_state = `IF;
        end else if (current_state == `EX_JALR) begin
            next_state = `WB_JALR;
        end else if (current_state == `EX_R) begin
            next_state = `WB_R;
        end else if (current_state == `EX_SW) begin
            if (opcode == `LOAD) begin
                next_state = `MEM_LW;
            end else begin
                next_state = `MEM_SW;
            end
        end

        else if (current_state == `EX_LW) begin
            if (opcode == `LOAD) begin
                next_state = `MEM_LW;
            end else begin
                next_state = `MEM_SW;
            end
        end
        
        else if (current_state == `EX_BRANCH1) begin
            if (bcond) begin
                next_state = `EX_BRANCH2;
            end else begin
                next_state = `IF;
            end
        end

        else if (current_state == `MEM_LW) begin
            next_state = `WB_LW;
        end else if (current_state == `MEM_SW) begin
            next_state = `IF;
        end else if (current_state == `WB_R) begin
            next_state = `IF;
        end else if (current_state == `EX_BRANCH2) begin
            next_state = `IF;
        end 
        
        else if (current_state == `WB_LW) begin
            next_state = `IF;
        end else if (current_state == `WB_I) begin
            next_state = `WB_R;
        end else if (current_state == `EC) begin
            next_state = `IF;
        end else begin
            next_state = `IF;
        end
    end
endmodule
