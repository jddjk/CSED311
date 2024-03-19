// Submit this file with other files you created.
// Do not touch port declarations of the module 'cpu'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,                     // positive reset signal
           input clk,                       // clock signal
           output is_halted,                // Whehther to finish simulation
           output [31:0] print_reg [0:31]); // TO PRINT REGISTER VALUES IN TESTBENCH (YOU SHOULD NOT USE THIS)
  /***** Wire declarations *****/
  wire [31:0] current_pc;
  // wire [31:0] next_pc;
  wire [31:0] imem_dout;
  wire [31:0] imm_gen_out;
  wire [31:0] add_sum;
  wire [31:0] alu_in_2;
  wire [31:0] alu_result;
  wire [31:0] mux1_result;
  wire [31:0] mux2_result;
  wire [31:0] add_four_pc;
  wire [31:0] write_data;
  wire [31:0] dmem_out;
  wire [31:0] rs1_dout;
  wire [31:0] rs2_dout;
  wire [31:0] mux5_out;
  wire [2:0] alu_op;
  wire RegWrite;
  wire bcond;
  wire branch;
  wire JALR;
  wire JAL;
  wire MemRead;
  wire MemtoReg;
  wire MemWrite;
  wire ALUSrc;
  wire bcond_and_branch;
  wire JAL_or_bab;
  wire PCtoReg;

  assign bcond_and_branch = bcond & branch;
  assign JAL_or_bab = JAL | bcond_and_branch; //PCSrc1
  /***** Register declarations *****/

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  pc pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .next_pc(mux2_result),     // input
    .current_pc(current_pc)   // output
  );
  
  // ---------- Instruction Memory ----------
  instruction_memory imem(
    .reset(reset),   // input
    .clk(clk),     // input
    .addr(current_pc),    // input
    .dout(imem_dout)     // output
  );

  // ---------- Register File ----------
  register_file reg_file (
    .reset (reset),        // input
    .clk (clk),          // input
    .rs1 (imem_dout[19:15]),          // input
    .rs2 (imem_dout[24:20]),          // input
    .rd (imem_dout[11:7]),           // input
    .rd_din (write_data),          // input
    .write_enable (RegWrite), // input          
    .rs1_dout (rs1_dout),     // output
    .rs2_dout (rs2_dout),     // output
    .print_reg (print_reg)  //DO NOT TOUCH THIS
  );      


  // ---------- Control Unit ----------
  control_unit ctrl_unit (
    .instruction(imem_dout[6:0]),  // input
    .is_jal(JAL),        // output
    .is_jalr(JALR),       // output
    .branch(branch),        // output
    .mem_read(MemRead),      // output
    .mem_to_reg(MemtoReg),    // output
    .mem_write(MemWrite),     // output     
    .alu_src(ALUSrc),       // output
    .write_enable(RegWrite),  // output
    .pc_to_reg(PCtoReg),     // output
    .is_halted(is_halted)       // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  immediate_generator imm_gen(
    .instruction(imem_dout),  // input
    .ex_immediate(imm_gen_out)    // output
  );

  // ---------- ALU Control Unit ----------
  alu_control_unit alu_ctrl_unit (
    .opcode(imem_dout[6:0]),  // input
    .funct3(imem_dout[14:12]),  // input
    .funct7(imem_dout[31:25]),  // input
    .alu_op(alu_op)         // output
  );

  // ---------- ALU ----------
  alu alu (
    .alu_op(alu_op),      // input
    .alu_in_1(rs1_dout),    // input  
    .alu_in_2(alu_in_2),    // input
    .alu_result(alu_result),  // output
    .bcond(bcond)    // output
  );

  // ---------- Data Memory ----------
  data_memory dmem(
    .reset (reset),      // input
    .clk (clk),        // input
    .addr (alu_result),       // input
    .din (rs2_dout),        // input
    .mem_read (MemRead),   // input
    .mem_write (MemWrite),  // input
    .dout (dmem_out)        // output
  );

  // ---------- Add_alu ------------
  add_alu add_alu(
    .alu_in1(current_pc),
    .alu_in2(imm_gen_out),
    .alu_result(add_sum)
  );

  add_alu_four add_alu_four(
    .alu_in1(current_pc),
    .alu_result(add_four_pc)
  );

  // ---------- mux ----------
  mux mux1(
    .sel(JAL_or_bab),
    .in0(add_four_pc),
    .in1(add_sum),
    .out(mux1_result)
  );
  mux mux2(
    .sel(JALR),
    .in0(mux1_result),
    .in1(alu_result),
    .out(mux2_result)
  );
  mux mux3(
    .sel(PCtoReg),
    .in0(mux5_out),
    .in1(add_four_pc),
    .out(write_data)
  );
  mux mux4(
    .sel(ALUSrc),
    .in0(rs2_dout),
    .in1(imm_gen_out),
    .out(alu_in_2)
  );
  mux mux5(
    .sel(MemtoReg),
    .in0(alu_result),
    .in1(dmem_out),
    .out(mux5_out)
  );
endmodule
