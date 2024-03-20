// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

extern const VlWide<18>/*575:0*/ Vtop__ConstPool__CONST_h521327dc_0;

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->reset)) {
        vlSelf->top__DOT__cpu__DOT__imem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->top__DOT__cpu__DOT__imem__DOT__i)) {
            vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[(0x3ffU 
                                                        & vlSelf->top__DOT__cpu__DOT__imem__DOT__i)] = 0U;
            vlSelf->top__DOT__cpu__DOT__imem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__imem__DOT__i);
        }
        VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(18, Vtop__ConstPool__CONST_h521327dc_0)
                     ,  &(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem)
                     , 0, ~0ULL);
    }
    if (vlSelf->reset) {
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
    vlSelf->top__DOT__cpu__DOT__instruction = vlSelf->top__DOT__cpu__DOT__imem__DOT__mem
        [(0x3ffU & (vlSelf->top__DOT__cpu__DOT__current_pc 
                    >> 2U))];
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
    vlSelf->top__DOT__cpu__DOT__alu_op = ((0x67U == 
                                           (0x7fU & vlSelf->top__DOT__cpu__DOT__instruction))
                                           ? 0xfU : 
                                          ((IData)(
                                                   (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__cpu__DOT__instruction)))
                                            ? 0xeU : 
                                           ((IData)(
                                                    (0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__cpu__DOT__instruction)))
                                             ? 0xdU
                                             : ((IData)(
                                                        (0x4063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__cpu__DOT__instruction)))
                                                 ? 0xcU
                                                 : 
                                                ((IData)(
                                                         (0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__cpu__DOT__instruction)))
                                                  ? 0xbU
                                                  : 
                                                 (((((IData)(
                                                             (0x2003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__cpu__DOT__instruction))) 
                                                     | (IData)(
                                                               (0x2023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__cpu__DOT__instruction)))) 
                                                    | ((IData)(
                                                               (0x13U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__cpu__DOT__instruction))) 
                                                       & (0x20U 
                                                          != 
                                                          (vlSelf->top__DOT__cpu__DOT__instruction 
                                                           >> 0x19U)))) 
                                                   | ((IData)(
                                                              (0x33U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__cpu__DOT__instruction))) 
                                                      & (0x20U 
                                                         != 
                                                         (vlSelf->top__DOT__cpu__DOT__instruction 
                                                          >> 0x19U))))
                                                   ? 0xaU
                                                   : 
                                                  (((IData)(
                                                            (0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__cpu__DOT__instruction))) 
                                                    | (IData)(
                                                              (0x4033U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__cpu__DOT__instruction))))
                                                    ? 9U
                                                    : 
                                                   (((IData)(
                                                             (0x6013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__cpu__DOT__instruction))) 
                                                     | (IData)(
                                                               (0x6033U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__cpu__DOT__instruction))))
                                                     ? 8U
                                                     : 
                                                    (((IData)(
                                                              (0x7013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__cpu__DOT__instruction))) 
                                                      | (IData)(
                                                                (0x7033U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__cpu__DOT__instruction))))
                                                      ? 7U
                                                      : 
                                                     (((IData)(
                                                               (0x1013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__cpu__DOT__instruction))) 
                                                       | (IData)(
                                                                 (0x1033U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__cpu__DOT__instruction))))
                                                       ? 6U
                                                       : 
                                                      (((IData)(
                                                                (0x5013U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__cpu__DOT__instruction))) 
                                                        | (IData)(
                                                                  (0x5033U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__cpu__DOT__instruction))))
                                                        ? 5U
                                                        : 
                                                       ((IData)(
                                                                (0x40000033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->top__DOT__cpu__DOT__instruction)))
                                                         ? 4U
                                                         : 0U))))))))))));
    vlSelf->top__DOT__cpu__DOT__mem_to_reg = (3U == 
                                              (0x7fU 
                                               & vlSelf->top__DOT__cpu__DOT__instruction));
    vlSelf->top__DOT__cpu__DOT__is_jalr = (0x67U == 
                                           (0x7fU & vlSelf->top__DOT__cpu__DOT__instruction));
    vlSelf->top__DOT__cpu__DOT__is_jal = (0x6fU == 
                                          (0x7fU & vlSelf->top__DOT__cpu__DOT__instruction));
    vlSelf->top__DOT__cpu__DOT__mem_write = (0x23U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__cpu__DOT__instruction));
    vlSelf->top__DOT__cpu__DOT__branch = (0x63U == 
                                          (0x7fU & vlSelf->top__DOT__cpu__DOT__instruction));
    vlSelf->top__DOT__cpu__DOT__mem_read = (3U == (0x7fU 
                                                   & vlSelf->top__DOT__cpu__DOT__instruction));
    vlSelf->top__DOT__cpu__DOT__write_enable = ((0x23U 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__cpu__DOT__instruction)) 
                                                & (0x63U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__cpu__DOT__instruction)));
    vlSelf->top__DOT__cpu__DOT__pc_to_reg = ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__cpu__DOT__instruction)) 
                                             | (0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__cpu__DOT__instruction)));
    vlSelf->is_halted = 0U;
    vlSelf->is_halted = ((0x73U == (0x7fU & vlSelf->top__DOT__cpu__DOT__instruction)) 
                         & (0xaU == vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
                            [0x11U]));
    vlSelf->top__DOT__cpu__DOT__alu_src = (((0x13U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__cpu__DOT__instruction)) 
                                            | (3U == 
                                               (0x7fU 
                                                & vlSelf->top__DOT__cpu__DOT__instruction))) 
                                           | (0x23U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__cpu__DOT__instruction)));
    vlSelf->top__DOT__cpu__DOT__rs2_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__cpu__DOT__instruction 
                   >> 0x14U))];
    vlSelf->top__DOT__cpu__DOT__ALUSRC = ((0x17U == 
                                           (0x7fU & vlSelf->top__DOT__cpu__DOT__instruction))
                                           ? 0U : (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__cpu__DOT__instruction))
                                                    ? 2U
                                                    : 1U));
    vlSelf->top__DOT__cpu__DOT__imm_gen_out = ((0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__cpu__DOT__instruction))
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__cpu__DOT__instruction 
                                                      >> 0x14U))
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__cpu__DOT__instruction))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelf->top__DOT__cpu__DOT__instruction 
                                                       >> 0x14U))
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__cpu__DOT__instruction))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->top__DOT__cpu__DOT__instruction 
                                                        >> 0x14U))
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__cpu__DOT__instruction))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0xfe0U 
                                                          & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                               >> 7U))))
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__cpu__DOT__instruction))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                    >> 0x1fU))) 
                                                        << 0xdU) 
                                                       | ((0x1000U 
                                                           & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                              >> 0x13U)) 
                                                          | ((0x800U 
                                                              & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                 << 4U)) 
                                                             | ((0x7e0U 
                                                                 & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                    >> 0x14U)) 
                                                                | (0x1eU 
                                                                   & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                      >> 7U))))))
                                                       : 
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__cpu__DOT__instruction))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                     >> 0x1fU))) 
                                                         << 0x15U) 
                                                        | ((0x100000U 
                                                            & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                               >> 0xbU)) 
                                                           | ((0xff000U 
                                                               & vlSelf->top__DOT__cpu__DOT__instruction) 
                                                              | ((0x800U 
                                                                  & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                     >> 9U)) 
                                                                 | (0x7feU 
                                                                    & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                       >> 0x14U))))))
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__cpu__DOT__instruction))
                                                         ? 
                                                        (0xfffff000U 
                                                         & vlSelf->top__DOT__cpu__DOT__instruction)
                                                         : 
                                                        ((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__cpu__DOT__instruction))
                                                          ? 
                                                         (0xfffff000U 
                                                          & vlSelf->top__DOT__cpu__DOT__instruction)
                                                          : vlSelf->top__DOT__cpu__DOT__instruction))))))));
    vlSelf->top__DOT__cpu__DOT__twoDigitMux_result 
        = ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUSRC))
            ? vlSelf->top__DOT__cpu__DOT__current_pc
            : ((1U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUSRC))
                ? vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
               [(0x1fU & (vlSelf->top__DOT__cpu__DOT__instruction 
                          >> 0xfU))] : 0U));
    vlSelf->top__DOT__cpu__DOT__add_sum = (vlSelf->top__DOT__cpu__DOT__current_pc 
                                           + vlSelf->top__DOT__cpu__DOT__imm_gen_out);
    vlSelf->top__DOT__cpu__DOT__alu_in_2 = ((IData)(vlSelf->top__DOT__cpu__DOT__alu_src)
                                             ? vlSelf->top__DOT__cpu__DOT__imm_gen_out
                                             : vlSelf->top__DOT__cpu__DOT__rs2_dout);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __Vdlyvval__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __Vdlyvset__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0U;
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x20U;
        vlSelf->top__DOT__cpu__DOT__dmem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelf->top__DOT__cpu__DOT__dmem__DOT__i)) {
            vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem[(0x3fffU 
                                                        & vlSelf->top__DOT__cpu__DOT__dmem__DOT__i)] = 0U;
            vlSelf->top__DOT__cpu__DOT__dmem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__dmem__DOT__i);
        }
        vlSelf->top__DOT__cpu__DOT__current_pc = 0U;
    } else {
        vlSelf->top__DOT__cpu__DOT__current_pc = ((IData)(vlSelf->top__DOT__cpu__DOT__is_jalr)
                                                   ? 
                                                  (0xfffffffeU 
                                                   & vlSelf->top__DOT__cpu__DOT__alu_result)
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__cpu__DOT__is_jal) 
                                                    | ((IData)(vlSelf->top__DOT__cpu__DOT__bcond) 
                                                       & (IData)(vlSelf->top__DOT__cpu__DOT__branch)))
                                                    ? vlSelf->top__DOT__cpu__DOT__add_sum
                                                    : vlSelf->top__DOT__cpu__DOT__add_four_pc));
    }
    if (vlSelf->top__DOT__cpu__DOT__mem_write) {
        __Vdlyvval__top__DOT__cpu__DOT__dmem__DOT__mem__v0 
            = vlSelf->top__DOT__cpu__DOT__rs2_dout;
        __Vdlyvset__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 1U;
        __Vdlyvdim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0 
            = (0x3fffU & (vlSelf->top__DOT__cpu__DOT__alu_result 
                          >> 2U));
    }
    if (((IData)(vlSelf->top__DOT__cpu__DOT__write_enable) 
         & (0U != (0x1fU & (vlSelf->top__DOT__cpu__DOT__instruction 
                            >> 7U))))) {
        __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 
            = ((IData)(vlSelf->top__DOT__cpu__DOT__pc_to_reg)
                ? vlSelf->top__DOT__cpu__DOT__add_four_pc
                : ((IData)(vlSelf->top__DOT__cpu__DOT__mem_to_reg)
                    ? ((IData)(vlSelf->top__DOT__cpu__DOT__mem_read)
                        ? vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem
                       [(0x3fffU & (vlSelf->top__DOT__cpu__DOT__alu_result 
                                    >> 2U))] : 0U) : vlSelf->top__DOT__cpu__DOT__alu_result));
        __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 
            = (0x1fU & (vlSelf->top__DOT__cpu__DOT__instruction 
                        >> 7U));
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__dmem__DOT__mem__v0) {
        vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem[__Vdlyvdim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
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
    vlSelf->top__DOT__cpu__DOT__add_four_pc = ((IData)(4U) 
                                               + vlSelf->top__DOT__cpu__DOT__current_pc);
    vlSelf->top__DOT__cpu__DOT__instruction = vlSelf->top__DOT__cpu__DOT__imem__DOT__mem
        [(0x3ffU & (vlSelf->top__DOT__cpu__DOT__current_pc 
                    >> 2U))];
    vlSelf->top__DOT__cpu__DOT__mem_to_reg = (3U == 
                                              (0x7fU 
                                               & vlSelf->top__DOT__cpu__DOT__instruction));
    vlSelf->top__DOT__cpu__DOT__is_jalr = (0x67U == 
                                           (0x7fU & vlSelf->top__DOT__cpu__DOT__instruction));
    vlSelf->top__DOT__cpu__DOT__is_jal = (0x6fU == 
                                          (0x7fU & vlSelf->top__DOT__cpu__DOT__instruction));
    vlSelf->top__DOT__cpu__DOT__mem_write = (0x23U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__cpu__DOT__instruction));
    vlSelf->top__DOT__cpu__DOT__branch = (0x63U == 
                                          (0x7fU & vlSelf->top__DOT__cpu__DOT__instruction));
    vlSelf->top__DOT__cpu__DOT__mem_read = (3U == (0x7fU 
                                                   & vlSelf->top__DOT__cpu__DOT__instruction));
    vlSelf->top__DOT__cpu__DOT__write_enable = ((0x23U 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__cpu__DOT__instruction)) 
                                                & (0x63U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__cpu__DOT__instruction)));
    vlSelf->top__DOT__cpu__DOT__pc_to_reg = ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__cpu__DOT__instruction)) 
                                             | (0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__cpu__DOT__instruction)));
    vlSelf->is_halted = 0U;
    vlSelf->is_halted = ((0x73U == (0x7fU & vlSelf->top__DOT__cpu__DOT__instruction)) 
                         & (0xaU == vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
                            [0x11U]));
    vlSelf->top__DOT__cpu__DOT__alu_src = (((0x13U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__cpu__DOT__instruction)) 
                                            | (3U == 
                                               (0x7fU 
                                                & vlSelf->top__DOT__cpu__DOT__instruction))) 
                                           | (0x23U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__cpu__DOT__instruction)));
    vlSelf->top__DOT__cpu__DOT__rs2_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__cpu__DOT__instruction 
                   >> 0x14U))];
    vlSelf->top__DOT__cpu__DOT__ALUSRC = ((0x17U == 
                                           (0x7fU & vlSelf->top__DOT__cpu__DOT__instruction))
                                           ? 0U : (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__cpu__DOT__instruction))
                                                    ? 2U
                                                    : 1U));
    vlSelf->top__DOT__cpu__DOT__imm_gen_out = ((0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__cpu__DOT__instruction))
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__cpu__DOT__instruction 
                                                      >> 0x14U))
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__cpu__DOT__instruction))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelf->top__DOT__cpu__DOT__instruction 
                                                       >> 0x14U))
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__cpu__DOT__instruction))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->top__DOT__cpu__DOT__instruction 
                                                        >> 0x14U))
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__cpu__DOT__instruction))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0xfe0U 
                                                          & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                               >> 7U))))
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__cpu__DOT__instruction))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                    >> 0x1fU))) 
                                                        << 0xdU) 
                                                       | ((0x1000U 
                                                           & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                              >> 0x13U)) 
                                                          | ((0x800U 
                                                              & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                 << 4U)) 
                                                             | ((0x7e0U 
                                                                 & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                    >> 0x14U)) 
                                                                | (0x1eU 
                                                                   & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                      >> 7U))))))
                                                       : 
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__cpu__DOT__instruction))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                     >> 0x1fU))) 
                                                         << 0x15U) 
                                                        | ((0x100000U 
                                                            & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                               >> 0xbU)) 
                                                           | ((0xff000U 
                                                               & vlSelf->top__DOT__cpu__DOT__instruction) 
                                                              | ((0x800U 
                                                                  & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                     >> 9U)) 
                                                                 | (0x7feU 
                                                                    & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                       >> 0x14U))))))
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__cpu__DOT__instruction))
                                                         ? 
                                                        (0xfffff000U 
                                                         & vlSelf->top__DOT__cpu__DOT__instruction)
                                                         : 
                                                        ((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__cpu__DOT__instruction))
                                                          ? 
                                                         (0xfffff000U 
                                                          & vlSelf->top__DOT__cpu__DOT__instruction)
                                                          : vlSelf->top__DOT__cpu__DOT__instruction))))))));
    vlSelf->top__DOT__cpu__DOT__add_sum = (vlSelf->top__DOT__cpu__DOT__current_pc 
                                           + vlSelf->top__DOT__cpu__DOT__imm_gen_out);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    if ((8U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        if ((4U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
            if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__alu_op)))) {
                    vlSelf->top__DOT__cpu__DOT__bcond = 0U;
                }
                vlSelf->top__DOT__cpu__DOT__alu_result 
                    = ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                        ? (0xfffffffeU & (vlSelf->top__DOT__cpu__DOT__twoDigitMux_result 
                                          + vlSelf->top__DOT__cpu__DOT__alu_in_2))
                        : 0U);
            } else {
                vlSelf->top__DOT__cpu__DOT__bcond = 0U;
                vlSelf->top__DOT__cpu__DOT__alu_result = 0U;
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
            if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
                vlSelf->top__DOT__cpu__DOT__bcond = 0U;
                vlSelf->top__DOT__cpu__DOT__alu_result = 0U;
            } else {
                vlSelf->top__DOT__cpu__DOT__alu_result 
                    = (vlSelf->top__DOT__cpu__DOT__twoDigitMux_result 
                       + vlSelf->top__DOT__cpu__DOT__alu_in_2);
            }
        } else {
            vlSelf->top__DOT__cpu__DOT__alu_result 
                = ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                    ? (vlSelf->top__DOT__cpu__DOT__twoDigitMux_result 
                       ^ vlSelf->top__DOT__cpu__DOT__alu_in_2)
                    : (vlSelf->top__DOT__cpu__DOT__twoDigitMux_result 
                       | vlSelf->top__DOT__cpu__DOT__alu_in_2));
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cpu__DOT__alu_op) 
                      >> 2U)))) {
            vlSelf->top__DOT__cpu__DOT__bcond = 0U;
        }
        vlSelf->top__DOT__cpu__DOT__alu_result = ((4U 
                                                   & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__cpu__DOT__twoDigitMux_result 
                                                     & vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                     : 
                                                    VL_SHIFTL_III(32,32,32, vlSelf->top__DOT__cpu__DOT__twoDigitMux_result, vlSelf->top__DOT__cpu__DOT__alu_in_2))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__twoDigitMux_result, vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                     : 
                                                    (vlSelf->top__DOT__cpu__DOT__twoDigitMux_result 
                                                     - vlSelf->top__DOT__cpu__DOT__alu_in_2)))
                                                   : 0U);
    }
    vlSelf->top__DOT__cpu__DOT__bcond = ((1U & ((IData)(vlSelf->top__DOT__cpu__DOT__alu_op) 
                                                >> 3U)) 
                                         && ((4U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                              ? ((2U 
                                                  & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (~ (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) 
                                                  && (vlSelf->top__DOT__cpu__DOT__twoDigitMux_result 
                                                      == vlSelf->top__DOT__cpu__DOT__alu_in_2))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))
                                                   ? 
                                                  (vlSelf->top__DOT__cpu__DOT__twoDigitMux_result 
                                                   != vlSelf->top__DOT__cpu__DOT__alu_in_2)
                                                   : 
                                                  (vlSelf->top__DOT__cpu__DOT__twoDigitMux_result 
                                                   < vlSelf->top__DOT__cpu__DOT__alu_in_2)))
                                              : ((1U 
                                                  & ((IData)(vlSelf->top__DOT__cpu__DOT__alu_op) 
                                                     >> 1U)) 
                                                 && ((1U 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op)) 
                                                     && (vlSelf->top__DOT__cpu__DOT__twoDigitMux_result 
                                                         >= vlSelf->top__DOT__cpu__DOT__alu_in_2)))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__cpu__DOT__alu_op = ((0x67U == 
                                           (0x7fU & vlSelf->top__DOT__cpu__DOT__instruction))
                                           ? 0xfU : 
                                          ((IData)(
                                                   (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__cpu__DOT__instruction)))
                                            ? 0xeU : 
                                           ((IData)(
                                                    (0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__cpu__DOT__instruction)))
                                             ? 0xdU
                                             : ((IData)(
                                                        (0x4063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__cpu__DOT__instruction)))
                                                 ? 0xcU
                                                 : 
                                                ((IData)(
                                                         (0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__cpu__DOT__instruction)))
                                                  ? 0xbU
                                                  : 
                                                 (((((IData)(
                                                             (0x2003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__cpu__DOT__instruction))) 
                                                     | (IData)(
                                                               (0x2023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__cpu__DOT__instruction)))) 
                                                    | ((IData)(
                                                               (0x13U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__cpu__DOT__instruction))) 
                                                       & (0x20U 
                                                          != 
                                                          (vlSelf->top__DOT__cpu__DOT__instruction 
                                                           >> 0x19U)))) 
                                                   | ((IData)(
                                                              (0x33U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__cpu__DOT__instruction))) 
                                                      & (0x20U 
                                                         != 
                                                         (vlSelf->top__DOT__cpu__DOT__instruction 
                                                          >> 0x19U))))
                                                   ? 0xaU
                                                   : 
                                                  (((IData)(
                                                            (0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__cpu__DOT__instruction))) 
                                                    | (IData)(
                                                              (0x4033U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__cpu__DOT__instruction))))
                                                    ? 9U
                                                    : 
                                                   (((IData)(
                                                             (0x6013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__cpu__DOT__instruction))) 
                                                     | (IData)(
                                                               (0x6033U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__cpu__DOT__instruction))))
                                                     ? 8U
                                                     : 
                                                    (((IData)(
                                                              (0x7013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__cpu__DOT__instruction))) 
                                                      | (IData)(
                                                                (0x7033U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__cpu__DOT__instruction))))
                                                      ? 7U
                                                      : 
                                                     (((IData)(
                                                               (0x1013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__cpu__DOT__instruction))) 
                                                       | (IData)(
                                                                 (0x1033U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__cpu__DOT__instruction))))
                                                       ? 6U
                                                       : 
                                                      (((IData)(
                                                                (0x5013U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__cpu__DOT__instruction))) 
                                                        | (IData)(
                                                                  (0x5033U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__cpu__DOT__instruction))))
                                                        ? 5U
                                                        : 
                                                       ((IData)(
                                                                (0x40000033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->top__DOT__cpu__DOT__instruction)))
                                                         ? 4U
                                                         : 0U))))))))))));
    vlSelf->top__DOT__cpu__DOT__alu_in_2 = ((IData)(vlSelf->top__DOT__cpu__DOT__alu_src)
                                             ? vlSelf->top__DOT__cpu__DOT__imm_gen_out
                                             : vlSelf->top__DOT__cpu__DOT__rs2_dout);
    vlSelf->top__DOT__cpu__DOT__twoDigitMux_result 
        = ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUSRC))
            ? vlSelf->top__DOT__cpu__DOT__current_pc
            : ((1U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUSRC))
                ? vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
               [(0x1fU & (vlSelf->top__DOT__cpu__DOT__instruction 
                          >> 0xfU))] : 0U));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
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
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
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
