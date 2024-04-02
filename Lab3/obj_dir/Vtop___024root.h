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
        CData/*3:0*/ top__DOT__cpu__DOT__alu_op;
        CData/*1:0*/ top__DOT__cpu__DOT__ALUCtrlOp;
        CData/*0:0*/ top__DOT__cpu__DOT__MemToReg;
        CData/*0:0*/ top__DOT__cpu__DOT__MemWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__MemRead;
        CData/*0:0*/ top__DOT__cpu__DOT__PCWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__PCWriteNotCond;
        CData/*1:0*/ top__DOT__cpu__DOT__PCSource;
        CData/*0:0*/ top__DOT__cpu__DOT__ALUOp;
        CData/*1:0*/ top__DOT__cpu__DOT__ALUSrcB;
        CData/*0:0*/ top__DOT__cpu__DOT__ALUSrcA;
        CData/*0:0*/ top__DOT__cpu__DOT__RegWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__RegSoruce;
        CData/*0:0*/ top__DOT__cpu__DOT__bcond;
        CData/*0:0*/ top__DOT__cpu__DOT__cond1;
        CData/*0:0*/ top__DOT__cpu__DOT__cond2;
        CData/*0:0*/ top__DOT__cpu__DOT__IorD;
        CData/*0:0*/ top__DOT__cpu__DOT__IRWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__is_ecall;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__pc_write;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__clk;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rd;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__write_enable;
        CData/*0:0*/ top__DOT__cpu__DOT__memory__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__memory__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__memory__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__memory__DOT__mem_write;
        CData/*6:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__opcode;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__PCWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__PCWriteNotCond;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__IRWrite;
        CData/*1:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__ALUCtrlOp;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__alu_srcA;
        CData/*1:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__alu_srcB;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__RegWrite;
        CData/*1:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__PCSource;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__IorD;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall;
        CData/*3:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__current_state;
        CData/*3:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__next_state;
        CData/*6:0*/ top__DOT__cpu__DOT__imm_gen__DOT__opcode;
        CData/*1:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_ctrl_op;
        CData/*3:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op;
        CData/*3:0*/ top__DOT__cpu__DOT__alu__DOT__alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT__alu__DOT__alu_bcond;
    };
    struct {
        CData/*0:0*/ top__DOT__cpu__DOT__MemorySorucemux__DOT__sel;
        CData/*0:0*/ top__DOT__cpu__DOT__RegSourceMux__DOT__sel;
        CData/*0:0*/ top__DOT__cpu__DOT__ALUSourceAmux__DOT__sel;
        CData/*0:0*/ top__DOT__cpu__DOT__ALUOutmux__DOT__sel;
        CData/*1:0*/ top__DOT__cpu__DOT__ALUSourceBmux__DOT__sel;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__top__DOT__cpu__DOT__alu_op__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ top__DOT__cpu__DOT__imm_gen__DOT__immediate;
        SData/*11:0*/ top__DOT__cpu__DOT__imm_gen__DOT__imm;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_data;
        IData/*31:0*/ top__DOT__cpu__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSrcAout;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSrcBout;
        IData/*31:0*/ top__DOT__cpu__DOT__RegSource;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_result;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__PCSrcWire;
        IData/*31:0*/ top__DOT__cpu__DOT__x17;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_to_A;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_to_B;
        IData/*31:0*/ top__DOT__cpu__DOT__wire_IR;
        IData/*31:0*/ top__DOT__cpu__DOT__wire_MDR;
        IData/*31:0*/ top__DOT__cpu__DOT__wire_A;
        IData/*31:0*/ top__DOT__cpu__DOT__wire_B;
        IData/*31:0*/ top__DOT__cpu__DOT__wire_ALUOut;
        IData/*31:0*/ top__DOT__cpu__DOT__IR;
        IData/*31:0*/ top__DOT__cpu__DOT__MDR;
        IData/*31:0*/ top__DOT__cpu__DOT__A;
        IData/*31:0*/ top__DOT__cpu__DOT__B;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUOut;
        IData/*31:0*/ top__DOT__cpu__DOT__x17_val;
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rd_din;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs2_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__addr;
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__din;
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__dout;
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__mem_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__x17_val;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT__instruction;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__instruction;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__alu_in_1;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__alu_in_2;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__alu_result;
        IData/*31:0*/ top__DOT__cpu__DOT__MemorySorucemux__DOT__in0;
        IData/*31:0*/ top__DOT__cpu__DOT__MemorySorucemux__DOT__in1;
        IData/*31:0*/ top__DOT__cpu__DOT__MemorySorucemux__DOT__out;
        IData/*31:0*/ top__DOT__cpu__DOT__RegSourceMux__DOT__in0;
        IData/*31:0*/ top__DOT__cpu__DOT__RegSourceMux__DOT__in1;
        IData/*31:0*/ top__DOT__cpu__DOT__RegSourceMux__DOT__out;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSourceAmux__DOT__in0;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSourceAmux__DOT__in1;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSourceAmux__DOT__out;
    };
    struct {
        IData/*31:0*/ top__DOT__cpu__DOT__ALUOutmux__DOT__in0;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUOutmux__DOT__in1;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUOutmux__DOT__out;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSourceBmux__DOT__in0;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSourceBmux__DOT__in1;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSourceBmux__DOT__in2;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSourceBmux__DOT__out;
        IData/*31:0*/ __Vtrigprevexpr___TOP__top__DOT__cpu__DOT__ALUSrcAout__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__top__DOT__cpu__DOT__ALUSrcBout__0;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(print_reg[32],31,0);
        VlUnpacked<IData/*31:0*/, 32> top__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__rf;
        VlUnpacked<IData/*31:0*/, 16384> top__DOT__cpu__DOT__memory__DOT__mem;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__MEM_DEPTH = 0x00004000U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__data_width = 0x00000020U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
