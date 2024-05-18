module alpha21264 (
    input clk,
    input reset,
    input [31:0] current_pc,
    input [31:0] IF_ID_pc,
    input [31:0] ID_EX_pc,
    input [31:0] ID_EX_imm,
    input [31:0] EX_alu_result,
    input ID_EX_is_branch,
    input ID_EX_is_jal,
    input ID_EX_is_jalr,
    input EX_alu_bcond,
    input [5-1:0] ID_EX_bhsr,
    output [5-1:0] current_bhsr,
    output reg is_flush,
    output reg [31:0] next_pc
);

    localparam TAG_BIT = 32 - 5 - 2;
    integer i;

    wire [31:0] pc_plus_imm;
    assign pc_plus_imm = ID_EX_pc + ID_EX_imm;

    // Global History Shift Register and Prediction Tables
    reg [11:0] GlobalHistoryRegister;
    reg [7:0] LHT [0:255];
    reg [1:0] local_predictor [0:255];
    reg [1:0] global_predictor [0:1023];
    reg [1:0] choice_predictor [0:1023];

    // Branch Target Buffer (BTB)
    reg val_table [0:2 ** 5 - 1];
    reg is_branch_table [0:2 ** 5 - 1];
    reg [TAG_BIT - 1:0] tag_table [0:2 ** 5 - 1];
    reg [31:0] btb_table [0:2 ** 5 - 1];

    reg new_val;
    reg new_is_branch;
    reg [TAG_BIT - 1:0] new_tag;
    reg [31:0] new_btb;

    wire [5-1:0] btb_idx = current_pc[2 + 5 - 1:2];
    wire [TAG_BIT - 1:0] tag = current_pc[31:2 + 5];
    wire [5-1:0] EX_btb_idx = ID_EX_pc[2 + 5 - 1:2];
    wire [TAG_BIT - 1:0] EX_tag = ID_EX_pc[31:2 + 5];
    
    wire global_taken;
    wire local_taken;
    wire chosen_taken;
    wire predicted_taken;

    reg [1:0] history_local;
    reg [1:0] history_choice;

    assign global_taken = (global_predictor[GlobalHistoryRegister[9:0]] >= 2);
    assign local_taken = (local_predictor[LHT[current_pc[7:0]]] >= 2);
    assign chosen_taken = (choice_predictor[GlobalHistoryRegister[9:0]] >= 2 ? global_taken : local_taken);
    assign predicted_taken = (tag_table[btb_idx] == tag && val_table[btb_idx] && (!is_branch_table[btb_idx] || chosen_taken));

    // Calculating flush and next pc
    function automatic [31:0] get_next_pc(
        input [TAG_BIT-1:0] newTag,
        input [31:0] newBtb,
        input newIsBranch,
        input isFlush,
        input [31:0] pcPlusImm,
        input [31:0] aluResult
    );
        if (isFlush) begin
            if (ID_EX_is_jal) begin
                return pcPlusImm;
            end else if (ID_EX_is_branch) begin
                if (EX_alu_bcond) return pcPlusImm;
                else return ID_EX_pc + 4;
            end else if (ID_EX_is_jalr) begin
                return aluResult;
            end else begin
                return current_pc + 4;
            end
        end else begin
            if (predicted_taken) begin
                if (newTag == tag_table[btb_idx]) begin
                    if (val_table[btb_idx]) begin
                        if (!newIsBranch) begin
                            return newBtb;
                        end else if (chosen_taken) begin
                            return newBtb;
                        end
                    end
                end
            end
            return current_pc + 4;
        end
    endfunction

    function automatic void update_jal_values(
        output reg newVal,
        output reg [TAG_BIT-1:0] newTag,
        output reg [31:0] newBtb,
        output reg newIsBranch,
        output reg isFlush
    );
        newVal = 1'b1;
        newTag = EX_tag;
        newBtb = pc_plus_imm;
        newIsBranch = 1'b0;
        isFlush = (IF_ID_pc != pc_plus_imm) ? 1'b1 : 1'b0;
    endfunction

    function automatic void update_jalr_values(
        output reg newVal,
        output reg [TAG_BIT-1:0] newTag,
        output reg [31:0] newBtb,
        output reg newIsBranch,
        output reg isFlush
    );
        newVal = 1'b1;
        newTag = EX_tag;
        newBtb = EX_alu_result;
        newIsBranch = 1'b0;
        isFlush = (IF_ID_pc != EX_alu_result) ? 1'b1 : 1'b0;
    endfunction

    function automatic void update_default(
        output reg newVal,
        output reg [TAG_BIT-1:0] newTag,
        output reg [31:0] newBtb,
        output reg newIsBranch,
        output reg isFlush
    );
        newVal = 0;
        newTag = 0;
        newBtb = 0;
        newIsBranch = 0;
        isFlush = 1'b0;
    endfunction

    always @(*) begin
        new_val = val_table[EX_btb_idx];
        new_tag = tag_table[EX_btb_idx];
        new_btb = btb_table[EX_btb_idx];
        new_is_branch = is_branch_table[EX_btb_idx];
        is_flush = 1'b0;

        if (ID_EX_is_jal) begin
            update_jal_values(new_val, new_tag, new_btb, new_is_branch, is_flush);
        end else if (ID_EX_is_branch) begin
            new_val = 1'b1;
            new_tag = EX_tag;
            new_btb = pc_plus_imm;
            new_is_branch = 1'b1;
            if (EX_alu_bcond && (pc_plus_imm != IF_ID_pc)) is_flush = 1'b1;
            else if (!EX_alu_bcond && (IF_ID_pc != ID_EX_pc + 4)) is_flush = 1'b0;
        end else if (ID_EX_is_jalr) begin
            update_jalr_values(new_val, new_tag, new_btb, new_is_branch, is_flush);
        end else begin
            update_default(new_val, new_tag, new_btb, new_is_branch, is_flush);
        end

        next_pc = get_next_pc(new_tag, new_btb, new_is_branch, is_flush, pc_plus_imm, EX_alu_result);
    end

    function automatic [1:0] update_predictor(input [1:0] predictor, input taken);
        if (taken && predictor != 2'b11) begin
            predictor = predictor + 1'b1;
        end else if (!taken && predictor != 2'b00) begin
            predictor = predictor - 1'b1;
        end
        return predictor;
    endfunction

    function automatic void update_history_registers_branch(
        output reg [11:0] newGlobalHistoryRegister,
        output reg [1:0] newHistoryLocal,
        output reg [1:0] newHistoryChoice,
        input [11:0] globalHistoryRegister,
        input [1:0] historyLocal,
        input [1:0] historyChoice,
        input branchTaken,
        input localTaken,
        input chosenTaken
    );
        newGlobalHistoryRegister = {globalHistoryRegister[10:0], branchTaken};
        newHistoryLocal = {historyLocal[0], localTaken};
        newHistoryChoice = {historyChoice[0], chosenTaken};
    endfunction

    function automatic void update_history_registers_jump(
        output reg [11:0] newGlobalHistoryRegister,
        output reg [1:0] newHistoryLocal,
        output reg [1:0] newHistoryChoice,
        input [11:0] globalHistoryRegister,
        input [1:0] historyLocal,
        input [1:0] historyChoice,
        input localTaken,
        input chosenTaken
    );
        newGlobalHistoryRegister = {globalHistoryRegister[10:0], 1'b1};
        newHistoryLocal = {historyLocal[0], localTaken};
        newHistoryChoice = {historyChoice[0], chosenTaken};
    endfunction

    function automatic void update_btb_branch(
        input [7:0] pc,
        input [5-1:0] btbIdx,
        input [TAG_BIT-1:0] Tag,
        input [31:0] pcPlusImm
    );
        LHT[pc] <= {LHT[pc][6:0], EX_alu_bcond};
        tag_table[btbIdx] <= Tag;
        btb_table[btbIdx] <= pcPlusImm;
        is_branch_table[btbIdx] <= 1'b1;
    endfunction

    function automatic void update_btb_jump(
        input [7:0] pc,
        input [5-1:0] btbIdx,
        input [TAG_BIT-1:0] Tag,
        input [31:0] pcPlusImm,
        input [31:0] aluResult,
        input isJal
    );
        LHT[pc] <= {LHT[pc][6:0], 1'b1};
        tag_table[btbIdx] <= Tag;
        btb_table[btbIdx] <= isJal ? pcPlusImm : aluResult;
        is_branch_table[btbIdx] <= 1'b0;
    endfunction

    // Update predictors
    always @(posedge clk) begin
        if (reset) begin
            // Reset logic
            for (i = 0; i < (2 ** 5); i = i + 1) begin
                val_table[i] <= 0;
                tag_table[i] <= 0;
                btb_table[i] <= 0;
                is_branch_table[i] <= 0;
            end
            /* verilator lint_off BLKLOOPINIT */ // to prevent loop error
            for (i = 0; i < 256; i = i + 1) begin
                LHT[i] <= 0;
                local_predictor[i] <= 2'b01; // Weakly not taken
            end
            for (i = 0; i < 1024; i = i + 1) begin
                global_predictor[i] <= 2'b01; // Weakly not taken
                choice_predictor[i] <= 2'b01; // Weakly not taken
            end
            /* verilator lint_on BLKLOOPINIT */
            GlobalHistoryRegister <= 0;
            history_local <= 0;
            history_choice <= 0;
            end
        else begin
            if (ID_EX_is_branch) begin
                /* verilator lint_off BLKANDNBLK */
                update_history_registers_branch(GlobalHistoryRegister, history_local, history_choice, GlobalHistoryRegister, history_local, history_choice, EX_alu_bcond, local_taken, chosen_taken);
                /* verilator lint_on BLKANDNBLK */
                local_predictor[LHT[ID_EX_pc[7:0]]] <= update_predictor(local_predictor[LHT[ID_EX_pc[7:0]]], EX_alu_bcond);
                global_predictor[GlobalHistoryRegister[10:1]] <= update_predictor(global_predictor[GlobalHistoryRegister[10:1]], EX_alu_bcond);

                // Update choice predictor
                if (history_choice[1] == GlobalHistoryRegister[1]) begin // Global predictor chosen
                    if (GlobalHistoryRegister[1] != EX_alu_bcond) begin // Global wrong, local right
                        if (history_local[1] == EX_alu_bcond) begin
                            choice_predictor[GlobalHistoryRegister[11:2]] <= update_predictor(choice_predictor[GlobalHistoryRegister[11:2]], 1'b0);
                        end
                    end
                end else if (history_choice[1] == history_local[1]) begin // Local predictor chosen
                    if (history_local[1] != EX_alu_bcond) begin // Local wrong, global right
                        if (GlobalHistoryRegister[1] == EX_alu_bcond) begin
                            choice_predictor[GlobalHistoryRegister[11:2]] <= update_predictor(choice_predictor[GlobalHistoryRegister[11:2]], 1'b1);
                        end
                    end
                end
                update_btb_branch(ID_EX_pc[7:0], EX_btb_idx, EX_tag, pc_plus_imm);
            end else if (ID_EX_is_jal || ID_EX_is_jalr) begin
                /* verilator lint_off BLKANDNBLK */    
                update_history_registers_jump(GlobalHistoryRegister, history_local, history_choice, GlobalHistoryRegister, history_local, history_choice, local_taken, chosen_taken);
                /* verilator lint_on BLKANDNBLK */
                local_predictor[LHT[ID_EX_pc[7:0]]] <= update_predictor(local_predictor[LHT[ID_EX_pc[7:0]]], 1'b1);
                global_predictor[GlobalHistoryRegister[9:0]] <= update_predictor(global_predictor[GlobalHistoryRegister[9:0]], 1'b1);
                choice_predictor[GlobalHistoryRegister[9:0]] <= update_predictor(choice_predictor[GlobalHistoryRegister[9:0]], 1'b1);

                // Update choice predictor
                if (history_choice[0] == GlobalHistoryRegister[0]) begin // Global predictor chosen
                    if (GlobalHistoryRegister[0] != 1'b1) begin // Global wrong, local right
                        if (history_local[0] == 1'b1) begin
                            choice_predictor[GlobalHistoryRegister[9:0]] <= update_predictor(choice_predictor[GlobalHistoryRegister[9:0]], 1'b0);
                        end
                    end
                end else if (history_choice[0] == history_local[0]) begin // Local predictor chosen
                    if (history_local[0] != 1'b1) begin // Local wrong, global right
                        if (GlobalHistoryRegister[0] == 1'b1) begin    
                            choice_predictor[GlobalHistoryRegister[9:0]] <= update_predictor(choice_predictor[GlobalHistoryRegister[9:0]], 1'b1);
                        end
                    end
                end
                update_btb_jump(ID_EX_pc[7:0], EX_btb_idx, EX_tag, pc_plus_imm, EX_alu_result, ID_EX_is_jal);
            end
        end
    end
endmodule
