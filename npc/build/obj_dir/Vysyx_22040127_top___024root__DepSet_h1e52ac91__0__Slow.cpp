// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040127_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040127_top___024root.h"

VL_ATTR_COLD void Vysyx_22040127_top___024root___initial__TOP__0(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->mtval = 0ULL;
    vlSelf->axi_aw_prot_o = 0U;
    vlSelf->axi_aw_id_o = 0U;
    vlSelf->axi_aw_user_o = 0U;
    vlSelf->axi_aw_burst_o = 1U;
    vlSelf->axi_aw_lock_o = 0U;
    vlSelf->axi_aw_cache_o = 2U;
    vlSelf->axi_aw_qos_o = 0U;
    vlSelf->axi_aw_region_o = 0U;
    vlSelf->axi_w_user_o = 0U;
    vlSelf->axi_ar_prot_o = 0U;
    vlSelf->axi_ar_id_o = 0U;
    vlSelf->axi_ar_user_o = 0U;
    vlSelf->axi_ar_size_o = 3U;
    vlSelf->axi_ar_burst_o = 1U;
    vlSelf->axi_ar_lock_o = 0U;
    vlSelf->axi_ar_cache_o = 2U;
    vlSelf->axi_ar_qos_o = 0U;
    vlSelf->axi_b_ready_o = 1U;
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cnt = 0U;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cnt = 0U;
}

