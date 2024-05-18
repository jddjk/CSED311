`include "vending_machine_def.v"


module check_time_and_coin(i_trigger_return, current_total, i_input_coin,i_select_item,clk,reset_n,wait_time,o_return_coin);
	input clk;
	input reset_n;
	input i_trigger_return;
	input [31:0] current_total;
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0]	i_select_item;
	output reg  [`kNumCoins-1:0] o_return_coin;
	output reg [31:0] wait_time;

	// initiate values
	initial begin
		// TODO: initiate values
		o_return_coin=0;
		wait_time=`kWaitTime;			
	end
	
	always @(*) begin
		o_return_coin = 3'b000;
		// TODO: o_return_coin
		if(i_trigger_return || wait_time <= 0) begin
			o_return_coin = 3'b001;
			if(current_total >= 1000) begin
				o_return_coin = 3'b101;
			end
			else if(current_total >= 500) begin
				o_return_coin = 3'b011;
			end
		end
	end

	always @(posedge clk) begin
		if (!reset_n) begin
			// Synchronous reset logic
			wait_time <= `kWaitTime;
		end else begin
			if (|i_select_item || |i_input_coin) begin
				wait_time <= `kWaitTime;
			end else begin
				// Decrement wait_time
				if (wait_time > 0) begin
					wait_time <= wait_time - 1;
				end
				else begin
					wait_time <= 0;
				end
			end
		end
	end
endmodule

