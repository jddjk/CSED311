module CacheControl #(parameter NUM_WAYS = 2,
                      parameter SET_BITS = 3,
                      parameter WAY_BITS = 1) (
    input [31:0] addr,
    input [27 - SET_BITS:0] tag_bits,
    input [SET_BITS - 1:0] index,
    input is_input_valid,
    input mem_is_output_valid,
    input [NUM_WAYS-1:0] valid_bits,
    input [NUM_WAYS-1:0] dirty_bits,
    input [NUM_WAYS-1:0][27 - SET_BITS:0] tag_array,
    input [NUM_WAYS-1:0][WAY_BITS-1:0] fifo_queue,
    input [WAY_BITS-1:0] fifo_head,
    input [WAY_BITS-1:0] fifo_tail,

    output reg is_write_back_next,
    output reg mem_read,
    output reg mem_write,
    output reg [31:0] line_address,
    output reg is_hit_next,
    output reg [WAY_BITS-1:0] target_way,
    output reg is_full
);
/* verilator lint_off WIDTHTRUNC */
  integer i;
  reg [WAY_BITS-1:0] empty_way;

  function automatic [0:0] check_hit;
    input [NUM_WAYS-1:0] valid_bits_local;
    input [NUM_WAYS-1:0][27 - SET_BITS:0] tag_array_local;
    input [27 - SET_BITS:0] tag_bits_local;
    integer j;
    begin
      check_hit = 0;
      for (j = 0; j < NUM_WAYS; j = j + 1) begin
        if (tag_array_local[j] == tag_bits_local) begin
          if (valid_bits_local[j]) begin
            target_way = j;
            check_hit = 1;
          end
        end
      end
    end
  endfunction

  function automatic [0:0] check_empty_way;
    input [NUM_WAYS-1:0] valid_bits_local;
    integer j;
    begin
      check_empty_way = 0;
      for (j = 0; j < NUM_WAYS; j = j + 1) begin
        if (!valid_bits_local[j]) begin
          empty_way = j;
          check_empty_way = 1;
        end
      end
    end
  endfunction

  function automatic void set_memory_operations;
    input [NUM_WAYS-1:0] dirty_bits_local;
    input [NUM_WAYS-1:0][27 - SET_BITS:0] tag_array_local;
    input [WAY_BITS-1:0] target_way_local;
    input [SET_BITS-1:0] index_local;
    input [31:0] addr_local;
    begin
      if (valid_bits[target_way_local]) begin
        if (dirty_bits_local[target_way_local]) begin //target way가 valid하고 dirty bit 있으면 write back
          {is_write_back_next, mem_read, mem_write} = 3'b101;
          line_address = {tag_array_local[target_way_local], index_local, 4'b0000};// memory 주소 = tag + index
        end else begin // target way가 valid하고 dirty bit 없으면 read
          {is_write_back_next, mem_read, mem_write} = 3'b010;
          line_address[31:4] = addr_local[31:4];
          line_address[3:0] = 4'b0000;
        end
      end else begin // target way가 invalid하면 read
        {is_write_back_next, mem_read, mem_write} = 3'b010;
        line_address[31:4] = addr_local[31:4];
        line_address[3:0] = 4'b0000;
      end
    end
  endfunction

  always @(*) begin
    mem_read = 0;
    target_way = 0;
    is_full = 1;
    empty_way = 0;
    mem_write = 0;
    is_hit_next = 0;
    line_address = 32'b0;
    is_write_back_next = 0;
    is_hit_next = check_hit(valid_bits, tag_array, tag_bits);

    if (!is_hit_next) begin
      is_full = !check_empty_way(valid_bits);
      if (is_full) begin
        target_way = fifo_queue[fifo_head]; // replacement policy: FIFO
      end else begin
        target_way = empty_way;
      end
    end

    if (!is_hit_next && !mem_is_output_valid && is_input_valid) begin
      set_memory_operations(dirty_bits, tag_array, target_way, index, addr);
    end else begin
      {is_write_back_next, mem_read, mem_write} = 3'b000;
      line_address = 32'b0;
    end
  end
endmodule
