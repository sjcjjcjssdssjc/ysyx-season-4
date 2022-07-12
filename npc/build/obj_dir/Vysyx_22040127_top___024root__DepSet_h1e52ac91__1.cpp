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
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hdc8fc83b__0;
    // Body
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask 
        = ((0xf8U & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask)) 
           | (((2U == (7U & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])) 
               << 2U) | (((1U == (7U & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])) 
                          << 1U) | (0U == (7U & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask 
        = ((0xc7U & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask)) 
           | (((5U == (7U & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])) 
               << 5U) | (((4U == (7U & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])) 
                          << 4U) | ((3U == (7U & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])) 
                                    << 3U))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask 
        = ((0x3fU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask)) 
           | (((7U == (7U & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])) 
               << 7U) | ((6U == (7U & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])) 
                         << 6U)));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard2 
        = (((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U])) 
            & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U]) 
               == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                            >> 0x14U)))) & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                            >> 7U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard1 
        = (((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U])) 
            & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U]) 
               == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                            >> 0xfU)))) & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                           >> 7U));
    vlSelf->ysyx_22040127_top__DOT____Vcellinp__dcache__input_valid 
        = (IData)((0U != (0x60U & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U])));
    __Vtemp_hdc8fc83b__0[0U] = (IData)((((((- (QData)((IData)(
                                                              (((0U 
                                                                 == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                                & (~ 
                                                                   (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                    >> 3U))) 
                                                               | ((1U 
                                                                   == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                                  & (~ 
                                                                     (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                      >> 3U))))))) 
                                           & vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_wdata) 
                                          | ((- (QData)((IData)(
                                                                (((4U 
                                                                   == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                                  & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                                     >> 6U)) 
                                                                 & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                    >> 3U))))) 
                                             & (((QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_mrdata[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_mrdata[0U]))))) 
                                         | ((- (QData)((IData)(
                                                               (((4U 
                                                                  == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                                 & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                                    >> 6U)) 
                                                                & (~ 
                                                                   (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                    >> 3U)))))) 
                                            & vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_wdata)) 
                                        | ((- (QData)((IData)(
                                                              ((4U 
                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                               & (~ 
                                                                  (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                                   >> 6U)))))) 
                                           & (((QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_mrdata[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_mrdata[0U]))))));
    __Vtemp_hdc8fc83b__0[1U] = (IData)(((((((- (QData)((IData)(
                                                               (((0U 
                                                                  == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                                 & (~ 
                                                                    (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                     >> 3U))) 
                                                                | ((1U 
                                                                    == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                                   & (~ 
                                                                      (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                       >> 3U))))))) 
                                            & vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_wdata) 
                                           | ((- (QData)((IData)(
                                                                 (((4U 
                                                                    == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                                   & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                                      >> 6U)) 
                                                                  & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                     >> 3U))))) 
                                              & (((QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_mrdata[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_mrdata[0U]))))) 
                                          | ((- (QData)((IData)(
                                                                (((4U 
                                                                   == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                                  & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                                     >> 6U)) 
                                                                 & (~ 
                                                                    (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                     >> 3U)))))) 
                                             & vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_wdata)) 
                                         | ((- (QData)((IData)(
                                                               ((4U 
                                                                 == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                                & (~ 
                                                                   (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                                    >> 6U)))))) 
                                            & (((QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_mrdata[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_mrdata[0U]))))) 
                                        >> 0x20U));
    __Vtemp_hdc8fc83b__0[2U] = (IData)((((((- (QData)((IData)(
                                                              (((0U 
                                                                 == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                                & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                   >> 3U)) 
                                                               | ((1U 
                                                                   == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                                  & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                     >> 3U)))))) 
                                           | (- (QData)((IData)(
                                                                (((4U 
                                                                   == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                                  & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                                     >> 6U)) 
                                                                 & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                    >> 3U)))))) 
                                          & vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_wdata) 
                                         | ((- (QData)((IData)(
                                                               (((4U 
                                                                  == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                                 & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                                    >> 6U)) 
                                                                & (~ 
                                                                   (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                    >> 3U)))))) 
                                            & (((QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_mrdata[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_mrdata[2U]))))) 
                                        | ((- (QData)((IData)(
                                                              ((4U 
                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                               & (~ 
                                                                  (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                                   >> 6U)))))) 
                                           & (((QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_mrdata[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_mrdata[2U]))))));
    __Vtemp_hdc8fc83b__0[3U] = (IData)(((((((- (QData)((IData)(
                                                               (((0U 
                                                                  == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                                 & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                    >> 3U)) 
                                                                | ((1U 
                                                                    == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                                   & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                      >> 3U)))))) 
                                            | (- (QData)((IData)(
                                                                 (((4U 
                                                                    == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                                   & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                                      >> 6U)) 
                                                                  & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                     >> 3U)))))) 
                                           & vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_wdata) 
                                          | ((- (QData)((IData)(
                                                                (((4U 
                                                                   == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                                  & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                                     >> 6U)) 
                                                                 & (~ 
                                                                    (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                     >> 3U)))))) 
                                             & (((QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_mrdata[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_mrdata[2U]))))) 
                                         | ((- (QData)((IData)(
                                                               ((4U 
                                                                 == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                                & (~ 
                                                                   (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                                    >> 6U)))))) 
                                            & (((QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_mrdata[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_mrdata[2U]))))) 
                                        >> 0x20U));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wdata[0U] 
        = __Vtemp_hdc8fc83b__0[0U];
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wdata[1U] 
        = __Vtemp_hdc8fc83b__0[1U];
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wdata[2U] 
        = __Vtemp_hdc8fc83b__0[2U];
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wdata[3U] 
        = __Vtemp_hdc8fc83b__0[3U];
    vlSelf->ysyx_22040127_top__DOT__ex_wmask = ((0xfeU 
                                                 & (IData)(vlSelf->ysyx_22040127_top__DOT__ex_wmask)) 
                                                | (1U 
                                                   & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask) 
                                                      | (3U 
                                                         == 
                                                         (3U 
                                                          & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                             >> 8U))))));
    vlSelf->ysyx_22040127_top__DOT__ex_wmask = ((0xfdU 
                                                 & (IData)(vlSelf->ysyx_22040127_top__DOT__ex_wmask)) 
                                                | (2U 
                                                   & (((0xfffffffeU 
                                                        & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask)) 
                                                       | (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask) 
                                                           & ((1U 
                                                               == 
                                                               (3U 
                                                                & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                                   >> 8U))) 
                                                              | (2U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                                     >> 8U))))) 
                                                          << 1U)) 
                                                      | ((3U 
                                                          == 
                                                          (3U 
                                                           & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                              >> 8U))) 
                                                         << 1U))));
    vlSelf->ysyx_22040127_top__DOT__ex_wmask = ((0xfbU 
                                                 & (IData)(vlSelf->ysyx_22040127_top__DOT__ex_wmask)) 
                                                | (4U 
                                                   & (((0xfffffffcU 
                                                        & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask)) 
                                                       | (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask) 
                                                           & (0x200U 
                                                              == 
                                                              (0x300U 
                                                               & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U]))) 
                                                          << 2U)) 
                                                      | ((3U 
                                                          == 
                                                          (3U 
                                                           & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                              >> 8U))) 
                                                         << 2U))));
    vlSelf->ysyx_22040127_top__DOT__ex_wmask = ((0xf7U 
                                                 & (IData)(vlSelf->ysyx_22040127_top__DOT__ex_wmask)) 
                                                | (8U 
                                                   & ((((0xfffffff8U 
                                                         & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask)) 
                                                        | ((IData)(
                                                                   (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask) 
                                                                     >> 2U) 
                                                                    & (0x100U 
                                                                       == 
                                                                       (0x300U 
                                                                        & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U])))) 
                                                           << 3U)) 
                                                       | (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask) 
                                                           & (0x200U 
                                                              == 
                                                              (0x300U 
                                                               & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U]))) 
                                                          << 3U)) 
                                                      | ((3U 
                                                          == 
                                                          (3U 
                                                           & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                              >> 8U))) 
                                                         << 3U))));
    vlSelf->ysyx_22040127_top__DOT__ex_wmask = ((0xefU 
                                                 & (IData)(vlSelf->ysyx_22040127_top__DOT__ex_wmask)) 
                                                | (0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask)) 
                                                      | ((3U 
                                                          == 
                                                          (3U 
                                                           & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                              >> 8U))) 
                                                         << 4U))));
    vlSelf->ysyx_22040127_top__DOT__ex_wmask = ((0xdfU 
                                                 & (IData)(vlSelf->ysyx_22040127_top__DOT__ex_wmask)) 
                                                | (0x20U 
                                                   & ((0xffffffe0U 
                                                       & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask) 
                                                          | (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask) 
                                                              << 1U) 
                                                             & (((1U 
                                                                  == 
                                                                  (3U 
                                                                   & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                                      >> 8U))) 
                                                                 | (2U 
                                                                    == 
                                                                    (3U 
                                                                     & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                                        >> 8U)))) 
                                                                << 5U)))) 
                                                      | ((3U 
                                                          == 
                                                          (3U 
                                                           & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                              >> 8U))) 
                                                         << 5U))));
    vlSelf->ysyx_22040127_top__DOT__ex_wmask = ((0xbfU 
                                                 & (IData)(vlSelf->ysyx_22040127_top__DOT__ex_wmask)) 
                                                | (0x40U 
                                                   & (((0xffffffc0U 
                                                        & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask)) 
                                                       | ((IData)(
                                                                  (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask) 
                                                                    >> 4U) 
                                                                   & (0x200U 
                                                                      == 
                                                                      (0x300U 
                                                                       & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U])))) 
                                                          << 6U)) 
                                                      | ((3U 
                                                          == 
                                                          (3U 
                                                           & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                              >> 8U))) 
                                                         << 6U))));
    vlSelf->ysyx_22040127_top__DOT__ex_wmask = ((0x7fU 
                                                 & (IData)(vlSelf->ysyx_22040127_top__DOT__ex_wmask)) 
                                                | (0x80U 
                                                   & ((((0xffffff80U 
                                                         & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask)) 
                                                        | ((IData)(
                                                                   (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask) 
                                                                     >> 6U) 
                                                                    & (0x100U 
                                                                       == 
                                                                       (0x300U 
                                                                        & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U])))) 
                                                           << 7U)) 
                                                       | ((IData)(
                                                                  (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask) 
                                                                    >> 4U) 
                                                                   & (0x200U 
                                                                      == 
                                                                      (0x300U 
                                                                       & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U])))) 
                                                          << 7U)) 
                                                      | ((3U 
                                                          == 
                                                          (3U 
                                                           & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                              >> 8U))) 
                                                         << 7U))));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard2)
            ? (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])))
            : ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard2_tmp)
                ? vlSelf->ysyx_22040127_top__DOT__wb_reg_wdata
                : ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard2)
                    ? (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])))
                    : ((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                         & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                            == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                         >> 0x14U)))) 
                        & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                           >> 5U)) ? vlSelf->ysyx_22040127_top__DOT__wb_reg_wdata
                        : vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf
                       [(0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                  >> 0x14U))]))));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard2 
        = (((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard2) 
            & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
               >> 5U)) & (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                            << 1U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                      >> 0x1fU)) != 
                          vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard1)
            ? (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])))
            : ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard1_tmp)
                ? vlSelf->ysyx_22040127_top__DOT__wb_reg_wdata
                : ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard1)
                    ? (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])))
                    : ((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                         & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                            == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                         >> 0xfU)))) 
                        & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                           >> 5U)) ? vlSelf->ysyx_22040127_top__DOT__wb_reg_wdata
                        : vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf
                       [(0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                  >> 0xfU))]))));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard1 
        = (((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard1) 
            & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
               >> 5U)) & (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                            << 1U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                      >> 0x1fU)) != 
                          vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U]));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1dirty 
        = (vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1D
           [(0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                      >> 4U))] & (IData)(vlSelf->ysyx_22040127_top__DOT____Vcellinp__dcache__input_valid));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1valid 
        = (vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1V
           [(0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                      >> 4U))] & (IData)(vlSelf->ysyx_22040127_top__DOT____Vcellinp__dcache__input_valid));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0dirty 
        = (vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0D
           [(0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                      >> 4U))] & (IData)(vlSelf->ysyx_22040127_top__DOT____Vcellinp__dcache__input_valid));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0valid 
        = (vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0V
           [(0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                      >> 4U))] & (IData)(vlSelf->ysyx_22040127_top__DOT____Vcellinp__dcache__input_valid));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit 
        = (((vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0tags
             [(0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                        >> 4U))] == (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                     >> 0xbU)) & vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0V
            [(0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                       >> 4U))]) & (IData)(vlSelf->ysyx_22040127_top__DOT____Vcellinp__dcache__input_valid));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit 
        = (((vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1tags
             [(0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                        >> 4U))] == (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                     >> 0xbU)) & vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1V
            [(0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                       >> 4U))]) & (IData)(vlSelf->ysyx_22040127_top__DOT____Vcellinp__dcache__input_valid));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_strb 
        = (((QData)((IData)((((- (IData)((1U & ((IData)(vlSelf->ysyx_22040127_top__DOT__ex_wmask) 
                                                >> 7U)))) 
                              << 0x18U) | ((0xff0000U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ysyx_22040127_top__DOT__ex_wmask) 
                                                              >> 6U)))) 
                                               << 0x10U)) 
                                           | ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->ysyx_22040127_top__DOT__ex_wmask) 
                                                                 >> 5U)))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyx_22040127_top__DOT__ex_wmask) 
                                                                  >> 4U)))))))))) 
            << 0x20U) | (QData)((IData)((((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->ysyx_22040127_top__DOT__ex_wmask) 
                                                         >> 3U)))) 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyx_22040127_top__DOT__ex_wmask) 
                                                               >> 2U)))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyx_22040127_top__DOT__ex_wmask) 
                                                                  >> 1U)))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->ysyx_22040127_top__DOT__ex_wmask)))))))))));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1 
        = (((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
            | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
            ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
            : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken 
        = ((5U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
           & (((((((~ (IData)((0U != (7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                            >> 0xcU))))) 
                   & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final 
                      == vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final)) 
                  | (((~ (IData)((0U != (3U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                               >> 0xdU))))) 
                      & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                         >> 0xcU)) & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final 
                                      != vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final))) 
                 | (IData)(((0x4000U == (0x7000U & 
                                         vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                            & VL_LTS_IQQ(64, vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final, vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final)))) 
                | (IData)(((0x6000U == (0x7000U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                           & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final 
                              < vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final)))) 
               | (IData)(((0x5000U == (0x7000U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                          & VL_GTES_IQQ(64, vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final, vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final)))) 
              | (IData)(((0x7000U == (0x7000U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                         & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final 
                            >= vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final)))));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_ready_go 
        = (1U & (~ ((((((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard1) 
                        | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard2)) 
                       | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1)) 
                      | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2)) 
                     | (((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[5U] 
                          >> 0x14U) & (0U != (0x1fU 
                                              & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U]))) 
                        & (((0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U]) 
                            == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                         >> 0xfU))) 
                           | ((0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U]) 
                              == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                           >> 0x14U)))))) 
                    | (((vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[3U] 
                         >> 0xeU) & (0U != (0x1fU & 
                                            vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U]))) 
                       & (((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U]) 
                           == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                        >> 0xfU))) 
                          | ((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U]) 
                             == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                          >> 0x14U))))))));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way0 
        = ((((((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
               & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way0_reg)) 
              & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                 >> 5U)) & ((0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                      >> 4U)) == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_index_reg))) 
            & ((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                      >> 3U)) == (1U & ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_offset_reg) 
                                        >> 3U)))) & 
           (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way1 
        = ((((((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit) 
               & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way1_reg)) 
              & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                 >> 5U)) & ((0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                      >> 4U)) == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_index_reg))) 
            & ((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                      >> 3U)) == (1U & ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_offset_reg) 
                                        >> 3U)))) & 
           (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_strb[0U] 
        = (IData)((((- (QData)((IData)((((~ (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                                            | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit))) 
                                        & ((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                           | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))))))) 
                    & vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_strb) 
                   | (- (QData)((IData)(((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_res_valid) 
                                         & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))))))));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_strb[1U] 
        = (IData)(((((- (QData)((IData)((((~ (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                                             | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit))) 
                                         & ((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                            | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))))))) 
                     & vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_strb) 
                    | (- (QData)((IData)(((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_res_valid) 
                                          & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_strb[2U] 
        = (IData)((((- (QData)((IData)((((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                          >> 3U) & 
                                         ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                                          | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit))) 
                                        & ((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                           | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))))))) 
                    & vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_strb) 
                   | (- (QData)((IData)(((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_res_valid) 
                                         & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))))))));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_strb[3U] 
        = (IData)(((((- (QData)((IData)((((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                           >> 3U) & 
                                          ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                                           | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit))) 
                                         & ((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                            | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))))))) 
                     & vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_strb) 
                    | (- (QData)((IData)(((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_res_valid) 
                                          & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040127_top__DOT__id_branch_taken 
        = (((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken) 
            | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr)) 
           | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)));
    vlSelf->ysyx_22040127_top__DOT__id_to_ex_valid 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_ready_go) 
           & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_valid));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way0 
        = (((((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
              & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                 >> 6U)) & (0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))) 
            | ((((~ (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way0)) 
                 & (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))) 
                & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit)) 
               & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                  >> 6U))) | (((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_res_valid) 
                               & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))) 
                              & (~ ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0dirty) 
                                    & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0valid)))));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way1 
        = (((((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit) 
              & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                 >> 6U)) & (0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))) 
            | ((((~ (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way1)) 
                 & (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))) 
                & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit)) 
               & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                  >> 6U))) | ((((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_res_valid) 
                                & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))) 
                               & (~ ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1dirty) 
                                     & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1valid)))) 
                              & ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0dirty) 
                                 & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0valid))));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way0) 
           | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way1));
    vlSelf->ysyx_22040127_top__DOT__if_to_id_bus[0U] 
        = (IData)((((QData)((IData)(((1U & (((IData)(vlSelf->ysyx_22040127_top__DOT__id_branch_taken) 
                                             | (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                                >> 0xdU)) 
                                            | (0x7bU 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_22040127_top__DOT__if_instruction))))
                                      ? 0U : vlSelf->ysyx_22040127_top__DOT__if_instruction))) 
                    << 0x20U) | (QData)((IData)(vlSelf->if_pc))));
    vlSelf->ysyx_22040127_top__DOT__if_to_id_bus[1U] 
        = (IData)(((((QData)((IData)(((1U & (((IData)(vlSelf->ysyx_22040127_top__DOT__id_branch_taken) 
                                              | (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                                 >> 0xdU)) 
                                             | (0x7bU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_22040127_top__DOT__if_instruction))))
                                       ? 0U : vlSelf->ysyx_22040127_top__DOT__if_instruction))) 
                     << 0x20U) | (QData)((IData)(vlSelf->if_pc))) 
                   >> 0x20U));
    vlSelf->ysyx_22040127_top__DOT__if_to_id_bus[2U] 
        = ((IData)((0x100073U == (0x10007fU & vlSelf->ysyx_22040127_top__DOT__if_instruction))) 
           & (~ (IData)((0U != (0xffefff80U & vlSelf->ysyx_22040127_top__DOT__if_instruction)))));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_miss 
        = (((((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1dirty) 
              & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0valid)) 
             & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0dirty)) 
            & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1valid)) 
           & (((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
               & (~ ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                     | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit)))) 
              | ((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                 & ((((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw) 
                      & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit))) 
                     & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit))) 
                    | ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit)) 
                       & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit)))))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__cache_readygo 
        = (1U & (((6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                  | (IData)((0U == (0x180000U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])))) 
                 | (((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                     & ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                        | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit))) 
                    | ((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                       & ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw)) 
                          & ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                             | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit)))))));
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
    vlSelf->ysyx_22040127_top__DOT__next_pc = (((IData)(vlSelf->ysyx_22040127_top__DOT__id_branch_taken) 
                                                & (IData)(vlSelf->ysyx_22040127_top__DOT__id_allowin))
                                                ? (
                                                   (((- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken))) 
                                                     & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U] 
                                                        + (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm))) 
                                                    | (0xfffffffeU 
                                                       & ((- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr))) 
                                                          & ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final) 
                                                             + 
                                                             (((- (IData)(
                                                                          (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                           >> 0x1fU))) 
                                                               << 0xcU) 
                                                              | (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                 >> 0x14U)))))) 
                                                   | ((- (IData)(
                                                                 (3U 
                                                                  == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))) 
                                                      & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U] 
                                                         + (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1))))
                                                : (
                                                   (0x2000U 
                                                    & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U])
                                                    ? (IData)(vlSelf->mepc)
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22040127_top__DOT__preif_valid) 
                                                     & (IData)(vlSelf->ysyx_22040127_top__DOT__preif_ready_go_delayed))
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSelf->if_pc)
                                                     : vlSelf->ysyx_22040127_top__DOT__next_pc_delayed)));
    vlSelf->ysyx_22040127_top__DOT__if_allowin = (1U 
                                                  & ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__if_valid)) 
                                                     | (IData)(vlSelf->ysyx_22040127_top__DOT__id_allowin)));
    vlSelf->ysyx_22040127_top__DOT__icache_valid = 
        ((IData)(vlSelf->ysyx_22040127_top__DOT__preif_valid) 
         & (IData)(vlSelf->ysyx_22040127_top__DOT__if_allowin));
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1valid 
        = (vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1V
           [(0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc)) 
                              >> 4U)))] & (IData)(vlSelf->ysyx_22040127_top__DOT__icache_valid));
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0valid 
        = (vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0V
           [(0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc)) 
                              >> 4U)))] & (IData)(vlSelf->ysyx_22040127_top__DOT__icache_valid));
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit 
        = (((vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0tags
             [(0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc)) 
                                >> 4U)))] == (0x1fffffU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc)) 
                                                         >> 0xbU)))) 
            & vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0V
            [(0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc)) 
                               >> 4U)))]) & (IData)(vlSelf->ysyx_22040127_top__DOT__icache_valid));
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit 
        = (((vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1tags
             [(0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc)) 
                                >> 4U)))] == (0x1fffffU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc)) 
                                                         >> 0xbU)))) 
            & vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1V
            [(0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc)) 
                               >> 4U)))]) & (IData)(vlSelf->ysyx_22040127_top__DOT__icache_valid));
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wen_way0 
        = (((IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__axi_res_valid) 
            & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state))) 
           & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0valid)));
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wen_way1 
        = ((((IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__axi_res_valid) 
             & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state))) 
            & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1valid))) 
           & (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0valid));
    vlSelf->ysyx_22040127_top__DOT__preif_ready_go 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__preif_valid) 
           & ((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state)) 
              & ((IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit) 
                 | (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit))));
    vlSelf->ysyx_22040127_top__DOT__preif_allowin = 
        (1U & ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__preif_valid)) 
               | ((IData)(vlSelf->ysyx_22040127_top__DOT__preif_ready_go) 
                  & (IData)(vlSelf->ysyx_22040127_top__DOT__if_allowin))));
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
