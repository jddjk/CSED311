module alwaysTaken (
    input clk,
    input reset,
    input [31:0] current_pc,
    input [31:0] IF_ID_pc,
    input ID_EX_is_branch,
    input ID_EX_is_jal,
    input ID_EX_is_jalr,
    input [4:0] ID_EX_bhsr,  
    input [31:0] ID_EX_pc,
    input [31:0] ID_EX_imm,
    input [31:0] EX_alu_result,
    input EX_alu_bcond,
    output [4:0] current_bhsr,
    output reg is_flush,
    output reg [31:0] next_pc
);
    /* verilator lint_off WIDTHEXPAND */
    typedef reg [24:0] TagType;
    typedef reg [31:0] BTBType;

    wire [31:0]pc_plus_imm;
    assign pc_plus_imm = ID_EX_pc + ID_EX_imm;
    integer i;
    wire [4:0] nextBTB_index = ID_EX_pc[6:2];
    reg [31:0] val_table;

    TagType tag_table[0:31];
    BTBType btb_table[0:31];    
    reg new_val;
    TagType new_tag;
    BTBType new_btb;

    wire [4:0] currentBTB_index = current_pc[6:2];
    wire [24:0] current_tag = current_pc[31:7];

    task reset_tables;
        integer j;
        begin
            for (j = 0; j < 32; j = j + 1) begin
                val_table[j] <= 0;
                tag_table[j] <= 0;
                btb_table[j] <= 0;
            end
        end
    endtask

    // update table
    always @(posedge clk) begin
        if (reset) begin
            reset_tables();
        end else begin
            update_tables();
        end
    end

    function automatic void initialize_values(
        output reg init_val,
        output reg [24:0] init_tag,
        output reg [31:0] init_btb,
        output reg init_flush,
        output reg [31:0] init_next_pc
    );
    begin
        init_val = val_table[nextBTB_index];
        init_tag = tag_table[nextBTB_index];
        init_btb = btb_table[nextBTB_index];
        init_flush = 1'b0;
        init_next_pc = increment_pc(current_pc);
    end
    endfunction

    function automatic void update_jal(
        input [31:0] jal_pc,
        input [31:0] jal_imm,
        output reg jal_val,
        output reg [24:0] jal_tag,
        output reg [31:0] jal_btb,
        output reg jal_flush,
        output reg [31:0] jal_next_pc
    );
    begin
        jal_val = 1'b1;
        jal_tag = jal_pc[31:7];
        jal_btb = jal_pc + jal_imm;
        if (IF_ID_pc != jal_btb)
            jal_flush = 1'b1;
        else
            jal_flush = 1'b0;
        if (jal_flush)
            jal_next_pc = jal_btb;
    end
    endfunction

    function automatic void update_branch(
        input [31:0] br_pc,
        input [31:0] br_imm,
        input br_alu_bcond,
        output reg br_val,
        output reg [24:0] br_tag,
        output reg [31:0] br_btb,
        /* verilator lint_off UNOPTFLAT */
        output reg br_flush,
        /* verilator lint_on UNOPTFLAT */
        output reg [31:0] br_next_pc
    );
    begin
        br_val = 1'b1;
        br_tag = br_pc[31:7];
        br_btb = br_pc + br_imm;
        if (br_flush) begin
            if (br_alu_bcond)
                br_next_pc = br_btb;
            else
                br_next_pc = increment_pc(br_pc);

        end
        if (br_alu_bcond && (br_btb != IF_ID_pc))
            br_flush = 1'b1;
        else if (!br_alu_bcond && (IF_ID_pc != br_pc + 4))
            br_flush = 1'b1;
        else
            br_flush = 1'b0;
    end
    endfunction

    function automatic void update_jalr(
        input [31:0] jalr_pc,
        input [31:0] jalr_alu_result,
        output reg jalr_val,
        output reg [24:0] jalr_tag,
        output reg [31:0] jalr_btb,
        output reg jalr_flush,
        output reg [31:0] jalr_next_pc
    );
    begin
        jalr_val = 1'b1;
        jalr_tag = jalr_pc[31:7];
        jalr_btb = jalr_alu_result;
        if (IF_ID_pc != jalr_btb)
            jalr_flush = 1'b1;
        else
            jalr_flush = 1'b0;
        if (jalr_flush)
            jalr_next_pc = jalr_btb;
    end
    endfunction

    function automatic void update_default(
        output reg default_val,
        output reg [24:0] default_tag,
        output reg [31:0] default_btb,
        output reg default_flush,
        output reg [31:0] default_next_pc
    );
    begin
        default_val = 0;
        default_tag = 0;
        default_btb = 0;
        default_flush = 1'b0;
        default_next_pc = increment_pc(current_pc);
    end
    endfunction

    function automatic void set_next_pc_flush_jal(
        input [31:0] pc_added_immediate,
        output reg [31:0] next_pc_val
    );
    begin
        next_pc_val = pc_added_immediate;
    end
    endfunction

    function automatic void set_next_pc_flush_branch(
        input [31:0] pc_added_immediate,
        input [31:0] id_ex_pc,
        input alu_bcond,
        output reg [31:0] next_pc_val
    );
    begin
        if (alu_bcond)
            next_pc_val = pc_added_immediate;
        else
            next_pc_val = increment_pc(id_ex_pc);
    end
    endfunction

    function automatic void set_next_pc_flush_jalr(
        input [31:0] alu_result,
        output reg [31:0] next_pc_val
    );
    begin
        next_pc_val = alu_result;
    end
    endfunction

    function automatic void set_next_pc_flush_default(
        input [31:0] currentPC,
        output reg [31:0] next_pc_val
    );
    begin
        next_pc_val = increment_pc(currentPC);
    end
    endfunction

    function automatic void set_next_pc_not_flush(
        input [4:0] BTB_index,
        input [24:0] value_TAG,
        input [31:0] currentPC,
        output reg [31:0] next_pc_val
    );
    begin
        if (tag_table[BTB_index] == value_TAG && val_table[BTB_index])
            next_pc_val = btb_table[BTB_index];
        else
            next_pc_val = increment_pc(currentPC);
    end
    endfunction

    function automatic [31:0] increment_pc(
        input [31:0] current_value
    );
    begin
        increment_pc = current_value + 4;
    end
    endfunction

    always @(*) begin
        initialize_values(new_val, new_tag, new_btb, is_flush, next_pc);

        if (ID_EX_is_jal) begin
            update_jal(ID_EX_pc, ID_EX_imm, new_val, new_tag, new_btb, is_flush, next_pc);
        end
        else if (ID_EX_is_branch) begin
            update_branch(ID_EX_pc, ID_EX_imm, EX_alu_bcond, new_val, new_tag, new_btb, is_flush, next_pc);
        end
        else if (ID_EX_is_jalr) begin
            update_jalr(ID_EX_pc, EX_alu_result, new_val, new_tag, new_btb, is_flush, next_pc);
        end
        else begin
            update_default(new_val, new_tag, new_btb, is_flush, next_pc);
        end
        if (is_flush) begin
            if (ID_EX_is_jal) begin
                set_next_pc_flush_jal(pc_plus_imm, next_pc);
            end
            else if (ID_EX_is_branch) begin
                set_next_pc_flush_branch(pc_plus_imm, ID_EX_pc, EX_alu_bcond, next_pc);
            end
            else if (ID_EX_is_jalr) begin
                set_next_pc_flush_jalr(EX_alu_result, next_pc);
            end
            else begin
                set_next_pc_flush_default(current_pc, next_pc);
            end
        end
        else begin
            set_next_pc_not_flush(currentBTB_index, current_tag, current_pc, next_pc);
        end
    end

    task update_tables;
        begin
            if (is_flush) begin
                val_table[nextBTB_index] <= new_val;
                tag_table[nextBTB_index] <= new_tag;
                btb_table[nextBTB_index] <= new_btb;
            end
        end
    endtask
    /* verilator lint_on WIDTHEXPAND */
endmodule