VL_ATTR_COLD void Vysyx_22040127_top___024root___settle__TOP__0(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___settle__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__0;
    VlWide<4>/*127:0*/ __Vtemp_h938fe951__0;
    VlWide<4>/*127:0*/ __Vtemp_h133872f3__0;
    VlWide<4>/*127:0*/ __Vtemp_h91b922f6__0;
    VlWide<4>/*127:0*/ __Vtemp_hb260154b__0;
    VlWide<4>/*127:0*/ __Vtemp_h5f54cd54__0;
    VlWide<4>/*127:0*/ __Vtemp_h6ee9a76b__0;
    VlWide<3>/*95:0*/ __Vtemp_h4d457b27__0;
    VlWide<3>/*95:0*/ __Vtemp_h69fb6179__0;
    VlWide<3>/*95:0*/ __Vtemp_h25baf21a__0;
    VlWide<4>/*127:0*/ __Vtemp_hcef49998__0;
    VlWide<4>/*127:0*/ __Vtemp_hb2f2d8ca__0;
    VlWide<4>/*127:0*/ __Vtemp_h47e8ddb0__0;
    VlWide<10>/*319:0*/ __Vtemp_h37a0bcf4__0;
    VlWide<4>/*127:0*/ __Vtemp_h464333de__0;
    // Body
    vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[0U] = 0ULL;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[0U] = 0x31dU;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[1U] = 0x11aU;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[2U] = 0x39eU;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[3U] = 0x19cU;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[4U] = 0x1dcU;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[5U] = 0x37bU;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[6U] = 0x78U;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[7U] = 0x338U;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[8U] = 0x18U;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[9U] = 0x98U;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[0xaU] = 0xd8U;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[0xbU] = 0x1b9U;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[0xcU] = 0xb9U;
    vlSelf->axi_aw_valid_o = (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state));
    __Vtemp_hc961d23f__0[0U] = 1U;
    __Vtemp_hc961d23f__0[1U] = 0U;
    __Vtemp_hc961d23f__0[2U] = 0U;
    __Vtemp_hc961d23f__0[3U] = 0U;
    __Vtemp_h938fe951__0[0U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[0U]);
    __Vtemp_h938fe951__0[1U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[1U]);
    __Vtemp_h938fe951__0[2U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[2U]);
    __Vtemp_h938fe951__0[3U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[3U]);
    VL_ADD_W(4, __Vtemp_h133872f3__0, __Vtemp_hc961d23f__0, __Vtemp_h938fe951__0);
    __Vtemp_h91b922f6__0[0U] = 1U;
    __Vtemp_h91b922f6__0[1U] = 0U;
    __Vtemp_h91b922f6__0[2U] = 0U;
    __Vtemp_h91b922f6__0[3U] = 0U;
    __Vtemp_hb260154b__0[0U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[0U]);
    __Vtemp_hb260154b__0[1U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[1U]);
    __Vtemp_hb260154b__0[2U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[2U]);
    __Vtemp_hb260154b__0[3U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[3U]);
    VL_ADD_W(4, __Vtemp_h5f54cd54__0, __Vtemp_h91b922f6__0, __Vtemp_hb260154b__0);
    __Vtemp_h6ee9a76b__0[1U] = (((((- (IData)(((1U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                               | (2U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[1U]) 
                                  | ((- (IData)(((5U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                                 | (6U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                     & __Vtemp_h133872f3__0[1U])) 
                                 | ((- (IData)((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                    & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[0U] 
                                        >> 0x1fU) | 
                                       (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[1U] 
                                        << 1U)))) | 
                                ((- (IData)((4U == 
                                             (7U & 
                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                 & ((__Vtemp_h5f54cd54__0[0U] 
                                     >> 0x1fU) | (__Vtemp_h5f54cd54__0[1U] 
                                                  << 1U))));
    __Vtemp_h6ee9a76b__0[2U] = (((((- (IData)(((1U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                               | (2U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[2U]) 
                                  | ((- (IData)(((5U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                                 | (6U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                     & __Vtemp_h133872f3__0[2U])) 
                                 | ((- (IData)((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                    & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[1U] 
                                        >> 0x1fU) | 
                                       (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[2U] 
                                        << 1U)))) | 
                                ((- (IData)((4U == 
                                             (7U & 
                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                 & ((__Vtemp_h5f54cd54__0[1U] 
                                     >> 0x1fU) | (__Vtemp_h5f54cd54__0[2U] 
                                                  << 1U))));
    __Vtemp_h6ee9a76b__0[3U] = (((((- (IData)(((1U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                               | (2U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[3U]) 
                                  | ((- (IData)(((5U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                                 | (6U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                     & __Vtemp_h133872f3__0[3U])) 
                                 | ((- (IData)((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                    & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[2U] 
                                        >> 0x1fU) | 
                                       (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[3U] 
                                        << 1U)))) | 
                                ((- (IData)((4U == 
                                             (7U & 
                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                 & ((__Vtemp_h5f54cd54__0[2U] 
                                     >> 0x1fU) | (__Vtemp_h5f54cd54__0[3U] 
                                                  << 1U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__z[0U] 
        = (((((- (IData)(((1U == (7U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                          | (2U == (7U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
              & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[0U]) 
             | ((- (IData)(((5U == (7U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                            | (6U == (7U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                & __Vtemp_h133872f3__0[0U])) | ((- (IData)(
                                                           (3U 
                                                            == 
                                                            (7U 
                                                             & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[0U] 
                                                   << 1U))) 
           | ((- (IData)((4U == (7U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
              & (__Vtemp_h5f54cd54__0[0U] << 1U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__z[1U] 
        = __Vtemp_h6ee9a76b__0[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__z[2U] 
        = __Vtemp_h6ee9a76b__0[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__z[3U] 
        = __Vtemp_h6ee9a76b__0[3U];
    __Vtemp_h4d457b27__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U];
    __Vtemp_h4d457b27__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U];
    __Vtemp_h4d457b27__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[4U];
    VL_EXTEND_WQ(65,64, __Vtemp_h69fb6179__0, vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__divisor);
    VL_SUB_W(3, __Vtemp_h25baf21a__0, __Vtemp_h4d457b27__0, __Vtemp_h69fb6179__0);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__subres[0U] 
        = __Vtemp_h25baf21a__0[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__subres[1U] 
        = __Vtemp_h25baf21a__0[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__subres[2U] 
        = (1U & __Vtemp_h25baf21a__0[2U]);
    vlSelf->axi_w_valid_o = ((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state)) 
                             | (5U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state)));
    vlSelf->ysyx_22040127_top__DOT__icache_data = ((IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit_reg)
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__input_offset_reg))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[2U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[0U]))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__input_offset_reg))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[2U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[0U])))));
    vlSelf->mstatus = ((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpp)) 
                         << 0xbU) | ((QData)((IData)(
                                                     ((IData)(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpie) 
                                                      << 3U))) 
                                     << 4U)) | (QData)((IData)(
                                                               ((IData)(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mie) 
                                                                << 3U))));
    vlSelf->axi_aw_addr_o = vlSelf->ysyx_22040127_top__DOT__d_req_addr;
    vlSelf->axi_w_strb_o = vlSelf->ysyx_22040127_top__DOT__d_req_strb;
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wdata[0U] 
        = (IData)(((- (QData)((IData)((4U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state))))) 
                   & (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__i_mrdata[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__i_mrdata[0U])))));
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wdata[1U] 
        = (IData)((((- (QData)((IData)((4U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state))))) 
                    & (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__i_mrdata[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__i_mrdata[0U])))) 
                   >> 0x20U));
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wdata[2U] 
        = (IData)(((- (QData)((IData)((4U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state))))) 
                   & (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__i_mrdata[3U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__i_mrdata[2U])))));
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wdata[3U] 
        = (IData)((((- (QData)((IData)((4U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state))))) 
                    & (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__i_mrdata[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__i_mrdata[2U])))) 
                   >> 0x20U));
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_strb[0U] 
        = (IData)((- (QData)((IData)(((5U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)) 
                                      & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state)))))));
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_strb[1U] 
        = (IData)(((- (QData)((IData)(((5U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)) 
                                       & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_strb[2U] 
        = (IData)((- (QData)((IData)(((5U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)) 
                                      & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state)))))));
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_strb[3U] 
        = (IData)(((- (QData)((IData)(((5U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)) 
                                       & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0fencev 
        = vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0V
        [vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_cnt];
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0fenced 
        = vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0D
        [vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_cnt];
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1fencev 
        = vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1V
        [vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_cnt];
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1fenced 
        = vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1D
        [vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_cnt];
    vlSelf->axi_ar_valid_o = ((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)) 
                              | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)));
    vlSelf->axi_r_ready_o = ((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)) 
                             | (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)));
    vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_valid 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__d_req_wen) 
           & (IData)(vlSelf->ysyx_22040127_top__DOT__d_req_valid));
    vlSelf->ysyx_22040127_top__DOT__axi__DOT__is_mmio 
        = (IData)(((0xa0000000ULL == (0xf0000000ULL 
                                      & vlSelf->ysyx_22040127_top__DOT__d_req_addr)) 
                   & (IData)(vlSelf->ysyx_22040127_top__DOT__d_req_valid)));
    vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mmio_mem)
            ? vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mmio_rdata_reg
            : ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit_reg)
                ? ((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_offset_reg))
                    ? (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[2U])))
                    : (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[0U]))))
                : ((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_offset_reg))
                    ? (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[2U])))
                    : (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[0U]))))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__x_ext[0U] 
        = (IData)((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__x_ext[1U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                   >> 0x20U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__x_ext[2U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U] 
            >> 0x1fU) & (~ (IData)((0xc00000U == (0xc00000U 
                                                  & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result 
        = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U] 
           - vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
        = ((0xfffffff8U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op) 
           | (((2U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                >> 0x16U))) << 2U) 
              | (((1U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                   >> 0x16U))) << 1U) 
                 | (0U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                    >> 0x16U))))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
        = ((0xffffffc7U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op) 
           | (((5U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                >> 0x16U))) << 5U) 
              | (((4U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                   >> 0x16U))) << 4U) 
                 | ((3U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 0x16U))) << 3U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
        = ((0xfffffe3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op) 
           | (((8U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                >> 0x16U))) << 8U) 
              | (((7U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                   >> 0x16U))) << 7U) 
                 | ((6U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 0x16U))) << 6U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
        = ((0xfffff1ffU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op) 
           | (((0xbU == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                  >> 0x16U))) << 0xbU) 
              | (((0xaU == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 0x16U))) << 0xaU) 
                 | ((9U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 0x16U))) << 9U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
        = ((0xffff8fffU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op) 
           | (((0xeU == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                  >> 0x16U))) << 0xeU) 
              | (((0xdU == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 0x16U))) << 0xdU) 
                 | ((0xcU == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                       >> 0x16U))) 
                    << 0xcU))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
        = ((0xfffc7fffU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op) 
           | (((0x11U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                   >> 0x16U))) << 0x11U) 
              | (((0x10U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                      >> 0x16U))) << 0x10U) 
                 | ((0xfU == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                       >> 0x16U))) 
                    << 0xfU))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
        = ((0xffe3ffffU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op) 
           | (((0x14U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                   >> 0x16U))) << 0x14U) 
              | (((0x13U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                      >> 0x16U))) << 0x13U) 
                 | ((0x12U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                        >> 0x16U))) 
                    << 0x12U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
        = ((0xff1fffffU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op) 
           | (((0x17U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                   >> 0x16U))) << 0x17U) 
              | (((0x16U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                      >> 0x16U))) << 0x16U) 
                 | ((0x15U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                        >> 0x16U))) 
                    << 0x15U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
        = ((0xf8ffffffU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op) 
           | (((0x1aU == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                   >> 0x16U))) << 0x1aU) 
              | (((0x19U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                      >> 0x16U))) << 0x19U) 
                 | ((0x18U == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                        >> 0x16U))) 
                    << 0x18U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
        = ((0xc7ffffffU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op) 
           | (((0x1dU == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                   >> 0x16U))) << 0x1dU) 
              | (((0x1cU == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                      >> 0x16U))) << 0x1cU) 
                 | ((0x1bU == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                        >> 0x16U))) 
                    << 0x1bU))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
        = ((0x3fffffffU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op) 
           | (((0x1fU == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                   >> 0x16U))) << 0x1fU) 
              | ((0x1eU == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 0x16U))) << 0x1eU)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sll 
        = ((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
             << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
           << (0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__addw_result 
        = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U] 
           + vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_sllw 
        = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U] 
           << (0x1fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_srl 
        = ((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
             << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
           >> (0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_srlw 
        = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U] 
           >> (0x1fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in 
        = ((0x30U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                     >> 0x19U)) | ((0xeU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                            >> 0x15U)) 
                                   | (1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                            >> 0x19U))));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr 
        = (IData)((0x6700000000ULL == (0x707f00000000ULL 
                                       & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)));
    vlSelf->wb_instruction = ((vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xbU] 
                               << 0x1cU) | (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                            >> 4U));
    vlSelf->wb_memwrite = (1U & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU]);
    vlSelf->wb_diff_data = (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[9U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[8U])));
    vlSelf->wb_diff_addr = (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[6U])));
    vlSelf->wb_pc = ((vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                      << 0x1aU) | (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                   >> 6U));
    vlSelf->ysyx_22040127_top__DOT__axi__DOT__b_hs 
        = ((IData)(vlSelf->axi_b_ready_o) & (IData)(vlSelf->axi_b_valid_i));
    vlSelf->ysyx_22040127_top__DOT__rf[0x1fU] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0x1fU];
    vlSelf->ysyx_22040127_top__DOT__rf[0x1eU] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0x1eU];
    vlSelf->ysyx_22040127_top__DOT__rf[0x1dU] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0x1dU];
    vlSelf->ysyx_22040127_top__DOT__rf[0x1cU] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0x1cU];
    vlSelf->ysyx_22040127_top__DOT__rf[0x1bU] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0x1bU];
    vlSelf->ysyx_22040127_top__DOT__rf[0x1aU] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0x1aU];
    vlSelf->ysyx_22040127_top__DOT__rf[0x19U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0x19U];
    vlSelf->ysyx_22040127_top__DOT__rf[0x18U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0x18U];
    vlSelf->ysyx_22040127_top__DOT__rf[0x17U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0x17U];
    vlSelf->ysyx_22040127_top__DOT__rf[0x16U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0x16U];
    vlSelf->ysyx_22040127_top__DOT__rf[0x15U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0x15U];
    vlSelf->ysyx_22040127_top__DOT__rf[0x14U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0x14U];
    vlSelf->ysyx_22040127_top__DOT__rf[0x13U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0x13U];
    vlSelf->ysyx_22040127_top__DOT__rf[0x12U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0x12U];
    vlSelf->ysyx_22040127_top__DOT__rf[0x11U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0x11U];
    vlSelf->ysyx_22040127_top__DOT__rf[0x10U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0x10U];
    vlSelf->ysyx_22040127_top__DOT__rf[0xfU] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0xfU];
    vlSelf->ysyx_22040127_top__DOT__rf[0xeU] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0xeU];
    vlSelf->ysyx_22040127_top__DOT__rf[0xdU] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0xdU];
    vlSelf->ysyx_22040127_top__DOT__rf[0xcU] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0xcU];
    vlSelf->ysyx_22040127_top__DOT__rf[0xbU] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0xbU];
    vlSelf->ysyx_22040127_top__DOT__rf[0xaU] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0xaU];
    vlSelf->ysyx_22040127_top__DOT__rf[9U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [9U];
    vlSelf->ysyx_22040127_top__DOT__rf[8U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [8U];
    vlSelf->ysyx_22040127_top__DOT__rf[7U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [7U];
    vlSelf->ysyx_22040127_top__DOT__rf[6U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [6U];
    vlSelf->ysyx_22040127_top__DOT__rf[5U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [5U];
    vlSelf->ysyx_22040127_top__DOT__rf[4U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [4U];
    vlSelf->ysyx_22040127_top__DOT__rf[3U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [3U];
    vlSelf->ysyx_22040127_top__DOT__rf[2U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [2U];
    vlSelf->ysyx_22040127_top__DOT__rf[1U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [1U];
    vlSelf->ysyx_22040127_top__DOT__rf[0U] = vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
        [0U];
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [0U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[1U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[1U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [1U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[2U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[2U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [2U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[3U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[3U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [3U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[4U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[4U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [4U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[5U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[5U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [5U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[6U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[6U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [6U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[7U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[7U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [7U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[8U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[8U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [8U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[9U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[9U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [9U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0xaU] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0xaU] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [0xaU] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0xbU] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0xbU] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [0xbU] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0xcU] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0xcU] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [0xcU] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [0U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[1U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[1U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [1U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[2U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[2U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [2U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[3U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[3U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [3U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[4U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[4U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [4U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[5U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[5U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [5U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[6U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[6U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [6U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[7U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[7U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [7U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[8U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[8U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [8U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[9U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[9U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [9U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0xaU] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0xaU] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [0xaU] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0xbU] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0xbU] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [0xbU] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0xcU] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0xcU] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [0xcU] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_hs 
        = ((IData)(vlSelf->axi_w_ready_i) & (IData)(vlSelf->axi_w_valid_o));
    vlSelf->ysyx_22040127_top__DOT__if_instruction 
        = ((4U & vlSelf->if_pc) ? (IData)((vlSelf->ysyx_22040127_top__DOT__icache_data 
                                           >> 0x20U))
            : (IData)(vlSelf->ysyx_22040127_top__DOT__icache_data));
    vlSelf->ysyx_22040127_top__DOT__wb_csrrdata = (
                                                   (((((((((- (QData)((IData)(
                                                                              (0x305U 
                                                                               == 
                                                                               (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                                                                >> 0x14U))))) 
                                                           & vlSelf->mtvec) 
                                                          | ((- (QData)((IData)(
                                                                                (0xb00U 
                                                                                == 
                                                                                (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                                                                >> 0x14U))))) 
                                                             & vlSelf->ysyx_22040127_top__DOT__wb__DOT__csr_mcycle)) 
                                                         | ((- (QData)((IData)(
                                                                               (0x342U 
                                                                                == 
                                                                                (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                                                                >> 0x14U))))) 
                                                            & vlSelf->mcause)) 
                                                        | ((- (QData)((IData)(
                                                                              (0x300U 
                                                                               == 
                                                                               (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                                                                >> 0x14U))))) 
                                                           & vlSelf->mstatus)) 
                                                       | ((- (QData)((IData)(
                                                                             (0x341U 
                                                                              == 
                                                                              (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                                                               >> 0x14U))))) 
                                                          & vlSelf->mepc)) 
                                                      | ((- (QData)((IData)(
                                                                            (0x304U 
                                                                             == 
                                                                             (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                                                              >> 0x14U))))) 
                                                         & vlSelf->mie)) 
                                                     | ((- (QData)((IData)(
                                                                           (0x344U 
                                                                            == 
                                                                            (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                                                             >> 0x14U))))) 
                                                        & vlSelf->mip)) 
                                                    | ((- (QData)((IData)(
                                                                          (0x340U 
                                                                           == 
                                                                           (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                                                            >> 0x14U))))) 
                                                       & vlSelf->mscratch)) 
                                                   | ((- (QData)((IData)(
                                                                         (0xf14U 
                                                                          == 
                                                                          (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                                                           >> 0x14U))))) 
                                                      & vlSelf->ysyx_22040127_top__DOT__mhartid));
    vlSelf->ysyx_22040127_top__DOT__axi__DOT__ar_hs 
        = ((IData)(vlSelf->axi_ar_ready_i) & (IData)(vlSelf->axi_ar_valid_o));
    vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_hs 
        = ((IData)(vlSelf->axi_r_ready_o) & (IData)(vlSelf->axi_r_valid_i));
    if (((IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__is_mmio) 
         & (IData)(vlSelf->ysyx_22040127_top__DOT__d_req_wen))) {
        vlSelf->axi_aw_len_o = 0U;
        vlSelf->axi_aw_size_o = 2U;
    } else {
        vlSelf->axi_aw_len_o = 1U;
        vlSelf->axi_aw_size_o = 3U;
    }
    vlSelf->axi_w_last_o = ((5U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state)) 
                            | (((IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__is_mmio) 
                                & (IData)(vlSelf->ysyx_22040127_top__DOT__d_req_wen)) 
                               & (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state))));
    vlSelf->axi_ar_len_o = ((((IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__is_mmio) 
                              & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__d_req_wen))) 
                             & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__i_req_valid)))
                             ? 0U : 1U);
    vlSelf->axi_w_data_o = ((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state))
                             ? (((IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__is_mmio) 
                                 & (IData)(vlSelf->ysyx_22040127_top__DOT__d_req_wen))
                                 ? (((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__d_req_data[0U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__d_req_data[0U])))
                                 : (((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__d_req_data[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__d_req_data[0U]))))
                             : (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__d_req_data[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->ysyx_22040127_top__DOT__d_req_data[2U]))));
    vlSelf->axi_ar_addr_o = ((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state))
                              ? (0xfffffffffffffff0ULL 
                                 & vlSelf->ysyx_22040127_top__DOT__i_req_addr)
                              : ((3U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state))
                                  ? ((IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__is_mmio)
                                      ? vlSelf->ysyx_22040127_top__DOT__d_req_addr
                                      : (0xfffffffffffffff0ULL 
                                         & vlSelf->ysyx_22040127_top__DOT__d_req_addr))
                                  : 0ULL));
    vlSelf->ysyx_22040127_top__DOT__d_res_valid = (
                                                   (((6U 
                                                      == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)) 
                                                     & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__is_mmio))) 
                                                    | (((6U 
                                                         == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)) 
                                                        & (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__mmio_rdone)) 
                                                       & (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__is_mmio))) 
                                                   | ((((4U 
                                                         == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state)) 
                                                        & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__is_mmio))) 
                                                       | (((4U 
                                                            == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state)) 
                                                           & (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__is_mmio)) 
                                                          & (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__mmio_wdone))) 
                                                      & (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_valid)));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ld)
            ? vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data
            : (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask) 
                & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lw) 
                   | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lwu)))
                ? (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data))
                : ((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask) 
                     >> 4U) & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lw) 
                               | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lwu)))
                    ? (QData)((IData)((vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data 
                                       >> 0x20U))) : 
                   (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask) 
                     & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lh) 
                        | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lhu)))
                     ? (QData)((IData)((0xffffU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data))))
                     : ((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask) 
                          >> 2U) & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lh) 
                                    | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lhu)))
                         ? (QData)((IData)((0xffffU 
                                            & (IData)(
                                                      (vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data 
                                                       >> 0x10U)))))
                         : ((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask) 
                              >> 4U) & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lh) 
                                        | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lhu)))
                             ? (QData)((IData)((0xffffU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data 
                                                           >> 0x20U)))))
                             : ((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask) 
                                  >> 6U) & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lh) 
                                            | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lhu)))
                                 ? (QData)((IData)(
                                                   (0xffffU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data 
                                                               >> 0x30U)))))
                                 : (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask) 
                                     & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lb) 
                                        | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lbu)))
                                     ? (QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data))))
                                     : ((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask) 
                                          >> 1U) & 
                                         ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lb) 
                                          | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lbu)))
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data 
                                                                       >> 8U)))))
                                         : ((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask) 
                                              >> 2U) 
                                             & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lb) 
                                                | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lbu)))
                                             ? (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data 
                                                                           >> 0x10U)))))
                                             : ((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask) 
                                                  >> 3U) 
                                                 & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lb) 
                                                    | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lbu)))
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data 
                                                                               >> 0x18U)))))
                                                 : 
                                                ((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask) 
                                                   >> 4U) 
                                                  & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lb) 
                                                     | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lbu)))
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data 
                                                                                >> 0x20U)))))
                                                  : 
                                                 ((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask) 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lb) 
                                                      | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lbu)))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data 
                                                                                >> 0x28U)))))
                                                   : 
                                                  ((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask) 
                                                     >> 6U) 
                                                    & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lb) 
                                                       | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lbu)))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data 
                                                                                >> 0x30U)))))
                                                    : 
                                                   ((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask) 
                                                      >> 7U) 
                                                     & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lb) 
                                                        | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lbu)))
                                                     ? (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data 
                                                                                >> 0x38U)))))
                                                     : 0ULL)))))))))))))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_addw_result 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22040127_top__DOT__exe__DOT__addw_result 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__addw_result)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sllw 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_sllw 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_sllw)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sra 
        = (((- (QData)((IData)((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U] 
                                >> 0x1fU)))) & (~ (0xffffffffffffffffULL 
                                                   >> 
                                                   (0x3fU 
                                                    & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))) 
           | vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_srl);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_srlw 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_srlw 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_srlw)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sraw 
        = (((- (QData)((IData)((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U] 
                                >> 0x1fU)))) & (0xffffffff00000000ULL 
                                                | (QData)((IData)(
                                                                  (~ 
                                                                   (0xffffffffU 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))))))) 
           | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_srlw)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xfffffffffffffff8ULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | (IData)((IData)((((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                               << 2U) | (((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xffffffffffffffc7ULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((5U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((4U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 3U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xfffffffffffffe3fULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((8U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((7U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 6U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xfffffffffffff1ffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((0xbU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((0xaU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (9U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 9U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xffffffffffff8fffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((0xeU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((0xdU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (0xcU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 0xcU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xfffffffffffc7fffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((0x11U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((0x10U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (0xfU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 0xfU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xffffffffffe3ffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((0x14U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((0x13U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (0x12U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 0x12U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xffffffffff1fffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((0x17U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((0x16U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (0x15U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 0x15U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xfffffffff8ffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((0x1aU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((0x19U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (0x18U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 0x18U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xffffffffc7ffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((0x1dU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((0x1cU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (0x1bU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 0x1bU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xfffffffe3fffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((0x20U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((0x1fU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (0x1eU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 0x1eU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xfffffff1ffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((0x23U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((0x22U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (0x21U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 0x21U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xffffff8fffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((0x26U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((0x25U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (0x24U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 0x24U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xfffffc7fffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((0x29U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((0x28U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (0x27U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 0x27U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xffffe3ffffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((0x2cU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((0x2bU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (0x2aU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 0x2aU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xffff1fffffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((0x2fU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((0x2eU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (0x2dU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 0x2dU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xfff8ffffffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((0x32U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((0x31U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (0x30U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 0x30U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xffc7ffffffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((0x35U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((0x34U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (0x33U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 0x33U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xfe3fffffffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((0x38U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((0x37U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (0x36U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 0x36U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0xf1ffffffffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((0x3bU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((0x3aU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (0x39U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 0x39U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0x8fffffffffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((((0x3eU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                << 2U) | (((0x3dU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)) 
                                           << 1U) | 
                                          (0x3cU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))))) 
              << 0x3cU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
        = ((0x7fffffffffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op) 
           | ((QData)((IData)((0x3fU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in)))) 
              << 0x3fU));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                         >> 0x20U))) 
                       == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                             >> 0x20U))) == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                            >> 0x20U))) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                >> 0x20U))) == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                            >> 0x20U))) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                >> 0x20U))) == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                            >> 0x20U))) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                >> 0x20U))) == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                            >> 0x20U))) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                >> 0x20U))) == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                            >> 0x20U))) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                >> 0x20U))) == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                            >> 0x20U))) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                >> 0x20U))) == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                            >> 0x20U))) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                >> 0x20U))) == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                            >> 0x20U))) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                >> 0x20U))) == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                            >> 0x20U))) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                >> 0x20U))) == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                            >> 0x20U))) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                >> 0x20U))) == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                            >> 0x20U))) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                >> 0x20U))) == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                            >> 0x20U))) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                >> 0x20U))) == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit)
            ? (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out)
            : 0U);
    vlSelf->ysyx_22040127_top__DOT__wb_csrwdata = (
                                                   (((((((- (QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                                                                >> 9U))))) 
                                                         & vlSelf->ysyx_22040127_top__DOT__wb_csrrdata) 
                                                        & (~ 
                                                           (((QData)((IData)(
                                                                             vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U])) 
                                                             << 0x2cU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[4U])) 
                                                                << 0xcU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U])) 
                                                                  >> 0x14U))))) 
                                                       | (((- (QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                                                                >> 6U))))) 
                                                           & vlSelf->ysyx_22040127_top__DOT__wb_csrrdata) 
                                                          & (~ (QData)((IData)(
                                                                               (0x1fU 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                                                                >> 0xfU))))))) 
                                                      | ((- (QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                                                                >> 0xaU))))) 
                                                         & (vlSelf->ysyx_22040127_top__DOT__wb_csrrdata 
                                                            | (((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U])) 
                                                                << 0x2cU) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[4U])) 
                                                                   << 0xcU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U])) 
                                                                     >> 0x14U)))))) 
                                                     | ((- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                                                               >> 7U))))) 
                                                        & (vlSelf->ysyx_22040127_top__DOT__wb_csrrdata 
                                                           | (QData)((IData)(
                                                                             (0x1fU 
                                                                              & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                                                                >> 0xfU))))))) 
                                                    | ((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                                                              >> 0xbU))))) 
                                                       & (((QData)((IData)(
                                                                           vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U])) 
                                                           << 0x2cU) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[4U])) 
                                                              << 0xcU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U])) 
                                                                >> 0x14U))))) 
                                                   | ((- (QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                                                             >> 8U))))) 
                                                      & (QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                                                            >> 0xfU))))));
    vlSelf->ysyx_22040127_top__DOT__wb_reg_wdata = 
        ((0x4000U & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U])
          ? vlSelf->ysyx_22040127_top__DOT__wb_csrrdata
          : (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[1U])) 
              << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0U]))));
    vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_done 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_hs) 
           & (IData)(vlSelf->axi_r_last_i));
    vlSelf->ysyx_22040127_top__DOT__mem_final_rdata 
        = ((0xffffffffffffff00ULL & vlSelf->ysyx_22040127_top__DOT__mem_final_rdata) 
           | (IData)((IData)((0xffU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata)))));
    vlSelf->ysyx_22040127_top__DOT__mem_final_rdata 
        = ((0xffffffffULL & vlSelf->ysyx_22040127_top__DOT__mem_final_rdata) 
           | ((QData)((IData)((((((- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lb))) 
                                  & (- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                                           >> 7U)))))) 
                                 | ((- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lh))) 
                                    & (- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                                             >> 0xfU))))))) 
                                | ((- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lw))) 
                                   & (- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                                            >> 0x1fU))))))) 
                               | ((- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ld))) 
                                  & (IData)((vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                             >> 0x20U)))))) 
              << 0x20U));
    vlSelf->ysyx_22040127_top__DOT__mem_final_rdata 
        = ((0xffffffff0000ffffULL & vlSelf->ysyx_22040127_top__DOT__mem_final_rdata) 
           | ((QData)((IData)((0xffffU & ((((- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lb))) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                                                     >> 7U)))))) 
                                           | ((- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lh))) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                                                       >> 0xfU))))))) 
                                          | ((- (IData)(
                                                        (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lw) 
                                                          | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lwu)) 
                                                         | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ld)))) 
                                             & (IData)(
                                                       (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                                        >> 0x10U))))))) 
              << 0x10U));
    vlSelf->ysyx_22040127_top__DOT__mem_final_rdata 
        = ((0xffffffffffff00ffULL & vlSelf->ysyx_22040127_top__DOT__mem_final_rdata) 
           | ((QData)((IData)((0xffU & ((((- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lb))) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                                                   >> 7U)))))) 
                                         | ((- (IData)(
                                                       ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lh) 
                                                        | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lhu)))) 
                                            & (IData)(
                                                      (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                                       >> 8U)))) 
                                        | ((- (IData)(
                                                      (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lw) 
                                                        | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lwu)) 
                                                       | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ld)))) 
                                           & (IData)(
                                                     (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                                      >> 8U))))))) 
              << 8U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_calc_result 
        = (((((((((((((((- (QData)((IData)((1U & ((
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                   >> 0x13U) 
                                                  | (3U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                         >> 0x1bU)))))))) 
                        & ((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                           + (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))))) 
                       | ((- (QData)((IData)((1U & 
                                              (vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
                                               >> 0x10U))))) 
                          & ((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                             + (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))))) 
                      | ((- (QData)((IData)((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
                                                   >> 0x17U))))) 
                         & ((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                            & (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))))) 
                     | ((- (QData)((IData)((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
                                                  >> 0x16U))))) 
                        & ((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                           | (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))))) 
                    | ((- (QData)((IData)((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
                                                 >> 0x14U))))) 
                       & ((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                          ^ (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))))) 
                   | ((- (QData)((IData)((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
                                                >> 0x12U))))) 
                      & (VL_LTS_IQQ(64, (((QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))), 
                                    (((QData)((IData)(
                                                      vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))))
                          ? 1ULL : 0ULL))) | ((- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
                                                                     >> 0x13U))))) 
                                              & (((((QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                                  < 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))))
                                                  ? 1ULL
                                                  : 0ULL))) 
                 | ((- (QData)((IData)((1U & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
                                               >> 0x15U) 
                                              & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                 >> 0x1eU)))))) 
                    & vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sra)) 
                | ((- (QData)((IData)((1U & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
                                              >> 0x15U) 
                                             & (~ (
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                   >> 0x1eU))))))) 
                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_srl)) 
               | ((- (QData)((IData)((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
                                            >> 0x11U))))) 
                  & vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sll)) 
              | ((- (QData)((IData)((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
                                           >> 0x18U))))) 
                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_addw_result)) 
             | ((- (QData)((IData)((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
                                          >> 0x19U))))) 
                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sllw)) 
            | ((- (QData)((IData)((1U & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
                                          >> 0x1dU) 
                                         & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                            >> 0x1eU)))))) 
               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sraw)) 
           | ((- (QData)((IData)((1U & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op 
                                         >> 0x1dU) 
                                        & (~ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                              >> 0x1eU))))))) 
              & vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_srlw));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_sign 
        = (IData)((0ULL != (0x33000000ULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op)));
    if ((0ULL != (0xaa000000ULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op))) {
        vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber4 
            = (((QData)((IData)((- (IData)(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U] 
                                             >> 0x1fU) 
                                            & (0ULL 
                                               != (0x22000000ULL 
                                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])));
        vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber3 
            = (((QData)((IData)((- (IData)(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U] 
                                             >> 0x1fU) 
                                            & (0ULL 
                                               != (0x22000000ULL 
                                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])));
    } else {
        vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber4 
            = (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])));
        vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber3 
            = (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])));
    }
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_type 
        = (((~ (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_ok)) 
            & (8U == (0xeU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U]))) 
           & (IData)((0ULL != (0x570000ULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_type 
        = (((~ (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_ready)) 
            & (8U == (0xeU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U]))) 
           & (IData)((0ULL != (0xff000000ULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_calc_result 
        = (((((((((((((((((((((((((((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op))))) 
                                      & ((((QData)((IData)(
                                                           vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                         + (((QData)((IData)(
                                                             vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))))) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                                       >> 0x10U)))))) 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U]))))) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                                      >> 0x12U)))))) 
                                       & (((QData)((IData)(
                                                           vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[2U]))))) 
                                   | ((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                                     >> 0x16U)))))) 
                                      & (((QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[2U]))))) 
                                  | ((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                                    >> 0x14U)))))) 
                                     & (((QData)((IData)(
                                                         vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[2U]))))) 
                                 | ((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                                   >> 0x20U)))))) 
                                    & ((((QData)((IData)(
                                                         vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                       - (((QData)((IData)(
                                                           vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))))) 
                                | ((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                                  >> 2U)))))) 
                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sll)) 
                               | ((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                                 >> 4U)))))) 
                                  & (VL_LTS_IQQ(64, 
                                                (((QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))), 
                                                (((QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))))
                                      ? 1ULL : 0ULL))) 
                              | ((- (QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                                >> 6U)))))) 
                                 & (((((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                     < (((QData)((IData)(
                                                         vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))))
                                     ? 1ULL : 0ULL))) 
                             | ((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                               >> 0xeU)))))) 
                                & ((((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                   & (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))))) 
                            | ((- (QData)((IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                              >> 8U)))))) 
                               & ((((QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                  ^ (((QData)((IData)(
                                                      vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))))) 
                           | ((- (QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                             >> 0xcU)))))) 
                              & ((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                 | (((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))))) 
                          | ((- (QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                            >> 0x18U)))))) 
                             & (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U]))))) 
                         | ((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                           >> 0x1aU)))))) 
                            & (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U]))))) 
                        | ((- (QData)((IData)((1U & (IData)(
                                                            (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                             >> 0x1eU)))))) 
                           & (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[4U])) 
                               << 0x3fU) | (((QData)((IData)(
                                                             vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U])) 
                                             << 0x1fU) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U])) 
                                               >> 1U))))) 
                       | ((- (QData)((IData)((1U & (IData)(
                                                           (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                            >> 0x1cU)))))) 
                          & (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[4U])) 
                              << 0x3fU) | (((QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U])) 
                                              >> 1U))))) 
                      | ((- (QData)((IData)((1U & (IData)(
                                                          (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                           >> 1U)))))) 
                         & vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_addw_result)) 
                     | ((- (QData)((IData)((1U & (IData)(
                                                         (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                          >> 0x21U)))))) 
                        & (((QData)((IData)((- (IData)(
                                                       (vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result))))) 
                    | ((- (QData)((IData)((1U & (IData)(
                                                        (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                         >> 0x11U)))))) 
                       & (((QData)((IData)((- (IData)(
                                                      (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U] 
                                                       >> 0x1fU))))) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U]))))) 
                   | ((- (QData)((IData)((1U & (IData)(
                                                       (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                        >> 0xaU)))))) 
                      & vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_srl)) 
                  | ((- (QData)((IData)((1U & (IData)(
                                                      (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                       >> 3U)))))) 
                     & vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sllw)) 
                 | ((- (QData)((IData)((1U & (IData)(
                                                     (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                      >> 0xbU)))))) 
                    & vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_srlw)) 
                | ((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                     >> 0x2aU)))))) 
                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sra)) 
               | ((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                    >> 0x2bU)))))) 
                  & vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sraw)) 
              | ((- (QData)((IData)((1U & (IData)((vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                   >> 0x19U)))))) 
                 & (((QData)((IData)((- (IData)((vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U] 
                                                 >> 0x1fU))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U]))))) 
             | ((- (QData)((IData)((1U & (IData)((vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                  >> 0x1bU)))))) 
                & (((QData)((IData)((- (IData)((vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U] 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U]))))) 
            | ((- (QData)((IData)((1U & (IData)((vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                 >> 0x1dU)))))) 
               & (((QData)((IData)((- (IData)((1U & 
                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U]))))) 
                   << 0x20U) | (QData)((IData)(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                                 << 0x1fU) 
                                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                                   >> 1U))))))) 
           | ((- (QData)((IData)((1U & (IData)((vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op 
                                                >> 0x1fU)))))) 
              & (((QData)((IData)((- (IData)((1U & 
                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U]))))) 
                  << 0x20U) | (QData)((IData)(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                                << 0x1fU) 
                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                                  >> 1U)))))));
    vlSelf->ysyx_22040127_top__DOT__id_mret = (IData)(
                                                      ((0x3020000000000000ULL 
                                                        == 
                                                        (0xffffff8000000000ULL 
                                                         & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                       & (6U 
                                                          == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))));
    vlSelf->ysyx_22040127_top__DOT__id_ecall = ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                        >> 0x27U)))))) 
                                                & (6U 
                                                   == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm 
        = ((4U & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))
            ? ((2U & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))
                ? ((1U & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))
                    ? 0ULL : (((- (QData)((IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                              >> 0x3fU)))))) 
                               << 0xcU) | (QData)((IData)(
                                                          (0xfffU 
                                                           & (IData)(
                                                                     (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                      >> 0x34U)))))))
                : ((1U & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))
                    ? (((- (QData)((IData)((1U & (IData)(
                                                         (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                          >> 0x3fU)))))) 
                        << 0xdU) | (QData)((IData)(
                                                   ((0x1000U 
                                                     & ((IData)(
                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                 >> 0x3fU)) 
                                                        << 0xcU)) 
                                                    | ((0x800U 
                                                        & ((IData)(
                                                                   (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                    >> 0x27U)) 
                                                           << 0xbU)) 
                                                       | ((0x7e0U 
                                                           & ((IData)(
                                                                      (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                       >> 0x39U)) 
                                                              << 5U)) 
                                                          | (0x1eU 
                                                             & ((IData)(
                                                                        (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                         >> 0x28U)) 
                                                                << 1U))))))))
                    : 0ULL)) : ((2U & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))
                                 ? ((1U & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))
                                     ? (((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                        >> 0x3fU)))))) 
                                         << 0x15U) 
                                        | (QData)((IData)(
                                                          ((0x100000U 
                                                            & ((IData)(
                                                                       (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                        >> 0x3fU)) 
                                                               << 0x14U)) 
                                                           | ((0xff000U 
                                                               & ((IData)(
                                                                          (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                           >> 0x2cU)) 
                                                                  << 0xcU)) 
                                                              | ((0x800U 
                                                                  & ((IData)(
                                                                             (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                              >> 0x34U)) 
                                                                     << 0xbU)) 
                                                                 | (0x7feU 
                                                                    & ((IData)(
                                                                               (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x35U)) 
                                                                       << 1U))))))))
                                     : (((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                        >> 0x3fU)))))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x39U)) 
                                                                         << 5U)) 
                                                                     | (0x1fU 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x27U))))))))
                                 : ((1U & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x3fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(
                                                                   (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                    >> 0x2cU)) 
                                                           << 0xcU))))
                                     : (((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                        >> 0x3fU)))))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x34U)))))))));
    __Vtemp_hcef49998__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                             >> 0x15U)))) 
                                         << 0x2fU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                >> 0x14U)))) 
                                            << 0x2eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                   >> 0x13U)))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                      >> 0x12U)))) 
                                                  << 0x2cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                         >> 0x11U)))) 
                                                     << 0x2bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                            >> 0x10U)))) 
                                                        << 0x2aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                               >> 0xfU)))) 
                                                           << 0x29U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                                >> 0xeU)))) 
                                                              << 0x28U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                                >> 0xdU)))) 
                                                                 << 0x27U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                                >> 0xcU)))) 
                                                                    << 0x26U) 
                                                                   | (((QData)((IData)(
                                                                                ((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                                << 0x15U) 
                                                                                | (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                                >> 0xbU)))) 
                                                                       << 6U) 
                                                                      | (QData)((IData)(
                                                                                ((0x20U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                                >> 2U)) 
                                                                                | (0x1fU 
                                                                                & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U]))))))))))))))));
    __Vtemp_hcef49998__0[1U] = (((IData)((((QData)((IData)(
                                                           vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U])) 
                                           << 0x26U) 
                                          | (((QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[6U])) 
                                              << 6U) 
                                             | ((QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U])) 
                                                >> 0x1aU)))) 
                                 << 0x14U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                            >> 0x15U)))) 
                                                        << 0x2fU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                               >> 0x14U)))) 
                                                           << 0x2eU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                                >> 0x13U)))) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                                >> 0x12U)))) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                                >> 0x11U)))) 
                                                                    << 0x2bU) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                                >> 0x10U)))) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                                >> 0xfU)))) 
                                                                          << 0x29U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                                >> 0xeU)))) 
                                                                             << 0x28U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                                >> 0xdU)))) 
                                                                                << 0x27U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                                >> 0xcU)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                                                << 0x15U) 
                                                                                | (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                                >> 0xbU)))) 
                                                                                << 6U) 
                                                                                | (QData)((IData)(
                                                                                ((0x20U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                                >> 2U)) 
                                                                                | (0x1fU 
                                                                                & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U]))))))))))))))) 
                                                      >> 0x20U)));
    vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[0U] 
        = (IData)(((0x20U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])
                    ? vlSelf->ysyx_22040127_top__DOT__mem_final_rdata
                    : (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])))));
    vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[1U] 
        = (IData)((((0x20U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])
                     ? vlSelf->ysyx_22040127_top__DOT__mem_final_rdata
                     : (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])))) 
                   >> 0x20U));
    vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U] 
        = __Vtemp_hcef49998__0[0U];
    vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[3U] 
        = __Vtemp_hcef49998__0[1U];
    vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[4U] 
        = (((IData)((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U])) 
                      << 0x26U) | (((QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[6U])) 
                                    << 6U) | ((QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U])) 
                                              >> 0x1aU)))) 
            >> 0xcU) | ((IData)(((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U])) 
                                   << 0x26U) | (((QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[6U])) 
                                                 << 6U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U])) 
                                                   >> 0x1aU))) 
                                 >> 0x20U)) << 0x14U));
    vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[5U] 
        = ((0xfff00000U & ((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                            << 0x1aU) | (0x3f00000U 
                                         & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U] 
                                            >> 6U)))) 
           | ((IData)(((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U])) 
                         << 0x26U) | (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[6U])) 
                                       << 6U) | ((QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U])) 
                                                 >> 0x1aU))) 
                       >> 0x20U)) >> 0xcU));
    vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[6U] 
        = (IData)(vlSelf->ysyx_22040127_top__DOT__mem_diff_addr);
    vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[7U] 
        = (IData)((vlSelf->ysyx_22040127_top__DOT__mem_diff_addr 
                   >> 0x20U));
    vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[8U] 
        = (IData)(vlSelf->ysyx_22040127_top__DOT__mem_diff_data);
    vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[9U] 
        = (IData)((vlSelf->ysyx_22040127_top__DOT__mem_diff_data 
                   >> 0x20U));
    vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[0xaU] 
        = ((0xfffffff0U & ((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[9U] 
                            << 0x1bU) | (0x7fffff0U 
                                         & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                            >> 5U)))) 
           | ((8U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                     >> 5U)) | ((4U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                       >> 5U)) | ((2U 
                                                   & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                        >> 6U))))));
    vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[0xbU] 
        = (0xfU & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[9U] 
                   >> 5U));
    __Vtemp_hb2f2d8ca__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                             >> 9U)))) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(
                                                            ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                              >> 0x1fU) 
                                                             | (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U]))))) 
                                            << 0x2cU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                   >> 6U)))) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                      >> 5U)))) 
                                                  << 0x2aU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                         >> 4U)))) 
                                                     << 0x29U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                            >> 3U)))) 
                                                        << 0x28U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                               >> 2U)))) 
                                                           << 0x27U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                                >> 1U)))) 
                                                              << 0x26U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U]))) 
                                                                 << 0x25U) 
                                                                | (((QData)((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                                >> 0x1fU))) 
                                                                    << 0x24U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U]))) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(
                                                                                ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                                << 1U) 
                                                                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                                >> 0x1fU)))) 
                                                                          << 3U) 
                                                                         | (QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                                >> 0x16U)))))))))))))))));
    __Vtemp_hb2f2d8ca__0[1U] = (((IData)((((QData)((IData)(
                                                           vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])))) 
                                 << 0x12U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                            >> 9U)))) 
                                                        << 0x2dU) 
                                                       | (((QData)((IData)(
                                                                           ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                             >> 0x1fU) 
                                                                            | (0U 
                                                                               != 
                                                                               (0x1fU 
                                                                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U]))))) 
                                                           << 0x2cU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                                >> 6U)))) 
                                                              << 0x2bU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                                >> 5U)))) 
                                                                 << 0x2aU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                                >> 4U)))) 
                                                                    << 0x29U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                                >> 3U)))) 
                                                                       << 0x28U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                                >> 2U)))) 
                                                                          << 0x27U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                                >> 1U)))) 
                                                                             << 0x26U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U]))) 
                                                                                << 0x25U) 
                                                                               | (((QData)((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                                >> 0x1fU))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U]))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                                << 1U) 
                                                                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                                >> 0x1fU)))) 
                                                                                << 3U) 
                                                                                | (QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                                >> 0x16U)))))))))))))))) 
                                                      >> 0x20U)));
    __Vtemp_h47e8ddb0__0[2U] = (IData)(((8U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                         ? ((4U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                             ? 0ULL
                                             : ((2U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                 ? 0ULL
                                                 : vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_calc_result))
                                         : ((4U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                             ? ((2U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                 ? (QData)((IData)(
                                                                   ((IData)(4U) 
                                                                    + 
                                                                    ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                      << 1U) 
                                                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                        >> 0x1fU)))))
                                                 : 
                                                ((((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                                 + 
                                                 (((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))))
                                             : ((2U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                 ? 
                                                ((0x8000000U 
                                                  & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])))
                                                  : 
                                                 ((((QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                                  + (QData)((IData)(
                                                                    ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                      << 1U) 
                                                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                        >> 0x1fU))))))
                                                 : 
                                                ((1U 
                                                  & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                  ? (QData)((IData)(
                                                                    ((IData)(4U) 
                                                                     + 
                                                                     ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                       << 1U) 
                                                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                         >> 0x1fU)))))
                                                  : vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_calc_result)))));
    __Vtemp_h47e8ddb0__0[3U] = (IData)((((8U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                          ? ((4U & 
                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                              ? 0ULL
                                              : ((2U 
                                                  & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                  ? 0ULL
                                                  : vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_calc_result))
                                          : ((4U & 
                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                              ? ((2U 
                                                  & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                  ? (QData)((IData)(
                                                                    ((IData)(4U) 
                                                                     + 
                                                                     ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                       << 1U) 
                                                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                         >> 0x1fU)))))
                                                  : 
                                                 ((((QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))))
                                              : ((2U 
                                                  & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                  ? 
                                                 ((0x8000000U 
                                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])))
                                                   : 
                                                  ((((QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                                   + (QData)((IData)(
                                                                     ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                       << 1U) 
                                                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                         >> 0x1fU))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                   ? (QData)((IData)(
                                                                     ((IData)(4U) 
                                                                      + 
                                                                      ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                        << 1U) 
                                                                       | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                          >> 0x1fU)))))
                                                   : vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_calc_result)))) 
                                        >> 0x20U));
    __Vtemp_h37a0bcf4__0[7U] = ((0xffU & ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                                   >> 0x20U)) 
                                          >> 6U)) | 
                                ((0xfc000000U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                 << 0x13U)) 
                                 | (0x3ffff00U & ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                                           >> 0x20U)) 
                                                  >> 6U))));
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U] 
        = (IData)((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[0U]))));
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[1U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[0U]))) 
                   >> 0x20U));
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
        = __Vtemp_h47e8ddb0__0[2U];
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[3U] 
        = __Vtemp_h47e8ddb0__0[3U];
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
        = ((__Vtemp_hb2f2d8ca__0[0U] << 8U) | ((0x80U 
                                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                   >> 0xeU)) 
                                               | ((0x40U 
                                                   & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                      >> 0xeU)) 
                                                  | ((0x20U 
                                                      & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                         >> 0xeU)) 
                                                     | (0x1fU 
                                                        & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                           >> 0xeU))))));
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[5U] 
        = ((__Vtemp_hb2f2d8ca__0[0U] >> 0x18U) | (__Vtemp_hb2f2d8ca__0[1U] 
                                                  << 8U));
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[6U] 
        = ((__Vtemp_hb2f2d8ca__0[1U] >> 0x18U) | ((0x3ffff00U 
                                                   & ((IData)(
                                                              (((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])))) 
                                                      >> 6U)) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                                              >> 0x20U)) 
                                                     << 0x1aU)));
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[7U] 
        = __Vtemp_h37a0bcf4__0[7U];
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[8U] 
        = (((0x80U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                      >> 0xdU)) | ((0x40U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                             >> 0xdU)) 
                                   | (0x3fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                               >> 0xdU)))) 
           | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
               << 0x13U) | (0x7ff00U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                        >> 0xdU))));
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[9U] 
        = (0xffU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
                    >> 0xdU));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard2 
        = ((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U])) 
             & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U]) 
                == (0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                     >> 0x34U))))) 
            & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U] 
               >> 5U)) & (((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                            << 0x15U) | (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                         >> 0xbU)) 
                          != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard1 
        = ((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U])) 
             & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U]) 
                == (0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                     >> 0x2fU))))) 
            & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U] 
               >> 5U)) & (((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                            << 0x15U) | (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                         >> 0xbU)) 
                          != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)));
    if (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
          >> 0x15U) & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_ok)))) {
        vlSelf->ysyx_22040127_top__DOT__dcache__DOT____Vcellinp__dcache_way1__A 
            = (0x7fU & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_cnt));
        vlSelf->ysyx_22040127_top__DOT__dcache__DOT____Vcellinp__dcache_way2__A 
            = (0x7fU & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_cnt));
    } else {
        vlSelf->ysyx_22040127_top__DOT__dcache__DOT____Vcellinp__dcache_way1__A 
            = (0x7fU & ((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                         << 0x1cU) | (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                      >> 4U)));
        vlSelf->ysyx_22040127_top__DOT__dcache__DOT____Vcellinp__dcache_way2__A 
            = (0x7fU & ((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                         << 0x1cU) | (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                      >> 4U)));
    }
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_wdata 
        = ((0U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                         >> 8U))) ? ((((((((((- (QData)((IData)(
                                                                (8U 
                                                                 == 
                                                                 (0xfU 
                                                                  & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U]))))) 
                                             & ((0xffffffffffffff00ULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__d_mrdata[3U])) 
                                                     << 0x20U) 
                                                    | (0xffffffffffffff00ULL 
                                                       & (QData)((IData)(
                                                                         vlSelf->ysyx_22040127_top__DOT__d_mrdata[2U]))))) 
                                                | (QData)((IData)(
                                                                  (0xffU 
                                                                   & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U]))))) 
                                            | ((- (QData)((IData)(
                                                                  (9U 
                                                                   == 
                                                                   (0xfU 
                                                                    & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U]))))) 
                                               & ((0xffffffffffff0000ULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->ysyx_22040127_top__DOT__d_mrdata[3U])) 
                                                       << 0x20U) 
                                                      | (0xffffffffffff0000ULL 
                                                         & (QData)((IData)(
                                                                           vlSelf->ysyx_22040127_top__DOT__d_mrdata[2U]))))) 
                                                  | (QData)((IData)(
                                                                    ((0xff00U 
                                                                      & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U] 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & vlSelf->ysyx_22040127_top__DOT__d_mrdata[2U]))))))) 
                                           | ((- (QData)((IData)(
                                                                 (0xaU 
                                                                  == 
                                                                  (0xfU 
                                                                   & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U]))))) 
                                              & ((0xffffffffff000000ULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->ysyx_22040127_top__DOT__d_mrdata[3U])) 
                                                      << 0x20U) 
                                                     | (0xffffffffff000000ULL 
                                                        & (QData)((IData)(
                                                                          vlSelf->ysyx_22040127_top__DOT__d_mrdata[2U]))))) 
                                                 | (QData)((IData)(
                                                                   ((0xff0000U 
                                                                     & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U] 
                                                                        << 0x10U)) 
                                                                    | (0xffffU 
                                                                       & vlSelf->ysyx_22040127_top__DOT__d_mrdata[2U]))))))) 
                                          | ((- (QData)((IData)(
                                                                (0xbU 
                                                                 == 
                                                                 (0xfU 
                                                                  & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U]))))) 
                                             & (((QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__d_mrdata[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U] 
                                                                    << 0x18U) 
                                                                   | (0xffffffU 
                                                                      & vlSelf->ysyx_22040127_top__DOT__d_mrdata[2U]))))))) 
                                         | ((- (QData)((IData)(
                                                               (0xcU 
                                                                == 
                                                                (0xfU 
                                                                 & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U]))))) 
                                            & (((QData)((IData)(
                                                                ((0xffffff00U 
                                                                  & vlSelf->ysyx_22040127_top__DOT__d_mrdata[3U]) 
                                                                 | (0xffU 
                                                                    & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U])))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__d_mrdata[2U]))))) 
                                        | ((- (QData)((IData)(
                                                              (0xdU 
                                                               == 
                                                               (0xfU 
                                                                & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U]))))) 
                                           & (((QData)((IData)(
                                                               (vlSelf->ysyx_22040127_top__DOT__d_mrdata[3U] 
                                                                >> 0x10U))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U]))) 
                                                  << 0x28U) 
                                                 | (0xffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->ysyx_22040127_top__DOT__d_mrdata[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->ysyx_22040127_top__DOT__d_mrdata[2U])))))))) 
                                       | ((- (QData)((IData)(
                                                             (0xeU 
                                                              == 
                                                              (0xfU 
                                                               & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U]))))) 
                                          & (((QData)((IData)(
                                                              (vlSelf->ysyx_22040127_top__DOT__d_mrdata[3U] 
                                                               >> 0x18U))) 
                                              << 0x38U) 
                                             | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U]))) 
                                                 << 0x30U) 
                                                | (0xffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->ysyx_22040127_top__DOT__d_mrdata[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->ysyx_22040127_top__DOT__d_mrdata[2U])))))))) 
                                      | ((- (QData)((IData)(
                                                            (0xfU 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U]))))) 
                                         & (((QData)((IData)(
                                                             (0xffU 
                                                              & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U]))) 
                                             << 0x38U) 
                                            | (0xffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__d_mrdata[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__d_mrdata[2U]))))))) 
                                     | (((((((((- (QData)((IData)(
                                                                  (0U 
                                                                   == 
                                                                   (0xfU 
                                                                    & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U]))))) 
                                               & ((0xffffffffffffff00ULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->ysyx_22040127_top__DOT__d_mrdata[1U])) 
                                                       << 0x20U) 
                                                      | (0xffffffffffffff00ULL 
                                                         & (QData)((IData)(
                                                                           vlSelf->ysyx_22040127_top__DOT__d_mrdata[0U]))))) 
                                                  | (QData)((IData)(
                                                                    (0xffU 
                                                                     & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U]))))) 
                                              | ((- (QData)((IData)(
                                                                    (1U 
                                                                     == 
                                                                     (0xfU 
                                                                      & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U]))))) 
                                                 & ((0xffffffffffff0000ULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->ysyx_22040127_top__DOT__d_mrdata[1U])) 
                                                         << 0x20U) 
                                                        | (0xffffffffffff0000ULL 
                                                           & (QData)((IData)(
                                                                             vlSelf->ysyx_22040127_top__DOT__d_mrdata[0U]))))) 
                                                    | (QData)((IData)(
                                                                      ((0xff00U 
                                                                        & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U] 
                                                                           << 8U)) 
                                                                       | (0xffU 
                                                                          & vlSelf->ysyx_22040127_top__DOT__d_mrdata[0U]))))))) 
                                             | ((- (QData)((IData)(
                                                                   (2U 
                                                                    == 
                                                                    (0xfU 
                                                                     & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U]))))) 
                                                & ((0xffffffffff000000ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->ysyx_22040127_top__DOT__d_mrdata[1U])) 
                                                        << 0x20U) 
                                                       | (0xffffffffff000000ULL 
                                                          & (QData)((IData)(
                                                                            vlSelf->ysyx_22040127_top__DOT__d_mrdata[0U]))))) 
                                                   | (QData)((IData)(
                                                                     ((0xff0000U 
                                                                       & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U] 
                                                                          << 0x10U)) 
                                                                      | (0xffffU 
                                                                         & vlSelf->ysyx_22040127_top__DOT__d_mrdata[0U]))))))) 
                                            | ((- (QData)((IData)(
                                                                  (3U 
                                                                   == 
                                                                   (0xfU 
                                                                    & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U]))))) 
                                               & (((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__d_mrdata[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U] 
                                                                      << 0x18U) 
                                                                     | (0xffffffU 
                                                                        & vlSelf->ysyx_22040127_top__DOT__d_mrdata[0U]))))))) 
                                           | ((- (QData)((IData)(
                                                                 (4U 
                                                                  == 
                                                                  (0xfU 
                                                                   & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U]))))) 
                                              & (((QData)((IData)(
                                                                  ((0xffffff00U 
                                                                    & vlSelf->ysyx_22040127_top__DOT__d_mrdata[1U]) 
                                                                   | (0xffU 
                                                                      & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U])))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__d_mrdata[0U]))))) 
                                          | ((- (QData)((IData)(
                                                                (5U 
                                                                 == 
                                                                 (0xfU 
                                                                  & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U]))))) 
                                             & (((QData)((IData)(
                                                                 (vlSelf->ysyx_22040127_top__DOT__d_mrdata[1U] 
                                                                  >> 0x10U))) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    (0xffU 
                                                                     & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U]))) 
                                                    << 0x28U) 
                                                   | (0xffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->ysyx_22040127_top__DOT__d_mrdata[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->ysyx_22040127_top__DOT__d_mrdata[0U])))))))) 
                                         | ((- (QData)((IData)(
                                                               (6U 
                                                                == 
                                                                (0xfU 
                                                                 & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U]))))) 
                                            & (((QData)((IData)(
                                                                (vlSelf->ysyx_22040127_top__DOT__d_mrdata[1U] 
                                                                 >> 0x18U))) 
                                                << 0x38U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U]))) 
                                                   << 0x30U) 
                                                  | (0xffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->ysyx_22040127_top__DOT__d_mrdata[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->ysyx_22040127_top__DOT__d_mrdata[0U])))))))) 
                                        | ((- (QData)((IData)(
                                                              (7U 
                                                               == 
                                                               (0xfU 
                                                                & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U]))))) 
                                           & (((QData)((IData)(
                                                               (0xffU 
                                                                & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U]))) 
                                               << 0x38U) 
                                              | (0xffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__d_mrdata[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ysyx_22040127_top__DOT__d_mrdata[0U]))))))))
            : ((1U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                             >> 8U))) ? ((((((- (QData)((IData)(
                                                                (4U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                     >> 1U)))))) 
                                             & ((0xffffffffffff0000ULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__d_mrdata[3U])) 
                                                     << 0x20U) 
                                                    | (0xffffffffffff0000ULL 
                                                       & (QData)((IData)(
                                                                         vlSelf->ysyx_22040127_top__DOT__d_mrdata[2U]))))) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U]))))) 
                                            | ((- (QData)((IData)(
                                                                  (5U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                       >> 1U)))))) 
                                               & (((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__d_mrdata[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U] 
                                                                      << 0x10U) 
                                                                     | (0xffffU 
                                                                        & vlSelf->ysyx_22040127_top__DOT__d_mrdata[2U]))))))) 
                                           | ((- (QData)((IData)(
                                                                 (6U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                      >> 1U)))))) 
                                              & (((QData)((IData)(
                                                                  ((0xffff0000U 
                                                                    & vlSelf->ysyx_22040127_top__DOT__d_mrdata[3U]) 
                                                                   | (0xffffU 
                                                                      & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U])))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__d_mrdata[2U]))))) 
                                          | ((- (QData)((IData)(
                                                                (7U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                     >> 1U)))))) 
                                             & (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U]))) 
                                                 << 0x30U) 
                                                | (0xffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->ysyx_22040127_top__DOT__d_mrdata[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->ysyx_22040127_top__DOT__d_mrdata[2U]))))))) 
                                         | (((((- (QData)((IData)(
                                                                  (0U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                       >> 1U)))))) 
                                               & ((0xffffffffffff0000ULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->ysyx_22040127_top__DOT__d_mrdata[1U])) 
                                                       << 0x20U) 
                                                      | (0xffffffffffff0000ULL 
                                                         & (QData)((IData)(
                                                                           vlSelf->ysyx_22040127_top__DOT__d_mrdata[0U]))))) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U]))))) 
                                              | ((- (QData)((IData)(
                                                                    (1U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                         >> 1U)))))) 
                                                 & (((QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__d_mrdata[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U] 
                                                                        << 0x10U) 
                                                                       | (0xffffU 
                                                                          & vlSelf->ysyx_22040127_top__DOT__d_mrdata[0U]))))))) 
                                             | ((- (QData)((IData)(
                                                                   (2U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                        >> 1U)))))) 
                                                & (((QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->ysyx_22040127_top__DOT__d_mrdata[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U])))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__d_mrdata[0U]))))) 
                                            | ((- (QData)((IData)(
                                                                  (3U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                                       >> 1U)))))) 
                                               & (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U]))) 
                                                   << 0x30U) 
                                                  | (0xffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->ysyx_22040127_top__DOT__d_mrdata[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->ysyx_22040127_top__DOT__d_mrdata[0U]))))))))
                : ((2U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                 >> 8U))) ? ((2U == 
                                              (3U & 
                                               (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                >> 2U)))
                                              ? (((QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__d_mrdata[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U])))
                                              : ((3U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                      >> 2U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__d_mrdata[2U])))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                       >> 2U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__d_mrdata[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U])))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__d_mrdata[0U]))))))
                    : (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U]))))));
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
        = ((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U])) 
             & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U]) 
                == (0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                     >> 0x34U))))) 
            & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
               >> 7U)) & (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                            << 1U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                      >> 0x1fU)) != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard1 
        = ((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U])) 
             & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U]) 
                == (0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                     >> 0x2fU))))) 
            & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
               >> 7U)) & (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                            << 1U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                      >> 0x1fU)) != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)));
    vlSelf->ysyx_22040127_top__DOT____Vcellinp__dcache__input_valid 
        = (IData)((0U != (0x60U & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U])));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2_tmp) 
           | ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard2) 
              & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                 >> 5U)));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1_tmp) 
           | ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard1) 
              & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                 >> 5U)));
    __Vtemp_h464333de__0[0U] = (IData)((((((- (QData)((IData)(
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
                                                                 vlSelf->ysyx_22040127_top__DOT__d_mrdata[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__d_mrdata[0U]))))) 
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
                                                               vlSelf->ysyx_22040127_top__DOT__d_mrdata[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__d_mrdata[0U]))))));
    __Vtemp_h464333de__0[1U] = (IData)(((((((- (QData)((IData)(
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
                                                                  vlSelf->ysyx_22040127_top__DOT__d_mrdata[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__d_mrdata[0U]))))) 
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
                                                                vlSelf->ysyx_22040127_top__DOT__d_mrdata[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__d_mrdata[0U]))))) 
                                        >> 0x20U));
    __Vtemp_h464333de__0[2U] = (IData)((((((- (QData)((IData)(
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
                                                                vlSelf->ysyx_22040127_top__DOT__d_mrdata[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__d_mrdata[2U]))))) 
                                        | ((- (QData)((IData)(
                                                              ((4U 
                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                               & (~ 
                                                                  (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                                   >> 6U)))))) 
                                           & (((QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__d_mrdata[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__d_mrdata[2U]))))));
    __Vtemp_h464333de__0[3U] = (IData)(((((((- (QData)((IData)(
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
                                                                 vlSelf->ysyx_22040127_top__DOT__d_mrdata[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__d_mrdata[2U]))))) 
                                         | ((- (QData)((IData)(
                                                               ((4U 
                                                                 == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                                                & (~ 
                                                                   (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                                                    >> 6U)))))) 
                                            & (((QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__d_mrdata[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__d_mrdata[2U]))))) 
                                        >> 0x20U));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wdata[0U] 
        = __Vtemp_h464333de__0[0U];
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wdata[1U] 
        = __Vtemp_h464333de__0[1U];
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wdata[2U] 
        = __Vtemp_h464333de__0[2U];
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wdata[3U] 
        = __Vtemp_h464333de__0[3U];
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
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard2 
        = (((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard2) 
            & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
               >> 5U)) & (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                            << 1U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                      >> 0x1fU)) != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)));
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
                    : (((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                          & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                             == (0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                  >> 0x34U))))) 
                         & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                            >> 5U)) & (vlSelf->wb_pc 
                                       != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)))
                        ? vlSelf->ysyx_22040127_top__DOT__wb_reg_wdata
                        : vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
                       [(0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                          >> 0x34U)))]))));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard1 
        = (((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard1) 
            & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
               >> 5U)) & (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                            << 1U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                      >> 0x1fU)) != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)));
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
                    : (((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                          & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                             == (0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                  >> 0x2fU))))) 
                         & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                            >> 5U)) & (vlSelf->wb_pc 
                                       != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)))
                        ? vlSelf->ysyx_22040127_top__DOT__wb_reg_wdata
                        : vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
                       [(0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                          >> 0x2fU)))]))));
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
    vlSelf->ysyx_22040127_top__DOT__ex_mmio = ((0xaU 
                                                == 
                                                (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                                 >> 0x1cU)) 
                                               & (IData)(vlSelf->ysyx_22040127_top__DOT____Vcellinp__dcache__input_valid));
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
    vlSelf->ysyx_22040127_top__DOT__load_branch = (
                                                   ((((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard1) 
                                                      | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard2)) 
                                                     | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1)) 
                                                    | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2)) 
                                                   & (((5U 
                                                        == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                                       | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr)) 
                                                      | (3U 
                                                         == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_ready_go 
        = (1U & (~ ((((((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard1) 
                        | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard2)) 
                       | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1)) 
                      | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2)) 
                     | (((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[5U] 
                          >> 0x14U) & (0U != (0x1fU 
                                              & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U]))) 
                        & (((0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U]) 
                            == (0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                 >> 0x2fU)))) 
                           | ((0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U]) 
                              == (0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                   >> 0x34U))))))) 
                    | (((vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[3U] 
                         >> 0xeU) & (0U != (0x1fU & 
                                            vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U]))) 
                       & (((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U]) 
                           == (0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                >> 0x2fU)))) 
                          | ((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U]) 
                             == (0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                  >> 0x34U)))))))));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1 
        = (((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
            | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
            ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
            : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken 
        = ((5U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
           & (((((((~ (IData)((0U != (7U & (IData)(
                                                   (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                    >> 0x2cU)))))) 
                   & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final 
                      == vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final)) 
                  | (((~ (IData)((0U != (3U & (IData)(
                                                      (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                       >> 0x2dU)))))) 
                      & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                 >> 0x2cU))) & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final 
                                                != vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final))) 
                 | (IData)(((0x400000000000ULL == (0x700000000000ULL 
                                                   & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                            & VL_LTS_IQQ(64, vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final, vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final)))) 
                | (IData)(((0x600000000000ULL == (0x700000000000ULL 
                                                  & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                           & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final 
                              < vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final)))) 
               | (IData)(((0x500000000000ULL == (0x700000000000ULL 
                                                 & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                          & VL_GTES_IQQ(64, vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final, vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final)))) 
              | (IData)(((0x700000000000ULL == (0x700000000000ULL 
                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                         & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final 
                            >= vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final)))));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit 
        = (((((((vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0tags
                 [(0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                            >> 4U))] == (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                         >> 0xbU)) 
                & vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0V
                [(0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                           >> 4U))]) & (IData)(vlSelf->ysyx_22040127_top__DOT____Vcellinp__dcache__input_valid)) 
              & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__ex_mmio))) 
             & (~ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
                   >> 0x15U))) | ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_ok) 
                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
                                     >> 0x15U))) | 
           ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mmio_ok) 
            & (IData)(vlSelf->ysyx_22040127_top__DOT__ex_mmio)));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit 
        = (((((((vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1tags
                 [(0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                            >> 4U))] == (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                         >> 0xbU)) 
                & vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1V
                [(0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                           >> 4U))]) & (IData)(vlSelf->ysyx_22040127_top__DOT____Vcellinp__dcache__input_valid)) 
              & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__ex_mmio))) 
             & (~ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
                   >> 0x15U))) | ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_ok) 
                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
                                     >> 0x15U))) | 
           ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mmio_ok) 
            & (IData)(vlSelf->ysyx_22040127_top__DOT__ex_mmio)));
    vlSelf->ysyx_22040127_top__DOT__id_to_ex_valid 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_ready_go) 
           & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_valid));
    vlSelf->ysyx_22040127_top__DOT__id_branch_result 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr_stuck_reg)
            ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__stuck_jalr_result
            : ((((- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken))) 
                 & ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg) 
                    + (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm))) 
                | (0xfffffffeU & ((- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr))) 
                                  & ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final) 
                                     + (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                >> 0x3fU))))) 
                                         << 0xcU) | 
                                        (0xfffU & (IData)(
                                                          (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                           >> 0x34U)))))))) 
               | ((- (IData)((3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))) 
                  & ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg) 
                     + (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1)))));
    vlSelf->ysyx_22040127_top__DOT__id_branch_taken 
        = (((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken) 
            | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr)) 
           | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)));
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
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_strb[0U] 
        = (IData)((((- (QData)((IData)((((~ (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                                            | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit))) 
                                        & ((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                           | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))))))) 
                    & vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_strb) 
                   | (- (QData)((IData)(((IData)(vlSelf->ysyx_22040127_top__DOT__d_res_valid) 
                                         & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))))))));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_strb[1U] 
        = (IData)(((((- (QData)((IData)((((~ (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                                             | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit))) 
                                         & ((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                            | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))))))) 
                     & vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_strb) 
                    | (- (QData)((IData)(((IData)(vlSelf->ysyx_22040127_top__DOT__d_res_valid) 
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
                   | (- (QData)((IData)(((IData)(vlSelf->ysyx_22040127_top__DOT__d_res_valid) 
                                         & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))))))));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_strb[3U] 
        = (IData)(((((- (QData)((IData)((((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                           >> 3U) & 
                                          ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                                           | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit))) 
                                         & ((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                            | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))))))) 
                     & vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_strb) 
                    | (- (QData)((IData)(((IData)(vlSelf->ysyx_22040127_top__DOT__d_res_valid) 
                                          & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))))))) 
                   >> 0x20U));
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
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_stuck 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_ok) 
           & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__id_to_ex_valid)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_stuck 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_ready) 
           & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__id_to_ex_valid)));
    vlSelf->ysyx_22040127_top__DOT__if_to_id_bus = 
        (((QData)((IData)(((1U & ((((((0U != (0x60U 
                                              & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])) 
                                      | (IData)(vlSelf->ysyx_22040127_top__DOT__id_ecall)) 
                                     | (IData)(vlSelf->ysyx_22040127_top__DOT__id_mret)) 
                                    | (0U != (0x3000U 
                                              & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U]))) 
                                   | (IData)(vlSelf->ysyx_22040127_top__DOT__if_timer_int_tmp)) 
                                  | ((IData)(vlSelf->ysyx_22040127_top__DOT__id_branch_taken) 
                                     & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__if_timer_blocked)))))
                            ? 0U : vlSelf->ysyx_22040127_top__DOT__if_instruction))) 
          << 0x20U) | (QData)((IData)(vlSelf->if_pc)));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way0 
        = ((((((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
               & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                  >> 6U)) & (0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))) 
             | ((((~ (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way0)) 
                  & (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))) 
                 & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit)) 
                & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                   >> 6U))) | (((IData)(vlSelf->ysyx_22040127_top__DOT__d_res_valid) 
                                & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))) 
                               & (~ ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0dirty) 
                                     & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0valid))))) 
           & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__ex_mmio)));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way1 
        = ((((((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit) 
               & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                  >> 6U)) & (0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))) 
             | ((((~ (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way1)) 
                  & (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))) 
                 & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit)) 
                & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                   >> 6U))) | ((((IData)(vlSelf->ysyx_22040127_top__DOT__d_res_valid) 
                                 & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state))) 
                                & (~ ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1dirty) 
                                      & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1valid)))) 
                               & ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0dirty) 
                                  & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0valid)))) 
           & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__ex_mmio)));
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way0) 
           | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way1));
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
        = (1U & ((((IData)((0U == (0x180000U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U]))) 
                   & (~ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
                         >> 0x15U))) | (((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                         & (((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                                             | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit)) 
                                            | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_ok))) 
                                        | ((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                           & (((~ (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw)) 
                                               & ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                                                  | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit))) 
                                              | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_ok))))) 
                 | (IData)((0U != (0x100060U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])))));
    vlSelf->ysyx_22040127_top__DOT__ex_ready_go = (
                                                   ((((~ (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_type)) 
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
    vlSelf->ysyx_22040127_top__DOT__next_pc = ((IData)(vlSelf->ysyx_22040127_top__DOT__on_hold)
                                                ? vlSelf->ysyx_22040127_top__DOT__next_pc_reg
                                                : (
                                                   (1U 
                                                    & ((vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                                        >> 0xdU) 
                                                       | (IData)(vlSelf->ysyx_22040127_top__DOT__mret_stuck)))
                                                    ? (IData)(vlSelf->mepc)
                                                    : 
                                                   ((1U 
                                                     & (((vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                                          >> 0xcU) 
                                                         | (IData)(vlSelf->ysyx_22040127_top__DOT__ecall_stuck)) 
                                                        | (IData)(vlSelf->ysyx_22040127_top__DOT__timer_blocked)))
                                                     ? (IData)(vlSelf->mtvec)
                                                     : 
                                                    ((((IData)(vlSelf->ysyx_22040127_top__DOT__id_branch_taken) 
                                                       & (IData)(vlSelf->ysyx_22040127_top__DOT__id_allowin)) 
                                                      & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__if_timer_blocked)))
                                                      ? vlSelf->ysyx_22040127_top__DOT__id_branch_result
                                                      : 
                                                     ((((IData)(vlSelf->ysyx_22040127_top__DOT__id_branch_taken) 
                                                        & (IData)(vlSelf->ysyx_22040127_top__DOT__id_allowin)) 
                                                       & (IData)(vlSelf->ysyx_22040127_top__DOT__if_timer_blocked))
                                                       ? (IData)(vlSelf->mtvec)
                                                       : 
                                                      (((IData)(vlSelf->ysyx_22040127_top__DOT__preif_valid) 
                                                        & (IData)(vlSelf->ysyx_22040127_top__DOT__preif_ready_go_reg))
                                                        ? 
                                                       ((IData)(4U) 
                                                        + vlSelf->if_pc)
                                                        : vlSelf->ysyx_22040127_top__DOT__next_pc_reg))))));
    vlSelf->ysyx_22040127_top__DOT__if_allowin = (1U 
                                                  & ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__if_valid)) 
                                                     | (IData)(vlSelf->ysyx_22040127_top__DOT__id_allowin)));
    vlSelf->ysyx_22040127_top__DOT__icache_valid = 
        ((((IData)(vlSelf->ysyx_22040127_top__DOT__preif_valid) 
           & (IData)(vlSelf->ysyx_22040127_top__DOT__if_allowin)) 
          & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__if_instruction_blocked))) 
         & ((((IData)(((0U == (0x60U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])) 
                       & (~ (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                             >> 0x12U)))) & (~ (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[3U] 
                                                >> 0xdU))) 
             | (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                >> 0xcU)) | (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                             >> 0xdU)));
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
        = (((5U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)) 
            & (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state))) 
           & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0valid)));
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wen_way1 
        = ((((5U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)) 
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

void Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__wb__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

VL_ATTR_COLD void Vysyx_22040127_top___024root___initial__TOP__1(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___initial__TOP__1\n"); );
    // Body
    Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__wb__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf);
}

VL_ATTR_COLD void Vysyx_22040127_top___024root___eval_initial(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___eval_initial\n"); );
    // Body
    Vysyx_22040127_top___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vysyx_22040127_top___024root___initial__TOP__1(vlSelf);
}

VL_ATTR_COLD void Vysyx_22040127_top___024root___eval_settle(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___eval_settle\n"); );
    // Body
    Vysyx_22040127_top___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vysyx_22040127_top___024root___final(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___final\n"); );
}

VL_ATTR_COLD void Vysyx_22040127_top___024root___ctor_var_reset(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->if_pc = 0;
    vlSelf->wb_valid = 0;
    vlSelf->wb_pc = 0;
    vlSelf->mepc = 0;
    vlSelf->mtvec = 0;
    vlSelf->mstatus = 0;
    vlSelf->mcause = 0;
    vlSelf->mie = 0;
    vlSelf->mip = 0;
    vlSelf->mscratch = 0;
    vlSelf->mtval = 0;
    vlSelf->wb_memwrite = 0;
    vlSelf->wb_instruction = 0;
    vlSelf->cmt_skip = 0;
    vlSelf->wb_diff_addr = 0;
    vlSelf->wb_diff_data = 0;
    vlSelf->axi_aw_ready_i = 0;
    vlSelf->axi_aw_valid_o = 0;
    vlSelf->axi_aw_addr_o = 0;
    vlSelf->axi_aw_prot_o = 0;
    vlSelf->axi_aw_id_o = 0;
    vlSelf->axi_aw_user_o = 0;
    vlSelf->axi_aw_len_o = 0;
    vlSelf->axi_aw_size_o = 0;
    vlSelf->axi_aw_burst_o = 0;
    vlSelf->axi_aw_lock_o = 0;
    vlSelf->axi_aw_cache_o = 0;
    vlSelf->axi_aw_qos_o = 0;
    vlSelf->axi_aw_region_o = 0;
    vlSelf->axi_w_ready_i = 0;
    vlSelf->axi_w_valid_o = 0;
    vlSelf->axi_w_data_o = 0;
    vlSelf->axi_w_strb_o = 0;
    vlSelf->axi_w_last_o = 0;
    vlSelf->axi_w_user_o = 0;
    vlSelf->axi_b_ready_o = 0;
    vlSelf->axi_b_valid_i = 0;
    vlSelf->axi_b_resp_i = 0;
    vlSelf->axi_b_id_i = 0;
    vlSelf->axi_b_user_i = 0;
    vlSelf->axi_ar_ready_i = 0;
    vlSelf->axi_ar_valid_o = 0;
    vlSelf->axi_ar_addr_o = 0;
    vlSelf->axi_ar_prot_o = 0;
    vlSelf->axi_ar_id_o = 0;
    vlSelf->axi_ar_user_o = 0;
    vlSelf->axi_ar_len_o = 0;
    vlSelf->axi_ar_size_o = 0;
    vlSelf->axi_ar_burst_o = 0;
    vlSelf->axi_ar_lock_o = 0;
    vlSelf->axi_ar_cache_o = 0;
    vlSelf->axi_ar_qos_o = 0;
    vlSelf->axi_ar_region_o = 0;
    vlSelf->axi_r_ready_o = 0;
    vlSelf->axi_r_valid_i = 0;
    vlSelf->axi_r_resp_i = 0;
    vlSelf->axi_r_data_i = 0;
    vlSelf->axi_r_last_i = 0;
    vlSelf->axi_r_id_i = 0;
    vlSelf->axi_r_user_i = 0;
    vlSelf->ysyx_22040127_top__DOT__mhartid = 0;
    vlSelf->ysyx_22040127_top__DOT__if_pcdata = 0;
    vlSelf->ysyx_22040127_top__DOT__if_valid = 0;
    vlSelf->ysyx_22040127_top__DOT__if_instruction = 0;
    vlSelf->ysyx_22040127_top__DOT__if_allowin = 0;
    vlSelf->ysyx_22040127_top__DOT__reg_wdata = 0;
    vlSelf->ysyx_22040127_top__DOT__id_branch_result = 0;
    vlSelf->ysyx_22040127_top__DOT__id_branch_taken = 0;
    vlSelf->ysyx_22040127_top__DOT__id_jalr = 0;
    vlSelf->ysyx_22040127_top__DOT__id_flush = 0;
    vlSelf->ysyx_22040127_top__DOT__id_allowin = 0;
    vlSelf->ysyx_22040127_top__DOT__id_to_ex_valid = 0;
    vlSelf->ysyx_22040127_top__DOT__id_ecall = 0;
    vlSelf->ysyx_22040127_top__DOT__id_mret = 0;
    vlSelf->ysyx_22040127_top__DOT__load_branch = 0;
    vlSelf->ysyx_22040127_top__DOT__ex_wmask = 0;
    vlSelf->ysyx_22040127_top__DOT__ex_flush = 0;
    vlSelf->ysyx_22040127_top__DOT__ex_allowin = 0;
    vlSelf->ysyx_22040127_top__DOT__ex_ready_go = 0;
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_valid = 0;
    vlSelf->ysyx_22040127_top__DOT__ex_mmio = 0;
    vlSelf->ysyx_22040127_top__DOT__ecallmret_on = 0;
    vlSelf->ysyx_22040127_top__DOT__mem_flush = 0;
    vlSelf->ysyx_22040127_top__DOT__mem_final_rdata = 0;
    vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data = 0;
    vlSelf->ysyx_22040127_top__DOT__mem_diff_addr = 0;
    vlSelf->ysyx_22040127_top__DOT__mem_diff_data = 0;
    vlSelf->ysyx_22040127_top__DOT__if_to_id_bus = 0;
    VL_ZERO_RESET_W(296, vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus);
    VL_ZERO_RESET_W(356, vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus);
    vlSelf->ysyx_22040127_top__DOT__d_req_addr = 0;
    vlSelf->ysyx_22040127_top__DOT__d_req_strb = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__d_req_data);
    vlSelf->ysyx_22040127_top__DOT__d_req_wen = 0;
    vlSelf->ysyx_22040127_top__DOT__d_req_valid = 0;
    vlSelf->ysyx_22040127_top__DOT__d_res_valid = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__d_mrdata);
    vlSelf->ysyx_22040127_top__DOT__i_req_addr = 0;
    vlSelf->ysyx_22040127_top__DOT__i_req_valid = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__i_mrdata);
    vlSelf->ysyx_22040127_top__DOT__wb_reg_wdata = 0;
    vlSelf->ysyx_22040127_top__DOT__wb_csrwdata = 0;
    vlSelf->ysyx_22040127_top__DOT__wb_csrrdata = 0;
    vlSelf->ysyx_22040127_top__DOT__ecall_stuck = 0;
    vlSelf->ysyx_22040127_top__DOT__mret_stuck = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache_state = 0;
    vlSelf->ysyx_22040127_top__DOT__icache_state = 0;
    vlSelf->ysyx_22040127_top__DOT__next_pc = 0;
    vlSelf->ysyx_22040127_top__DOT__icache_valid = 0;
    vlSelf->ysyx_22040127_top__DOT__preif_valid = 0;
    vlSelf->ysyx_22040127_top__DOT__preif_ready_go_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__preif_ready_go = 0;
    vlSelf->ysyx_22040127_top__DOT__preif_allowin = 0;
    vlSelf->ysyx_22040127_top__DOT__icache_data = 0;
    vlSelf->ysyx_22040127_top__DOT__timer_blocked = 0;
    vlSelf->ysyx_22040127_top__DOT__if_timer_blocked = 0;
    vlSelf->ysyx_22040127_top__DOT__if_timer_int_tmp = 0;
    vlSelf->ysyx_22040127_top__DOT__on_hold = 0;
    vlSelf->ysyx_22040127_top__DOT__next_pc_reg = 0;
    vlSelf->ysyx_22040127_top__DOT____Vcellinp__dcache__input_valid = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__rf[__Vi0] = 0;
    }
    vlSelf->ysyx_22040127_top__DOT__if_instruction_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__if_instruction_blocked = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[__Vi0] = 0;
    }
    vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_valid = 0;
    vlSelf->ysyx_22040127_top__DOT__axi__DOT__mmio_rdone = 0;
    vlSelf->ysyx_22040127_top__DOT__axi__DOT__mmio_wdone = 0;
    vlSelf->ysyx_22040127_top__DOT__axi__DOT__ar_hs = 0;
    vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_hs = 0;
    vlSelf->ysyx_22040127_top__DOT__axi__DOT__b_hs = 0;
    vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_hs = 0;
    vlSelf->ysyx_22040127_top__DOT__axi__DOT__is_mmio = 0;
    vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_done = 0;
    vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state = 0;
    vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state = 0;
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__input_offset_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__mem_addr = 0;
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__mem_wen = 0;
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__mem_strb = 0;
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0V[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1V[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0tags[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1tags[__Vi0] = 0;
    }
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_index_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wen_way0 = 0;
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wen_way1 = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_strb);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wdata);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1);
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit = 0;
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit = 0;
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0valid = 0;
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1valid = 0;
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__ex_cache_wdata = 0;
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cnt = 0;
    vlSelf->ysyx_22040127_top__DOT__icache__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__icache__DOT__dcache_way1__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__icache__DOT__dcache_way2__DOT__ram[__Vi0]);
    }
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_size_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_offset_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mmio_ok = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mem_addr = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mem_wen = 0;
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0D[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1D[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0V[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1V[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0tags[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1tags[__Vi0] = 0;
    }
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_index_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_offset_reg = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_strb);
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way0 = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way1 = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wdata);
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_miss = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_cnt = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_ok = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way0_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way1_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_strb = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1);
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0dirty = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1dirty = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0valid = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1valid = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_wdata = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way0 = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way1 = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mmio_mem = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mmio_rdata_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0fencev = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0fenced = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1fencev = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1fenced = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cnt = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT____Vcellinp__dcache_way1__A = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT____Vcellinp__dcache_way2__A = 0;
    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__dcache__DOT__dcache_way1__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__dcache__DOT__dcache_way2__DOT__ram[__Vi0]);
    }
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1 = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard1 = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard2 = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard1 = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard2 = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard1 = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard2 = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1_tmp = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2_tmp = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1 = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2 = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard1_tmp = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard2_tmp = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_ready_go = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_valid = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_timer_int_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr_stuck = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr_stuck_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__stuck_jalr_result = 0;
    for (int __Vi0=0; __Vi0<13; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<13; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<13; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_calc_result = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_calc_result = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__addw_result = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_addw_result = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_sllw = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_srlw = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sraw = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sllw = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_srlw = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_type = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_type = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_sign = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_ok = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__ex_valid = 0;
    VL_ZERO_RESET_W(310, vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_ready = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_state = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__cache_readygo = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_stuck = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_stuck = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sra = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_srl = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sll = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber4 = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber3 = 0;
    VL_ZERO_RESET_W(65, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__x_ext);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__cnt = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier);
    VL_ZERO_RESET_W(67, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__mul_state = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__z);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__cnt = 0;
    VL_ZERO_RESET_W(129, vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__divisor = 0;
    VL_ZERO_RESET_W(65, vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__subres);
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__lb = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__lh = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__lw = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__ld = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__lbu = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__lhu = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__lwu = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__sh = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__sw = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__sd = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_wdata = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_valid = 0;
    VL_ZERO_RESET_W(297, vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg);
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_size = 0;
    vlSelf->ysyx_22040127_top__DOT__wb__DOT__csr_mcycle = 0;
    vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpp = 0;
    vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpie = 0;
    vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mie = 0;
    vlSelf->ysyx_22040127_top__DOT__wb__DOT__wb_flush = 0;
    VL_ZERO_RESET_W(356, vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
