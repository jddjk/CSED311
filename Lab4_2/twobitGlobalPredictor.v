module twobitGlobalPredictor (
    input clk,
    input reset,
    input [31:0] current_pc,
    input [31:0] IF_ID_pc,
    input ID_EX_is_branch,
    input ID_EX_is_jal,
    input ID_EX_is_jalr,
    input [31:0] ID_EX_pc,
    input [31:0] ID_EX_imm,
    input [31:0] EX_alu_result,
    input EX_alu_bcond,
    output reg is_flush,
    output reg [31:0] next_pc
);
    /* verilator lint_off WIDTHEXPAND */
    typedef reg [24:0] TagType;
    typedef reg [31:0] BTBType;
    typedef reg [1:0] CounterType;
    typedef reg [4:0] indexType;
    integer i;
    wire [31:0] pc_plus_imm;
    assign pc_plus_imm = ID_EX_pc + ID_EX_imm;

    reg [63:0] VAL_table;
    reg [63:0] BRANCH_table;

    TagType TAG_table[0:63];
    BTBType BTB_table[0:63];

    reg value;
    reg Branch_value;
    TagType TAG;
    BTBType BTB;

    wire [4:0] currentBTB_index = current_pc[6:2];
    wire [24:0] current_tag = current_pc[31:7];

    wire [4:0] nextBTB_index = ID_EX_pc[6:2];
    wire [24:0] next_tag = ID_EX_pc[31:7];

    CounterType current_counter[0:31];
    CounterType next_counter;

    function automatic void calculate_next_pc_jal();
        if (is_flush) begin
            next_pc = pc_plus_imm;
        end
        else begin
            if (TAG_table[currentBTB_index] == current_tag && VAL_table[currentBTB_index] && (!BRANCH_table[currentBTB_index] || current_counter[currentBTB_index] > 2'b01)) begin
                next_pc = BTB_table[currentBTB_index];
            end
            else begin
                next_pc = increment_pc(current_pc);
            end
        end
    endfunction

    function automatic void calculate_next_pc_branch();
        if (is_flush) begin
            if (EX_alu_bcond)
                next_pc = pc_plus_imm;
            else
                next_pc = increment_pc(ID_EX_pc);
        end
        else begin
            if (TAG_table[currentBTB_index] == current_tag && VAL_table[currentBTB_index] && (!BRANCH_table[currentBTB_index] || current_counter[currentBTB_index] > 2'b01)) begin
                next_pc = BTB_table[currentBTB_index];
            end
            else begin
                next_pc = increment_pc(current_pc);
            end
        end
    endfunction

    function automatic void calculate_next_pc_jalr();
        if (is_flush) begin
            next_pc = EX_alu_result;
        end
        else begin
            if (TAG_table[currentBTB_index] == current_tag && VAL_table[currentBTB_index] && (!BRANCH_table[currentBTB_index] || current_counter[currentBTB_index] > 2'b01)) begin
                next_pc = BTB_table[currentBTB_index];
            end
            else begin
                next_pc = increment_pc(current_pc);
            end
        end
    endfunction

    function automatic void calculate_next_pc_default();
        if (is_flush) begin
            next_pc = increment_pc(current_pc);
        end
        else begin
            if (TAG_table[currentBTB_index] == current_tag && VAL_table[currentBTB_index] && (!BRANCH_table[currentBTB_index] || current_counter[currentBTB_index] > 2'b01)) begin
                next_pc = BTB_table[currentBTB_index];
            end
            else begin
                next_pc = increment_pc(current_pc);
            end
        end
    endfunction

    function automatic void handle_jal();
        value = 1'b1;
        TAG = next_tag;
        BTB = pc_plus_imm;
        Branch_value = 1'b0;

        if (IF_ID_pc != pc_plus_imm)
            is_flush = 1'b1;
        else
            is_flush = 1'b0;

        calculate_next_pc_jal();
    endfunction

    function automatic void handle_branch();
        value = 1'b1;
        TAG = next_tag;
        BTB = pc_plus_imm;
        Branch_value = 1'b1;

        if (EX_alu_bcond && (pc_plus_imm != IF_ID_pc))
            is_flush = 1'b1;
        else if (!EX_alu_bcond && (IF_ID_pc != increment_pc(ID_EX_pc)))
            is_flush = 1'b1;
        else
            is_flush = 1'b0;

        calculate_next_pc_branch();
    endfunction

    function automatic void handle_jalr();
        value = 1'b1;
        TAG = next_tag;
        BTB = EX_alu_result;
        Branch_value = 1'b0;

        if (IF_ID_pc != EX_alu_result)
            is_flush = 1'b1;
        else
            is_flush = 1'b0;
        calculate_next_pc_jalr();
    endfunction

    function automatic void init();
        for (i = 0; i < 32; i = i + 1) begin
            VAL_table[i] <= 0;
            TAG_table[i] <= 0;
            BTB_table[i] <= 0;
            BRANCH_table[i] <= 0;
            current_counter[i] <= 0;
        end
    endfunction

    function automatic void default_case();
        value = 0;
        TAG = 0;
        BTB = 0;
        Branch_value = 0;

        is_flush = 1'b0;
        calculate_next_pc_default();
    endfunction

    function automatic void update_counter(input branch_taken);
        if (ID_EX_is_branch) begin
            if (branch_taken) begin
                if (current_counter[nextBTB_index] != 2'b11)
                    next_counter = current_counter[nextBTB_index] + 1'b1;
                else
                    next_counter = current_counter[nextBTB_index];
            end
            else begin
                if (current_counter[nextBTB_index] != 2'b00)
                    next_counter = current_counter[nextBTB_index] - 1'b1;
                else
                    next_counter = current_counter[nextBTB_index];
            end
        end
        else begin
            next_counter = current_counter[nextBTB_index];
        end
    endfunction

    always @(*) begin
        if (ID_EX_is_jal) begin
            handle_jal();
        end
        else if (ID_EX_is_branch) begin
            handle_branch();
        end
        else if (ID_EX_is_jalr) begin
            handle_jalr();
        end
        else begin
            default_case();
        end
    end

    always @(*) begin
        next_counter = current_counter[nextBTB_index];
        update_counter(EX_alu_bcond);
    end

    always @(posedge clk) begin
        if (reset) begin
            init();
        end
        else begin
            if (is_flush) begin
                update_tables();
            end
            current_counter[nextBTB_index] <= next_counter;
        end
    end

    function automatic void update_tables();
        VAL_table[nextBTB_index] <= value;
        TAG_table[nextBTB_index] <= TAG;
        BTB_table[nextBTB_index] <= BTB;
        BRANCH_table[nextBTB_index] <= Branch_value;
    endfunction

    function automatic [31:0] increment_pc(
        input [31:0] current_value
    );
    begin
        increment_pc = current_value + 4;
    end
    endfunction
    /* verilator lint_on WIDTHEXPAND */
endmodule
