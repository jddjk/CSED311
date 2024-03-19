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
  wire [31:0] instruction;
  wire [2:0] alu_op;
  wire [31:0] imm_gen_out
  /***** Register declarations *****/

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  pc pc(
    .reset(),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(),         // input
    .next_pc(),     // input
    .current_pc()   // output
  );
  
  // ---------- Instruction Memory ----------
  instruction_memory imem(
    .reset(),   // input
    .clk(),     // input
    .addr(),    // input
    .dout()     // output
  );

  // ---------- Register File ----------
  register_file reg_file (
    .reset (),        // input
    .clk (),          // input
    .rs1 (),          // input
    .rs2 (),          // input
    .rd (),           // input
    .rd_din (),       // input
    .write_enable (), // input
    .rs1_dout (),     // output
    .rs2_dout (),     // output
    .print_reg (print_reg)  //DO NOT TOUCH THIS
  );


  // ---------- Control Unit ----------
  control_unit ctrl_unit (
    .opcode([6:0]instruction),  // input
    .is_jal(is_jal),        // output
    .is_jalr(is_jalr),       // output
    .branch(branch),        // output
    .mem_read(mem_read),      // output
    .mem_to_reg(mem_to_reg),    // output
    .mem_write(mem_write),     // output
    .alu_src(alu_src),       // output
    .write_enable(write_enable),  // output
    .pc_to_reg(pc_to_reg),     // output
    .is_ecall(is_halted)       // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  immediate_generator imm_gen(
    .instruction(instruction),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  // ---------- ALU Control Unit ----------
  alu_control_unit alu_ctrl_unit (
    .opcode([6:0]instruction),  // input
    .func3([14:12]instruction),  // input
    .func7([31:25]instruction),  // input
    .alu_op(alu_op)    // output
  );

  // ---------- ALU ----------
  alu alu (
    .alu_op(),      // input
    .alu_in_1(),    // input  
    .alu_in_2(),    // input
    .alu_result(),  // output
    .alu_bcond()    // output
  );

  // ---------- Data Memory ----------
  data_memory dmem(
    .reset (),      // input
    .clk (),        // input
    .addr (),       // input
    .din (),        // input
    .mem_read (),   // input
    .mem_write (),  // input
    .dout ()        // output
  );
endmodule
