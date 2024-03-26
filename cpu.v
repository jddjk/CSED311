// Submit this file with other files you created.
// Do not touch port declarations of the module 'cpu'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required
//
module cpu(input reset,                     // positive reset signal
           input clk,                       // clock signal
           output is_halted,                // Whehther to finish simulation
           output [31:0] print_reg [0:31]); // TO PRINT REGISTER VALUES IN TESTBENCH (YOU SHOULD NOT USE THIS)
  /***** Wire declarations *****/
  wire [31:0] instruction;
  wire [3:0] alu_op;
  wire [31:0] imm_gen_out;
  wire [31:0] current_pc;
  wire [31:0] write_data;
  wire [31:0] alu_result;
  wire [31:0] dmem_out;
  wire [31:0] rs1_dout;
  wire [31:0] rs2_dout;
  wire [31:0] alu_in_2;
  wire [31:0] mux_pc1_result;
  wire [31:0] mux_pc2_result;
  wire [31:0] Add_Sum;
  wire [31:0] add_four_pc;
  wire [31:0] mux_MemOrAlu_out;
  wire [31:0] alu_result_aligned;
  wire [31:0] x17_val;
  wire [31:0] luiVar;
  wire [31:0] twoDigitMux_result;
  wire [1:0] ALUSRC;


  wire is_jal;
  wire is_jalr;
  wire branch;
  wire mem_read;
  wire mem_to_reg;
  wire mem_write;
  wire alu_src;
  wire write_enable;
  wire pc_to_reg;
  wire bcond;
  wire bcond_and_branch;
  wire PCSrc1;


  assign luiVar = 32'b0;
  assign alu_result_aligned = alu_result & 32'hFFFFFFFE; // to make the result of ALU aligned to 4 bytes
  assign bcond_and_branch = bcond & branch;
  assign PCSrc1 = is_jal | bcond_and_branch; //JAL_or_bab

/***** Register declarations *****/
  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  pc pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .next_pc(mux_pc2_result),     // input
    .current_pc(current_pc)   // output
  );
  
  // ---------- Instruction Memory ----------
  instruction_memory imem(
    .reset(reset),   // input
    .clk(clk),     // input
    .addr(current_pc),    // input
    .dout(instruction)     // output
  );

  // ---------- Register File ----------
  register_file reg_file (
    .reset (reset),        // input
    .clk (clk),          // input
    .rs1 (instruction[19:15]),          // input
    .rs2 (instruction[24:20]),          // input
    .rd (instruction[11:7]),           // input
    .rd_din (write_data),       // input
    .write_enable (write_enable), // input
    .rs1_dout (rs1_dout),     // output
    .rs2_dout (rs2_dout),     // output
    .print_reg (print_reg),  //DO NOT TOUCH THIS
    .x17_val(x17_val)
  );


  // ---------- Control Unit ----------
  control_unit ctrl_unit (
    .opcode(instruction[6:0]),  // input
    .is_jal(is_jal),        // output
    .is_jalr(is_jalr),       // output
    .branch(branch),        // output
    .mem_read(mem_read),      // output
    .mem_to_reg(mem_to_reg),    // output
    .mem_write(mem_write),     // output
    .alu_src(alu_src),       // output
    .write_enable(write_enable),  // output
    .pc_to_reg(pc_to_reg),     // output
    .is_ecall(is_halted),       // output (ecall inst)
    .x17_val(x17_val),          // output
    .ALUSRC(ALUSRC)            // output
  );

  // ---------- Immediate Generator ----------
  immediate_generator imm_gen(
    .instruction(instruction),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  // ---------- ALU Control Unit ----------
  alu_control_unit alu_ctrl_unit (
    .opcode(instruction[6:0]),  // input
    .func3(instruction[14:12]),  // input
    .func7(instruction[31:25]),  // input
    .alu_op(alu_op)    // output
  );

  // ---------- ALU ----------
  alu alu (
    .alu_op(alu_op),      // input
    .alu_in_1(twoDigitMux_result),    // input  
    .alu_in_2(alu_in_2),    // input
    .alu_result(alu_result),  // output
    .alu_bcond(bcond)    // output
  );

  // ---------- Data Memory ----------
  data_memory dmem(
    .reset (reset),      // input
    .clk (clk),        // input
    .addr (alu_result),       // input
    .din (rs2_dout),        // input
    .mem_read (mem_read),   // input
    .mem_write (mem_write),  // input
    .dout (dmem_out)        // output
  );



// ----------    Add_alu   ----------
add_alu add_alu(
  .alu_in1(current_pc),       // input
  .alu_in2(imm_gen_out),       // input
  .alu_result(Add_Sum)     // output
);
add_alu_four add_alu_four(
  .alu_in1(current_pc),     // input
  .alu_result(add_four_pc)     // output
);

// ----------    Mux  ----------

twoDigitMux twoDigitMux(
  .in0(current_pc),
  .in1(rs1_dout),
  .in2(luiVar),
  .sel(ALUSRC),
  .out(twoDigitMux_result)
);

mux mux_pc1(
  .in0(add_four_pc),
  .in1(Add_Sum),
  .sel(PCSrc1),
  .out(mux_pc1_result)
);

mux mux_pc2(
  .in0(mux_pc1_result),
  .in1(alu_result_aligned),
  .sel(is_jalr),
  .out(mux_pc2_result)
);

mux mux_writeData(
  .in0(mux_MemOrAlu_out),
  .in1(add_four_pc),
  .sel(pc_to_reg),
  .out(write_data)
);

mux mux_RegOrImm(
  .in0(rs2_dout),
  .in1(imm_gen_out),
  .sel(alu_src),
  .out(alu_in_2)
);

mux mux_MemOrAlu(
  .in0(alu_result),
  .in1(dmem_out),
  .sel(mem_to_reg),
  .out(mux_MemOrAlu_out)
);

endmodule
