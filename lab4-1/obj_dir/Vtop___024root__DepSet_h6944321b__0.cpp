// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__reset = vlSelf->reset;
    vlSelf->top__DOT__clk = vlSelf->clk;
    vlSelf->top__DOT__cpu__DOT__reset = vlSelf->top__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__halt__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__halt__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlWide<9>/*287:0*/ Vtop__ConstPool__CONST_hc2525ff1_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*13:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __Vdlyvval__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __Vdlyvset__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0U;
    if (VL_UNLIKELY(vlSelf->reset)) {
        vlSelf->top__DOT__cpu__DOT__imem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->top__DOT__cpu__DOT__imem__DOT__i)) {
            vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[(0x3ffU 
                                                        & vlSelf->top__DOT__cpu__DOT__imem__DOT__i)] = 0U;
            vlSelf->top__DOT__cpu__DOT__imem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__imem__DOT__i);
        }
        VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(9, Vtop__ConstPool__CONST_hc2525ff1_0)
                     ,  &(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem)
                     , 0, ~0ULL);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write) {
            __Vdlyvval__top__DOT__cpu__DOT__dmem__DOT__mem__v0 
                = vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data;
            __Vdlyvset__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 1U;
            __Vdlyvdim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0 
                = (0x3fffU & vlSelf->top__DOT__cpu__DOT__dmem__DOT__dmem_addr);
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__dmem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelf->top__DOT__cpu__DOT__dmem__DOT__i)) {
            vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem[(0x3fffU 
                                                        & vlSelf->top__DOT__cpu__DOT__dmem__DOT__i)] = 0U;
            vlSelf->top__DOT__cpu__DOT__dmem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__dmem__DOT__i);
        }
        vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_imm = 0U;
        vlSelf->top__DOT__cpu__DOT__current_pc = 0U;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data = 0U;
        vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc_reg = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data = 0U;
    } else {
        vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 
            = vlSelf->top__DOT__cpu__DOT__dout;
        vlSelf->top__DOT__cpu__DOT__ID_EX_imm = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
        vlSelf->top__DOT__cpu__DOT__current_pc = ((IData)(vlSelf->top__DOT__cpu__DOT__isStall)
                                                   ? vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc_reg
                                                   : vlSelf->top__DOT__cpu__DOT__next_pc);
        vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 
            = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data 
            = vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data;
        if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__isStall)))) {
            vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc_reg 
                = vlSelf->top__DOT__cpu__DOT__next_pc;
        }
        vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out 
            = vlSelf->top__DOT__cpu__DOT__alu_result;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data 
            = vlSelf->top__DOT__cpu__DOT__rs2_dout;
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_inst = vlSelf->top__DOT__cpu__DOT__IF_ID_inst;
    }
    vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src = ((1U 
                                                  & (~ (IData)(vlSelf->reset))) 
                                                 && (IData)(vlSelf->top__DOT__cpu__DOT__alu_src));
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read = (
                                                   (1U 
                                                    & (~ (IData)(vlSelf->reset))) 
                                                   && (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read));
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg = 
        ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_to_reg));
    vlSelf->is_halted = ((1U & (~ (IData)(vlSelf->reset))) 
                         && (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_is_halted));
    if (__Vdlyvset__top__DOT__cpu__DOT__dmem__DOT__mem__v0) {
        vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem[__Vdlyvdim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    }
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write = 
        ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write));
    vlSelf->top__DOT__cpu__DOT__ALUSourcemux__DOT__sel 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src;
    vlSelf->top__DOT__cpu__DOT__wb_mux__DOT__in1 = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1;
    vlSelf->top__DOT__cpu__DOT__ALUSourcemux__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_imm;
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem_read 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read;
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read = ((1U 
                                                   & (~ (IData)(vlSelf->reset))) 
                                                  && (IData)(vlSelf->top__DOT__cpu__DOT__mem_read));
    vlSelf->top__DOT__cpu__DOT__wb_mux__DOT__sel = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg;
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_to_reg = 
        ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_to_reg));
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__pc_adder__DOT__current_pc 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__addr = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__current_pc, 2U);
    vlSelf->top__DOT__is_halted = vlSelf->is_halted;
    vlSelf->top__DOT__cpu__DOT__MEM_WB_is_halted = 
        ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_is_halted));
    vlSelf->top__DOT__cpu__DOT__wb_mux__DOT__in0 = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2;
    vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__opcode 
        = (0x7fU & (vlSelf->top__DOT__cpu__DOT__ID_EX_inst 
                    >> 0U));
    vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__func3 
        = (7U & (vlSelf->top__DOT__cpu__DOT__ID_EX_inst 
                 >> 0xcU));
    vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__func7 
        = (0x7fU & (vlSelf->top__DOT__cpu__DOT__ID_EX_inst 
                    >> 0x19U));
    vlSelf->top__DOT__cpu__DOT__next_pc = ((IData)(4U) 
                                           + vlSelf->top__DOT__cpu__DOT__current_pc);
    vlSelf->top__DOT__cpu__DOT__is_halted = vlSelf->top__DOT__is_halted;
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write;
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write = (
                                                   (1U 
                                                    & (~ (IData)(vlSelf->reset))) 
                                                   && (IData)(vlSelf->top__DOT__cpu__DOT__mem_write));
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__din = vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data;
    vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__ID_EX_mem_read 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read;
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_to_reg = 
        ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->top__DOT__cpu__DOT__mem_to_reg));
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = vlSelf->top__DOT__cpu__DOT__next_pc;
    vlSelf->top__DOT__cpu__DOT__pc_adder__DOT__next_pc 
        = vlSelf->top__DOT__cpu__DOT__next_pc;
    vlSelf->top__DOT__cpu__DOT__halt__DOT__is_halted 
        = vlSelf->top__DOT__cpu__DOT__is_halted;
    vlSelf->top__DOT__cpu__DOT__halt__DOT__MEM_WB_is_halted 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_is_halted;
    vlSelf->top__DOT__cpu__DOT__EX_MEM_is_halted = 
        ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_halted));
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__addr = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__dmem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out, 2U);
    vlSelf->top__DOT__cpu__DOT__dout = ((IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read)
                                         ? vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem
                                        [(0x3fffU & vlSelf->top__DOT__cpu__DOT__dmem__DOT__dmem_addr)]
                                         : 0U);
    vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__ID_EX_mem_write 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write;
    vlSelf->top__DOT__cpu__DOT__ALUSourcemux__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data;
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_halted = (
                                                   (1U 
                                                    & (~ (IData)(vlSelf->reset))) 
                                                   && (IData)(vlSelf->top__DOT__cpu__DOT__ID_is_halted));
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__dout = vlSelf->top__DOT__cpu__DOT__dout;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    // Body
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0U;
    if (vlSelf->clk) {
        if (vlSelf->reset) {
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 4U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 5U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 6U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 7U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 8U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 9U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xaU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xbU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xcU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xdU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xeU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xfU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x10U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x11U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x12U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x13U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x14U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x15U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x16U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x17U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x18U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x19U;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1aU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1bU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1cU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1dU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1eU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1fU;
            vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x20U;
            __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 1U;
        }
    } else if (((IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write) 
                & (0U != (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_rd)))) {
        __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 
            = vlSelf->top__DOT__cpu__DOT__write_data;
        __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 1U;
        __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 
            = vlSelf->top__DOT__cpu__DOT__MEM_WB_rd;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0x2ffcU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[4U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[5U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[6U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[7U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[8U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[9U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xaU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xbU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xcU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xdU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xeU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xfU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x10U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x11U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x12U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x13U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x14U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x15U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x16U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x17U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x18U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x19U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1aU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1bU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1cU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1dU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1eU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1fU] = 0U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32] 
            = __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    }
    vlSelf->print_reg[0U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0U];
    vlSelf->print_reg[1U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [1U];
    vlSelf->print_reg[2U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [2U];
    vlSelf->print_reg[3U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [3U];
    vlSelf->print_reg[4U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [4U];
    vlSelf->print_reg[5U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [5U];
    vlSelf->print_reg[6U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [6U];
    vlSelf->print_reg[7U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [7U];
    vlSelf->print_reg[8U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [8U];
    vlSelf->print_reg[9U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [9U];
    vlSelf->print_reg[0xaU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xaU];
    vlSelf->print_reg[0xbU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xbU];
    vlSelf->print_reg[0xcU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xcU];
    vlSelf->print_reg[0xdU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xdU];
    vlSelf->print_reg[0xeU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xeU];
    vlSelf->print_reg[0xfU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xfU];
    vlSelf->print_reg[0x10U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x10U];
    vlSelf->print_reg[0x11U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x11U];
    vlSelf->print_reg[0x12U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x12U];
    vlSelf->print_reg[0x13U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x13U];
    vlSelf->print_reg[0x14U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x14U];
    vlSelf->print_reg[0x15U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x15U];
    vlSelf->print_reg[0x16U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x16U];
    vlSelf->print_reg[0x17U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x17U];
    vlSelf->print_reg[0x18U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x18U];
    vlSelf->print_reg[0x19U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x19U];
    vlSelf->print_reg[0x1aU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1aU];
    vlSelf->print_reg[0x1bU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1bU];
    vlSelf->print_reg[0x1cU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1cU];
    vlSelf->print_reg[0x1dU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1dU];
    vlSelf->print_reg[0x1eU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1eU];
    vlSelf->print_reg[0x1fU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1fU];
    vlSelf->top__DOT__print_reg[0U] = vlSelf->print_reg
        [0U];
    vlSelf->top__DOT__print_reg[1U] = vlSelf->print_reg
        [1U];
    vlSelf->top__DOT__print_reg[2U] = vlSelf->print_reg
        [2U];
    vlSelf->top__DOT__print_reg[3U] = vlSelf->print_reg
        [3U];
    vlSelf->top__DOT__print_reg[4U] = vlSelf->print_reg
        [4U];
    vlSelf->top__DOT__print_reg[5U] = vlSelf->print_reg
        [5U];
    vlSelf->top__DOT__print_reg[6U] = vlSelf->print_reg
        [6U];
    vlSelf->top__DOT__print_reg[7U] = vlSelf->print_reg
        [7U];
    vlSelf->top__DOT__print_reg[8U] = vlSelf->print_reg
        [8U];
    vlSelf->top__DOT__print_reg[9U] = vlSelf->print_reg
        [9U];
    vlSelf->top__DOT__print_reg[0xaU] = vlSelf->print_reg
        [0xaU];
    vlSelf->top__DOT__print_reg[0xbU] = vlSelf->print_reg
        [0xbU];
    vlSelf->top__DOT__print_reg[0xcU] = vlSelf->print_reg
        [0xcU];
    vlSelf->top__DOT__print_reg[0xdU] = vlSelf->print_reg
        [0xdU];
    vlSelf->top__DOT__print_reg[0xeU] = vlSelf->print_reg
        [0xeU];
    vlSelf->top__DOT__print_reg[0xfU] = vlSelf->print_reg
        [0xfU];
    vlSelf->top__DOT__print_reg[0x10U] = vlSelf->print_reg
        [0x10U];
    vlSelf->top__DOT__print_reg[0x11U] = vlSelf->print_reg
        [0x11U];
    vlSelf->top__DOT__print_reg[0x12U] = vlSelf->print_reg
        [0x12U];
    vlSelf->top__DOT__print_reg[0x13U] = vlSelf->print_reg
        [0x13U];
    vlSelf->top__DOT__print_reg[0x14U] = vlSelf->print_reg
        [0x14U];
    vlSelf->top__DOT__print_reg[0x15U] = vlSelf->print_reg
        [0x15U];
    vlSelf->top__DOT__print_reg[0x16U] = vlSelf->print_reg
        [0x16U];
    vlSelf->top__DOT__print_reg[0x17U] = vlSelf->print_reg
        [0x17U];
    vlSelf->top__DOT__print_reg[0x18U] = vlSelf->print_reg
        [0x18U];
    vlSelf->top__DOT__print_reg[0x19U] = vlSelf->print_reg
        [0x19U];
    vlSelf->top__DOT__print_reg[0x1aU] = vlSelf->print_reg
        [0x1aU];
    vlSelf->top__DOT__print_reg[0x1bU] = vlSelf->print_reg
        [0x1bU];
    vlSelf->top__DOT__print_reg[0x1cU] = vlSelf->print_reg
        [0x1cU];
    vlSelf->top__DOT__print_reg[0x1dU] = vlSelf->print_reg
        [0x1dU];
    vlSelf->top__DOT__print_reg[0x1eU] = vlSelf->print_reg
        [0x1eU];
    vlSelf->top__DOT__print_reg[0x1fU] = vlSelf->print_reg
        [0x1fU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0U] = vlSelf->print_reg
        [0U];
    vlSelf->top__DOT__cpu__DOT__print_reg[1U] = vlSelf->print_reg
        [1U];
    vlSelf->top__DOT__cpu__DOT__print_reg[2U] = vlSelf->print_reg
        [2U];
    vlSelf->top__DOT__cpu__DOT__print_reg[3U] = vlSelf->print_reg
        [3U];
    vlSelf->top__DOT__cpu__DOT__print_reg[4U] = vlSelf->print_reg
        [4U];
    vlSelf->top__DOT__cpu__DOT__print_reg[5U] = vlSelf->print_reg
        [5U];
    vlSelf->top__DOT__cpu__DOT__print_reg[6U] = vlSelf->print_reg
        [6U];
    vlSelf->top__DOT__cpu__DOT__print_reg[7U] = vlSelf->print_reg
        [7U];
    vlSelf->top__DOT__cpu__DOT__print_reg[8U] = vlSelf->print_reg
        [8U];
    vlSelf->top__DOT__cpu__DOT__print_reg[9U] = vlSelf->print_reg
        [9U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xaU] = vlSelf->print_reg
        [0xaU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xbU] = vlSelf->print_reg
        [0xbU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xcU] = vlSelf->print_reg
        [0xcU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xdU] = vlSelf->print_reg
        [0xdU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xeU] = vlSelf->print_reg
        [0xeU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xfU] = vlSelf->print_reg
        [0xfU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x10U] = 
        vlSelf->print_reg[0x10U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x11U] = 
        vlSelf->print_reg[0x11U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x12U] = 
        vlSelf->print_reg[0x12U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x13U] = 
        vlSelf->print_reg[0x13U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x14U] = 
        vlSelf->print_reg[0x14U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x15U] = 
        vlSelf->print_reg[0x15U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x16U] = 
        vlSelf->print_reg[0x16U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x17U] = 
        vlSelf->print_reg[0x17U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x18U] = 
        vlSelf->print_reg[0x18U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x19U] = 
        vlSelf->print_reg[0x19U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1aU] = 
        vlSelf->print_reg[0x1aU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1bU] = 
        vlSelf->print_reg[0x1bU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1cU] = 
        vlSelf->print_reg[0x1cU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1dU] = 
        vlSelf->print_reg[0x1dU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1eU] = 
        vlSelf->print_reg[0x1eU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1fU] = 
        vlSelf->print_reg[0x1fU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0U] 
        = vlSelf->print_reg[0U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[1U] 
        = vlSelf->print_reg[1U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[2U] 
        = vlSelf->print_reg[2U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[3U] 
        = vlSelf->print_reg[3U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[4U] 
        = vlSelf->print_reg[4U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[5U] 
        = vlSelf->print_reg[5U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[6U] 
        = vlSelf->print_reg[6U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[7U] 
        = vlSelf->print_reg[7U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[8U] 
        = vlSelf->print_reg[8U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[9U] 
        = vlSelf->print_reg[9U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xaU] 
        = vlSelf->print_reg[0xaU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xbU] 
        = vlSelf->print_reg[0xbU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xcU] 
        = vlSelf->print_reg[0xcU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xdU] 
        = vlSelf->print_reg[0xdU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xeU] 
        = vlSelf->print_reg[0xeU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xfU] 
        = vlSelf->print_reg[0xfU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x10U] 
        = vlSelf->print_reg[0x10U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x11U] 
        = vlSelf->print_reg[0x11U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x12U] 
        = vlSelf->print_reg[0x12U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x13U] 
        = vlSelf->print_reg[0x13U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x14U] 
        = vlSelf->print_reg[0x14U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x15U] 
        = vlSelf->print_reg[0x15U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x16U] 
        = vlSelf->print_reg[0x16U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x17U] 
        = vlSelf->print_reg[0x17U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x18U] 
        = vlSelf->print_reg[0x18U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x19U] 
        = vlSelf->print_reg[0x19U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1aU] 
        = vlSelf->print_reg[0x1aU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1bU] 
        = vlSelf->print_reg[0x1bU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1cU] 
        = vlSelf->print_reg[0x1cU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1dU] 
        = vlSelf->print_reg[0x1dU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1eU] 
        = vlSelf->print_reg[0x1eU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1fU] 
        = vlSelf->print_reg[0x1fU];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__cpu__DOT__alu_result = ((8U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                               ? ((4U 
                                                   & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                     ? 
                                                    (0xfffffffeU 
                                                     & (vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data 
                                                        + vlSelf->top__DOT__cpu__DOT__ALUSrcOut))
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data 
                                                     + vlSelf->top__DOT__cpu__DOT__ALUSrcOut))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data 
                                                     ^ vlSelf->top__DOT__cpu__DOT__ALUSrcOut)
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data 
                                                     | vlSelf->top__DOT__cpu__DOT__ALUSrcOut))))
                                               : ((4U 
                                                   & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data 
                                                     & vlSelf->top__DOT__cpu__DOT__ALUSrcOut)
                                                     : 
                                                    VL_SHIFTL_III(32,32,32, vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data, vlSelf->top__DOT__cpu__DOT__ALUSrcOut))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data, vlSelf->top__DOT__cpu__DOT__ALUSrcOut)
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data 
                                                     - vlSelf->top__DOT__cpu__DOT__ALUSrcOut)))
                                                   : 0U));
    vlSelf->top__DOT__cpu__DOT__ALU__DOT__alu_result 
        = vlSelf->top__DOT__cpu__DOT__alu_result;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__cpu__DOT__write_data = ((IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg)
                                               ? vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1
                                               : vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2);
    vlSelf->top__DOT__cpu__DOT__alu_op = ((0x67U == 
                                           (0x7fU & vlSelf->top__DOT__cpu__DOT__ID_EX_inst))
                                           ? 0xfU : 
                                          ((IData)(
                                                   (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__cpu__DOT__ID_EX_inst)))
                                            ? 0xeU : 
                                           ((IData)(
                                                    (0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__cpu__DOT__ID_EX_inst)))
                                             ? 0xdU
                                             : ((IData)(
                                                        (0x4063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__cpu__DOT__ID_EX_inst)))
                                                 ? 0xcU
                                                 : 
                                                ((IData)(
                                                         (0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__cpu__DOT__ID_EX_inst)))
                                                  ? 0xbU
                                                  : 
                                                 (((((IData)(
                                                             (0x2003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__cpu__DOT__ID_EX_inst))) 
                                                     | (IData)(
                                                               (0x2023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__cpu__DOT__ID_EX_inst)))) 
                                                    | ((IData)(
                                                               (0x13U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__cpu__DOT__ID_EX_inst))) 
                                                       & (0x20U 
                                                          != 
                                                          (vlSelf->top__DOT__cpu__DOT__ID_EX_inst 
                                                           >> 0x19U)))) 
                                                   | ((IData)(
                                                              (0x33U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__cpu__DOT__ID_EX_inst))) 
                                                      & (0x20U 
                                                         != 
                                                         (vlSelf->top__DOT__cpu__DOT__ID_EX_inst 
                                                          >> 0x19U))))
                                                   ? 0xaU
                                                   : 
                                                  (((IData)(
                                                            (0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__cpu__DOT__ID_EX_inst))) 
                                                    | (IData)(
                                                              (0x4033U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__cpu__DOT__ID_EX_inst))))
                                                    ? 9U
                                                    : 
                                                   (((IData)(
                                                             (0x6013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__cpu__DOT__ID_EX_inst))) 
                                                     | (IData)(
                                                               (0x6033U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__cpu__DOT__ID_EX_inst))))
                                                     ? 8U
                                                     : 
                                                    (((IData)(
                                                              (0x7013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__cpu__DOT__ID_EX_inst))) 
                                                      | (IData)(
                                                                (0x7033U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__cpu__DOT__ID_EX_inst))))
                                                      ? 7U
                                                      : 
                                                     (((IData)(
                                                               (0x1013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__cpu__DOT__ID_EX_inst))) 
                                                       | (IData)(
                                                                 (0x1033U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__cpu__DOT__ID_EX_inst))))
                                                       ? 6U
                                                       : 
                                                      (((IData)(
                                                                (0x5013U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__cpu__DOT__ID_EX_inst))) 
                                                        | (IData)(
                                                                  (0x5033U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__cpu__DOT__ID_EX_inst))))
                                                        ? 5U
                                                        : 
                                                       ((IData)(
                                                                (0x40000033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->top__DOT__cpu__DOT__ID_EX_inst)))
                                                         ? 4U
                                                         : 0U))))))))))));
    vlSelf->top__DOT__cpu__DOT__ALUSrcOut = ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src)
                                              ? vlSelf->top__DOT__cpu__DOT__ID_EX_imm
                                              : vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din 
        = vlSelf->top__DOT__cpu__DOT__write_data;
    vlSelf->top__DOT__cpu__DOT__wb_mux__DOT__out = vlSelf->top__DOT__cpu__DOT__write_data;
    vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write = 
        ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write));
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__MEM_WB_rd = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_rd = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rd = 0U;
        vlSelf->top__DOT__cpu__DOT__IF_ID_inst = 0U;
    } else {
        vlSelf->top__DOT__cpu__DOT__MEM_WB_rd = vlSelf->top__DOT__cpu__DOT__EX_MEM_rd;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data 
            = vlSelf->top__DOT__cpu__DOT__rs1_dout;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_rd = vlSelf->top__DOT__cpu__DOT__ID_EX_rd;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rd = (0x1fU 
                                                & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                   >> 7U));
        if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__isStall)))) {
            vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                = vlSelf->top__DOT__cpu__DOT__instruction;
        }
    }
    vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__alu_op 
        = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->top__DOT__cpu__DOT__ALU__DOT__alu_op = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->top__DOT__cpu__DOT__ALUSourcemux__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__ALUSrcOut;
    vlSelf->top__DOT__cpu__DOT__ALU__DOT__alu_in_2 
        = vlSelf->top__DOT__cpu__DOT__ALUSrcOut;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write = 
        ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = vlSelf->top__DOT__cpu__DOT__MEM_WB_rd;
    vlSelf->top__DOT__cpu__DOT__ALU__DOT__alu_in_1 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data;
    vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__EX_MEM_reg_write 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write;
    vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write = (
                                                   (1U 
                                                    & (~ (IData)(vlSelf->reset))) 
                                                   && (IData)(vlSelf->top__DOT__cpu__DOT__write_enable));
    vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__EX_MEM_rd 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__ID_EX_reg_write 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write;
    if (vlSelf->top__DOT__cpu__DOT__isStall) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_rd = 0U;
    }
    vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__ID_EX_rd 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rd;
    vlSelf->top__DOT__cpu__DOT__instruction = vlSelf->top__DOT__cpu__DOT__imem__DOT__mem
        [(0x3ffU & vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr)];
    vlSelf->top__DOT__cpu__DOT__imem__DOT__dout = vlSelf->top__DOT__cpu__DOT__instruction;
    vlSelf->top__DOT__cpu__DOT__halt_rs__DOT__rs1 = 
        (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                  >> 0xfU));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__current_inst 
        = vlSelf->top__DOT__cpu__DOT__IF_ID_inst;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__instruction 
        = vlSelf->top__DOT__cpu__DOT__IF_ID_inst;
    vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__rs1 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0xfU));
    vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__rs2 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__immediate 
        = (vlSelf->top__DOT__cpu__DOT__IF_ID_inst >> 0x14U);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm = 
        ((0xfe0U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U)) | (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                           >> 7U)));
    vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode 
        = vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode;
    vlSelf->top__DOT__cpu__DOT__mem_to_reg = (3U == (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode));
    vlSelf->top__DOT__cpu__DOT__alu_src = (((0x13U 
                                             == (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode)) 
                                            | (3U == (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode))) 
                                           | (0x23U 
                                              == (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode)));
    if ((0x73U == (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode))) {
        vlSelf->top__DOT__cpu__DOT__is_ecall = 1U;
        vlSelf->top__DOT__cpu__DOT__isStall = 0U;
        vlSelf->top__DOT__cpu__DOT__isStall = (((0x11U 
                                                 == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)) 
                                                & (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write)) 
                                               || ((0x11U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd)) 
                                                   & (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write)));
    } else {
        vlSelf->top__DOT__cpu__DOT__is_ecall = 0U;
        vlSelf->top__DOT__cpu__DOT__isStall = 0U;
    }
    if ((0x23U == (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode))) {
        if ((((0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0xfU)) == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)) 
             & (0U != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)))) {
            vlSelf->top__DOT__cpu__DOT__isStall = 1U;
        }
        if ((((0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0xfU)) == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd)) 
             & (0U != (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd)))) {
            vlSelf->top__DOT__cpu__DOT__isStall = 1U;
        }
        if ((((0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0x14U)) == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)) 
             & (0U != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)))) {
            vlSelf->top__DOT__cpu__DOT__isStall = 1U;
        }
        if ((((0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0x14U)) == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd)) 
             & (0U != (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd)))) {
            vlSelf->top__DOT__cpu__DOT__isStall = 1U;
        }
    }
    if ((3U == (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode))) {
        if ((((0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0xfU)) == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)) 
             & (0U != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)))) {
            vlSelf->top__DOT__cpu__DOT__isStall = 1U;
        }
        if ((((0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0xfU)) == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd)) 
             & (0U != (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd)))) {
            vlSelf->top__DOT__cpu__DOT__isStall = 1U;
        }
    }
    if ((0x33U == (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode))) {
        if ((((0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0xfU)) == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)) 
             & (0U != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)))) {
            vlSelf->top__DOT__cpu__DOT__isStall = 1U;
        }
        if ((((0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0xfU)) == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd)) 
             & (0U != (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd)))) {
            vlSelf->top__DOT__cpu__DOT__isStall = 1U;
        }
        if ((((0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0x14U)) == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)) 
             & (0U != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)))) {
            vlSelf->top__DOT__cpu__DOT__isStall = 1U;
        }
        if ((((0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0x14U)) == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd)) 
             & (0U != (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd)))) {
            vlSelf->top__DOT__cpu__DOT__isStall = 1U;
        }
    }
    if ((0x13U == (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode))) {
        vlSelf->top__DOT__cpu__DOT__imm_gen_out = (
                                                   ((- (IData)(
                                                               (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__immediate));
        if ((((0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0xfU)) == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)) 
             & (0U != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)))) {
            vlSelf->top__DOT__cpu__DOT__isStall = 1U;
        }
        if ((((0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0xfU)) == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd)) 
             & (0U != (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd)))) {
            vlSelf->top__DOT__cpu__DOT__isStall = 1U;
        }
    } else {
        vlSelf->top__DOT__cpu__DOT__imm_gen_out = (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__immediate))
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__immediate))
                                                     : 
                                                    ((0x23U 
                                                      == (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm))
                                                      : 
                                                     ((0x63U 
                                                       == (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                    >> 0x1fU))) 
                                                        << 0xdU) 
                                                       | ((0x1000U 
                                                           & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                              >> 0x13U)) 
                                                          | ((0x800U 
                                                              & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                 << 4U)) 
                                                             | ((0x7e0U 
                                                                 & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                    >> 0x14U)) 
                                                                | (0x1eU 
                                                                   & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                      >> 7U))))))
                                                       : 
                                                      ((0x6fU 
                                                        == (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                     >> 0x1fU))) 
                                                         << 0x15U) 
                                                        | ((0x100000U 
                                                            & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                               >> 0xbU)) 
                                                           | ((0xff000U 
                                                               & vlSelf->top__DOT__cpu__DOT__IF_ID_inst) 
                                                              | ((0x800U 
                                                                  & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                     >> 9U)) 
                                                                 | (0x7feU 
                                                                    & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                       >> 0x14U))))))
                                                        : vlSelf->top__DOT__cpu__DOT__IF_ID_inst)))));
    }
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg 
        = vlSelf->top__DOT__cpu__DOT__mem_to_reg;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src 
        = vlSelf->top__DOT__cpu__DOT__alu_src;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out 
        = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
    if (vlSelf->top__DOT__cpu__DOT__is_ecall) {
        vlSelf->top__DOT__cpu__DOT__halt_rs__DOT__is_ecall = 1U;
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall = 1U;
        vlSelf->top__DOT__cpu__DOT__ishalt__DOT__is_ecall = 1U;
        vlSelf->top__DOT__cpu__DOT__rs1_halt_considered = 0x11U;
    } else {
        vlSelf->top__DOT__cpu__DOT__halt_rs__DOT__is_ecall = 0U;
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall = 0U;
        vlSelf->top__DOT__cpu__DOT__ishalt__DOT__is_ecall = 0U;
        vlSelf->top__DOT__cpu__DOT__rs1_halt_considered 
            = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                        >> 0xfU));
    }
    vlSelf->top__DOT__cpu__DOT__pc__DOT__isStall = vlSelf->top__DOT__cpu__DOT__isStall;
    vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__isStall 
        = vlSelf->top__DOT__cpu__DOT__isStall;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__isStall 
        = vlSelf->top__DOT__cpu__DOT__isStall;
    vlSelf->top__DOT__cpu__DOT__ishalt__DOT__isStall 
        = vlSelf->top__DOT__cpu__DOT__isStall;
    vlSelf->top__DOT__cpu__DOT__mem_read = (3U == (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode));
    vlSelf->top__DOT__cpu__DOT__mem_write = (0x23U 
                                             == (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode));
    vlSelf->top__DOT__cpu__DOT__write_enable = ((((0x23U 
                                                   != (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode)) 
                                                  & (0x63U 
                                                     != (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode))) 
                                                 & (0x73U 
                                                    != (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode))) 
                                                & (0U 
                                                   != (IData)(vlSelf->top__DOT__cpu__DOT__hazard_detection__DOT__opcode)));
    if (vlSelf->top__DOT__cpu__DOT__isStall) {
        vlSelf->top__DOT__cpu__DOT__mem_read = 0U;
        vlSelf->top__DOT__cpu__DOT__mem_write = 0U;
        vlSelf->top__DOT__cpu__DOT__write_enable = 0U;
    }
    vlSelf->top__DOT__cpu__DOT__halt_rs__DOT__rs1_halt_considered 
        = vlSelf->top__DOT__cpu__DOT__rs1_halt_considered;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1 
        = vlSelf->top__DOT__cpu__DOT__rs1_halt_considered;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read 
        = vlSelf->top__DOT__cpu__DOT__mem_read;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__mem_write;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__write_enable 
        = vlSelf->top__DOT__cpu__DOT__write_enable;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__cpu__DOT__rs2_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                   >> 0x14U))];
    vlSelf->top__DOT__cpu__DOT__rs1_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [vlSelf->top__DOT__cpu__DOT__rs1_halt_considered];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelf->top__DOT__cpu__DOT__rs2_dout;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout 
        = vlSelf->top__DOT__cpu__DOT__rs1_dout;
    vlSelf->top__DOT__cpu__DOT__ishalt__DOT__rs1_dout 
        = vlSelf->top__DOT__cpu__DOT__rs1_dout;
    vlSelf->top__DOT__cpu__DOT__ID_is_halted = ((1U 
                                                 & (~ (IData)(vlSelf->top__DOT__cpu__DOT__isStall))) 
                                                && ((IData)(vlSelf->top__DOT__cpu__DOT__is_ecall) 
                                                    & (0xaU 
                                                       == vlSelf->top__DOT__cpu__DOT__rs1_dout)));
    vlSelf->top__DOT__cpu__DOT__ishalt__DOT__ID_is_halted 
        = vlSelf->top__DOT__cpu__DOT__ID_is_halted;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("top.v", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.v", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
