module alwaysNotTaken (
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
    output reg is_flush,
    output reg [31:0] next_pc
);


    function automatic reg is_flush_for_jal;
        input [31:0] IF_ID_PC, ID_EX_PC, ID_EX_IMM;
        begin
            is_flush_for_jal = (IF_ID_PC != (ID_EX_PC + ID_EX_IMM));
        end
    endfunction

    function automatic reg is_flush_for_branch;
        input [31:0] IF_ID_PC, ID_EX_PC, ID_EX_IMM;
        input EX_bcond;
        begin
            is_flush_for_branch = (EX_bcond && (IF_ID_PC != (ID_EX_PC + ID_EX_IMM))) ||
                                (!EX_bcond && (IF_ID_PC != (increment_pc(ID_EX_PC))));
        end
    endfunction

    function automatic reg is_flush_for_jalr;
        input [31:0] IF_ID_PC, EX_aluResult;
        begin
            is_flush_for_jalr = (IF_ID_PC != EX_aluResult);
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
        is_flush = 1'b0;
        next_pc = increment_pc(current_pc);

        if (ID_EX_is_jal) begin
            is_flush = is_flush_for_jal(IF_ID_pc, ID_EX_pc, ID_EX_imm);
        end else if (ID_EX_is_jalr) begin
            is_flush = is_flush_for_jalr(IF_ID_pc, EX_alu_result);
        end else if (ID_EX_is_branch) begin
            is_flush = is_flush_for_branch(IF_ID_pc, ID_EX_pc, ID_EX_imm, EX_alu_bcond);
        end 

        if (is_flush) begin
            if (ID_EX_is_jal)
                next_pc = ID_EX_pc + ID_EX_imm;
            else if (ID_EX_is_jalr)
                next_pc = EX_alu_result;
            else if (ID_EX_is_branch)
                next_pc = EX_alu_bcond ? ID_EX_pc + ID_EX_imm : increment_pc(ID_EX_pc);
        end
    end
endmodule
