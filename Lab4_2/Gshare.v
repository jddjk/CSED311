// Gshare Module: Implements a Gshare branch predictor
// with a 32-entry BTB and a 2-bit branch predictor

module Gshare  (input clk,
                input reset,
                input [31:0] current_pc,      // Current PC address
                input [31:0] IF_ID_pc,       // PC address in the IF/ID pipeline register
                input [31:0] ID_EX_pc,       // PC address in the ID/EX pipeline register
                input [31:0] ID_EX_imm,      // Immediate value in the ID/EX pipeline register
                input [31:0] EX_alu_result,  // ALU result in the EX stage
                input ID_EX_is_branch,       // Flag indicating a branch instruction in ID/EX stage
                input ID_EX_is_jal,          // Flag indicating a JAL instruction in ID/EX stage
                input ID_EX_is_jalr,         // Flag indicating a JALR instruction in ID/EX stage
                input EX_alu_bcond,          // Branch condition determination result in EX stage
                input [4:0] ID_EX_bhsr,      // Branch History Shift Register in the ID/EX stage
                output [4:0] current_bhsr,   // Current Branch History Shift Register
                output reg is_flush,         // Flush signal for control flow changes
                output reg [31:0] next_pc    // Next PC address
);
    // Type definitions
    typedef reg [24:0] TagType;       // Type for BTB tag (uses upper 25 bits of the PC)
    typedef reg [31:0] BTBType;       // Type for BTB entry (branch target address)
    typedef reg [31:0] TableType;     // Type for a 32-entry table
    typedef reg [1:0] CounterType;    // 2-bit branch predictor type
    typedef reg [4:0] indexType;      // Type for BTB index (5-bit)

    integer i;

    // Calculate PC + immediate value
    wire [31:0] pc_plus_imm;
    assign pc_plus_imm = ID_EX_pc + ID_EX_imm;

    // Global Branch History Register (GHR)
    reg [4:0] global_bhsr;
    assign current_bhsr = global_bhsr;

    // 2-bit Branch Predictor Table (32 entries)
    CounterType current_counter[0:31];
    CounterType next_counter;

    // BTB Tables (32 entries)
    reg [31:0] VAL_table;           // BTB Valid Table
    reg [31:0] BRANCH_table;        // BTB Branch Table

    TagType TAG_table[0:31];        // BTB Tag Table
    BTBType BTB_table[0:31];        // BTB Branch Target Address Table

    // Control signals
    reg value;                      // BTB entry validity
    reg Branch_value;               // BTB entry branch status

    // Temporary variables
    TagType TAG;                    // Current Tag value
    BTBType BTB;                    // Current Branch Target Address

    // Function to calculate BTB index (5-bit index)
    function indexType get_btb_index(input [31:0] pc);
        return pc[6:2]; // 5-bit index for 32 entries
    endfunction

    // Function to calculate BTB tag (uses upper 25 bits)
    function TagType get_tag(input [31:0] pc);
        return pc[31:7]; // Remaining bits as tag
    endfunction

    // Calculate current and next BTB index and tag
    indexType currentBTB_index;
    indexType nextBTB_index;
    TagType current_tag;
    TagType next_tag;

    always_comb begin
        currentBTB_index = get_btb_index(current_pc);
        nextBTB_index = get_btb_index(ID_EX_pc);
        current_tag = get_tag(current_pc);
        next_tag = get_tag(ID_EX_pc);
    end

    // Function to handle JAL instruction
    function automatic void handle_jal();
        value = 1'b1;            // BTB entry is valid
        TAG = next_tag;          // Set the tag
        BTB = pc_plus_imm;       // Set the branch target address
        Branch_value = 1'b0;     // Not a branch (JALR/JAL is always a jump)

        // Flush condition (flush if predicted target differs from actual target)
        if (IF_ID_pc != pc_plus_imm)
            is_flush = 1'b1;
        else
            is_flush = 1'b0;
    endfunction

    // Function to handle branch instruction
    function automatic void handle_branch();
        value = 1'b1;            // BTB entry is valid
        TAG = next_tag;          // Set the tag
        BTB = pc_plus_imm;       // Set the branch target address
        Branch_value = 1'b1;     // Is a branch

        // Flush condition (flush if predicted target differs from actual target)
        if (EX_alu_bcond && (pc_plus_imm != IF_ID_pc))
            is_flush = 1'b1;
        else if (!EX_alu_bcond && (IF_ID_pc != increment_pc(ID_EX_pc)))
            is_flush = 1'b1;
        else
            is_flush = 1'b0;
    endfunction

    // Function to handle JALR instruction
    function automatic void handle_jalr();
        value = 1'b1;            // BTB entry is valid
        TAG = next_tag;          // Set the tag
        BTB = EX_alu_result;     // Set the branch target address
        Branch_value = 1'b0;     // Not a branch (JALR is always a jump)

        // Flush condition (flush if predicted target differs from actual target)
        if (IF_ID_pc != EX_alu_result)
            is_flush = 1'b1;
        else
            is_flush = 1'b0;
    endfunction

    // Default operation (for non-branch/jump instructions)
    function automatic void default_case();
        value = 0;               // BTB entry is invalid
        TAG = 0;                 // Tag is invalid
        BTB = 0;                 // Branch target address is invalid
        Branch_value = 0;        // Branch status is invalid
        is_flush = 1'b0;         // No flush
    endfunction

    // Function to calculate the next PC
    function automatic void calculate_next_pc(input is_flush_condition);
        if (is_flush_condition) begin
            // flush
            if (ID_EX_is_jal) begin
                next_pc = pc_plus_imm; // Target address of the JAL instruction
            end
            else if (ID_EX_is_branch) begin
                if (EX_alu_bcond)
                    next_pc = pc_plus_imm; // Branch target address if branch taken
                else
                    next_pc = increment_pc(ID_EX_pc); // Next instruction if branch not taken
            end
            else if (ID_EX_is_jalr) begin
                next_pc = EX_alu_result; // Target address of the JALR instruction
            end
            else begin
                next_pc = increment_pc(current_pc); // Next instruction
            end
        end
        else begin
            // When no flush is required
            if (TAG_table[currentBTB_index] == current_tag && VAL_table[currentBTB_index] && (!BRANCH_table[currentBTB_index] || current_counter[currentBTB_index ^ global_bhsr] > 2'b01)) begin
                next_pc = BTB_table[currentBTB_index]; // Predicted BTB target address
            end
            else begin
                next_pc = increment_pc(current_pc); // Next instruction
            end
        end
    endfunction

    // Function to update the 2-bit branch predictor (saturation-based)
    function automatic void update_counter();
        next_counter = current_counter[nextBTB_index ^ ID_EX_bhsr];

        if (ID_EX_is_branch) begin
            if (EX_alu_bcond) begin
                // Branch taken
                case (next_counter)
                    2'b00: next_counter = 2'b01; // Strongly not taken -> Weakly not taken
                    2'b01: next_counter = 2'b10; // Weakly not taken -> Weakly taken
                    2'b10: next_counter = 2'b11; // Weakly taken -> Strongly taken
                    2'b11: next_counter = 2'b11; // Strongly taken -> Strongly taken (no change)
                    default: next_counter = 2'b01; // Default case: Weakly not taken
                endcase
            end
            else begin
                // Branch not taken
                case (next_counter)
                    2'b00: next_counter = 2'b00; // Strongly not taken -> Strongly not taken (no change)
                    2'b01: next_counter = 2'b00; // Weakly not taken -> Strongly not taken
                    2'b10: next_counter = 2'b01; // Weakly taken -> Weakly not taken
                    2'b11: next_counter = 2'b10; // Strongly taken -> Weakly taken
                    default: next_counter = 2'b01; // Default case: Weakly not taken
                endcase
            end
        end
    endfunction

    // Function to update the 2-bit branch predictor with hysteresis
    // function automatic void update_counter();
    //     next_counter = current_counter[nextBTB_index ^ ID_EX_bhsr];

    //     if (ID_EX_is_branch) begin
    //         if (EX_alu_bcond) begin
    //             // Branch taken
    //             case (next_counter)
    //                 2'b00: next_counter = 2'b01; // Strongly not taken -> Weakly not taken
    //                 2'b01: next_counter = 2'b11; // Weakly not taken -> Strongly taken
    //                 2'b10: next_counter = 2'b11; // Weakly taken -> Strongly taken
    //                 2'b11: next_counter = 2'b11; // Strongly taken -> Strongly taken
    //                 default: next_counter = 2'b01; // Default case: Weakly not taken
    //             endcase
    //         end
    //         else begin
    //             // Branch not taken
    //             case (next_counter)
    //                 2'b00: next_counter = 2'b00; // Strongly not taken -> Strongly not taken
    //                 2'b01: next_counter = 2'b00; // Weakly not taken -> Strongly not taken
    //                 2'b10: next_counter = 2'b00; // Weakly taken -> Strongly not taken
    //                 2'b11: next_counter = 2'b10; // Strongly taken -> Weakly taken
    //                 default: next_counter = 2'b01; // Default case: Weakly not taken
    //             endcase
    //         end
    //     end
    // endfunction

    // Function to initialize all tables and counters
    function automatic void init();
        for (i = 0; i < 32; i = i + 1) begin
            VAL_table[i] <= 0;       // Initialize valid table to 0
            TAG_table[i] <= 0;       // Initialize tag table to 0
            BTB_table[i] <= 0;       // Initialize branch target address table to 0
            BRANCH_table[i] <= 0;    // Initialize branch table to 0
            current_counter[i] <= 2'b01; // Initialize weakly not taken (2'b01)
        end
        global_bhsr <= 0;            // Initialize global branch history register to 0
    endfunction

// Function to update the BTB and related tables
    function automatic void update_tables();
        VAL_table[nextBTB_index] <= value;        // Update the valid table with the current validity value
        TAG_table[nextBTB_index] <= TAG;          // Update the tag table with the current tag value
        BTB_table[nextBTB_index] <= BTB;          // Update the BTB table with the current branch target address
        BRANCH_table[nextBTB_index] <= Branch_value; // Update the branch table with the current branch status
    endfunction

    // Always block for combinational logic
    always @(*) begin
        // Determine which branch/jump handling function to call
        if (ID_EX_is_jal) begin
            handle_jal(); // Handle JAL instruction
        end
        else if (ID_EX_is_branch) begin
            handle_branch(); // Handle branch instruction
        end
        else if (ID_EX_is_jalr) begin
            handle_jalr(); // Handle JALR instruction
        end
        else begin
            default_case(); // Handle non-branch/jump instructions
        end

        // Calculate the next PC based on the flush condition
        calculate_next_pc(is_flush);

        // Update the 2-bit branch predictor counter
        update_counter();
    end

    // Always block for sequential logic (triggered on the rising edge of the clock)
    always @(posedge clk) begin
        if (reset) begin
            // Initialize all tables and counters on reset
            init();
        end
        else begin
            if (is_flush) begin
                // Update BTB and related tables if a flush occurs
                update_tables();
            end
            if (ID_EX_is_branch) begin
                // Update the branch predictor counter
                current_counter[nextBTB_index ^ ID_EX_bhsr] <= next_counter;

                // Update the global branch history register (GHR)
                global_bhsr <= {global_bhsr[3:0], EX_alu_bcond};
            end
        end
    end

    // Function to increment the PC by 4 (next instruction)
    function automatic [31:0] increment_pc(
        input [31:0] current_value
    );
    begin
        increment_pc = current_value + 4; // Increment PC by 4
    end
    endfunction
endmodule
