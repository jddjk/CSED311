module Direct_mapped_CacheControl #(parameter SET_BITS = 4) (
    input [31:0] addr,
    input [27 - SET_BITS:0] tag_bits,
    input [SET_BITS - 1:0] index,
    input is_input_valid,
    input mem_is_output_valid,
    input valid_bits,
    input dirty_bits,
    input [27 - SET_BITS:0] tag_array,
    output reg is_write_back_next,
    output reg mem_read,
    output reg mem_write,
    output reg [31:0] line_address,
    output reg is_hit_next
);

  function is_hit;
    input isValid;
    input [27 - SET_BITS:0] TAG;
    input [27 - SET_BITS:0] TAG_BITS;
    begin
      is_hit = (isValid && (TAG == TAG_BITS));
    end
  endfunction

  function [31:0] calculate_line_address;
    input is_write_back;
    input [31:0] address;
    input [27 - SET_BITS:0] TAG;
    input [SET_BITS - 1:0] idx;
    begin
      if (is_write_back) begin
        calculate_line_address = {TAG, idx, 4'b0};
      end else begin
        calculate_line_address[3:0] = 0;
        calculate_line_address[31:4] = address[31:4];
      end
    end
  endfunction

  always @(*) begin
    is_write_back_next = 0;
    mem_read = 0;
    mem_write = 0;
    line_address = 32'b0;
    is_hit_next = 0;

    is_hit_next = is_hit(valid_bits, tag_array, tag_bits);

    if (!is_hit_next) begin
      if (is_input_valid) begin
        if (!mem_is_output_valid) begin
          if (valid_bits) begin
            if (dirty_bits) begin
              is_write_back_next = 1;
              mem_write = 1;
              line_address = calculate_line_address(1, addr, tag_array, index);
            end else begin
              mem_read = 1;
              line_address = calculate_line_address(0, addr, tag_array, index);
            end
          end else begin
            mem_read = 1;
            line_address = calculate_line_address(0, addr, tag_array, index);
          end
        end
      end
    end
  end
endmodule
