// Title         : vending_machine.v
// Author      : Jae-Eon Jo (Jojaeeon@postech.ac.kr) 
//			     Dongup Kwon (nankdu7@postech.ac.kr) (2015.03.30)
//			     Jaehun Ryu (jaehunryu@postech.ac.kr) (2021.03.07)

`include "vending_machine_def.v"


module vending_machine (
	clk,							// Clock signal
	reset_n,						// Reset signal (active-low)

	i_input_coin,				// coin is inserted.
	i_select_item,				// item is selected.
	i_trigger_return,			// change-return is triggered 

	o_available_item,			// Sign of the item availability
	o_output_item,			// Sign of the item withdrawal
	o_return_coin				// Sign of the coin return
);

	// Ports Declaration
	// Do not modify the module interface
	input clk;
	input reset_n;
	
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0] i_select_item;
	input i_trigger_return;
		
	output [`kNumItems-1:0] o_available_item;
	output [`kNumItems-1:0] o_output_item;
	output [`kNumCoins-1:0] o_return_coin;


	

	// Do not modify the values.
	wire [31:0] item_price [`kNumItems-1:0];	// Price of each item
	wire [31:0] coin_value [`kNumCoins-1:0];	// Value of each coin
	assign item_price[0] = 400;
	assign item_price[1] = 500;
	assign item_price[2] = 1000;
	assign item_price[3] = 2000;
	assign coin_value[0] = 100;
	assign coin_value[1] = 500;
	assign coin_value[2] = 1000;

	// Internal states. You may add your own net variables.
	wire [`kTotalBits-1:0] current_total;
	
	// Next internal states. You may add your own net variables.
	wire [`kTotalBits-1:0] current_total_nxt;

	
	// Variables. You may add more your own net variables.
	
	wire [`kTotalBits-1:0] input_total;
	wire [`kTotalBits-1:0] output_total, return_total;
	wire [31:0] wait_time;
	//maybe variables to store information about state information such as initial state, insert coin state, dispense item state, return coin state
	


	

	//to solve the Signal is not used: error for _total values
	reg [31:0]counter1;
	reg [31:0]counter2;
	always @(posedge clk) begin
		counter1<=input_total;
		counter2<=output_total;
		counter1<=return_total;
		counter1<=counter2;
		counter2<=counter1;
	end


	// This module interface, structure, and given a number of modules are not mandatory but recommended.
	// However, Implementations that use modules are mandatory.
		
  	check_time_and_coin check_time_and_coin_module(.i_input_coin(i_input_coin),
  									.i_select_item(i_select_item),
									.clk(clk),
									.i_trigger_return(i_trigger_return),
									.current_total(current_total),
									.reset_n(reset_n),
									.wait_time(wait_time),
									.o_return_coin(o_return_coin));

	calculate_current_state calculate_current_state_module(.i_input_coin(i_input_coin),
										.i_select_item(i_select_item),
										.item_price(item_price),
										.coin_value(coin_value),
										.current_total(current_total),
										.input_total(input_total),
										.output_total(output_total),
										.return_total(return_total),
										.current_total_nxt(current_total_nxt),
										.wait_time(wait_time),
										.o_available_item(o_available_item),
										.o_output_item(o_output_item),
										
										.i_trigger_return(i_trigger_return)
										);
	
  	change_state change_state_module(
						.clk(clk),
						.reset_n(reset_n),
						.current_total_nxt(current_total_nxt),
						.current_total(current_total));


endmodule