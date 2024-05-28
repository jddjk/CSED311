`include "CLOG2.v"
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */
module CacheMemoryManager #(
  parameter NUM_SETS = 8,
  parameter NUM_WAYS = 2,
  parameter SET_BITS = `CLOG2(NUM_SETS),
  parameter WAY_BITS = `CLOG2(NUM_WAYS)
)(
  input reset,
  input clk,
  input [SET_BITS-1:0] index,
  input [WAY_BITS-1:0] target_way,
  input is_write_back,
  input is_write_back_next,
  input mem_is_output_valid,
  input mem_rw,
  input [31:0] din,
  input [27-SET_BITS:0] tag_bits,
  input [1:0] block_offset,
  input [127:0] memory_dout,
  input is_hit_next,
  input is_data_mem_ready,

  output reg [NUM_SETS-1:0][NUM_WAYS-1:0] valid_bits,
  output reg [NUM_SETS-1:0][NUM_WAYS-1:0] dirty_bits,
  output reg [NUM_SETS-1:0][NUM_WAYS-1:0][27 - SET_BITS:0] tag_array,
  output reg [NUM_SETS-1:0][NUM_WAYS-1:0][127:0] data_array,
  output reg [NUM_SETS-1:0][NUM_WAYS-1:0] fifo_queue,
  output reg [NUM_SETS-1:0][WAY_BITS-1:0] fifo_head,
  output reg [NUM_SETS-1:0][WAY_BITS-1:0] fifo_tail,
  output reg is_write_back_out,
  output reg [31:0] hit_count,
  output reg [31:0] miss_count
);
  integer i, j;

  function void reset_arrays();
    integer set, way;
    begin
      for (set = 0; set < NUM_SETS; set = set + 1) begin
        for (way = 0; way < NUM_WAYS; way = way + 1) begin
          tag_array[set][way] <= 0;
          valid_bits[set][way] <= 0;
          data_array[set][way] <= 0;
          dirty_bits[set][way] <= 0;
        end
        fifo_head[set] <= 0;
        fifo_tail[set] <= 0;
      end
      is_write_back_out <= 0;
      hit_count <= 0;
      miss_count <= 0;
    end
  endfunction

  function void update_fifo_queue(input [SET_BITS-1:0] idx, input [WAY_BITS-1:0] way);
    begin
      fifo_queue[idx][fifo_tail[idx]] <= way;
      fifo_tail[idx] <= fifo_tail[idx] + 1;
      if (fifo_tail[idx] == NUM_WAYS) begin
        fifo_tail[idx] <= 0;
      end
      if (fifo_tail[idx] == fifo_head[idx]) begin
        fifo_head[idx] <= fifo_head[idx] + 1;
        if (fifo_head[idx] == NUM_WAYS) begin
          fifo_head[idx] <= 0;
        end
      end
    end
  endfunction

  function void write_data_to_cache(
    input [SET_BITS-1:0] idx, 
    input [WAY_BITS-1:0] way, 
    input [27-SET_BITS:0] tag, 
    input [127:0] data);
    begin
      tag_array[idx][way] <= tag;
      valid_bits[idx][way] <= 1;
      data_array[idx][way] <= data;
      dirty_bits[idx][way] <= 0;
    end
  endfunction

  function void handle_write(
    input [SET_BITS-1:0] idx, 
    input [WAY_BITS-1:0] way, 
    input [27-SET_BITS:0] tag, 
    input [31:0] data, 
    input [1:0] offset);
    begin
      if (valid_bits[idx][way]) begin
        if (tag_array[idx][way] == tag) begin
          dirty_bits[idx][way] <= 1;
          case (offset)
            0: data_array[idx][way][31:0] <= data;
            1: data_array[idx][way][63:32] <= data;
            2: data_array[idx][way][95:64] <= data;
            3: data_array[idx][way][127:96] <= data;
          endcase
        end
      end
    end
  endfunction

function void update_usage_counters(input [SET_BITS-1:0] idx, input is_hit, input is_data_ready, input is_valid);
  integer way_idx;
  begin
    if (is_hit) begin
      hit_count <= hit_count + 1;
    end else begin
      if (is_data_ready && is_valid) begin
        miss_count <= miss_count + 1;
      end
    end
  end
endfunction

  always @(posedge clk) begin
    if (reset) begin
      reset_arrays();
    end else begin
      if (mem_is_output_valid) begin
        write_data_to_cache(index, target_way, tag_bits, memory_dout);
        update_fifo_queue(index, target_way);
      end else if (is_write_back) begin
        if (is_data_mem_ready) begin
          dirty_bits[index][target_way] <= 0;
        end
      end else if (!is_write_back_next) begin
        if (mem_rw) begin
          handle_write(index, target_way, tag_bits, din, block_offset);
        end
      end
      if (is_hit_next) begin
        update_usage_counters(index, 1, 0, 0);
      end else begin
        if (is_data_mem_ready) begin
          if (mem_is_output_valid) begin
            update_usage_counters(index, 0, 1, 1);
          end else begin
            update_usage_counters(index, 0, 1, 0);
          end
        end else begin
          update_usage_counters(index, 0, 0, 0);
        end
      end
      is_write_back_out <= is_write_back_next;
    end
  end
endmodule
