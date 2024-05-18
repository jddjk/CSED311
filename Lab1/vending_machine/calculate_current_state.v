`include "vending_machine_def.v"
	

module calculate_current_state(i_input_coin,i_select_item,item_price,coin_value,current_total,
input_total, output_total, return_total,current_total_nxt, wait_time,o_available_item,o_output_item,i_trigger_return);

	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0]	i_select_item;			
	input [31:0] item_price [`kNumItems-1:0];
	input [31:0] coin_value [`kNumCoins-1:0];	
	input [`kTotalBits-1:0] current_total;
	input [31:0] wait_time;
	output reg [`kNumItems-1:0] o_available_item,o_output_item;
	output reg  [`kTotalBits-1:0] input_total, output_total, return_total, current_total_nxt;
	integer i;
	integer j;

	input i_trigger_return;

	// Combinational logic
	always @(*) begin
		// Initialize variables
		input_total = 0;
		current_total_nxt = current_total;
		return_total = 0;
		output_total = 0;

		for (j = 0; j < `kNumItems; j = j + 1) begin
            o_output_item[j] = 0;
            o_available_item[j] = 0;
        end

		for (i = 0; i < `kNumCoins; i = i + 1) begin
			if (i_input_coin[i]) input_total = input_total + coin_value[i];
		end
		current_total_nxt = current_total_nxt + input_total;

		for (i = 0; i < `kNumItems; i = i + 1) begin
			if (i_select_item[i] && (current_total_nxt >= item_price[i])) begin
				current_total_nxt = current_total_nxt - item_price[i];
				o_output_item[i] = 1;
			end 
			else begin
				o_output_item[i] = 0;
			end
		end

		if (i_trigger_return || wait_time <= 0) begin
			return_total = current_total_nxt;
			current_total_nxt = 0;
		end
	end

	always @(*) begin
		for (i = 0; i < `kNumItems; i = i + 1) begin
			if (current_total_nxt >= item_price[i]) begin
				o_available_item[i] = 1;
			end
			else begin
				o_available_item[i] = 0;
			end
		end
	end
	

 
endmodule 
