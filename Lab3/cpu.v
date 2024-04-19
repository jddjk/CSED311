// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted,
          output [31:0]print_reg[0:31]);
  /***** Wire declarations *****/
  wire [31:0] next_pc;
  wire [31:0] current_pc;
  wire [31:0] ALUResult;
  wire [31:0] imm_gen_out;
  wire [31:0] rs1_dout;
  wire [31:0] rs2_dout;
  wire [31:0] instruction;
  wire [31:0] MemAddr;
  wire [31:0] adder_out;
  wire [31:0] dout;
  wire [31:0] in_1_ALU;
  wire [31:0] in_2_ALU;
  wire [31:0] rd_din;
  wire [4:0] rs1_in;
  wire [4:0] rs2_in;
  wire [4:0] rd;
  wire MemRead;
  wire MemWrite;
  wire MemToReg;
  wire PCWrite;
  wire write_enable;
  wire IRWrite;
  wire [6:0] opcode;
  wire IorD;
  wire [1:0] ALUop;
  wire [1:0] alu_src_B;
  wire alu_src_A;
  wire PC_Write;
  wire PCWriteNotCond;
  wire PCSource;
  wire is_ecall;
  wire cond;
  wire halted;

  wire [2:0] ALUCtrlOp;
  wire [2:0] FUNCT;

  /* verilator lint_off UNOPTFLAT */
  wire bcond;
  /* verilator lint_on UNOPTFLAT */

  /***** Register declarations *****/
  reg [31:0] IR;
  reg [31:0] MDR;
  reg [31:0] A;
  reg [31:0] B;
  reg [31:0] ALUOut;
  // Do not modify and use registers declared above.
  assign PCWrite = (cond | PC_Write);
  assign instruction = IR;
  assign opcode = instruction[6:0];
  assign halted = rs1_dout == 10;
  assign rs1_in = is_ecall ? 17 : instruction[19:15];
  assign rs2_in = instruction[24:20];
  assign rd = instruction[11:7];
  assign FUNCT = instruction[14:12];
  assign cond = PCWriteNotCond & !bcond;
  assign is_halted = (halted && is_ecall);


  always @(posedge clk) begin
    if (reset) begin
      IR <= 0;
      MDR <= 0;
      A <= 0;
      B <= 0;
      ALUOut <= 0;
    end else begin
      if (IRWrite) IR <= dout; // Update Instruction Register
      MDR <= dout;             // Update Memory Data Register
      A <= rs1_dout;           // Update register A with rs1 data
      B <= rs2_dout;           // Update register B with rs2 data
      ALUOut <= ALUResult;    // Update ALU Output register
    end
  end
  
  PC PC(
    .reset(reset),
    .clk(clk),         // input
    .PCWrite(PCWrite),
    .next_pc(next_pc),     // input
    .current_pc(current_pc)   // output
  );
  
  ImmediateGenerator ImmediateGenerator(
    .instruction(instruction),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  RegisterFile RegisterFile(
    .reset(reset),        // input
    .clk(clk),          // input
    .rs1(rs1_in),          // input
    .rs2(rs2_in),          // input
    .rd(rd),           // input
    .rd_din(rd_din),       // input
    .write_enable(write_enable),    // input
    .rs1_dout(rs1_dout),     // output
    .rs2_dout(rs2_dout),      // output
    .print_reg(print_reg)     // output (TO PRINT REGISTER VALUES IN TESTBENCH)
  );

  Memory Memory(
    .reset(reset),
    .clk(clk),
    .addr(MemAddr),
    .din(B),
    .mem_read(MemRead),
    .mem_write(MemWrite),
    .dout(dout)
  );

  ALUControlUnit ALUControlUnit(
    .instruction(instruction),
    .ALUop(ALUop),
    .ALUCtrlOp(ALUCtrlOp)
  );

  ALU ALU(
    .ALUCtrlOp(ALUCtrlOp),
    .in_1_ALU(in_1_ALU), 
    .in_2_ALU(in_2_ALU),
    .FUNCT(FUNCT),
    .ALUResult(ALUResult),
    .bcond(bcond)
  );

  ControlUnit ControlUnit(
    .opcode(opcode),
    .clk(clk),
    .reset(reset),
    .bcond(bcond),
    .PCWriteNotCond(PCWriteNotCond),
    .PC_Write(PC_Write),
    .IorD(IorD),
    .MemRead(MemRead), 
    .MemWrite(MemWrite),
    .MemToReg(MemToReg),
    .IRWrite(IRWrite),
    .PCSource(PCSource),
    .ALUop(ALUop),
    .alu_src_B(alu_src_B),
    .alu_src_A(alu_src_A),
    .reg_write(write_enable),
    .is_ecall(is_ecall)       // output (ecall inst)
  );

// mux
  mux2to1 IorD_mux(
    .in0(ALUOut),
    .in1(current_pc),
    .sel(IorD),
    .out(MemAddr)
  );
  
  mux2to1 alu_src_A_mux(
    .in0(A),
    .in1(current_pc),
    .sel(alu_src_A),
    .out(in_1_ALU)
  );
  
  mux2to1 pc_source_mux(
    .in0(ALUOut),
    .in1(ALUResult),
    .sel(PCSource),
    .out(next_pc)
  );

  mux2to1 mem_to_reg_mux(
    .in0(MDR),
    .in1(ALUOut),
    .sel(MemToReg),
    .out(rd_din)
  );
  
  mux4to1 alu_src_B_mux(
    .in0(B),
    .in1(32'b100),
    .in2(imm_gen_out),
    .in3(32'b0),
    .sel(alu_src_B),
    .out(in_2_ALU)
  );

/*
  mux2to1 PC_mux(
    .in0(regdata),  //기존 data
    .in1(adder_out),
    .sel(sel), //JAL, JALR일때만 1
    .out(regWrite)
  );

  Adder PC_adder(
    .in_1(current_pc),
    .in_2(4),
    .out(adder_out)
  );
*/
endmodule
