// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify modules (except InstMemory, DataMemory, and RegisterFile)
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted,
          output [31:0]print_reg[0:31]); // Whehther to finish simulation

  /***** Wire declarations *****/

  wire bcond;
  wire isFlush;
  wire isStall;
  wire mem_read;
  wire mem_to_reg;
  wire mem_write;
  wire alu_src;
  wire write_enable;
  wire pc_to_reg;
  wire isJAL;
  wire isJALR;
  wire isBranch;
  wire is_ready;
  wire isCacheStall;
  wire is_input_valid;
  wire is_ecall;
  wire isecallForward;
  wire is_output_valid;
  wire is_hit;
  wire [1:0] forward_check_rs1;
  wire [1:0] forward_check_rs2;
  wire [4:0] rs1_halt_considered;
  wire [4:0] IF_bhsr;
  wire [3:0] alu_op;
  wire [31:0] rs1_dout_ecallout;
  wire [31:0] current_pc;
  wire [31:0] next_pc;
  wire [31:0] instruction;
  wire [31:0] rs1_dout;
  wire [31:0] rs2_dout;
  wire [31:0] imm_gen_out;
  wire [31:0] alu_src1;
  wire [31:0] alu_src2;
  wire [31:0] dmem_data_mux_out;
  wire [31:0] alu_out;
  wire [31:0] dout;
  wire [31:0] write_data;
  wire [31:0] alu_result;

  /***** Register declarations *****/
  // You need to modify the width of registers
  // In addition, 
  // 1. You might need other pipeline registers that are not described below
  // 2. You might not need registers described below
  /***** IF/ID pipeline registers *****/
  reg [4:0] IF_ID_bhsr;
  reg [31:0] IF_ID_inst;    // will be used in ID stage
  reg [31:0] IF_ID_pc;      // will be used in EX stage

  /***** ID/EX pipeline registers *****/
  // From the control unit

  reg ID_EX_alu_src;        // will be used in EX stage
  reg ID_EX_mem_write;      // will be used in MEM stage
  reg ID_EX_mem_read;       // will be used in MEM stage
  reg ID_EX_mem_to_reg;     // will be used in WB stage
  reg ID_EX_reg_write;      // will be used in WB stage
  reg ID_EX_is_jal;
  reg ID_EX_is_jalr;
  reg ID_EX_is_branch;
  reg ID_EX_pc_to_reg;

  // From others
  reg [4:0] ID_EX_rd;
  reg [4:0] ID_EX_bhsr;  
  reg [31:0] ID_EX_pc;      // will be used in EX stage
  reg [31:0] ID_EX_rs1_data;
  reg [31:0] ID_EX_rs2_data;
  reg [31:0] ID_EX_imm;
  reg [31:0] ID_EX_inst;

  /***** EX/MEM pipeline registers *****/
  // From the control unit
  reg EX_MEM_mem_write;     // will be used in MEM stage
  reg EX_MEM_mem_read;      // will be used in MEM stage
  reg EX_MEM_mem_to_reg;    // will be used in WB stage
  reg EX_MEM_reg_write;     // will be used in WB stage

  // From others
  reg [4:0] EX_MEM_rd;
  reg [31:0] EX_MEM_alu_out;
  reg [31:0] EX_MEM_dmem_data;
  reg [31:0] EX_MEM_inst;

  /***** MEM/WB pipeline registers *****/
  // From the control unit
  reg MEM_WB_mem_to_reg;    // will be used in WB stage
  reg MEM_WB_reg_write;     // will be used in WB stage

  reg ID_EX_is_halted;      // will be used in WB stage
  reg EX_MEM_is_halted;      // will be used in WB stage
  reg MEM_WB_is_halted;

  // From others
  reg [31:0] MEM_WB_mem_to_reg_src_1;
  reg [31:0] MEM_WB_mem_to_reg_src_2;
  reg [4:0] MEM_WB_rd;
  reg [31:0] MEM_WB_inst;

  assign is_input_valid = (EX_MEM_mem_read || EX_MEM_mem_write);

  // ---------- Branch Predictor ----------
  // alwaysNotTaken branch_predictor (//correctly implemented
  //     .clk(clk),
  //     .reset(reset),
  //     .current_pc(current_pc),
  //     .IF_ID_pc(IF_ID_pc),
  //     .ID_EX_pc(ID_EX_pc),
  //     .ID_EX_imm(ID_EX_imm),
  //     .ID_EX_is_branch(ID_EX_is_branch),
  //     .ID_EX_is_jal(ID_EX_is_jal),
  //     .ID_EX_is_jalr(ID_EX_is_jalr),
  //     .EX_alu_result(alu_result),
  //     .EX_alu_bcond(bcond),
  //     .is_flush(isFlush),
  //     .next_pc(next_pc)
  // );

  // alwaysTaken branch_predictor (
  //     .clk(clk),
  //     .reset(reset),
  //     .current_pc(current_pc),
  //     .IF_ID_pc(IF_ID_pc),
  //     .ID_EX_pc(ID_EX_pc),
  //     .ID_EX_imm(ID_EX_imm),
  //     .ID_EX_is_branch(ID_EX_is_branch),
  //     .ID_EX_is_jal(ID_EX_is_jal),
  //     .ID_EX_is_jalr(ID_EX_is_jalr),
  //     .ID_EX_bhsr(ID_EX_bhsr),
  //     .EX_alu_result(alu_result),
  //     .EX_alu_bcond(bcond),
  //     .current_bhsr(IF_ID_bhsr),
  //     .is_flush(isFlush),
  //     .next_pc(next_pc)
  // );

  // twobitGlobalPredictor branch_predictor (
  //     .clk(clk),
  //     .reset(reset),
  //     .current_pc(current_pc),
  //     .IF_ID_pc(IF_ID_pc),
  //     .ID_EX_pc(ID_EX_pc),
  //     .ID_EX_imm(ID_EX_imm),
  //     .ID_EX_is_branch(ID_EX_is_branch),
  //     .ID_EX_is_jal(ID_EX_is_jal),
  //     .ID_EX_is_jalr(ID_EX_is_jalr),
  //     .EX_alu_result(alu_result),
  //     .EX_alu_bcond(bcond),
  //     .is_flush(isFlush),
  //     .next_pc(next_pc)
  // );

  Gshare branch_predictor(
    .reset(reset),
    .clk(clk),
    .current_pc(current_pc),
    .IF_ID_pc(IF_ID_pc),
    .ID_EX_pc(ID_EX_pc),
    .ID_EX_imm(ID_EX_imm),
    .ID_EX_is_branch(ID_EX_is_branch),
    .ID_EX_is_jal(ID_EX_is_jal),
    .ID_EX_is_jalr(ID_EX_is_jalr),
    .ID_EX_bhsr(ID_EX_bhsr),
    .EX_alu_result(alu_result),
    .EX_alu_bcond(bcond),
    .current_bhsr(IF_bhsr),
    .is_flush(isFlush),  // output
    .next_pc(next_pc)  // output
  );

  // alpha21264 branch_predictor(
  //   .clk(clk),
  //   .reset(reset),
  //   .current_pc(current_pc),
  //   .IF_ID_pc(IF_ID_pc),
  //   .ID_EX_pc(ID_EX_pc),
  //   .ID_EX_imm(ID_EX_imm),
  //   .ID_EX_is_branch(ID_EX_is_branch),
  //   .ID_EX_is_jal(ID_EX_is_jal),
  //   .ID_EX_is_jalr(ID_EX_is_jalr),
  //   .ID_EX_bhsr(ID_EX_bhsr),
  //   .EX_alu_result(alu_result),
  //   .EX_alu_bcond(bcond),
  //   .current_bhsr(IF_ID_bhsr),
  //   .is_flush(isFlush),  //output
  //   .next_pc(next_pc)  //output
  // );

  // TODO: Implement the MLP?

  PC pc(
    .reset(reset),            // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),
    .isCacheStall(isCacheStall),
    .is_flush(isFlush),
    .is_stall(isStall),
    .next_pc(next_pc),        // input
    .current_pc(current_pc)   // output
  );
  
  InstMemory imem(
    .reset(reset),      // input
    .clk(clk),          // input
    .addr(current_pc),  // input
    .dout(instruction)        // output
  );

  // Update IF/ID pipeline registers here
  always @(posedge clk) begin
      if (reset) begin
          if (isCacheStall != 1) begin
              IF_ID_inst <= 32'b0;
              IF_ID_pc <= 32'b0;
              IF_ID_bhsr <= 5'b0;
          end else begin
              IF_ID_inst <= IF_ID_inst;
              IF_ID_pc <= IF_ID_pc;
              IF_ID_bhsr <= IF_ID_bhsr;
          end
      end else if (isFlush) begin
          if (isCacheStall != 1) begin
              IF_ID_inst <= 32'b0;
              IF_ID_pc <= 32'b0;
              IF_ID_bhsr <= 5'b0;
          end else begin
              IF_ID_inst <= IF_ID_inst;
              IF_ID_pc <= IF_ID_pc;
              IF_ID_bhsr <= IF_ID_bhsr;
          end
      end else begin
          if (isStall) begin
              IF_ID_inst <= IF_ID_inst;
              IF_ID_pc <= IF_ID_pc;
              IF_ID_bhsr <= IF_ID_bhsr;
          end else begin
              IF_ID_inst <= instruction;
              IF_ID_pc <= current_pc;
              IF_ID_bhsr <= IF_bhsr;
          end
      end
  end

  RsEcallHandler rs_ecall_handler(
    .is_ecall(is_ecall),
    .rs1(IF_ID_inst[19:15]),
    .rs1_halt_considered(rs1_halt_considered)
  );

  RegisterFile reg_file (
    .reset (reset),        // input
    .clk (clk),          // input
    .rs1 (rs1_halt_considered),          // input
    .rs2 (IF_ID_inst[24:20]),          // input
    .rd (MEM_WB_rd),           // input
    .rd_din (write_data),       // input
    .write_enable (MEM_WB_reg_write),    // input
    .rs1_dout (rs1_dout),     // output
    .rs2_dout (rs2_dout),      // output
    .print_reg(print_reg)
  );


  Hazard_detection hazard_detector (
    .current_inst(IF_ID_inst),
    .ID_EX_rd(ID_EX_rd),
    .ID_EX_reg_write(ID_EX_reg_write),
    .ID_EX_mem_read(ID_EX_mem_read),
    .ID_EX_mem_write(ID_EX_mem_write),
    .EX_MEM_rd(EX_MEM_rd),
    .EX_MEM_reg_write(EX_MEM_reg_write),
    .is_input_valid(is_input_valid),
    .is_ready(is_ready),
    .is_hit(is_hit),
    .is_output_valid(is_output_valid),
    .isCacheStall(isCacheStall),
    .isStall(isStall)
  );

  ControlUnit ctrl_unit (
    .opcode(IF_ID_inst[6:0]),  // input
    .is_stall(isStall),
    .is_flush(isFlush),
    .mem_read(mem_read),      // output
    .mem_to_reg(mem_to_reg),    // output
    .mem_write(mem_write),     // output
    .alu_src(alu_src),       // output
    .write_enable(write_enable),  // output
    .is_jal(isJAL),
    .is_jalr(isJALR),
    .is_branch(isBranch),
    .pc_to_reg(pc_to_reg),
    .is_ecall(is_ecall)       // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  ImmediateGenerator imm_gen(
    .instruction(IF_ID_inst[31:0]),  // input
    .imm_gen_out(imm_gen_out)  // output
  );

  ForwardCheck forwardCheck(
    .instruction_id_ex(ID_EX_inst),
    .instruction_ex_mem(EX_MEM_inst),
    .instruction_mem_wb(MEM_WB_inst),
    .reg_write_ex_mem(EX_MEM_reg_write),
    .reg_write_mem_wb(MEM_WB_reg_write),
    .forward_check_rs1(forward_check_rs1),
    .forward_check_rs2(forward_check_rs2)
  );

  isEcallForwarding isecallForwarding(
    .instruction_id_ex(ID_EX_inst),
    .instruction_ex_mem(EX_MEM_inst),
    .instruction_mem_wb(MEM_WB_inst),
    .EX_MEM_alu_out(EX_MEM_alu_out),  // input for rs1 <-10
    .isecallForward(isecallForward)
  );

  ecallForwarding ecallForwarding(
    .isecallForward(isecallForward),
    .rs1_dout(rs1_dout),
    .rs1_dout_ecallout(rs1_dout_ecallout)
  );

  // Update ID/EX pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      ID_EX_pc <= 0;
      // From the control unit
      ID_EX_alu_src <= 1'b0;        // will be used in EX stage
      ID_EX_mem_write <= 1'b0;      // will be used in MEM stage
      ID_EX_mem_read <= 1'b0;       // will be used in MEM stage
      ID_EX_mem_to_reg <= 1'b0;     // will be used in WB stage
      ID_EX_reg_write <= 1'b0;      // will be used in WB stage
      ID_EX_is_jal <= 1'b0;
      ID_EX_is_jalr <= 1'b0;
      ID_EX_is_branch <= 1'b0;
      ID_EX_pc_to_reg <= 1'b0;
      ID_EX_is_halted <= 1'b0;
      ID_EX_rs1_data <= 32'b0;
      ID_EX_rs2_data <= 32'b0;
      ID_EX_imm <= 32'b0;
      ID_EX_rd <= 5'b0;
      ID_EX_bhsr <= 5'b0;
      ID_EX_inst <= 32'b0;
    end
    else if (isCacheStall) begin
      ID_EX_pc <= ID_EX_pc;
      // From the control unit
      ID_EX_alu_src <= ID_EX_alu_src;        // will be used in EX stage
      ID_EX_mem_write <= ID_EX_mem_write;      // will be used in MEM stage
      ID_EX_mem_read <= ID_EX_mem_read;       // will be used in MEM stage
      ID_EX_mem_to_reg <= ID_EX_mem_to_reg;     // will be used in WB stage
      ID_EX_reg_write <= ID_EX_reg_write;      // will be used in WB stage
      ID_EX_is_jal <= ID_EX_is_jal;
      ID_EX_is_jalr <= ID_EX_is_jalr;
      ID_EX_is_branch <= ID_EX_is_branch;
      ID_EX_pc_to_reg <= ID_EX_pc_to_reg;
      ID_EX_is_halted <= ID_EX_is_halted;
      ID_EX_rs1_data <= ID_EX_rs1_data;
      ID_EX_rs2_data <= ID_EX_rs2_data;
      ID_EX_imm <= ID_EX_imm;
      ID_EX_rd <= ID_EX_rd;
      ID_EX_bhsr <= ID_EX_bhsr;
      ID_EX_inst <= ID_EX_inst;
    end
    else begin
      ID_EX_pc <= IF_ID_pc;
      // From the control unit
      ID_EX_alu_src <= alu_src;        // will be used in EX stage
      ID_EX_mem_write <= mem_write;      // will be used in MEM stage
      ID_EX_mem_read <= mem_read;       // will be used in MEM stage
      ID_EX_mem_to_reg <= mem_to_reg;     // will be used in WB stage
      ID_EX_reg_write <= write_enable;      // will be used in WB stage
      ID_EX_is_jal <= isJAL;
      ID_EX_is_jalr <= isJALR;
      ID_EX_is_branch <= isBranch;
      ID_EX_pc_to_reg <= pc_to_reg;
      ID_EX_is_halted <= ((rs1_dout_ecallout == 10) && is_ecall) ? 1: 0;
      ID_EX_rs1_data <= rs1_dout_ecallout;
      ID_EX_rs2_data <= rs2_dout;
      ID_EX_imm <= imm_gen_out;
      ID_EX_rd <= IF_ID_inst[11:7];
      ID_EX_bhsr <= IF_ID_bhsr;
      ID_EX_inst <= IF_ID_inst;
    end
  end

  // ---------- ALU Control Unit ----------
  ALUControlUnit alu_ctrl_unit (
    .instruction(ID_EX_inst),    // input
    .alu_op(alu_op)
  );

  mux3to1 alu_src_rs1(
    .in0(ID_EX_rs1_data),       // input
    .in1(EX_MEM_alu_out),  // input
    .in2(write_data),      // input
    .sel(forward_check_rs1),        // input
    .out(alu_src1)        // output
  );


  mux4to1 alu_src_rs2(
    .in0(ID_EX_rs2_data),
    .in1(EX_MEM_alu_out),
    .in2(write_data),
    .in3(ID_EX_imm),
    .sel_forward(forward_check_rs2),
    .sel_alu_src(ID_EX_alu_src),
    .out1(alu_src2),
    .out2(dmem_data_mux_out)
  );

  ALU alu (
    .alu_op(alu_op),      // input
    .alu_in_1(alu_src1),        // input  
    .alu_in_2(alu_src2),           // input
    .alu_result(alu_result),        // output
    .alu_bcond(bcond)           // output
  );

  mux2to1 mux_alu_out(
    .in0(alu_result),      // input
    .in1(ID_EX_pc + 4),    // input
    .sel(ID_EX_pc_to_reg),    // input
    .out(alu_out)             // output
  );

  // Update EX/MEM pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      EX_MEM_mem_write<= 1'b0;     // will be used in MEM stage
      EX_MEM_mem_read<= 1'b0;      // will be used in MEM stage
      EX_MEM_mem_to_reg<= 1'b0;    // will be used in WB stage
      EX_MEM_reg_write<= 1'b0;     // will be used in WB stage
      EX_MEM_is_halted <= 1'b0;
      EX_MEM_alu_out<= 32'b0;
      EX_MEM_dmem_data <= 32'b0;
      EX_MEM_rd<= 5'b0;
      EX_MEM_inst<= 32'b0;
    end
    else if (isCacheStall) begin
      EX_MEM_mem_write<= EX_MEM_mem_write;     // will be used in MEM stage
      EX_MEM_mem_read<= EX_MEM_mem_read;      // will be used in MEM stage
      EX_MEM_mem_to_reg<= EX_MEM_mem_to_reg;    // will be used in WB stage
      EX_MEM_reg_write<= EX_MEM_reg_write;     // will be used in WB stage
      EX_MEM_alu_out <= EX_MEM_alu_out;
      EX_MEM_dmem_data <= EX_MEM_dmem_data;
      EX_MEM_rd <= EX_MEM_rd;
      EX_MEM_is_halted <= EX_MEM_is_halted;
      EX_MEM_inst <= EX_MEM_inst;
    end
    else begin
      EX_MEM_mem_write<= ID_EX_mem_write;     // will be used in MEM stage
      EX_MEM_mem_read<= ID_EX_mem_read;      // will be used in MEM stage
      EX_MEM_mem_to_reg<= ID_EX_mem_to_reg;    // will be used in WB stage
      EX_MEM_reg_write<= ID_EX_reg_write;     // will be used in WB stage
      EX_MEM_is_halted <= ID_EX_is_halted;
      EX_MEM_alu_out <= alu_out;
      EX_MEM_dmem_data <= dmem_data_mux_out;
      EX_MEM_rd <= ID_EX_rd;
      EX_MEM_inst <= ID_EX_inst;
    end
  end

  // ---------- Data Memory ----------
  // DataMemory dmem(
  //   .reset (reset),      // input
  //   .clk (clk),        // input
  //   .addr (EX_MEM_alu_out),       // input
  //   .din (EX_MEM_dmem_data),        // input
  //   .mem_read (EX_MEM_mem_read),   // input
  //   .mem_write (EX_MEM_mem_write),  // input
  //   .dout (dout)        // output
  // ); // 일단 is_input_valid, is_output_valid, mem_ready 추가 / din, dout bit 변경 32-> 128

  Cache #(.LINE_SIZE(16), .NUM_SETS(8), .NUM_WAYS(2)) cache (
    .reset(reset),
    .clk(clk),
    .is_input_valid(is_input_valid),
    .addr(EX_MEM_alu_out),
    .mem_rw(EX_MEM_mem_write),
    .din(EX_MEM_dmem_data),
    .is_ready(is_ready),
    .is_output_valid(is_output_valid),
    .dout(dout),
    .is_hit(is_hit)
  );

  // Direct_mapped_cache #(.LINE_SIZE(16), .NUM_SETS(16)) cache (
  //   .reset(reset),
  //   .clk(clk),
  //   .is_input_valid(is_input_valid),
  //   .addr(EX_MEM_alu_out),
  //   .mem_rw(EX_MEM_mem_write),
  //   .din(EX_MEM_dmem_data),
  //   .is_ready(is_ready),
  //   .is_output_valid(is_output_valid),
  //   .dout(dout),
  //   .is_hit(is_hit)
  // );

  // Update MEM/WB pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      MEM_WB_mem_to_reg <= 1'b0;    // will be used in WB stage
      MEM_WB_reg_write <= 1'b0;     // will be used in WB stage
      MEM_WB_is_halted <= 1'b0;
      // From others
      MEM_WB_mem_to_reg_src_1 <= 32'b0;
      MEM_WB_mem_to_reg_src_2 <= 32'b0;
      MEM_WB_rd <= 5'b0;
      MEM_WB_inst <= 32'b0;
    end
    else if (isCacheStall) begin
      MEM_WB_mem_to_reg <= MEM_WB_mem_to_reg;    // will be used in WB stage
      MEM_WB_reg_write <=  MEM_WB_reg_write;     // will be used in WB stage
      MEM_WB_is_halted <= MEM_WB_is_halted;
      MEM_WB_mem_to_reg_src_1 <= MEM_WB_mem_to_reg_src_1;
      MEM_WB_mem_to_reg_src_2 <= MEM_WB_mem_to_reg_src_2;
      MEM_WB_rd <= MEM_WB_rd;
      MEM_WB_inst <= MEM_WB_inst;
    end
    else begin
      MEM_WB_mem_to_reg <= EX_MEM_mem_to_reg;    // will be used in WB stage
      MEM_WB_reg_write <=  EX_MEM_reg_write;     // will be used in WB stage
      MEM_WB_is_halted <= EX_MEM_is_halted;
      // From others
      MEM_WB_mem_to_reg_src_1 <= dout;
      MEM_WB_mem_to_reg_src_2 <= EX_MEM_alu_out;
      MEM_WB_rd <= EX_MEM_rd;
      MEM_WB_inst <= EX_MEM_inst;
    end
  end

  mux2to1 mux_mem_to_reg(
    .in0(MEM_WB_mem_to_reg_src_2),  // input
    .in1(MEM_WB_mem_to_reg_src_1),  // input
    .sel(MEM_WB_mem_to_reg),           // input
    .out(write_data)                   // output
  );

  Halt halt(
    .reset(reset),
    .clk(clk),
    //.MEM_WB_is_halted(ID_is_halted),
    .MEM_WB_is_halted(MEM_WB_is_halted),
    .is_halted(is_halted)
  );
endmodule
