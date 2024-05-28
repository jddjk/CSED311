`include "CLOG2.v"

/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off WIDTHEXPAND */
module Cache #(parameter LINE_SIZE = 16,
               parameter NUM_SETS = 8,
               parameter NUM_WAYS = 2) (
    input reset,
    input clk,

    input is_input_valid,
    input [31:0] addr,
    input mem_rw,
    input [31:0] din,

    output reg is_ready,
    output reg is_output_valid,
    output reg [31:0] dout,
    output reg is_hit
);

  reg [1:0] block_offset;
  reg [SET_BITS - 1:0] index;
  reg [27 - SET_BITS:0] tag_bits;

  localparam WAY_BITS = `CLOG2(NUM_WAYS);
  localparam SET_BITS = `CLOG2(NUM_SETS);

  reg is_data_mem_ready;

  reg is_write_back;
  reg is_write_back_next;
  reg [NUM_SETS-1:0][NUM_WAYS-1:0] valid_bits;
  reg [NUM_SETS-1:0][NUM_WAYS-1:0] dirty_bits;
  reg [NUM_SETS-1:0][NUM_WAYS-1:0][27 - SET_BITS:0] tag_array;
  reg [NUM_SETS-1:0][NUM_WAYS-1:0][127:0] data_array;

  reg [31:0] line_address;
  reg [127:0] memory_dout;
  reg mem_is_output_valid;


  reg mem_read;
  reg mem_write;

  reg is_hit_next;
  reg [WAY_BITS-1:0] target_way;
  reg is_full;
  reg [31:0] min_combined_count;

  reg [31:0] hit_count;
  reg [31:0] miss_count;

  reg [NUM_SETS-1:0][NUM_WAYS-1:0] fifo_queue;
  reg [NUM_SETS-1:0][WAY_BITS-1:0] fifo_head, fifo_tail;

  reg [31:0] addr_reg;

  always @(*) begin
    addr_reg = addr;
    block_offset = addr_reg[3:2];
    index = addr_reg[3 + SET_BITS:4];
    tag_bits = addr_reg[31:4 + SET_BITS];
  end


  integer i;
  integer j;

  always @(*) begin
    if (reset) begin
      is_ready = 0;
      is_hit = 0;
      is_output_valid = 0;
    end else begin
      is_ready = is_data_mem_ready;
      is_hit = is_hit_next;
      is_output_valid = is_ready && is_hit;
    end
  end

  always @(*) begin
    case (block_offset)
      0: dout = data_array[index][target_way][31:0];
      1: dout = data_array[index][target_way][63:32];
      2: dout = data_array[index][target_way][95:64];
      3: dout = data_array[index][target_way][127:96];
      default: dout = 32'b0;
    endcase
  end

  CacheControl #(.NUM_WAYS(NUM_WAYS), .SET_BITS(SET_BITS), .WAY_BITS(WAY_BITS)) cache_control (
    .addr(addr),
    .tag_bits(tag_bits),
    .index(index),
    .is_input_valid(is_input_valid),
    .mem_is_output_valid(mem_is_output_valid),
    .valid_bits(valid_bits[index]),
    .dirty_bits(dirty_bits[index]),
    .tag_array(tag_array[index]),
    .fifo_queue(fifo_queue[index]),
    .fifo_head(fifo_head[index]),
    .fifo_tail(fifo_tail[index]),
    
    .is_write_back_next(is_write_back_next),
    .mem_read(mem_read),
    .mem_write(mem_write),
    .line_address(line_address),
    .is_hit_next(is_hit_next),
    .target_way(target_way),
    .is_full(is_full)
  );

  CacheMemoryManager #(
    .NUM_SETS(NUM_SETS),
    .NUM_WAYS(NUM_WAYS),
    .SET_BITS(SET_BITS),
    .WAY_BITS(WAY_BITS)
  ) cache_memory_manager (
    .reset(reset),
    .clk(clk),
    .index(index),
    .target_way(target_way),
    .is_write_back(is_write_back),
    .is_write_back_next(is_write_back_next),
    .mem_is_output_valid(mem_is_output_valid),
    .mem_rw(mem_rw),
    .din(din),
    .tag_bits(tag_bits),
    .block_offset(block_offset),
    .memory_dout(memory_dout),
    .is_hit_next(is_hit_next),
    .is_data_mem_ready(is_data_mem_ready),

    .valid_bits(valid_bits),
    .dirty_bits(dirty_bits),
    .tag_array(tag_array),
    .data_array(data_array),
    .fifo_queue(fifo_queue),
    .fifo_head(fifo_head),
    .fifo_tail(fifo_tail),
    .is_write_back_out(is_write_back),
    .hit_count(hit_count),
    .miss_count(miss_count)
  );

  always @(posedge clk) begin
    if (reset) begin
      hit_count <= 0;
      miss_count <= 0;
    end else if (is_ready && is_input_valid) begin
      $display("Hit Count: %d, Miss Count: %d, Hit Ratio: %f", hit_count, miss_count, hit_count / (hit_count + miss_count + 0.0));
    end
  end
  
  DataMemory #(.BLOCK_SIZE(LINE_SIZE)) data_mem(
    .reset(reset),
    .clk(clk),

    .is_input_valid(is_input_valid),
    .addr(line_address),
    .mem_read(mem_read),
    .mem_write(mem_write),
    .din(data_array[index][target_way]),

    .is_output_valid(mem_is_output_valid),
    .dout(memory_dout),
    .mem_ready(is_data_mem_ready)
  );
endmodule
