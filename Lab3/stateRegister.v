module stateRegister(input clk,
                      input reset,
                      input [3:0] next_state,
                      output reg [3:0] current_state);

    always @(posedge clk) begin
        if (reset) begin
            current_state <= 4'b1111; //Reset stage, controlUnit.v의 case문 에서는 default에 해당됨
        end else begin
            current_state <= next_state; 
        end
       
    end
endmodule