`include "CLOG2.v"

module Direct_mapped_CacheMemoryManager #(parameter NUM_SETS = 16, parameter SET_BITS = `CLOG2(NUM_SETS)) (
    input reset,
    input clk,
    input is_input_valid,
    input [SET_BITS - 1:0] index,
    input is_write_back,
    input is_write_back_next,
    input mem_is_output_valid,
    input mem_rw,
    input [31:0] din,
    input [27 - SET_BITS:0] tag_bits,
    input [1:0] block_offset,
    input [127:0] memory_dout,
    input is_hit_next,
    input is_data_mem_ready,
    output reg [NUM_SETS - 1:0] valid_bits,
    output reg [NUM_SETS - 1:0] dirty_bits,
    output reg [NUM_SETS - 1:0][27 - SET_BITS:0] tag_array,
    output reg [NUM_SETS - 1:0][127:0] data_array,
    output reg is_write_back_out,
    output reg [31:0] hit_count,
    output reg [31:0] miss_count
);

  function void initialize_cache();
    begin
      valid_bits[0] <= 0;
      valid_bits[1] <= 0;
      valid_bits[2] <= 0;
      valid_bits[3] <= 0;
      valid_bits[4] <= 0;
      valid_bits[5] <= 0;
      valid_bits[6] <= 0;
      valid_bits[7] <= 0;
      valid_bits[8] <= 0;
      valid_bits[9] <= 0;
      valid_bits[10] <= 0;
      valid_bits[11] <= 0;
      valid_bits[12] <= 0;
      valid_bits[13] <= 0;
      valid_bits[14] <= 0;
      valid_bits[15] <= 0;

      dirty_bits[0] <= 0;
      dirty_bits[1] <= 0;
      dirty_bits[2] <= 0;
      dirty_bits[3] <= 0;
      dirty_bits[4] <= 0;
      dirty_bits[5] <= 0;
      dirty_bits[6] <= 0;
      dirty_bits[7] <= 0;
      dirty_bits[8] <= 0;
      dirty_bits[9] <= 0;
      dirty_bits[10] <= 0;
      dirty_bits[11] <= 0;
      dirty_bits[12] <= 0;
      dirty_bits[13] <= 0;
      dirty_bits[14] <= 0;
      dirty_bits[15] <= 0;

      tag_array[0] <= 0;
      tag_array[1] <= 0;
      tag_array[2] <= 0;
      tag_array[3] <= 0;
      tag_array[4] <= 0;
      tag_array[5] <= 0;
      tag_array[6] <= 0;
      tag_array[7] <= 0;
      tag_array[8] <= 0;
      tag_array[9] <= 0;
      tag_array[10] <= 0;
      tag_array[11] <= 0;
      tag_array[12] <= 0;
      tag_array[13] <= 0;
      tag_array[14] <= 0;
      tag_array[15] <= 0;

      data_array[0] <= 0;
      data_array[1] <= 0;
      data_array[2] <= 0;
      data_array[3] <= 0;
      data_array[4] <= 0;
      data_array[5] <= 0;
      data_array[6] <= 0;
      data_array[7] <= 0;
      data_array[8] <= 0;
      data_array[9] <= 0;
      data_array[10] <= 0;
      data_array[11] <= 0;
      data_array[12] <= 0;
      data_array[13] <= 0;
      data_array[14] <= 0;
      data_array[15] <= 0;

      is_write_back_out <= 0;
      hit_count <= 0;
      miss_count <= 0;
    end
  endfunction

  function void handle_memory_output_valid_func(input [SET_BITS - 1:0] idx, input [27 - SET_BITS:0] tg_bits, input [127:0] mem_dout);
    begin
      valid_bits[idx] <= 1;
      dirty_bits[idx] <= 0;
      tag_array[idx] <= tg_bits;
      data_array[idx] <= mem_dout;
    end
  endfunction

  function void handle_write_back_func(input [SET_BITS - 1:0] idx);
    begin
      dirty_bits[idx] <= 0;
    end
  endfunction

  function void handle_hit_func(input mem_rw_l, input [31:0] din_l, input [1:0] block_offset_l, input [SET_BITS - 1:0] idx);
    begin
      if (mem_rw_l) begin
        dirty_bits[idx] <= 1;
        case (block_offset_l)
          2'b00: data_array[idx][31:0] <= din_l;
          2'b01: data_array[idx][63:32] <= din_l;
          2'b10: data_array[idx][95:64] <= din_l;
          2'b11: data_array[idx][127:96] <= din_l;
        endcase
      end
    end
  endfunction

  function void update_counters_func(input is_hit, input is_data_ready, input is_valid);
    begin
      if (is_hit) begin
        hit_count <= hit_count + 1;
      end else if (is_data_ready && is_valid) begin
        miss_count <= miss_count + 1;
      end
    end
  endfunction

  always @(posedge clk) begin
    if (reset) begin
      initialize_cache();
    end else begin
      is_write_back_out <= is_write_back_next;
      if (mem_is_output_valid) begin
        handle_memory_output_valid_func(index, tag_bits, memory_dout);
      end else begin
        if (is_write_back) begin
          if (is_data_mem_ready) begin
            handle_write_back_func(index);
          end
        end else begin
          if (is_hit_next) begin
            handle_hit_func(mem_rw, din, block_offset, index);
          end
        end
      end

      if (is_hit_next) begin
        update_counters_func(1, 0, 0);
      end else begin
        if (is_data_mem_ready) begin
          if (is_input_valid) begin
            update_counters_func(0, 1, 1);
          end else begin
            update_counters_func(0, 1, 0);
          end
        end else begin
          update_counters_func(0, 0, 0);
        end
      end
    end
  end
endmodule
