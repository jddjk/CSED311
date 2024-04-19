// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(is_halted,0,0);
        CData/*0:0*/ top__DOT__reset;
        CData/*0:0*/ top__DOT__clk;
        CData/*0:0*/ top__DOT__is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__is_halted;
        CData/*4:0*/ top__DOT__cpu__DOT__rs1_in;
        CData/*4:0*/ top__DOT__cpu__DOT__rs2_in;
        CData/*4:0*/ top__DOT__cpu__DOT__rd;
        CData/*0:0*/ top__DOT__cpu__DOT__MemRead;
        CData/*0:0*/ top__DOT__cpu__DOT__MemWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__MemToReg;
        CData/*0:0*/ top__DOT__cpu__DOT__PCWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__write_enable;
        CData/*0:0*/ top__DOT__cpu__DOT__IRWrite;
        CData/*6:0*/ top__DOT__cpu__DOT__opcode;
        CData/*0:0*/ top__DOT__cpu__DOT__IorD;
        CData/*1:0*/ top__DOT__cpu__DOT__ALUop;
        CData/*1:0*/ top__DOT__cpu__DOT__alu_src_B;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_src_A;
        CData/*0:0*/ top__DOT__cpu__DOT__PC_Write;
        CData/*0:0*/ top__DOT__cpu__DOT__PCWriteNotCond;
        CData/*0:0*/ top__DOT__cpu__DOT__PCSource;
        CData/*0:0*/ top__DOT__cpu__DOT__is_ecall;
        CData/*0:0*/ top__DOT__cpu__DOT__cond;
        CData/*0:0*/ top__DOT__cpu__DOT__halted;
        CData/*2:0*/ top__DOT__cpu__DOT__ALUCtrlOp;
        CData/*2:0*/ top__DOT__cpu__DOT__FUNCT;
        CData/*0:0*/ top__DOT__cpu__DOT__bcond;
        CData/*0:0*/ top__DOT__cpu__DOT__PC__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__PC__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__PC__DOT__PCWrite;
        CData/*6:0*/ top__DOT__cpu__DOT__ImmediateGenerator__DOT__opcode;
        CData/*0:0*/ top__DOT__cpu__DOT__RegisterFile__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__RegisterFile__DOT__clk;
        CData/*4:0*/ top__DOT__cpu__DOT__RegisterFile__DOT__rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__RegisterFile__DOT__rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__RegisterFile__DOT__rd;
        CData/*0:0*/ top__DOT__cpu__DOT__RegisterFile__DOT__write_enable;
        CData/*0:0*/ top__DOT__cpu__DOT__Memory__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__Memory__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__Memory__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__Memory__DOT__mem_write;
        CData/*1:0*/ top__DOT__cpu__DOT__ALUControlUnit__DOT__ALUop;
        CData/*2:0*/ top__DOT__cpu__DOT__ALUControlUnit__DOT__ALUCtrlOp;
        CData/*6:0*/ top__DOT__cpu__DOT__ALUControlUnit__DOT__opcode;
        CData/*6:0*/ top__DOT__cpu__DOT__ALUControlUnit__DOT__FUNCT7;
        CData/*2:0*/ top__DOT__cpu__DOT__ALUControlUnit__DOT__FUNCT3;
        CData/*2:0*/ top__DOT__cpu__DOT__ALU__DOT__ALUCtrlOp;
        CData/*2:0*/ top__DOT__cpu__DOT__ALU__DOT__FUNCT;
        CData/*0:0*/ top__DOT__cpu__DOT__ALU__DOT__bcond;
        CData/*6:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__opcode;
        CData/*0:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__bcond;
        CData/*1:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__ALUop;
        CData/*1:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__alu_src_B;
        CData/*0:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__alu_src_A;
        CData/*0:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__PCWriteNotCond;
        CData/*0:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__PC_Write;
        CData/*0:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__MemRead;
    };
    struct {
        CData/*0:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__MemWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__MemToReg;
        CData/*0:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__IorD;
        CData/*0:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__IRWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__PCSource;
        CData/*0:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__is_ecall;
        CData/*3:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__current_state;
        CData/*3:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__next_state;
        CData/*6:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__MicroSequencer__DOT__opcode;
        CData/*3:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__MicroSequencer__DOT__current_state;
        CData/*0:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__MicroSequencer__DOT__bcond;
        CData/*3:0*/ top__DOT__cpu__DOT__ControlUnit__DOT__MicroSequencer__DOT__next_state;
        CData/*0:0*/ top__DOT__cpu__DOT__IorD_mux__DOT__sel;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_src_A_mux__DOT__sel;
        CData/*0:0*/ top__DOT__cpu__DOT__pc_source_mux__DOT__sel;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_to_reg_mux__DOT__sel;
        CData/*1:0*/ top__DOT__cpu__DOT__alu_src_B_mux__DOT__sel;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__cpu__DOT__bcond__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__cpu__DOT__bcond__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ top__DOT__cpu__DOT__ImmediateGenerator__DOT__immediate;
        SData/*11:0*/ top__DOT__cpu__DOT__ImmediateGenerator__DOT__imm;
        IData/*31:0*/ top__DOT__cpu__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUResult;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__rs2_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__instruction;
        IData/*31:0*/ top__DOT__cpu__DOT__MemAddr;
        IData/*31:0*/ top__DOT__cpu__DOT__adder_out;
        IData/*31:0*/ top__DOT__cpu__DOT__dout;
        IData/*31:0*/ top__DOT__cpu__DOT__in_1_ALU;
        IData/*31:0*/ top__DOT__cpu__DOT__in_2_ALU;
        IData/*31:0*/ top__DOT__cpu__DOT__rd_din;
        IData/*31:0*/ top__DOT__cpu__DOT__IR;
        IData/*31:0*/ top__DOT__cpu__DOT__MDR;
        IData/*31:0*/ top__DOT__cpu__DOT__A;
        IData/*31:0*/ top__DOT__cpu__DOT__B;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUOut;
        IData/*31:0*/ top__DOT__cpu__DOT__PC__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__PC__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__ImmediateGenerator__DOT__instruction;
        IData/*31:0*/ top__DOT__cpu__DOT__ImmediateGenerator__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__RegisterFile__DOT__rd_din;
        IData/*31:0*/ top__DOT__cpu__DOT__RegisterFile__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__RegisterFile__DOT__rs2_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__RegisterFile__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__Memory__DOT__addr;
        IData/*31:0*/ top__DOT__cpu__DOT__Memory__DOT__din;
        IData/*31:0*/ top__DOT__cpu__DOT__Memory__DOT__dout;
        IData/*31:0*/ top__DOT__cpu__DOT__Memory__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__Memory__DOT__mem_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUControlUnit__DOT__instruction;
        IData/*31:0*/ top__DOT__cpu__DOT__ALU__DOT__in_1_ALU;
        IData/*31:0*/ top__DOT__cpu__DOT__ALU__DOT__in_2_ALU;
        IData/*31:0*/ top__DOT__cpu__DOT__ALU__DOT__ALUResult;
        IData/*31:0*/ top__DOT__cpu__DOT__IorD_mux__DOT__in1;
    };
    struct {
        IData/*31:0*/ top__DOT__cpu__DOT__IorD_mux__DOT__in0;
        IData/*31:0*/ top__DOT__cpu__DOT__IorD_mux__DOT__out;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_src_A_mux__DOT__in1;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_src_A_mux__DOT__in0;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_src_A_mux__DOT__out;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_source_mux__DOT__in1;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_source_mux__DOT__in0;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_source_mux__DOT__out;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_to_reg_mux__DOT__in1;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_to_reg_mux__DOT__in0;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_to_reg_mux__DOT__out;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_src_B_mux__DOT__in0;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_src_B_mux__DOT__in1;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_src_B_mux__DOT__in2;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_src_B_mux__DOT__in3;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_src_B_mux__DOT__out;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(print_reg[32],31,0);
        VlUnpacked<IData/*31:0*/, 32> top__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__RegisterFile__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__RegisterFile__DOT__rf;
        VlUnpacked<IData/*31:0*/, 16384> top__DOT__cpu__DOT__Memory__DOT__mem;
    };
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__Memory__DOT__MEM_DEPTH = 0x00004000U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
