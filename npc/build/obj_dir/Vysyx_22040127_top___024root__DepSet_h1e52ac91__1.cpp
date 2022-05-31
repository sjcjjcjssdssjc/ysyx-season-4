// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040127_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040127_top___024root.h"

VL_INLINE_OPT void Vysyx_22040127_top___024root___sequent__TOP__1(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->ysyx_22040127_top__DOT__id_to_ex_valid 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_ready_go) 
           & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_valid));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_strb[0U] 
        = (IData)((((- (QData)((IData)((((~ (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0hit) 
                                            | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1hit))) 
                                        & ((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state)) 
                                           | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state))))))) 
                    & vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__ex_cache_strb) 
                   | (- (QData)((IData)(((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_res_valid) 
                                         & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state))))))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_strb[1U] 
        = (IData)(((((- (QData)((IData)((((~ (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0hit) 
                                             | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1hit))) 
                                         & ((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state)) 
                                            | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state))))))) 
                     & vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__ex_cache_strb) 
                    | (- (QData)((IData)(((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_res_valid) 
                                          & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state))))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_strb[2U] 
        = (IData)((((- (QData)((IData)((((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                          >> 3U) & 
                                         ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0hit) 
                                          | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1hit))) 
                                        & ((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state)) 
                                           | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state))))))) 
                    & vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__ex_cache_strb) 
                   | (- (QData)((IData)(((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_res_valid) 
                                         & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state))))))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_strb[3U] 
        = (IData)(((((- (QData)((IData)((((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                           >> 3U) & 
                                          ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0hit) 
                                           | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1hit))) 
                                         & ((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state)) 
                                            | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state))))))) 
                     & vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__ex_cache_strb) 
                    | (- (QData)((IData)(((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_res_valid) 
                                          & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state))))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_wen_way0 
        = (((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0hit) 
              & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                 >> 6U)) & (0U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state))) 
            | ((((~ (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_raw_way0)) 
                 & (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state))) 
                & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0hit)) 
               & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                  >> 6U))) | (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_res_valid) 
                               & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state))) 
                              & (~ ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0dirty) 
                                    & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0valid)))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_wen_way1 
        = (((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1hit) 
              & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                 >> 6U)) & (0U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state))) 
            | ((((~ (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_raw_way1)) 
                 & (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state))) 
                & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1hit)) 
               & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                  >> 6U))) | ((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_res_valid) 
                                & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state))) 
                               & (~ ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1dirty) 
                                     & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1valid)))) 
                              & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0dirty) 
                                 & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0valid))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_raw 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_raw_way0) 
           | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_raw_way1));
    vlSelf->ysyx_22040127_top__DOT__id_branch_taken 
        = (((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken) 
            | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr)) 
           | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_miss 
        = (((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1dirty) 
              & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0valid)) 
             & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0dirty)) 
            & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1valid)) 
           & (((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state)) 
               & (~ ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0hit) 
                     | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1hit)))) 
              | ((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state)) 
                 & ((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_raw) 
                      & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0hit))) 
                     & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1hit))) 
                    | ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0hit)) 
                       & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1hit)))))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__cache_readygo 
        = (1U & (((6U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state)) 
                  | (IData)((0U == (0x180000U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])))) 
                 | (((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state)) 
                     & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0hit) 
                        | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1hit))) 
                    | ((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state)) 
                       & ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_raw)) 
                          & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0hit) 
                             | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1hit)))))));
    vlSelf->ysyx_22040127_top__DOT__ex_ready_go = (
                                                   ((((~ 
                                                       ((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_type) 
                                                        | (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_stage2))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_type) 
                                                          | ((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_state) 
                                                             ^ 
                                                             ((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_state) 
                                                              >> 1U))))) 
                                                     | (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_ok)) 
                                                    | (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_ready)) 
                                                   & (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__cache_readygo));
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_valid 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__ex_ready_go) 
           & (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__ex_valid));
    vlSelf->ysyx_22040127_top__DOT__ex_allowin = (1U 
                                                  & ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__ex_valid)) 
                                                     | (IData)(vlSelf->ysyx_22040127_top__DOT__ex_ready_go)));
    vlSelf->ysyx_22040127_top__DOT__id_allowin = (1U 
                                                  & ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_valid)) 
                                                     | ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_ready_go) 
                                                        & (IData)(vlSelf->ysyx_22040127_top__DOT__ex_allowin))));
    vlSelf->ysyx_22040127_top__DOT__if_allowin = (1U 
                                                  & ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__if_valid)) 
                                                     | (IData)(vlSelf->ysyx_22040127_top__DOT__id_allowin)));
}

void Vysyx_22040127_top___024root___sequent__TOP__0(Vysyx_22040127_top___024root* vlSelf);

void Vysyx_22040127_top___024root___eval(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22040127_top___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vysyx_22040127_top___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vysyx_22040127_top___024root___eval_debug_assertions(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
