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
           output [31:0]print_reg[0:31]
           ); // Whehther to finish simulation
  /***** Wire declarations *****/
  wire [31:0] mem_addr;
  wire [31:0] mem_data;
  wire [31:0] next_pc;
  wire [31:0] current_pc;
  wire [31:0] ALUSrcAout;
  wire [31:0] ALUSrcBout;
  wire [31:0] RegSource;
  wire [31:0] alu_result;
  //wire [31:0] rs1_data;
  //wire [31:0] rs2_data;
  wire [31:0] imm_gen_out; // 64-bit?
  wire [31:0] PCSrcWire;
  wire [31:0] x17;
  wire [31:0] reg_to_A;
  wire [31:0] reg_to_B;

  wire [31:0] wire_IR;
  wire [31:0] wire_MDR;
  wire [31:0] wire_A;
  wire [31:0] wire_B;
  wire [31:0] wire_ALUOut;

  // Control signals
  wire [3:0] alu_op;
  wire [1:0] ALUCtrlOp;
  wire MemToReg;
  wire MemWrite;
  wire MemRead;
  wire PCWrite;
  wire PCWriteNotCond;
  //wire [1:0]PCSource;
  wire PCSource;
  wire ALUOp;
  wire [1:0] ALUSrcB;
  wire ALUSrcA;
  wire RegWrite;
  wire RegSoruce;
  wire bcond;
  wire cond1;
  wire cond2;
  wire IorD;
  wire IRWrite;
  wire is_ecall;

  assign cond1 = !bcond & PCWriteNotCond;
  assign cond2 = cond1 | PCWrite;


  wire [3:0] current_state;
  wire [3:0] next_state;
  wire [3:0] rom1_out;
  wire [3:0] rom2_out;

  /***** Register declarations *****/
  reg [31:0] IR; // instruction register
  reg [31:0] MDR; // memory data register
  reg [31:0] A; // Read 1 data register
  reg [31:0] B; // Read 2 data register
  reg [31:0] ALUOut; // ALU output register

  reg [31:0] x17_val; // x17 register value
  // Do not modify and use registers declared above.
  assign wire_IR = IR;
  assign wire_MDR = MDR;
  assign wire_A = A;
  assign wire_B = B;
  assign wire_ALUOut = ALUOut;
  assign x17 = x17_val;
  
  // ---------- Fetching ----------
  always @(posedge clk) begin
    if (reset) begin
      IR <= 32'b0;
      MDR <= 32'b0;
      A <= 32'b0;
      B <= 32'b0;
      ALUOut <= 32'b0;
    end
    else begin
      if(mem_data != 0) begin
        $display("IRwrite:%d ", IRWrite); // FOR DEBUGGING
        $display("mem_data:%d ", mem_data); // FOR DEBUGGING
      end

      MDR <= mem_data;
      A <= reg_to_A;
      B <= reg_to_B;
      ALUOut <= alu_result;
      
      if (IRWrite) begin
        IR <= mem_data;
      end
    end
  end




  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  PC pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .next_pc(next_pc),     // input
    .pc_write(cond2),    //PC Source mux
    .current_pc(current_pc)   // output
  );

  // ---------- Register File ----------
  RegisterFile reg_file(
    .reset(reset),        // input
    .clk(clk),          // input
    .rs1 (wire_IR[19:15]),          // input
    .rs2 (wire_IR[24:20]),          // input
    .rd (wire_IR[11:7]),           // input
    .rd_din(RegSource),       // input
    .write_enable(RegWrite),    // input
    .rs1_dout(reg_to_A),     // output
    .rs2_dout(reg_to_B),      // output
    .print_reg(print_reg)     // output (TO PRINT REGISTER VALUES IN TESTBENCH)
  );

  // ---------- Memory ----------
  Memory memory(
    .reset(reset),        // input
    .clk(clk),          // input
    .addr(mem_addr),         // input
    .din(B),          // input
    .mem_read(MemRead),     // input
    .mem_write(MemWrite),    // input
    .dout(mem_data)          // output
  );

  // ---------- Control Unit ----------
  ControlUnit ctrl_unit(
    .current_state(current_state), //input: current_state, 이걸로 control signal generate한다. 
    .PCWrite(PCWrite),      // output
    .PCWriteNotCond(PCWriteNotCond), // output
    .IRWrite(IRWrite),      // output
    .ALUCtrlOp(ALUCtrlOp),    // output
    .mem_read(MemRead),      // output
    .mem_to_reg(MemToReg),    // output
    .mem_write(MemWrite),     // output
    .alu_srcA(ALUSrcA),       // output
    .alu_srcB(ALUSrcB),       // output
    .RegWrite(RegWrite),     // output
    .PCSource(PCSource),      // output
    .IorD(IorD),        // output
    .is_ecall(is_ecall)       // output (ecall inst)
  );



  nextStateAdder next_state_adder(    //current state가 바뀌는 즉시 get next state
    .current_state(current_state),  // input
    .reset(reset),  // input
    .next_state(next_state)  // output
  );

  stateRegister state_register(      //clk마다 current state에 next state 넣기
    .clk(clk),
    .reset(reset),
    .next_state(next_state),
    .current_state(current_state)
  );


  rom1 rom_1(
    .opcode(wire_IR[6:0]),
    .rom1_out(rom1_out)
  );

  rom2 rom_2(
    .opcode(wire_IR[6:0]),
    .rom2_out(rom2_out)
  );

  isHalt is_halt(
    .is_ecall(is_ecall),
    .gpr_17(rs1_dout),
    .is_halted(is_halted)
  );











  // ---------- Immediate Generator ----------
  ImmediateGenerator imm_gen(
    .instruction(wire_IR),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  // ---------- ALU Control Unit ----------
  ALUControlUnit alu_ctrl_unit(
    .instruction(wire_IR),    // input
    .alu_ctrl_op(ALUCtrlOp),  // input
    .alu_op(alu_op)         // output
  );

  // ---------- ALU ----------
  ALU alu(
    .alu_op(alu_op),      // input
    .alu_in_1(ALUSrcAout),    // input  
    .alu_in_2(ALUSrcBout),    // input
    .alu_result(alu_result),  // output
    .alu_bcond(bcond)     // output
  );

  // ---------- MUX ----------
  mux2to1 MemorySorucemux (
    .in0(current_pc),
    .in1(ALUOut),
    .sel(IorD),
    .out(mem_addr)
  );

  mux2to1 RegSourceMux (
    .in0(ALUOut),
    .in1(wire_MDR),
    .sel(MemToReg),
    .out(RegSource)
  );

  mux2to1 ALUSourceAmux (
    .in0(current_pc),
    .in1(A),
    .sel(ALUSrcA),
    .out(ALUSrcAout)
  );
 

 // for PCSource
 // needs to be changed from mux2to1 to mux3to1(maybe)
 // 00 -> PC + 4
 // 01 -> branch
 // 10 -> jump
  mux2to1 ALUOutmux (
    .in0(alu_result),
    .in1(ALUOut),
    .sel(PCSource),
    .out(PCSrcWire)
  );

  //ALUSrcB
  mux3to1 ALUSourceBmux (
    .in0(B),
    .in1(32'b100),
    .in2(imm_gen_out),
    .sel(ALUSrcB),
    .out(ALUSrcBout)
  );


endmodule