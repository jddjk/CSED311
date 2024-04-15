// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

extern const VlUnpacked<CData/*3:0*/, 16384> Vtop__ConstPool__TABLE_h41941d0d_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    SData/*13:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = ((0x3f80U & (vlSelf->top__DOT__cpu__DOT__IR 
                                << 7U)) | (((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__current_state) 
                                            << 3U) 
                                           | (((IData)(vlSelf->reset) 
                                               << 2U) 
                                              | (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__addr_clt))));
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__next_state 
        = Vtop__ConstPool__TABLE_h41941d0d_0[__Vtableidx1];
    vlSelf->top__DOT__reset = vlSelf->reset;
    vlSelf->top__DOT__clk = vlSelf->clk;
    vlSelf->top__DOT__cpu__DOT__reset = vlSelf->top__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
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

extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h6685a702_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_habfb596e_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_hc41a4920_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_heffd2d48_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h6678b48b_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_he77c7492_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h7b25563d_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h77ddaa2c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_hcd2081e6_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_h25af2719_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_ha527d93d_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_hbfa64afd_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h0e55e144_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_hc9969253_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*13:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__current_pc;
    __Vdly__top__DOT__cpu__DOT__current_pc = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v33;
    __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v33;
    __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v33;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 = 0;
    SData/*13:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__memory__DOT__mem__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__memory__DOT__mem__v0;
    __Vdlyvval__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__memory__DOT__mem__v0;
    __Vdlyvset__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 0;
    VlWide<7>/*223:0*/ __Vtemp_2;
    // Body
    __Vdly__top__DOT__cpu__DOT__current_pc = vlSelf->top__DOT__cpu__DOT__current_pc;
    __Vdlyvset__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 = 0U;
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 1U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 2U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 3U;
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
    }
    if (vlSelf->reset) {
        __Vdly__top__DOT__cpu__DOT__current_pc = 0U;
    } else if (VL_UNLIKELY(vlSelf->top__DOT__cpu__DOT__PCWrite)) {
        VL_WRITEF("----------------\ninstruction: %10#\n",
                  32,((IData)(3U) + VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__current_pc, 2U)));
        __Vdly__top__DOT__cpu__DOT__current_pc = vlSelf->top__DOT__cpu__DOT__next_pc;
    }
    if (VL_UNLIKELY(vlSelf->reset)) {
        vlSelf->top__DOT__cpu__DOT__memory__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelf->top__DOT__cpu__DOT__memory__DOT__i)) {
            vlSelf->top__DOT__cpu__DOT__memory__DOT__mem[(0x3fffU 
                                                          & vlSelf->top__DOT__cpu__DOT__memory__DOT__i)] = 0U;
            vlSelf->top__DOT__cpu__DOT__memory__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__memory__DOT__i);
        }
        __Vtemp_2[0U] = 0x2e747874U;
        __Vtemp_2[1U] = 0x5f6d656dU;
        __Vtemp_2[2U] = 0x656c7365U;
        __Vtemp_2[3U] = 0x622f6966U;
        __Vtemp_2[4U] = 0x6e745f74U;
        __Vtemp_2[5U] = 0x74756465U;
        __Vtemp_2[6U] = 0x2e2f73U;
        VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_2)
                     ,  &(vlSelf->top__DOT__cpu__DOT__memory__DOT__mem)
                     , 0, ~0ULL);
    } else if (vlSelf->top__DOT__cpu__DOT__MemWrite) {
        __Vdlyvval__top__DOT__cpu__DOT__memory__DOT__mem__v0 
            = vlSelf->top__DOT__cpu__DOT__B;
        __Vdlyvset__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 1U;
        __Vdlyvdim0__top__DOT__cpu__DOT__memory__DOT__mem__v0 
            = (0x3fffU & vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr);
    }
    if (vlSelf->reset) {
        __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 1U;
        vlSelf->top__DOT__cpu__DOT__ALUOut = 0U;
        vlSelf->top__DOT__cpu__DOT__A = 0U;
        vlSelf->top__DOT__cpu__DOT__MDR = 0U;
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__current_state = 0xfU;
        vlSelf->top__DOT__cpu__DOT__B = 0U;
        vlSelf->top__DOT__cpu__DOT__IR = 0U;
    } else {
        if (((IData)(vlSelf->top__DOT__cpu__DOT__RegWrite) 
             & (0U != (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR 
                                >> 7U))))) {
            __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 
                = vlSelf->top__DOT__cpu__DOT__RegSource;
            __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 = 1U;
            __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 
                = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR 
                            >> 7U));
        }
        vlSelf->top__DOT__cpu__DOT__ALUOut = vlSelf->top__DOT__cpu__DOT__alu_result;
        vlSelf->top__DOT__cpu__DOT__A = vlSelf->top__DOT__cpu__DOT__reg_to_A;
        if (vlSelf->top__DOT__cpu__DOT__IorD) {
            vlSelf->top__DOT__cpu__DOT__MDR = vlSelf->top__DOT__cpu__DOT__mem_data;
        }
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__current_state 
            = vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__next_state;
        vlSelf->top__DOT__cpu__DOT__B = vlSelf->top__DOT__cpu__DOT__reg_to_B;
        if (((~ (IData)(vlSelf->top__DOT__cpu__DOT__IorD)) 
             & (IData)(vlSelf->top__DOT__cpu__DOT__IRWrite))) {
            vlSelf->top__DOT__cpu__DOT__IR = vlSelf->top__DOT__cpu__DOT__mem_data;
        }
    }
    vlSelf->top__DOT__cpu__DOT__current_pc = __Vdly__top__DOT__cpu__DOT__current_pc;
    if (__Vdlyvset__top__DOT__cpu__DOT__memory__DOT__mem__v0) {
        vlSelf->top__DOT__cpu__DOT__memory__DOT__mem[__Vdlyvdim0__top__DOT__cpu__DOT__memory__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__cpu__DOT__memory__DOT__mem__v0;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0U;
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
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0x2ffcU;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v33) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v33] 
            = __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v33;
    }
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__MemorySorucemux__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__ALUSourceAmux__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
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
    vlSelf->top__DOT__cpu__DOT__MemorySorucemux__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__RegSourceMux__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__alu_out_reg 
        = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__wire_ALUOut = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__ALUSourceAmux__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__A;
    vlSelf->top__DOT__cpu__DOT__wire_A = vlSelf->top__DOT__cpu__DOT__A;
    vlSelf->top__DOT__cpu__DOT__wire_MDR = vlSelf->top__DOT__cpu__DOT__MDR;
    __Vtableidx2 = vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__current_state;
    vlSelf->top__DOT__cpu__DOT__PCWriteNotCond = Vtop__ConstPool__TABLE_h6685a702_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__PCWrite = Vtop__ConstPool__TABLE_habfb596e_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__IorD = Vtop__ConstPool__TABLE_hc41a4920_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__MemRead = Vtop__ConstPool__TABLE_heffd2d48_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__MemWrite = Vtop__ConstPool__TABLE_h6678b48b_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__IRWrite = Vtop__ConstPool__TABLE_he77c7492_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__MemToReg = Vtop__ConstPool__TABLE_h7b25563d_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__RegWrite = Vtop__ConstPool__TABLE_h77ddaa2c_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__ALUSrcA = Vtop__ConstPool__TABLE_hcd2081e6_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__ALUSrcB = Vtop__ConstPool__TABLE_h25af2719_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__ALUCtrlOp = Vtop__ConstPool__TABLE_ha527d93d_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__PCSource = Vtop__ConstPool__TABLE_hbfa64afd_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__is_ecall = Vtop__ConstPool__TABLE_h0e55e144_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__addr_clt 
        = Vtop__ConstPool__TABLE_hc9969253_0[__Vtableidx2];
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
    vlSelf->top__DOT__cpu__DOT__RegSourceMux__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__wire_MDR;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__din = vlSelf->top__DOT__cpu__DOT__B;
    vlSelf->top__DOT__cpu__DOT__ALUSourceBmux__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__B;
    vlSelf->top__DOT__cpu__DOT__wire_B = vlSelf->top__DOT__cpu__DOT__B;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__ir_write 
        = vlSelf->top__DOT__cpu__DOT__IRWrite;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__MemWrite;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__MemWrite;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable 
        = vlSelf->top__DOT__cpu__DOT__RegWrite;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__reg_write 
        = vlSelf->top__DOT__cpu__DOT__RegWrite;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__pc_write = vlSelf->top__DOT__cpu__DOT__PCWrite;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pc_write 
        = vlSelf->top__DOT__cpu__DOT__PCWrite;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pc_write_cond 
        = vlSelf->top__DOT__cpu__DOT__PCWriteNotCond;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_read 
        = vlSelf->top__DOT__cpu__DOT__MemRead;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read 
        = vlSelf->top__DOT__cpu__DOT__MemRead;
    if (vlSelf->top__DOT__cpu__DOT__MemToReg) {
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg = 1U;
        vlSelf->top__DOT__cpu__DOT__RegSourceMux__DOT__sel = 1U;
        vlSelf->top__DOT__cpu__DOT__RegSource = vlSelf->top__DOT__cpu__DOT__MDR;
    } else {
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__cpu__DOT__RegSourceMux__DOT__sel = 0U;
        vlSelf->top__DOT__cpu__DOT__RegSource = vlSelf->top__DOT__cpu__DOT__ALUOut;
    }
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pc_source 
        = vlSelf->top__DOT__cpu__DOT__PCSource;
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__pc_source 
        = vlSelf->top__DOT__cpu__DOT__PCSource;
    if (vlSelf->top__DOT__cpu__DOT__IorD) {
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__iord = 1U;
        vlSelf->top__DOT__cpu__DOT__MemorySorucemux__DOT__sel = 1U;
        vlSelf->top__DOT__cpu__DOT__mem_addr = vlSelf->top__DOT__cpu__DOT__ALUOut;
    } else {
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__iord = 0U;
        vlSelf->top__DOT__cpu__DOT__MemorySorucemux__DOT__sel = 0U;
        vlSelf->top__DOT__cpu__DOT__mem_addr = vlSelf->top__DOT__cpu__DOT__current_pc;
    }
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall 
        = vlSelf->top__DOT__cpu__DOT__is_ecall;
    vlSelf->top__DOT__cpu__DOT__rs1_mux__DOT__is_ecall 
        = vlSelf->top__DOT__cpu__DOT__is_ecall;
    vlSelf->top__DOT__cpu__DOT__halt__DOT__is_ecall 
        = vlSelf->top__DOT__cpu__DOT__is_ecall;
    if (vlSelf->top__DOT__cpu__DOT__ALUSrcA) {
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src_a = 1U;
        vlSelf->top__DOT__cpu__DOT__ALUSourceAmux__DOT__sel = 1U;
        vlSelf->top__DOT__cpu__DOT__ALUSrcAout = vlSelf->top__DOT__cpu__DOT__A;
    } else {
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src_a = 0U;
        vlSelf->top__DOT__cpu__DOT__ALUSourceAmux__DOT__sel = 0U;
        vlSelf->top__DOT__cpu__DOT__ALUSrcAout = vlSelf->top__DOT__cpu__DOT__current_pc;
    }
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src_b 
        = vlSelf->top__DOT__cpu__DOT__ALUSrcB;
    vlSelf->top__DOT__cpu__DOT__ALUSourceBmux__DOT__sel 
        = vlSelf->top__DOT__cpu__DOT__ALUSrcB;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_op 
        = vlSelf->top__DOT__cpu__DOT__ALUCtrlOp;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_ctrl_op 
        = vlSelf->top__DOT__cpu__DOT__ALUCtrlOp;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR 
                    >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = 
        (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR >> 7U));
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode 
        = (0x7fU & (vlSelf->top__DOT__cpu__DOT__IR 
                    >> 0U));
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 
        = (7U & (vlSelf->top__DOT__cpu__DOT__IR >> 0xcU));
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7 
        = (0x7fU & (vlSelf->top__DOT__cpu__DOT__IR 
                    >> 0x19U));
    vlSelf->top__DOT__cpu__DOT__rs1_mux__DOT__rs1 = 
        (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR >> 0xfU));
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__IR);
    vlSelf->top__DOT__cpu__DOT__reg_to_B = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__cpu__DOT__IR >> 0x14U))];
    __Vtableidx1 = ((0x3f80U & (vlSelf->top__DOT__cpu__DOT__IR 
                                << 7U)) | (((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__current_state) 
                                            << 3U) 
                                           | (((IData)(vlSelf->reset) 
                                               << 2U) 
                                              | (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__addr_clt))));
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__next_state 
        = Vtop__ConstPool__TABLE_h41941d0d_0[__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__rs1_in = ((IData)(vlSelf->top__DOT__cpu__DOT__is_ecall)
                                           ? 0x11U : 
                                          (0x1fU & 
                                           (vlSelf->top__DOT__cpu__DOT__IR 
                                            >> 0xfU)));
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__immediate 
        = (vlSelf->top__DOT__cpu__DOT__IR >> 0x14U);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm = 
        ((0xfe0U & (vlSelf->top__DOT__cpu__DOT__IR 
                    >> 0x14U)) | (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR 
                                           >> 7U)));
    vlSelf->top__DOT__cpu__DOT__wire_IR = vlSelf->top__DOT__cpu__DOT__IR;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din 
        = vlSelf->top__DOT__cpu__DOT__RegSource;
    vlSelf->top__DOT__cpu__DOT__RegSourceMux__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__RegSource;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__addr = vlSelf->top__DOT__cpu__DOT__mem_addr;
    vlSelf->top__DOT__cpu__DOT__MemorySorucemux__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__mem_addr;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__mem_addr, 2U);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_1 
        = vlSelf->top__DOT__cpu__DOT__ALUSrcAout;
    vlSelf->top__DOT__cpu__DOT__ALUSourceAmux__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__ALUSrcAout;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelf->top__DOT__cpu__DOT__reg_to_B;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1 
        = vlSelf->top__DOT__cpu__DOT__rs1_in;
    vlSelf->top__DOT__cpu__DOT__rs1_mux__DOT__rs1_in 
        = vlSelf->top__DOT__cpu__DOT__rs1_in;
    vlSelf->top__DOT__cpu__DOT__reg_to_A = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [vlSelf->top__DOT__cpu__DOT__rs1_in];
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__instruction 
        = vlSelf->top__DOT__cpu__DOT__wire_IR;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__instruction 
        = vlSelf->top__DOT__cpu__DOT__wire_IR;
    vlSelf->top__DOT__cpu__DOT__alu_op = 0xaU;
    if ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUCtrlOp))) {
        vlSelf->top__DOT__cpu__DOT__alu_op = 0xaU;
    } else if ((1U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUCtrlOp))) {
        if ((IData)(((0U == (0x7000U & vlSelf->top__DOT__cpu__DOT__IR)) 
                     & (0x20U != (vlSelf->top__DOT__cpu__DOT__IR 
                                  >> 0x19U))))) {
            vlSelf->top__DOT__cpu__DOT__alu_op = 0xaU;
        } else if ((IData)((0x40000000U == (0xfe007000U 
                                            & vlSelf->top__DOT__cpu__DOT__IR)))) {
            vlSelf->top__DOT__cpu__DOT__alu_op = 4U;
        } else if ((1U == (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__cpu__DOT__alu_op = 6U;
        } else if ((5U == (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__cpu__DOT__alu_op = 5U;
        } else if ((4U == (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__cpu__DOT__alu_op = 9U;
        } else if ((6U == (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__cpu__DOT__alu_op = 8U;
        } else if ((7U == (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__cpu__DOT__alu_op = 7U;
        }
    } else if ((2U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUCtrlOp))) {
        vlSelf->top__DOT__cpu__DOT__alu_op = ((0x67U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__cpu__DOT__wire_IR))
                                               ? 0xfU
                                               : 0xaU);
    } else if ((3U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUCtrlOp))) {
        if ((0U == (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                          >> 0xcU)))) {
            vlSelf->top__DOT__cpu__DOT__alu_op = 0xeU;
        } else if ((1U == (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__cpu__DOT__alu_op = 0xdU;
        } else if ((4U == (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__cpu__DOT__alu_op = 0xcU;
        } else if ((5U == (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__cpu__DOT__alu_op = 0xbU;
        }
    }
    vlSelf->top__DOT__cpu__DOT__imm_gen_out = ((0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__cpu__DOT__IR))
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__immediate))
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__cpu__DOT__IR))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__immediate))
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__cpu__DOT__IR))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__immediate))
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__cpu__DOT__IR))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm))
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__cpu__DOT__IR))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                    >> 0x1fU))) 
                                                        << 0xdU) 
                                                       | ((0x1000U 
                                                           & (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                              >> 0x13U)) 
                                                          | ((0x800U 
                                                              & (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                 << 4U)) 
                                                             | ((0x7e0U 
                                                                 & (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                    >> 0x14U)) 
                                                                | (0x1eU 
                                                                   & (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                      >> 7U))))))
                                                       : 
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__cpu__DOT__IR))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                     >> 0x1fU))) 
                                                         << 0x15U) 
                                                        | ((0x100000U 
                                                            & (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                               >> 0xbU)) 
                                                           | ((0xff000U 
                                                               & vlSelf->top__DOT__cpu__DOT__wire_IR) 
                                                              | ((0x800U 
                                                                  & (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                     >> 9U)) 
                                                                 | (0x7feU 
                                                                    & (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                       >> 0x14U))))))
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__cpu__DOT__IR))
                                                         ? 
                                                        (0xfffff000U 
                                                         & vlSelf->top__DOT__cpu__DOT__wire_IR)
                                                         : 
                                                        ((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__cpu__DOT__IR))
                                                          ? 
                                                         (0xfffff000U 
                                                          & vlSelf->top__DOT__cpu__DOT__wire_IR)
                                                          : vlSelf->top__DOT__cpu__DOT__wire_IR))))))));
    vlSelf->top__DOT__cpu__DOT__mem_data = ((IData)(vlSelf->top__DOT__cpu__DOT__MemRead)
                                             ? vlSelf->top__DOT__cpu__DOT__memory__DOT__mem
                                            [(0x3fffU 
                                              & vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr)]
                                             : 0U);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout 
        = vlSelf->top__DOT__cpu__DOT__reg_to_A;
    vlSelf->top__DOT__cpu__DOT__halt__DOT__gpr_17 = vlSelf->top__DOT__cpu__DOT__reg_to_A;
    vlSelf->is_halted = ((IData)(vlSelf->top__DOT__cpu__DOT__is_ecall) 
                         & (0xaU == vlSelf->top__DOT__cpu__DOT__reg_to_A));
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op 
        = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_op = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out 
        = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
    vlSelf->top__DOT__cpu__DOT__ALUSourceBmux__DOT__in2 
        = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
    vlSelf->top__DOT__cpu__DOT__ALUSrcBout = ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUSrcB))
                                               ? vlSelf->top__DOT__cpu__DOT__B
                                               : ((1U 
                                                   == (IData)(vlSelf->top__DOT__cpu__DOT__ALUSrcB))
                                                   ? 4U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__ALUSrcB))
                                                    ? vlSelf->top__DOT__cpu__DOT__imm_gen_out
                                                    : 0U)));
    vlSelf->top__DOT__cpu__DOT__memory__DOT__dout = vlSelf->top__DOT__cpu__DOT__mem_data;
    vlSelf->top__DOT__is_halted = vlSelf->is_halted;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_2 
        = vlSelf->top__DOT__cpu__DOT__ALUSrcBout;
    vlSelf->top__DOT__cpu__DOT__ALUSourceBmux__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__ALUSrcBout;
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
                                                     & (vlSelf->top__DOT__cpu__DOT__ALUSrcAout 
                                                        + vlSelf->top__DOT__cpu__DOT__ALUSrcBout))
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__ALUSrcAout 
                                                     + vlSelf->top__DOT__cpu__DOT__ALUSrcBout))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__ALUSrcAout 
                                                     + vlSelf->top__DOT__cpu__DOT__ALUSrcBout)
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__ALUSrcAout 
                                                     + vlSelf->top__DOT__cpu__DOT__ALUSrcBout)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__ALUSrcAout 
                                                     + vlSelf->top__DOT__cpu__DOT__ALUSrcBout)
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__ALUSrcAout 
                                                     + vlSelf->top__DOT__cpu__DOT__ALUSrcBout))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__ALUSrcAout 
                                                     ^ vlSelf->top__DOT__cpu__DOT__ALUSrcBout)
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__ALUSrcAout 
                                                     | vlSelf->top__DOT__cpu__DOT__ALUSrcBout))))
                                               : ((4U 
                                                   & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__ALUSrcAout 
                                                     & vlSelf->top__DOT__cpu__DOT__ALUSrcBout)
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__ALUSrcAout 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__cpu__DOT__ALUSrcBout)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__ALUSrcAout 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__cpu__DOT__ALUSrcBout))
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__ALUSrcAout 
                                                     - vlSelf->top__DOT__cpu__DOT__ALUSrcBout)))
                                                   : 0U));
    if ((1U & (~ ((IData)(vlSelf->top__DOT__cpu__DOT__alu_op) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cpu__DOT__alu_op) 
                      >> 2U)))) {
            vlSelf->top__DOT__cpu__DOT__bcond = 0U;
        }
    }
    vlSelf->top__DOT__cpu__DOT__bcond = ((1U & ((IData)(vlSelf->top__DOT__cpu__DOT__alu_op) 
                                                >> 3U)) 
                                         && ((4U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                              ? ((2U 
                                                  & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (~ (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) 
                                                  && (vlSelf->top__DOT__cpu__DOT__ALUSrcAout 
                                                      == vlSelf->top__DOT__cpu__DOT__ALUSrcBout))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                   ? 
                                                  (vlSelf->top__DOT__cpu__DOT__ALUSrcAout 
                                                   != vlSelf->top__DOT__cpu__DOT__ALUSrcBout)
                                                   : 
                                                  VL_LTS_III(32, vlSelf->top__DOT__cpu__DOT__ALUSrcAout, vlSelf->top__DOT__cpu__DOT__ALUSrcBout)))
                                              : ((1U 
                                                  & ((IData)(vlSelf->top__DOT__cpu__DOT__alu_op) 
                                                     >> 1U)) 
                                                 && ((1U 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op)) 
                                                     && VL_GTES_III(32, vlSelf->top__DOT__cpu__DOT__ALUSrcAout, vlSelf->top__DOT__cpu__DOT__ALUSrcBout)))));
    vlSelf->top__DOT__cpu__DOT__is_halted = vlSelf->top__DOT__is_halted;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_result 
        = vlSelf->top__DOT__cpu__DOT__alu_result;
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__alu_out 
        = vlSelf->top__DOT__cpu__DOT__alu_result;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_bcond 
        = vlSelf->top__DOT__cpu__DOT__bcond;
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__bcond 
        = vlSelf->top__DOT__cpu__DOT__bcond;
    vlSelf->top__DOT__cpu__DOT__cond1 = ((~ (IData)(vlSelf->top__DOT__cpu__DOT__bcond)) 
                                         & (IData)(vlSelf->top__DOT__cpu__DOT__PCWriteNotCond));
    vlSelf->top__DOT__cpu__DOT__next_pc = (((IData)(vlSelf->top__DOT__cpu__DOT__PCSource) 
                                            | (IData)(vlSelf->top__DOT__cpu__DOT__bcond))
                                            ? vlSelf->top__DOT__cpu__DOT__alu_result
                                            : vlSelf->top__DOT__cpu__DOT__ALUOut);
    vlSelf->top__DOT__cpu__DOT__halt__DOT__is_halted 
        = vlSelf->top__DOT__cpu__DOT__is_halted;
    vlSelf->top__DOT__cpu__DOT__cond2 = ((IData)(vlSelf->top__DOT__cpu__DOT__cond1) 
                                         | (IData)(vlSelf->top__DOT__cpu__DOT__PCWrite));
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = vlSelf->top__DOT__cpu__DOT__next_pc;
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__next_pc 
        = vlSelf->top__DOT__cpu__DOT__next_pc;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
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
            VL_FATAL_MT("top.v", 2, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("top.v", 2, "", "NBA region did not converge.");
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
                VL_FATAL_MT("top.v", 2, "", "Active region did not converge.");
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
