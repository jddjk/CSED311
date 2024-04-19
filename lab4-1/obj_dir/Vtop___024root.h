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
        CData/*0:0*/ top__DOT__cpu__DOT__isStall;
        CData/*4:0*/ top__DOT__cpu__DOT__rs1_halt_considered;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_src;
        CData/*0:0*/ top__DOT__cpu__DOT__write_enable;
        CData/*3:0*/ top__DOT__cpu__DOT__alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT__is_ecall;
        CData/*4:0*/ top__DOT__cpu__DOT__MEM_WB_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__MEM_WB_is_halted;
        CData/*3:0*/ top__DOT__cpu__DOT__ID_EX_alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_alu_src;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input;
        CData/*4:0*/ top__DOT__cpu__DOT__ID_EX_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_is_branch;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_reg_write;
        CData/*4:0*/ top__DOT__cpu__DOT__EX_MEM_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__MEM_WB_mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__MEM_WB_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__isStall;
        CData/*0:0*/ top__DOT__cpu__DOT__imem__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__imem__DOT__clk;
        CData/*4:0*/ top__DOT__cpu__DOT__halt_rs__DOT__rs1;
        CData/*0:0*/ top__DOT__cpu__DOT__halt_rs__DOT__is_ecall;
        CData/*4:0*/ top__DOT__cpu__DOT__halt_rs__DOT__rs1_halt_considered;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__clk;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rd;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__write_enable;
        CData/*4:0*/ top__DOT__cpu__DOT__hazard_detection__DOT__ID_EX_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detection__DOT__ID_EX_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detection__DOT__ID_EX_mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detection__DOT__ID_EX_mem_write;
        CData/*4:0*/ top__DOT__cpu__DOT__hazard_detection__DOT__EX_MEM_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detection__DOT__EX_MEM_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detection__DOT__isStall;
        CData/*6:0*/ top__DOT__cpu__DOT__hazard_detection__DOT__opcode;
        CData/*4:0*/ top__DOT__cpu__DOT__hazard_detection__DOT__rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__hazard_detection__DOT__rs2;
        CData/*6:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__opcode;
    };
    struct {
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__isStall;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__write_enable;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall;
        CData/*0:0*/ top__DOT__cpu__DOT__ishalt__DOT__is_ecall;
        CData/*0:0*/ top__DOT__cpu__DOT__ishalt__DOT__isStall;
        CData/*0:0*/ top__DOT__cpu__DOT__ishalt__DOT__ID_is_halted;
        CData/*6:0*/ top__DOT__cpu__DOT__imm_gen__DOT__opcode;
        CData/*6:0*/ top__DOT__cpu__DOT__ALUControlUnit__DOT__opcode;
        CData/*2:0*/ top__DOT__cpu__DOT__ALUControlUnit__DOT__func3;
        CData/*6:0*/ top__DOT__cpu__DOT__ALUControlUnit__DOT__func7;
        CData/*3:0*/ top__DOT__cpu__DOT__ALUControlUnit__DOT__alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT__ALUSourcemux__DOT__sel;
        CData/*3:0*/ top__DOT__cpu__DOT__ALU__DOT__alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT__dmem__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__dmem__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__dmem__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__dmem__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__wb_mux__DOT__sel;
        CData/*0:0*/ top__DOT__cpu__DOT__halt__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__halt__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__halt__DOT__MEM_WB_is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__halt__DOT__is_halted;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__top__DOT__cpu__DOT__alu_op__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ top__DOT__cpu__DOT__imm_gen__DOT__immediate;
        SData/*11:0*/ top__DOT__cpu__DOT__imm_gen__DOT__imm;
        IData/*31:0*/ top__DOT__cpu__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__instruction;
        IData/*31:0*/ top__DOT__cpu__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__rs2_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSrcOut;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_result;
        IData/*31:0*/ top__DOT__cpu__DOT__dout;
        IData/*31:0*/ top__DOT__cpu__DOT__write_data;
        IData/*31:0*/ top__DOT__cpu__DOT__IF_ID_inst;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_rs1_data;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_rs2_data;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_imm;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_inst;
        IData/*31:0*/ top__DOT__cpu__DOT__EX_MEM_alu_out;
        IData/*31:0*/ top__DOT__cpu__DOT__EX_MEM_dmem_data;
        IData/*31:0*/ top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1;
        IData/*31:0*/ top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2;
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__current_pc_reg;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_adder__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_adder__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__addr;
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__dout;
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__imem_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rd_din;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs1_dout;
    };
    struct {
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs2_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__hazard_detection__DOT__current_inst;
        IData/*31:0*/ top__DOT__cpu__DOT__ishalt__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT__instruction;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSourcemux__DOT__in0;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSourcemux__DOT__in1;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSourcemux__DOT__out;
        IData/*31:0*/ top__DOT__cpu__DOT__ALU__DOT__alu_in_1;
        IData/*31:0*/ top__DOT__cpu__DOT__ALU__DOT__alu_in_2;
        IData/*31:0*/ top__DOT__cpu__DOT__ALU__DOT__alu_result;
        IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__addr;
        IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__din;
        IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__dout;
        IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__dmem_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__wb_mux__DOT__in0;
        IData/*31:0*/ top__DOT__cpu__DOT__wb_mux__DOT__in1;
        IData/*31:0*/ top__DOT__cpu__DOT__wb_mux__DOT__out;
        IData/*31:0*/ __Vtrigprevexpr___TOP__top__DOT__cpu__DOT__ALUSrcOut__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__top__DOT__cpu__DOT__ID_EX_rs1_data__0;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(print_reg[32],31,0);
        VlUnpacked<IData/*31:0*/, 32> top__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 1024> top__DOT__cpu__DOT__imem__DOT__mem;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__rf;
        VlUnpacked<IData/*31:0*/, 16384> top__DOT__cpu__DOT__dmem__DOT__mem;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__MEM_DEPTH = 0x00000400U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__ALU__DOT__data_width = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__MEM_DEPTH = 0x00004000U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
