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
}

void Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &doubly_aligned_data);
void Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__mem__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_ATTR_COLD void Vysyx_22040127_top___024root___settle__TOP__0(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___settle__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h53331440__0;
    VlWide<3>/*95:0*/ __Vtemp_h5be3c6c5__0;
    VlWide<3>/*95:0*/ __Vtemp_hbd32b5bd__0;
    VlWide<4>/*127:0*/ __Vtemp_h28336d48__0;
    VlWide<4>/*127:0*/ __Vtemp_h77003df2__0;
    VlWide<4>/*127:0*/ __Vtemp_hbd5c61bb__0;
    VlWide<4>/*127:0*/ __Vtemp_hf097aa9b__0;
    VlWide<4>/*127:0*/ __Vtemp_hadc38120__0;
    VlWide<4>/*127:0*/ __Vtemp_h7f22d6d6__0;
    VlWide<4>/*127:0*/ __Vtemp_h567b2546__0;
    VlWide<4>/*127:0*/ __Vtemp_h529565f2__0;
    VlWide<4>/*127:0*/ __Vtemp_h8558cf9b__0;
    VlWide<4>/*127:0*/ __Vtemp_h1ca2dba6__0;
    VlWide<4>/*127:0*/ __Vtemp_hdb7a6280__0;
    VlWide<4>/*127:0*/ __Vtemp_h381dcfdd__0;
    VlWide<4>/*127:0*/ __Vtemp_h047588fa__0;
    VlWide<4>/*127:0*/ __Vtemp_h56023c0b__0;
    VlWide<4>/*127:0*/ __Vtemp_hf3c81a8e__0;
    VlWide<4>/*127:0*/ __Vtemp_h10f7b382__0;
    VlWide<4>/*127:0*/ __Vtemp_h568686b8__0;
    VlWide<4>/*127:0*/ __Vtemp_h9ef9c0e2__0;
    VlWide<4>/*127:0*/ __Vtemp_hc17aaf95__0;
    VlWide<4>/*127:0*/ __Vtemp_h2b662476__0;
    VlWide<4>/*127:0*/ __Vtemp_hf22689e2__0;
    VlWide<4>/*127:0*/ __Vtemp_h135b2a40__0;
    VlWide<4>/*127:0*/ __Vtemp_h04322473__0;
    VlWide<4>/*127:0*/ __Vtemp_h9b7a1b1b__0;
    VlWide<4>/*127:0*/ __Vtemp_h319630cf__0;
    VlWide<4>/*127:0*/ __Vtemp_h5a48aef3__0;
    VlWide<4>/*127:0*/ __Vtemp_h93e17113__0;
    VlWide<4>/*127:0*/ __Vtemp_h71d2c1b2__0;
    VlWide<4>/*127:0*/ __Vtemp_h92a5e062__0;
    VlWide<4>/*127:0*/ __Vtemp_h02d88ba1__0;
    VlWide<4>/*127:0*/ __Vtemp_h17db7681__0;
    VlWide<4>/*127:0*/ __Vtemp_h02d88ba1__1;
    VlWide<4>/*127:0*/ __Vtemp_hae07de05__0;
    VlWide<4>/*127:0*/ __Vtemp_h02d88ba1__2;
    VlWide<4>/*127:0*/ __Vtemp_hf351dc3d__0;
    VlWide<4>/*127:0*/ __Vtemp_h1cb6cc72__0;
    VlWide<4>/*127:0*/ __Vtemp_ha56a360c__0;
    VlWide<4>/*127:0*/ __Vtemp_hb4671bef__0;
    VlWide<4>/*127:0*/ __Vtemp_h1d16a762__0;
    VlWide<4>/*127:0*/ __Vtemp_he2978c3e__0;
    VlWide<4>/*127:0*/ __Vtemp_h1f409a06__0;
    VlWide<4>/*127:0*/ __Vtemp_he96a18d8__0;
    VlWide<4>/*127:0*/ __Vtemp_h1f409a06__1;
    VlWide<4>/*127:0*/ __Vtemp_hcf17f604__0;
    VlWide<4>/*127:0*/ __Vtemp_h1f409a06__2;
    VlWide<4>/*127:0*/ __Vtemp_he78ee9ec__0;
    VlWide<4>/*127:0*/ __Vtemp_h1515b6a6__0;
    VlWide<4>/*127:0*/ __Vtemp_hd3fea8a1__0;
    VlWide<4>/*127:0*/ __Vtemp_hf91934b5__0;
    VlWide<4>/*127:0*/ __Vtemp_he527fb2f__0;
    VlWide<4>/*127:0*/ __Vtemp_h5a241080__0;
    VlWide<4>/*127:0*/ __Vtemp_h2e2480e7__0;
    VlWide<4>/*127:0*/ __Vtemp_h5a241080__1;
    VlWide<4>/*127:0*/ __Vtemp_hb3856489__0;
    VlWide<4>/*127:0*/ __Vtemp_h5a241080__2;
    VlWide<4>/*127:0*/ __Vtemp_h6fd1215c__0;
    // Body
    vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[0U] = 0ULL;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[0U] = 0x31dU;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[1U] = 0x11aU;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[2U] = 0x39eU;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[3U] = 0x19cU;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[4U] = 0x1dcU;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[5U] = 0x37bU;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[6U] = 0x338U;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[7U] = 0x18U;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[8U] = 0x98U;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[9U] = 0xd8U;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[0xaU] = 0x1b9U;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[0xbU] = 0xb9U;
    __Vtemp_h53331440__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U];
    __Vtemp_h53331440__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U];
    __Vtemp_h53331440__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[4U];
    VL_EXTEND_WQ(65,64, __Vtemp_h5be3c6c5__0, vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__divisor);
    VL_SUB_W(3, __Vtemp_hbd32b5bd__0, __Vtemp_h53331440__0, __Vtemp_h5be3c6c5__0);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__subres[0U] 
        = __Vtemp_hbd32b5bd__0[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__subres[1U] 
        = __Vtemp_hbd32b5bd__0[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__subres[2U] 
        = (1U & __Vtemp_hbd32b5bd__0[2U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b0____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b0____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b0____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b0____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[1U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b1____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[1U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b1____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[1U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b1____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[1U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b1____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[2U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b2____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[2U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b2____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[2U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b2____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[2U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b2____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[3U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b3____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[3U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b3____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[3U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b3____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[3U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b3____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[4U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b4____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[4U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b4____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[4U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b4____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[4U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b4____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[5U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b5____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[5U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b5____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[5U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b5____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[5U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b5____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[6U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b6____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[6U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b6____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[6U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b6____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[6U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b6____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[7U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b7____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[7U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b7____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[7U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b7____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[7U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b7____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[8U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b8____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[8U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b8____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[8U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b8____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[8U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b8____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[9U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b9____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[9U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b9____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[9U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b9____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[9U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b9____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xaU][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b10____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xaU][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b10____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xaU][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b10____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xaU][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b10____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xbU][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b11____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xbU][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b11____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xbU][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b11____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xbU][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b11____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xcU][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b12____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xcU][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b12____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xcU][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b12____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xcU][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b12____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xdU][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b13____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xdU][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b13____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xdU][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b13____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xdU][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b13____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xeU][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b14____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xeU][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b14____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xeU][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b14____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xeU][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b14____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xfU][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b15____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xfU][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b15____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xfU][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b15____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0xfU][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b15____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x10U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b16____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x10U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b16____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x10U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b16____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x10U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b16____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x11U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b17____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x11U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b17____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x11U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b17____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x11U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b17____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x12U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b18____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x12U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b18____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x12U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b18____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x12U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b18____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x13U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b19____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x13U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b19____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x13U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b19____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x13U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b19____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x14U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b20____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x14U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b20____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x14U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b20____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x14U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b20____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x15U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b21____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x15U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b21____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x15U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b21____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x15U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b21____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x16U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b22____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x16U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b22____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x16U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b22____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x16U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b22____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x17U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b23____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x17U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b23____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x17U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b23____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x17U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b23____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x18U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b24____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x18U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b24____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x18U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b24____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x18U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b24____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x19U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b25____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x19U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b25____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x19U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b25____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x19U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b25____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1aU][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b26____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1aU][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b26____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1aU][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b26____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1aU][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b26____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1bU][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b27____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1bU][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b27____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1bU][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b27____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1bU][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b27____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1cU][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b28____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1cU][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b28____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1cU][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b28____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1cU][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b28____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1dU][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b29____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1dU][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b29____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1dU][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b29____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1dU][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b29____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1eU][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b30____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1eU][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b30____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1eU][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b30____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1eU][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b30____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1fU][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b31____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1fU][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b31____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1fU][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b31____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x1fU][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b31____pinNumber5[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x20U][0U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b32____pinNumber5[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x20U][1U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b32____pinNumber5[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x20U][2U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b32____pinNumber5[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[0x20U][3U] 
        = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b32____pinNumber5[3U];
    vlSelf->mstatus = ((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpp)) 
                         << 0xbU) | ((QData)((IData)(
                                                     ((IData)(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpie) 
                                                      << 3U))) 
                                     << 4U)) | (QData)((IData)(
                                                               ((IData)(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mie) 
                                                                << 3U))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask 
        = ((0xf8U & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask)) 
           | (((2U == (7U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])) 
               << 2U) | (((1U == (7U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])) 
                          << 1U) | (0U == (7U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask 
        = ((0xc7U & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask)) 
           | (((5U == (7U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])) 
               << 5U) | (((4U == (7U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])) 
                          << 4U) | ((3U == (7U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])) 
                                    << 3U))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask 
        = ((0x3fU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask)) 
           | (((7U == (7U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])) 
               << 7U) | ((6U == (7U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])) 
                         << 6U)));
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
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
        = (IData)((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))) 
                   >> 0x20U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[2U] 
        = ((0x800000U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
            ? 0U : (7U & (- (IData)((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U] 
                                     >> 0x1fU)))));
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
        = ((0x1fU >= (0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))
            ? (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U] 
               << (0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))
            : 0U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_srl 
        = ((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
             << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
           >> (0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_srlw 
        = ((0x1fU >= (0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))
            ? (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U] 
               >> (0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))
            : 0U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in 
        = ((0x30U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                     >> 0x19U)) | ((0xeU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                            >> 0x15U)) 
                                   | (1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                            >> 0x19U))));
    if ((0x80000000U <= vlSelf->if_pc)) {
        Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__pmem_read_TOP((QData)((IData)(vlSelf->if_pc)), vlSelf->__Vtask_ysyx_22040127_top__DOT__pmem_read__0__doubly_aligned_data);
        vlSelf->ysyx_22040127_top__DOT__if_pcdata = vlSelf->__Vtask_ysyx_22040127_top__DOT__pmem_read__0__doubly_aligned_data;
    } else {
        Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__pmem_read_TOP(0x80000000ULL, vlSelf->__Vtask_ysyx_22040127_top__DOT__pmem_read__1__doubly_aligned_data);
        vlSelf->ysyx_22040127_top__DOT__if_pcdata = vlSelf->__Vtask_ysyx_22040127_top__DOT__pmem_read__1__doubly_aligned_data;
    }
    vlSelf->wb_pc = ((vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                      << 0x1aU) | (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                   >> 6U));
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
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[0U][0U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
            [0U][0U] ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                        [1U][0U] << 2U)) ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                            [2U][0U] 
                                            << 4U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[0U][1U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
            [0U][1U] ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                         [1U][0U] >> 0x1eU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                               [1U][1U] 
                                               << 2U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [2U][0U] >> 0x1cU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [2U][1U] << 4U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[0U][2U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
            [0U][2U] ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                         [1U][1U] >> 0x1eU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                               [1U][2U] 
                                               << 2U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [2U][1U] >> 0x1cU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [2U][2U] << 4U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[0U][3U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
            [0U][3U] ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                         [1U][2U] >> 0x1eU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                               [1U][3U] 
                                               << 2U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [2U][2U] >> 0x1cU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [2U][3U] << 4U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[1U][0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
             [3U][0U] << 6U) ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [4U][0U] << 8U)) ^ 
           (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
            [5U][0U] << 0xaU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[1U][1U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [3U][0U] >> 0x1aU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [3U][1U] << 6U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [4U][0U] >> 0x18U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [4U][1U] << 8U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [5U][0U] >> 0x16U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [5U][1U] << 0xaU)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[1U][2U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [3U][1U] >> 0x1aU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [3U][2U] << 6U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [4U][1U] >> 0x18U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [4U][2U] << 8U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [5U][1U] >> 0x16U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [5U][2U] << 0xaU)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[1U][3U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [3U][2U] >> 0x1aU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [3U][3U] << 6U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [4U][2U] >> 0x18U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [4U][3U] << 8U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [5U][2U] >> 0x16U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [5U][3U] << 0xaU)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[2U][0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
             [6U][0U] << 0xcU) ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [7U][0U] << 0xeU)) 
           ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [8U][0U] << 0x10U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[2U][1U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [6U][0U] >> 0x14U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [6U][1U] << 0xcU)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [7U][0U] >> 0x12U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [7U][1U] << 0xeU))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [8U][0U] >> 0x10U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [8U][1U] << 0x10U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[2U][2U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [6U][1U] >> 0x14U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [6U][2U] << 0xcU)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [7U][1U] >> 0x12U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [7U][2U] << 0xeU))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [8U][1U] >> 0x10U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [8U][2U] << 0x10U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[2U][3U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [6U][2U] >> 0x14U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [6U][3U] << 0xcU)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [7U][2U] >> 0x12U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [7U][3U] << 0xeU))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [8U][2U] >> 0x10U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [8U][3U] << 0x10U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[3U][0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
             [9U][0U] << 0x12U) ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xaU][0U] << 0x14U)) 
           ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0xbU][0U] << 0x16U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[3U][1U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [9U][0U] >> 0xeU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][1U] << 0x12U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [0xaU][0U] >> 0xcU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][1U] << 0x14U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [0xbU][0U] >> 0xaU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xbU][1U] << 0x16U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[3U][2U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [9U][1U] >> 0xeU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][2U] << 0x12U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [0xaU][1U] >> 0xcU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][2U] << 0x14U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [0xbU][1U] >> 0xaU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xbU][2U] << 0x16U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[3U][3U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [9U][2U] >> 0xeU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][3U] << 0x12U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [0xaU][2U] >> 0xcU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][3U] << 0x14U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [0xbU][2U] >> 0xaU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xbU][3U] << 0x16U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[4U][0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
             [0xcU][0U] << 0x18U) ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][0U] << 0x1aU)) 
           ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0xeU][0U] << 0x1cU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[4U][1U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0xcU][0U] >> 8U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][1U] << 0x18U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [0xdU][0U] >> 6U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][1U] << 0x1aU))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [0xeU][0U] >> 4U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xeU][1U] << 0x1cU)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[4U][2U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0xcU][1U] >> 8U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][2U] << 0x18U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [0xdU][1U] >> 6U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][2U] << 0x1aU))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [0xeU][1U] >> 4U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xeU][2U] << 0x1cU)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[4U][3U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0xcU][2U] >> 8U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][3U] << 0x18U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [0xdU][2U] >> 6U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][3U] << 0x1aU))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [0xeU][2U] >> 4U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xeU][3U] << 0x1cU)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[5U][0U] 
        = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
           [0xfU][0U] << 0x1eU);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[5U][1U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0xfU][0U] >> 2U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xfU][1U] << 0x1eU)) 
            ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
            [0x10U][0U]) ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                            [0x11U][0U] << 2U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[5U][2U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0xfU][1U] >> 2U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xfU][2U] << 0x1eU)) 
            ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
            [0x10U][1U]) ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                             [0x11U][0U] >> 0x1eU) 
                            | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                               [0x11U][1U] << 2U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[5U][3U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0xfU][2U] >> 2U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xfU][3U] << 0x1eU)) 
            ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
            [0x10U][2U]) ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                             [0x11U][1U] >> 0x1eU) 
                            | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                               [0x11U][2U] << 2U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[6U][0U] = 0U;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[6U][1U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
             [0x12U][0U] << 4U) ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x13U][0U] << 6U)) 
           ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x14U][0U] << 8U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[6U][2U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x12U][0U] >> 0x1cU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x12U][1U] 
                                       << 4U)) ^ ((
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                   [0x13U][0U] 
                                                   >> 0x1aU) 
                                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                     [0x13U][1U] 
                                                     << 6U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [0x14U][0U] >> 0x18U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [0x14U][1U] 
                                        << 8U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[6U][3U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x12U][1U] >> 0x1cU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x12U][2U] 
                                       << 4U)) ^ ((
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                   [0x13U][1U] 
                                                   >> 0x1aU) 
                                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                     [0x13U][2U] 
                                                     << 6U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [0x14U][1U] >> 0x18U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [0x14U][2U] 
                                        << 8U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[7U][0U] = 0U;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[7U][1U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
             [0x15U][0U] << 0xaU) ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x16U][0U] << 0xcU)) 
           ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x17U][0U] << 0xeU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[7U][2U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x15U][0U] >> 0x16U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x15U][1U] 
                                       << 0xaU)) ^ 
            ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x16U][0U] >> 0x14U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x16U][1U] 
                                       << 0xcU))) ^ 
           ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
             [0x17U][0U] >> 0x12U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x17U][1U] << 0xeU)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[7U][3U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x15U][1U] >> 0x16U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x15U][2U] 
                                       << 0xaU)) ^ 
            ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x16U][1U] >> 0x14U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x16U][2U] 
                                       << 0xcU))) ^ 
           ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
             [0x17U][1U] >> 0x12U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x17U][2U] << 0xeU)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[8U][0U] = 0U;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[8U][1U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
             [0x18U][0U] << 0x10U) ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x19U][0U] << 0x12U)) 
           ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x1aU][0U] << 0x14U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[8U][2U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x18U][0U] >> 0x10U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x18U][1U] 
                                       << 0x10U)) ^ 
            ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x19U][0U] >> 0xeU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x19U][1U] << 0x12U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [0x1aU][0U] >> 0xcU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1aU][1U] 
                                       << 0x14U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[8U][3U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x18U][1U] >> 0x10U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x18U][2U] 
                                       << 0x10U)) ^ 
            ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x19U][1U] >> 0xeU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x19U][2U] << 0x12U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [0x1aU][1U] >> 0xcU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1aU][2U] 
                                       << 0x14U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[9U][0U] = 0U;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[9U][1U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
             [0x1bU][0U] << 0x16U) ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x1cU][0U] << 0x18U)) 
           ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x1dU][0U] << 0x1aU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[9U][2U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x1bU][0U] >> 0xaU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x1bU][1U] << 0x16U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [0x1cU][0U] >> 8U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x1cU][1U] << 0x18U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [0x1dU][0U] >> 6U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1dU][1U] << 0x1aU)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[9U][3U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x1bU][1U] >> 0xaU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x1bU][2U] << 0x16U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [0x1cU][1U] >> 8U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x1cU][2U] << 0x18U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [0x1dU][1U] >> 6U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1dU][2U] << 0x1aU)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[0xaU][0U] = 0U;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[0xaU][1U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
            [0x1eU][0U] << 0x1cU) ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1fU][0U] << 0x1eU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[0xaU][2U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x1eU][0U] >> 4U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x1eU][1U] << 0x1cU)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [0x1fU][0U] >> 2U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x1fU][1U] << 0x1eU))) 
           ^ (IData)((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x20U][1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                   [0x20U][0U])))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[0xaU][3U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x1eU][1U] >> 4U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x1eU][2U] << 0x1cU)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [0x1fU][1U] >> 2U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x1fU][2U] << 0x1eU))) 
           ^ (IData)(((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [0x20U][1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                    [0x20U][0U]))) 
                      >> 0x20U)));
    __Vtemp_h28336d48__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0U][1U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                               [1U][0U] 
                                               >> 0x1eU) 
                                              | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                 [1U][1U] 
                                                 << 2U))) 
                                 | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [1U][0U] >> 0x1eU) 
                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [1U][1U] << 2U)) 
                                    & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [2U][0U] >> 0x1cU) 
                                       | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                          [2U][1U] 
                                          << 4U)))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0U][1U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                [2U][0U] 
                                                >> 0x1cU) 
                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                  [2U][1U] 
                                                  << 4U))));
    __Vtemp_h28336d48__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0U][2U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                               [1U][1U] 
                                               >> 0x1eU) 
                                              | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                 [1U][2U] 
                                                 << 2U))) 
                                 | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [1U][1U] >> 0x1eU) 
                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [1U][2U] << 2U)) 
                                    & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [2U][1U] >> 0x1cU) 
                                       | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                          [2U][2U] 
                                          << 4U)))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0U][2U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                [2U][1U] 
                                                >> 0x1cU) 
                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                  [2U][2U] 
                                                  << 4U))));
    __Vtemp_h28336d48__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0U][3U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                               [1U][2U] 
                                               >> 0x1eU) 
                                              | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                 [1U][3U] 
                                                 << 2U))) 
                                 | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [1U][2U] >> 0x1eU) 
                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [1U][3U] << 2U)) 
                                    & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [2U][2U] >> 0x1cU) 
                                       | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                          [2U][3U] 
                                          << 4U)))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0U][3U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                [2U][2U] 
                                                >> 0x1cU) 
                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                  [2U][3U] 
                                                  << 4U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[0U][0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
             [0U][0U] & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                         [1U][0U] << 2U)) | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                              [1U][0U] 
                                              << 2U) 
                                             & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                [2U][0U] 
                                                << 4U))) 
           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0U][0U] & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                          [2U][0U] << 4U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[0U][1U] 
        = __Vtemp_h28336d48__0[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[0U][2U] 
        = __Vtemp_h28336d48__0[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[0U][3U] 
        = __Vtemp_h28336d48__0[3U];
    __Vtemp_h77003df2__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][0U] >> 0x1aU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [3U][1U] << 6U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][0U] >> 0x18U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [4U][1U] << 8U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][0U] >> 0x18U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [4U][1U] << 8U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [5U][0U] >> 0x16U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [5U][1U] << 0xaU))));
    __Vtemp_h77003df2__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][1U] >> 0x1aU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [3U][2U] << 6U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][1U] >> 0x18U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [4U][2U] << 8U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][1U] >> 0x18U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [4U][2U] << 8U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [5U][1U] >> 0x16U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [5U][2U] << 0xaU))));
    __Vtemp_h77003df2__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][2U] >> 0x1aU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [3U][3U] << 6U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][2U] >> 0x18U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [4U][3U] << 8U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][2U] >> 0x18U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [4U][3U] << 8U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [5U][2U] >> 0x16U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [5U][3U] << 0xaU))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[1U][0U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [3U][0U] << 6U) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [4U][0U] << 8U)) | 
            ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [4U][0U] << 8U) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [5U][0U] << 0xaU))) 
           | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [3U][0U] << 6U) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [5U][0U] << 0xaU)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[1U][1U] 
        = (__Vtemp_h77003df2__0[1U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [3U][0U] >> 0x1aU) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [3U][1U] 
                                           << 6U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [5U][0U] 
                                           >> 0x16U) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                             [5U][1U] 
                                             << 0xaU))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[1U][2U] 
        = (__Vtemp_h77003df2__0[2U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [3U][1U] >> 0x1aU) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [3U][2U] 
                                           << 6U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [5U][1U] 
                                           >> 0x16U) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                             [5U][2U] 
                                             << 0xaU))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[1U][3U] 
        = (__Vtemp_h77003df2__0[3U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [3U][2U] >> 0x1aU) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [3U][3U] 
                                           << 6U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [5U][2U] 
                                           >> 0x16U) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                             [5U][3U] 
                                             << 0xaU))));
    __Vtemp_hbd5c61bb__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][0U] >> 0x14U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [6U][1U] << 0xcU)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][0U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [7U][1U] << 0xeU))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][0U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [7U][1U] << 0xeU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [8U][0U] >> 0x10U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [8U][1U] << 0x10U))));
    __Vtemp_hbd5c61bb__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][1U] >> 0x14U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [6U][2U] << 0xcU)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][1U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [7U][2U] << 0xeU))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][1U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [7U][2U] << 0xeU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [8U][1U] >> 0x10U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [8U][2U] << 0x10U))));
    __Vtemp_hbd5c61bb__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][2U] >> 0x14U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [6U][3U] << 0xcU)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][2U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [7U][3U] << 0xeU))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][2U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [7U][3U] << 0xeU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [8U][2U] >> 0x10U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [8U][3U] << 0x10U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[2U][0U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [6U][0U] << 0xcU) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [7U][0U] << 0xeU)) 
            | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [7U][0U] << 0xeU) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [8U][0U] << 0x10U))) 
           | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [6U][0U] << 0xcU) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [8U][0U] << 0x10U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[2U][1U] 
        = (__Vtemp_hbd5c61bb__0[1U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [6U][0U] >> 0x14U) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [6U][1U] 
                                           << 0xcU)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [8U][0U] 
                                           >> 0x10U) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                             [8U][1U] 
                                             << 0x10U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[2U][2U] 
        = (__Vtemp_hbd5c61bb__0[2U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [6U][1U] >> 0x14U) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [6U][2U] 
                                           << 0xcU)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [8U][1U] 
                                           >> 0x10U) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                             [8U][2U] 
                                             << 0x10U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[2U][3U] 
        = (__Vtemp_hbd5c61bb__0[3U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [6U][2U] >> 0x14U) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [6U][3U] 
                                           << 0xcU)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [8U][2U] 
                                           >> 0x10U) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                             [8U][3U] 
                                             << 0x10U))));
    __Vtemp_hf097aa9b__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][0U] >> 0xeU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [9U][1U] << 0x12U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][0U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][1U] << 0x14U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][0U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][1U] << 0x14U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xbU][0U] >> 0xaU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xbU][1U] 
                                         << 0x16U))));
    __Vtemp_hf097aa9b__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][1U] >> 0xeU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [9U][2U] << 0x12U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][1U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][2U] << 0x14U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][1U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][2U] << 0x14U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xbU][1U] >> 0xaU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xbU][2U] 
                                         << 0x16U))));
    __Vtemp_hf097aa9b__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][2U] >> 0xeU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [9U][3U] << 0x12U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][2U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][3U] << 0x14U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][2U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][3U] << 0x14U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xbU][2U] >> 0xaU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xbU][3U] 
                                         << 0x16U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[3U][0U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [9U][0U] << 0x12U) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xaU][0U] << 0x14U)) 
            | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [0xaU][0U] << 0x14U) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [0xbU][0U] 
                                        << 0x16U))) 
           | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [9U][0U] << 0x12U) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xbU][0U] << 0x16U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[3U][1U] 
        = (__Vtemp_hf097aa9b__0[1U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [9U][0U] >> 0xeU) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [9U][1U] 
                                           << 0x12U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0xbU][0U] 
                                           >> 0xaU) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                             [0xbU][1U] 
                                             << 0x16U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[3U][2U] 
        = (__Vtemp_hf097aa9b__0[2U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [9U][1U] >> 0xeU) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [9U][2U] 
                                           << 0x12U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0xbU][1U] 
                                           >> 0xaU) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                             [0xbU][2U] 
                                             << 0x16U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[3U][3U] 
        = (__Vtemp_hf097aa9b__0[3U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [9U][2U] >> 0xeU) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [9U][3U] 
                                           << 0x12U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0xbU][2U] 
                                           >> 0xaU) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                             [0xbU][3U] 
                                             << 0x16U))));
    __Vtemp_hadc38120__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][0U] >> 8U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xcU][1U] << 0x18U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][0U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xdU][1U] << 0x1aU))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][0U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xdU][1U] << 0x1aU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xeU][0U] >> 4U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xeU][1U] 
                                         << 0x1cU))));
    __Vtemp_hadc38120__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][1U] >> 8U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xcU][2U] << 0x18U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][1U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xdU][2U] << 0x1aU))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][1U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xdU][2U] << 0x1aU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xeU][1U] >> 4U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xeU][2U] 
                                         << 0x1cU))));
    __Vtemp_hadc38120__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][2U] >> 8U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xcU][3U] << 0x18U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][2U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xdU][3U] << 0x1aU))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][2U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xdU][3U] << 0x1aU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xeU][2U] >> 4U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xeU][3U] 
                                         << 0x1cU))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[4U][0U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0xcU][0U] << 0x18U) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xdU][0U] << 0x1aU)) 
            | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [0xdU][0U] << 0x1aU) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [0xeU][0U] 
                                        << 0x1cU))) 
           | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [0xcU][0U] << 0x18U) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xeU][0U] << 0x1cU)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[4U][1U] 
        = (__Vtemp_hadc38120__0[1U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xcU][0U] 
                                         >> 8U) | (
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                   [0xcU][1U] 
                                                   << 0x18U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0xeU][0U] 
                                           >> 4U) | 
                                          (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0xeU][1U] 
                                           << 0x1cU))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[4U][2U] 
        = (__Vtemp_hadc38120__0[2U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xcU][1U] 
                                         >> 8U) | (
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                   [0xcU][2U] 
                                                   << 0x18U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0xeU][1U] 
                                           >> 4U) | 
                                          (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0xeU][2U] 
                                           << 0x1cU))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[4U][3U] 
        = (__Vtemp_hadc38120__0[3U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xcU][2U] 
                                         >> 8U) | (
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                   [0xcU][3U] 
                                                   << 0x18U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0xeU][2U] 
                                           >> 4U) | 
                                          (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0xeU][3U] 
                                           << 0x1cU))));
    __Vtemp_h7f22d6d6__0[2U] = (((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xfU][1U] >> 2U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xfU][2U] << 0x1eU)) 
                                  & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x10U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                  [0x10U][1U] 
                                                  & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                      [0x11U][0U] 
                                                      >> 0x1eU) 
                                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                        [0x11U][1U] 
                                                        << 2U)))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xfU][1U] >> 2U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xfU][2U] << 0x1eU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x11U][0U] 
                                       >> 0x1eU) | 
                                      (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x11U][1U] 
                                       << 2U))));
    __Vtemp_h7f22d6d6__0[3U] = (((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xfU][2U] >> 2U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xfU][3U] << 0x1eU)) 
                                  & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x10U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                  [0x10U][2U] 
                                                  & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                      [0x11U][1U] 
                                                      >> 0x1eU) 
                                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                        [0x11U][2U] 
                                                        << 2U)))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xfU][2U] >> 2U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xfU][3U] << 0x1eU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x11U][1U] 
                                       >> 0x1eU) | 
                                      (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x11U][2U] 
                                       << 2U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[5U][0U] = 0U;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[5U][1U] 
        = (((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [0xfU][0U] >> 2U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xfU][1U] << 0x1eU)) 
             & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
             [0x10U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                             [0x10U][0U] & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                            [0x11U][0U] 
                                            << 2U))) 
           | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [0xfU][0U] >> 2U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xfU][1U] << 0x1eU)) 
              & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                 [0x11U][0U] << 2U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[5U][2U] 
        = __Vtemp_h7f22d6d6__0[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[5U][3U] 
        = __Vtemp_h7f22d6d6__0[3U];
    __Vtemp_h567b2546__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x12U][0U] >> 0x1cU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x12U][1U] << 4U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x13U][0U] >> 0x1aU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x13U][1U] 
                                       << 6U))) | (
                                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                     [0x13U][0U] 
                                                     >> 0x1aU) 
                                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                       [0x13U][1U] 
                                                       << 6U)) 
                                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                       [0x14U][0U] 
                                                       >> 0x18U) 
                                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                         [0x14U][1U] 
                                                         << 8U))));
    __Vtemp_h567b2546__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x12U][1U] >> 0x1cU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x12U][2U] << 4U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x13U][1U] >> 0x1aU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x13U][2U] 
                                       << 6U))) | (
                                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                     [0x13U][1U] 
                                                     >> 0x1aU) 
                                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                       [0x13U][2U] 
                                                       << 6U)) 
                                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                       [0x14U][1U] 
                                                       >> 0x18U) 
                                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                         [0x14U][2U] 
                                                         << 8U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[6U][0U] = 0U;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[6U][1U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x12U][0U] << 4U) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x13U][0U] << 6U)) 
            | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [0x13U][0U] << 6U) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x14U][0U] << 8U))) 
           | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [0x12U][0U] << 4U) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x14U][0U] << 8U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[6U][2U] 
        = (__Vtemp_h567b2546__0[2U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0x12U][0U] 
                                         >> 0x1cU) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0x12U][1U] 
                                           << 4U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0x14U][0U] 
                                           >> 0x18U) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                             [0x14U][1U] 
                                             << 8U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[6U][3U] 
        = (__Vtemp_h567b2546__0[3U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0x12U][1U] 
                                         >> 0x1cU) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0x12U][2U] 
                                           << 4U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0x14U][1U] 
                                           >> 0x18U) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                             [0x14U][2U] 
                                             << 8U))));
    __Vtemp_h529565f2__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x15U][0U] >> 0x16U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x15U][1U] << 0xaU)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x16U][0U] >> 0x14U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x16U][1U] 
                                       << 0xcU))) | 
                                (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x16U][0U] >> 0x14U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x16U][1U] << 0xcU)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x17U][0U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x17U][1U] 
                                       << 0xeU))));
    __Vtemp_h529565f2__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x15U][1U] >> 0x16U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x15U][2U] << 0xaU)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x16U][1U] >> 0x14U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x16U][2U] 
                                       << 0xcU))) | 
                                (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x16U][1U] >> 0x14U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x16U][2U] << 0xcU)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x17U][1U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x17U][2U] 
                                       << 0xeU))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[7U][0U] = 0U;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[7U][1U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x15U][0U] << 0xaU) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x16U][0U] << 0xcU)) 
            | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                [0x16U][0U] << 0xcU) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [0x17U][0U] 
                                        << 0xeU))) 
           | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [0x15U][0U] << 0xaU) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x17U][0U] 
                                       << 0xeU)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[7U][2U] 
        = (__Vtemp_h529565f2__0[2U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0x15U][0U] 
                                         >> 0x16U) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0x15U][1U] 
                                           << 0xaU)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0x17U][0U] 
                                           >> 0x12U) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                             [0x17U][1U] 
                                             << 0xeU))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[7U][3U] 
        = (__Vtemp_h529565f2__0[3U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0x15U][1U] 
                                         >> 0x16U) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0x15U][2U] 
                                           << 0xaU)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0x17U][1U] 
                                           >> 0x12U) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                             [0x17U][2U] 
                                             << 0xeU))));
    __Vtemp_h8558cf9b__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x18U][0U] >> 0x10U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x18U][1U] << 0x10U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x19U][0U] >> 0xeU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x19U][1U] 
                                       << 0x12U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x19U][0U] >> 0xeU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x19U][1U] 
                                       << 0x12U)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1aU][0U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1aU][1U] 
                                       << 0x14U))));
    __Vtemp_h8558cf9b__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x18U][1U] >> 0x10U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x18U][2U] << 0x10U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x19U][1U] >> 0xeU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x19U][2U] 
                                       << 0x12U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x19U][1U] >> 0xeU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x19U][2U] 
                                       << 0x12U)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1aU][1U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1aU][2U] 
                                       << 0x14U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[8U][0U] = 0U;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[8U][1U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x18U][0U] << 0x10U) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x19U][0U] 
                                       << 0x12U)) | 
            ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x19U][0U] << 0x12U) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1aU][0U] 
                                       << 0x14U))) 
           | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [0x18U][0U] << 0x10U) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [0x1aU][0U] 
                                        << 0x14U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[8U][2U] 
        = (__Vtemp_h8558cf9b__0[2U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0x18U][0U] 
                                         >> 0x10U) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0x18U][1U] 
                                           << 0x10U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0x1aU][0U] 
                                           >> 0xcU) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                             [0x1aU][1U] 
                                             << 0x14U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[8U][3U] 
        = (__Vtemp_h8558cf9b__0[3U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0x18U][1U] 
                                         >> 0x10U) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0x18U][2U] 
                                           << 0x10U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0x1aU][1U] 
                                           >> 0xcU) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                             [0x1aU][2U] 
                                             << 0x14U))));
    __Vtemp_h1ca2dba6__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1bU][0U] >> 0xaU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1bU][1U] << 0x16U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1cU][0U] >> 8U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1cU][1U] 
                                       << 0x18U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1cU][0U] >> 8U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1cU][1U] 
                                       << 0x18U)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1dU][0U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1dU][1U] 
                                       << 0x1aU))));
    __Vtemp_h1ca2dba6__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1bU][1U] >> 0xaU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1bU][2U] << 0x16U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1cU][1U] >> 8U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1cU][2U] 
                                       << 0x18U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1cU][1U] >> 8U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1cU][2U] 
                                       << 0x18U)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1dU][1U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1dU][2U] 
                                       << 0x1aU))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[9U][0U] = 0U;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[9U][1U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x1bU][0U] << 0x16U) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1cU][0U] 
                                       << 0x18U)) | 
            ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
              [0x1cU][0U] << 0x18U) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1dU][0U] 
                                       << 0x1aU))) 
           | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
               [0x1bU][0U] << 0x16U) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [0x1dU][0U] 
                                        << 0x1aU)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[9U][2U] 
        = (__Vtemp_h1ca2dba6__0[2U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0x1bU][0U] 
                                         >> 0xaU) | 
                                        (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0x1bU][1U] 
                                         << 0x16U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0x1dU][0U] 
                                           >> 6U) | 
                                          (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0x1dU][1U] 
                                           << 0x1aU))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[9U][3U] 
        = (__Vtemp_h1ca2dba6__0[3U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0x1bU][1U] 
                                         >> 0xaU) | 
                                        (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0x1bU][2U] 
                                         << 0x16U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0x1dU][1U] 
                                           >> 6U) | 
                                          (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                           [0x1dU][2U] 
                                           << 0x1aU))));
    __Vtemp_hdb7a6280__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1eU][0U] >> 4U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1eU][1U] << 0x1cU)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1fU][0U] >> 2U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1fU][1U] 
                                       << 0x1eU))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1fU][0U] >> 2U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1fU][1U] 
                                       << 0x1eU)) & (IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                              [0x20U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                               [0x20U][0U]))))));
    __Vtemp_hdb7a6280__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1eU][1U] >> 4U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1eU][2U] << 0x1cU)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1fU][1U] >> 2U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1fU][2U] 
                                       << 0x1eU))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1fU][1U] >> 2U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1fU][2U] 
                                       << 0x1eU)) & (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                               [0x20U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                                [0x20U][0U]))) 
                                                             >> 0x20U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[0xaU][0U] = 0U;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[0xaU][1U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
            [0x1eU][0U] << 0x1cU) & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1fU][0U] << 0x1eU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[0xaU][2U] 
        = (__Vtemp_hdb7a6280__0[2U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0x1eU][0U] 
                                         >> 4U) | (
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                   [0x1eU][1U] 
                                                   << 0x1cU)) 
                                       & (IData)((((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                   [0x20U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                    [0x20U][0U]))))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[0xaU][3U] 
        = (__Vtemp_hdb7a6280__0[3U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0x1eU][1U] 
                                         >> 4U) | (
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                   [0x1eU][2U] 
                                                   << 0x1cU)) 
                                       & (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                    [0x20U][1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                     [0x20U][0U]))) 
                                                  >> 0x20U))));
    vlSelf->ysyx_22040127_top__DOT__wb_csrrdata = (
                                                   ((((((((- (QData)((IData)(
                                                                             (0x305U 
                                                                              == 
                                                                              (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                                                               >> 0x14U))))) 
                                                          & vlSelf->mtvec) 
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
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask 
        = ((0xfeU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask)) 
           | (1U & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                    | (3U == (3U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                    >> 8U))))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask 
        = ((0xfdU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask)) 
           | (2U & (((0xfffffffeU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask)) 
                     | (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                         & ((1U == (3U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                          >> 8U))) 
                            | (2U == (3U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                            >> 8U))))) 
                        << 1U)) | ((3U == (3U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                 >> 8U))) 
                                   << 1U))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask 
        = ((0xfbU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask)) 
           | (4U & (((0xfffffffcU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask)) 
                     | (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                         & (0x200U == (0x300U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U]))) 
                        << 2U)) | ((3U == (3U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                 >> 8U))) 
                                   << 2U))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask 
        = ((0xf7U & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask)) 
           | (8U & ((((0xfffffff8U & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask)) 
                      | ((IData)((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                   >> 2U) & (0x100U 
                                             == (0x300U 
                                                 & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])))) 
                         << 3U)) | (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                     & (0x200U == (0x300U 
                                                   & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U]))) 
                                    << 3U)) | ((3U 
                                                == 
                                                (3U 
                                                 & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                    >> 8U))) 
                                               << 3U))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask 
        = ((0xefU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask)) 
           | (0x10U & ((0xfffffff0U & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask)) 
                       | ((3U == (3U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                        >> 8U))) << 4U))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask 
        = ((0xdfU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask)) 
           | (0x20U & ((0xffffffe0U & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                       | (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                           << 1U) & 
                                          (((1U == 
                                             (3U & 
                                              (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                               >> 8U))) 
                                            | (2U == 
                                               (3U 
                                                & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                   >> 8U)))) 
                                           << 5U)))) 
                       | ((3U == (3U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                        >> 8U))) << 5U))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask 
        = ((0xbfU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask)) 
           | (0x40U & (((0xffffffc0U & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask)) 
                        | ((IData)((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                     >> 4U) & (0x200U 
                                               == (0x300U 
                                                   & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])))) 
                           << 6U)) | ((3U == (3U & 
                                              (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                               >> 8U))) 
                                      << 6U))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask 
        = ((0x7fU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask)) 
           | (0x80U & ((((0xffffff80U & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask)) 
                         | ((IData)((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                      >> 6U) & (0x100U 
                                                == 
                                                (0x300U 
                                                 & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])))) 
                            << 7U)) | ((IData)((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                 >> 4U) 
                                                & (0x200U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])))) 
                                       << 7U)) | ((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                       >> 8U))) 
                                                  << 7U))));
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
                                                                   ((0x1fU 
                                                                     >= 
                                                                     (0x3fU 
                                                                      & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))
                                                                     ? 
                                                                    (0xffffffffU 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))
                                                                     : 0U)))))) 
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
    vlSelf->ysyx_22040127_top__DOT__if_instruction 
        = ((4U & vlSelf->if_pc) ? (IData)((vlSelf->ysyx_22040127_top__DOT__if_pcdata 
                                           >> 0x20U))
            : (IData)(vlSelf->ysyx_22040127_top__DOT__if_pcdata));
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
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit)
            ? (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out)
            : 0U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[0U][0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [1U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [2U][0U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [0U][0U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [2U][0U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[0U][1U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [1U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [1U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [2U][1U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [0U][1U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [2U][1U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[0U][2U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [1U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [1U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [2U][2U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [0U][2U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [2U][2U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[0U][3U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [1U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [1U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [2U][3U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [0U][3U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [2U][3U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[0U][0U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [0U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [1U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
           [2U][0U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[0U][1U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [0U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [1U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
           [2U][1U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[0U][2U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [0U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [1U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
           [2U][2U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[0U][3U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [0U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [1U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
           [2U][3U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[1U][0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [3U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [4U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [4U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [5U][0U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [3U][0U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [5U][0U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[1U][1U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [3U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [4U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [4U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [5U][1U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [3U][1U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [5U][1U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[1U][2U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [3U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [4U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [4U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [5U][2U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [3U][2U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [5U][2U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[1U][3U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [3U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [4U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [4U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [5U][3U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [3U][3U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [5U][3U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[1U][0U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [3U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [4U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
           [5U][0U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[1U][1U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [3U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [4U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
           [5U][1U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[1U][2U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [3U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [4U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
           [5U][2U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[1U][3U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [3U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [4U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
           [5U][3U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[2U][0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [6U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [7U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [7U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [8U][0U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [6U][0U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [8U][0U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[2U][1U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [6U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [7U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [7U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [8U][1U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [6U][1U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [8U][1U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[2U][2U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [6U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [7U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [7U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [8U][2U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [6U][2U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [8U][2U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[2U][3U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [6U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [7U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [7U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                          [8U][3U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [6U][3U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                        [8U][3U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[2U][0U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [6U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [7U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
           [8U][0U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[2U][1U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [6U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [7U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
           [8U][1U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[2U][2U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [6U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [7U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
           [8U][2U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[2U][3U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [6U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [7U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
           [8U][3U]);
    __Vtemp_h381dcfdd__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][0U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [1U][1U] << 1U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [2U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [2U][1U] << 1U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [2U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [2U][1U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [3U][0U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [3U][1U] << 1U))));
    __Vtemp_h381dcfdd__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][1U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [1U][2U] << 1U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [2U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [2U][2U] << 1U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [2U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [2U][2U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [3U][1U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [3U][2U] << 1U))));
    __Vtemp_h381dcfdd__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][2U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [1U][3U] << 1U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [2U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [2U][3U] << 1U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [2U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [2U][3U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [3U][2U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [3U][3U] << 1U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[4U][0U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
              [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
              [2U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                           [2U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                           [3U][0U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [1U][0U] & 
                                         vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [3U][0U])) 
           << 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[4U][1U] 
        = (__Vtemp_h381dcfdd__0[1U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [1U][0U] >> 0x1fU) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [1U][1U] 
                                           << 1U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [3U][0U] 
                                           >> 0x1fU) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                             [3U][1U] 
                                             << 1U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[4U][2U] 
        = (__Vtemp_h381dcfdd__0[2U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [1U][1U] >> 0x1fU) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [1U][2U] 
                                           << 1U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [3U][1U] 
                                           >> 0x1fU) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                             [3U][2U] 
                                             << 1U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[4U][3U] 
        = (__Vtemp_h381dcfdd__0[3U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [1U][2U] >> 0x1fU) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [1U][3U] 
                                           << 1U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [3U][2U] 
                                           >> 0x1fU) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                             [3U][3U] 
                                             << 1U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[4U][0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
             [1U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
             [2U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
            [3U][0U]) << 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[4U][1U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
              [1U][0U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [1U][1U] << 1U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                [2U][0U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [2U][1U] << 1U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
               [3U][0U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [3U][1U] << 1U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[4U][2U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
              [1U][1U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [1U][2U] << 1U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                [2U][1U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [2U][2U] << 1U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
               [3U][1U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [3U][2U] << 1U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[4U][3U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
              [1U][2U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [1U][3U] << 1U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                [2U][2U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [2U][3U] << 1U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
               [3U][2U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [3U][3U] << 1U)));
    __Vtemp_h047588fa__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][0U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [4U][1U] << 1U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [5U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [5U][1U] << 1U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [5U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [5U][1U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [6U][0U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [6U][1U] << 1U))));
    __Vtemp_h047588fa__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][1U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [4U][2U] << 1U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [5U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [5U][2U] << 1U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [5U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [5U][2U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [6U][1U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [6U][2U] << 1U))));
    __Vtemp_h047588fa__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][2U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [4U][3U] << 1U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [5U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [5U][3U] << 1U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [5U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [5U][3U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [6U][2U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [6U][3U] << 1U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[5U][0U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
              [4U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
              [5U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                           [5U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                           [6U][0U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [4U][0U] & 
                                         vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [6U][0U])) 
           << 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[5U][1U] 
        = (__Vtemp_h047588fa__0[1U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [4U][0U] >> 0x1fU) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [4U][1U] 
                                           << 1U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [6U][0U] 
                                           >> 0x1fU) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                             [6U][1U] 
                                             << 1U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[5U][2U] 
        = (__Vtemp_h047588fa__0[2U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [4U][1U] >> 0x1fU) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [4U][2U] 
                                           << 1U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [6U][1U] 
                                           >> 0x1fU) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                             [6U][2U] 
                                             << 1U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[5U][3U] 
        = (__Vtemp_h047588fa__0[3U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [4U][2U] >> 0x1fU) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [4U][3U] 
                                           << 1U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [6U][2U] 
                                           >> 0x1fU) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                             [6U][3U] 
                                             << 1U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[5U][0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
             [4U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
             [5U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
            [6U][0U]) << 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[5U][1U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
              [4U][0U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [4U][1U] << 1U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                [5U][0U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [5U][1U] << 1U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
               [6U][0U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [6U][1U] << 1U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[5U][2U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
              [4U][1U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [4U][2U] << 1U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                [5U][1U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [5U][2U] << 1U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
               [6U][1U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [6U][2U] << 1U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[5U][3U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
              [4U][2U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [4U][3U] << 1U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                [5U][2U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [5U][3U] << 1U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
               [6U][2U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [6U][3U] << 1U)));
    __Vtemp_h56023c0b__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][0U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [7U][1U] << 1U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [8U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [8U][1U] << 1U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [8U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [8U][1U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [9U][0U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [9U][1U] << 1U))));
    __Vtemp_h56023c0b__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][1U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [7U][2U] << 1U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [8U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [8U][2U] << 1U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [8U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [8U][2U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [9U][1U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [9U][2U] << 1U))));
    __Vtemp_h56023c0b__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][2U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [7U][3U] << 1U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [8U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [8U][3U] << 1U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [8U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [8U][3U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [9U][2U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [9U][3U] << 1U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[6U][0U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
              [7U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
              [8U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                           [8U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                           [9U][0U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [7U][0U] & 
                                         vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [9U][0U])) 
           << 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[6U][1U] 
        = (__Vtemp_h56023c0b__0[1U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [7U][0U] >> 0x1fU) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [7U][1U] 
                                           << 1U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [9U][0U] 
                                           >> 0x1fU) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                             [9U][1U] 
                                             << 1U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[6U][2U] 
        = (__Vtemp_h56023c0b__0[2U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [7U][1U] >> 0x1fU) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [7U][2U] 
                                           << 1U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [9U][1U] 
                                           >> 0x1fU) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                             [9U][2U] 
                                             << 1U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[6U][3U] 
        = (__Vtemp_h56023c0b__0[3U] | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [7U][2U] >> 0x1fU) 
                                        | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [7U][3U] 
                                           << 1U)) 
                                       & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [9U][2U] 
                                           >> 0x1fU) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                             [9U][3U] 
                                             << 1U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[6U][0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
             [7U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
             [8U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
            [9U][0U]) << 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[6U][1U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
              [7U][0U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [7U][1U] << 1U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                [8U][0U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [8U][1U] << 1U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
               [9U][0U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [9U][1U] << 1U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[6U][2U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
              [7U][1U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [7U][2U] << 1U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                [8U][1U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [8U][2U] << 1U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
               [9U][1U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [9U][2U] << 1U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[6U][3U] 
        = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
              [7U][2U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [7U][3U] << 1U)) 
            ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                [8U][2U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [8U][3U] << 1U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
               [9U][2U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [9U][3U] << 1U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[3U][0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [9U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [0xaU][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                            [0xaU][0U] & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                          [0U][0U] 
                                          << 1U))) 
           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
              [9U][0U] & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                          [0U][0U] << 1U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[3U][1U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [9U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [0xaU][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                            [0xaU][1U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [0U][0U] 
                                           >> 0x1fU) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                             [0U][1U] 
                                             << 1U)))) 
           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
              [9U][1U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                           [0U][0U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                 [0U][1U] 
                                                 << 1U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[3U][2U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [9U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [0xaU][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                            [0xaU][2U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [0U][1U] 
                                           >> 0x1fU) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                             [0U][2U] 
                                             << 1U)))) 
           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
              [9U][2U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                           [0U][1U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                 [0U][2U] 
                                                 << 1U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[3U][3U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [9U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
             [0xaU][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                            [0xaU][3U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                           [0U][2U] 
                                           >> 0x1fU) 
                                          | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                             [0U][3U] 
                                             << 1U)))) 
           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
              [9U][3U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                           [0U][2U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                 [0U][3U] 
                                                 << 1U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[3U][0U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [9U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [0xaU][0U]) ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                           [0U][0U] << 1U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[3U][1U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [9U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [0xaU][1U]) ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                            [0U][0U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                  [0U][1U] 
                                                  << 1U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[3U][2U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [9U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [0xaU][2U]) ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                            [0U][1U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                  [0U][2U] 
                                                  << 1U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[3U][3U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [9U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
            [0xaU][3U]) ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                            [0U][2U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                  [0U][3U] 
                                                  << 1U)));
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
    if ((0x20U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])) {
        Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__pmem_read_TOP(
                                                                                (((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U]))), vlSelf->__Vtask_ysyx_22040127_top__DOT__mem__DOT__pmem_read__4__doubly_aligned_data);
        vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
            = vlSelf->__Vtask_ysyx_22040127_top__DOT__mem__DOT__pmem_read__4__doubly_aligned_data;
    }
    if ((0x40U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])) {
        Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__mem__DOT__pmem_write_TOP(
                                                                                (((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U]))), 
                                                                                ((0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                                >> 8U)))
                                                                                 ? 
                                                                                (((QData)((IData)(
                                                                                (0xffU 
                                                                                & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U]))) 
                                                                                << 0x38U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U]))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U]))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U]))) 
                                                                                << 0x20U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U]))) 
                                                                                << 0x18U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U]))) 
                                                                                << 0x10U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U]))) 
                                                                                << 8U) 
                                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U]))))))))))
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                                >> 8U)))
                                                                                 ? 
                                                                                (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U]))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U]))) 
                                                                                << 0x20U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U]))) 
                                                                                << 0x10U) 
                                                                                | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U]))))))
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                                >> 8U)))
                                                                                 ? 
                                                                                (((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U])))
                                                                                 : 
                                                                                (((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U])))))), (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask));
    }
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
    if ((IData)((0ULL != (0xaa000000ULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op)))) {
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
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_type 
        = (((~ (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_ready)) 
            & (8U == (0xeU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U]))) 
           & (IData)((0ULL != (0xff000000ULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_type 
        = ((IData)(((8U == (0xeU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])) 
                    & (~ ((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_stage2) 
                          | (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_ok))))) 
           & (IData)((0ULL != (0x570000ULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op))));
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
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr 
        = (IData)(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                   & (0x6000000000ULL == (0x6000000000ULL 
                                          & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg))));
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
    __Vtemp_hf3c81a8e__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [1U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [2U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [3U][0U]);
    __Vtemp_hf3c81a8e__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [1U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [2U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [3U][1U]);
    __Vtemp_hf3c81a8e__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [1U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [2U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [3U][2U]);
    __Vtemp_hf3c81a8e__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [1U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [2U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [3U][3U]);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h10f7b382__0, __Vtemp_hf3c81a8e__0, 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[3U][0U] 
        = __Vtemp_h10f7b382__0[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[3U][1U] 
        = __Vtemp_h10f7b382__0[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[3U][2U] 
        = __Vtemp_h10f7b382__0[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[3U][3U] 
        = __Vtemp_h10f7b382__0[3U];
    __Vtemp_h568686b8__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [4U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [5U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [6U][0U]);
    __Vtemp_h568686b8__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [4U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [5U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [6U][1U]);
    __Vtemp_h568686b8__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [4U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [5U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [6U][2U]);
    __Vtemp_h568686b8__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [4U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [5U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [6U][3U]);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h9ef9c0e2__0, __Vtemp_h568686b8__0, 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[4U][0U] 
        = __Vtemp_h9ef9c0e2__0[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[4U][1U] 
        = __Vtemp_h9ef9c0e2__0[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[4U][2U] 
        = __Vtemp_h9ef9c0e2__0[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[4U][3U] 
        = __Vtemp_h9ef9c0e2__0[3U];
    __Vtemp_hc17aaf95__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [2U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [2U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [3U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [3U][0U]));
    __Vtemp_hc17aaf95__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [1U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [2U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [2U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [3U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [1U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [3U][1U]));
    __Vtemp_hc17aaf95__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [1U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [2U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [2U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [3U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [1U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [3U][2U]));
    __Vtemp_hc17aaf95__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [1U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [2U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [2U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [3U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [1U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [3U][3U]));
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h2b662476__0, __Vtemp_hc17aaf95__0, 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[3U][0U] 
        = __Vtemp_h2b662476__0[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[3U][1U] 
        = __Vtemp_h2b662476__0[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[3U][2U] 
        = __Vtemp_h2b662476__0[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[3U][3U] 
        = __Vtemp_h2b662476__0[3U];
    __Vtemp_hf22689e2__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [4U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [5U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [5U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [6U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [4U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [6U][0U]));
    __Vtemp_hf22689e2__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [4U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [5U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [5U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [6U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [4U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [6U][1U]));
    __Vtemp_hf22689e2__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [4U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [5U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [5U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [6U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [4U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [6U][2U]));
    __Vtemp_hf22689e2__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [4U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [5U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [5U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [6U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [4U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [6U][3U]));
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h135b2a40__0, __Vtemp_hf22689e2__0, 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[4U][0U] 
        = __Vtemp_h135b2a40__0[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[4U][1U] 
        = __Vtemp_h135b2a40__0[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[4U][2U] 
        = __Vtemp_h135b2a40__0[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[4U][3U] 
        = __Vtemp_h135b2a40__0[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[0U][0U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [0U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [1U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
           [2U][0U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[0U][1U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [0U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [1U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
           [2U][1U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[0U][2U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [0U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [1U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
           [2U][2U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[0U][3U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [0U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [1U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
           [2U][3U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[1U][0U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [3U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [4U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
           [5U][0U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[1U][1U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [3U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [4U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
           [5U][1U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[1U][2U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [3U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [4U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
           [5U][2U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[1U][3U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [3U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [4U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
           [5U][3U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[2U][0U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [6U][0U] ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                        [0xaU][0U] << 1U)) ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                              [0U][0U] 
                                              << 1U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[2U][1U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [6U][1U] ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                         [0xaU][0U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                 [0xaU][1U] 
                                                 << 1U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
               [0U][0U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                     [0U][1U] << 1U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[2U][2U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [6U][2U] ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                         [0xaU][1U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                 [0xaU][2U] 
                                                 << 1U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
               [0U][1U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                     [0U][2U] << 1U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[2U][3U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
            [6U][3U] ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                         [0xaU][2U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                 [0xaU][3U] 
                                                 << 1U))) 
           ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
               [0U][2U] >> 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                     [0U][3U] << 1U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[0U][0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
             [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
             [1U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                          [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                          [2U][0U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                        [0U][0U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                        [2U][0U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[0U][1U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
             [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
             [1U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                          [1U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                          [2U][1U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                        [0U][1U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                        [2U][1U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[0U][2U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
             [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
             [1U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                          [1U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                          [2U][2U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                        [0U][2U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                        [2U][2U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[0U][3U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
             [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
             [1U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                          [1U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                          [2U][3U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                        [0U][3U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                        [2U][3U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[1U][0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
             [3U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
             [4U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                          [4U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                          [5U][0U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                        [3U][0U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                        [5U][0U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[1U][1U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
             [3U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
             [4U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                          [4U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                          [5U][1U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                        [3U][1U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                        [5U][1U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[1U][2U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
             [3U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
             [4U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                          [4U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                          [5U][2U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                        [3U][2U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                        [5U][2U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[1U][3U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
             [3U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
             [4U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                          [4U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                          [5U][3U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                        [3U][3U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                        [5U][3U]));
    __Vtemp_h04322473__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [6U][1U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                               [0xaU][0U] 
                                               >> 0x1fU) 
                                              | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                 [0xaU][1U] 
                                                 << 1U))) 
                                 | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [0xaU][0U] >> 0x1fU) 
                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                        [0xaU][1U] 
                                        << 1U)) & (
                                                   (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                    [0U][0U] 
                                                    >> 0x1fU) 
                                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                      [0U][1U] 
                                                      << 1U)))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [6U][1U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                [0U][0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                  [0U][1U] 
                                                  << 1U))));
    __Vtemp_h04322473__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [6U][2U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                               [0xaU][1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                 [0xaU][2U] 
                                                 << 1U))) 
                                 | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [0xaU][1U] >> 0x1fU) 
                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                        [0xaU][2U] 
                                        << 1U)) & (
                                                   (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                    [0U][1U] 
                                                    >> 0x1fU) 
                                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                      [0U][2U] 
                                                      << 1U)))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [6U][2U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                [0U][1U] 
                                                >> 0x1fU) 
                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                  [0U][2U] 
                                                  << 1U))));
    __Vtemp_h04322473__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [6U][3U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                               [0xaU][2U] 
                                               >> 0x1fU) 
                                              | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                 [0xaU][3U] 
                                                 << 1U))) 
                                 | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [0xaU][2U] >> 0x1fU) 
                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                        [0xaU][3U] 
                                        << 1U)) & (
                                                   (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                    [0U][2U] 
                                                    >> 0x1fU) 
                                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                      [0U][3U] 
                                                      << 1U)))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [6U][3U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                [0U][2U] 
                                                >> 0x1fU) 
                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                  [0U][3U] 
                                                  << 1U))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[2U][0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
             [6U][0U] & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                         [0xaU][0U] << 1U)) | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [0xaU][0U] 
                                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                [0U][0U]) 
                                               << 1U)) 
           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
              [6U][0U] & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                          [0U][0U] << 1U)));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[2U][1U] 
        = __Vtemp_h04322473__0[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[2U][2U] 
        = __Vtemp_h04322473__0[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[2U][3U] 
        = __Vtemp_h04322473__0[3U];
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
        = ((((((((((((((((- (QData)((IData)((3U == 
                                             (7U & 
                                              (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                               >> 8U)))))) 
                         & vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data) 
                        | (QData)((IData)(((- (IData)(
                                                      ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                       & ((2U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                               >> 8U))) 
                                                          | (6U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                 >> 8U))))))) 
                                           & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data))))) 
                       | (QData)((IData)(((- (IData)(
                                                     (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                       >> 4U) 
                                                      & ((2U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                              >> 8U))) 
                                                         | (6U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                >> 8U))))))) 
                                          & (IData)(
                                                    (vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                     >> 0x20U)))))) 
                      | (QData)((IData)((0xffffU & 
                                         ((- (IData)(
                                                     ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                      & ((1U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                              >> 8U))) 
                                                         | (5U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                >> 8U))))))) 
                                          & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data)))))) 
                     | (QData)((IData)((0xffffU & (
                                                   (- (IData)(
                                                              (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                                >> 2U) 
                                                               & ((1U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                       >> 8U))) 
                                                                  | (5U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                         >> 8U))))))) 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                              >> 0x10U))))))) 
                    | (QData)((IData)((0xffffU & ((- (IData)(
                                                             (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                               >> 4U) 
                                                              & ((1U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                      >> 8U))) 
                                                                 | (5U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                        >> 8U))))))) 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                             >> 0x20U))))))) 
                   | (QData)((IData)((0xffffU & ((- (IData)(
                                                            (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                              >> 6U) 
                                                             & ((1U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                     >> 8U))) 
                                                                | (5U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                       >> 8U))))))) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                            >> 0x30U))))))) 
                  | (QData)((IData)((0xffU & ((- (IData)(
                                                         ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                          & ((0U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                  >> 8U))) 
                                                             | (4U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                    >> 8U))))))) 
                                              & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data)))))) 
                 | (QData)((IData)((0xffU & ((- (IData)(
                                                        (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                          >> 1U) 
                                                         & ((0U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                 >> 8U))) 
                                                            | (4U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                   >> 8U))))))) 
                                             & (IData)(
                                                       (vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                        >> 8U))))))) 
                | (QData)((IData)((0xffU & ((- (IData)(
                                                       (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                         >> 2U) 
                                                        & ((0U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                >> 8U))) 
                                                           | (4U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                  >> 8U))))))) 
                                            & (IData)(
                                                      (vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                       >> 0x10U))))))) 
               | (QData)((IData)((0xffU & ((- (IData)(
                                                      (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                        >> 3U) 
                                                       & ((0U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                               >> 8U))) 
                                                          | (4U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                 >> 8U))))))) 
                                           & (IData)(
                                                     (vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                      >> 0x18U))))))) 
              | (QData)((IData)((0xffU & ((- (IData)(
                                                     (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                       >> 4U) 
                                                      & ((0U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                              >> 8U))) 
                                                         | (4U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                >> 8U))))))) 
                                          & (IData)(
                                                    (vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                     >> 0x20U))))))) 
             | (QData)((IData)((0xffU & ((- (IData)(
                                                    (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                      >> 5U) 
                                                     & ((0U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                             >> 8U))) 
                                                        | (4U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                               >> 8U))))))) 
                                         & (IData)(
                                                   (vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                    >> 0x28U))))))) 
            | (QData)((IData)((0xffU & ((- (IData)(
                                                   (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                     >> 6U) 
                                                    & ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                            >> 8U))) 
                                                       | (4U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                              >> 8U))))))) 
                                        & (IData)((vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                   >> 0x30U))))))) 
           | (QData)((IData)((0xffU & ((- (IData)((
                                                   ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                    >> 7U) 
                                                   & ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                           >> 8U))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                             >> 8U))))))) 
                                       & (IData)((vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                  >> 0x38U)))))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__ex_ready_go 
        = (1U & ((((~ ((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_type) 
                       | (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_stage2))) 
                   & (~ ((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_type) 
                         | ((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_state) 
                            ^ ((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_state) 
                               >> 1U))))) | (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_ok)) 
                 | (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_ready)));
    __Vtemp_h9b7a1b1b__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                             >> 9U)))) 
                                         << 0x2fU) 
                                        | (((QData)((IData)(
                                                            ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                              >> 0x1fU) 
                                                             | (0U 
                                                                != 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U]))))) 
                                            << 0x2eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                   >> 6U)))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                      >> 5U)))) 
                                                  << 0x2cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                         >> 4U)))) 
                                                     << 0x2bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                            >> 3U)))) 
                                                        << 0x2aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                               >> 2U)))) 
                                                           << 0x29U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                                >> 1U)))) 
                                                              << 0x28U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U]))) 
                                                                 << 0x27U) 
                                                                | (((QData)((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                                >> 0x1fU))) 
                                                                    << 0x26U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U]))) 
                                                                       << 0x25U) 
                                                                      | (((QData)((IData)(
                                                                                ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                                << 1U) 
                                                                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                                >> 0x1fU)))) 
                                                                          << 5U) 
                                                                         | (QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                                >> 0x14U)))))))))))))))));
    __Vtemp_h9b7a1b1b__0[1U] = (((IData)((((QData)((IData)(
                                                           vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])))) 
                                 << 0x14U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                            >> 9U)))) 
                                                        << 0x2fU) 
                                                       | (((QData)((IData)(
                                                                           ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                             >> 0x1fU) 
                                                                            | (0U 
                                                                               != 
                                                                               (0x7fU 
                                                                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U]))))) 
                                                           << 0x2eU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                                >> 6U)))) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                                >> 5U)))) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                                >> 4U)))) 
                                                                    << 0x2bU) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                                >> 3U)))) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                                >> 2U)))) 
                                                                          << 0x29U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                                                >> 1U)))) 
                                                                             << 0x28U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U]))) 
                                                                                << 0x27U) 
                                                                               | (((QData)((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                                >> 0x1fU))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U]))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                                << 1U) 
                                                                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                                >> 0x1fU)))) 
                                                                                << 5U) 
                                                                                | (QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                                >> 0x14U)))))))))))))))) 
                                                      >> 0x20U)));
    __Vtemp_h319630cf__0[2U] = (IData)(((8U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
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
    __Vtemp_h319630cf__0[3U] = (IData)((((8U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
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
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U] 
        = (IData)((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[0U]))));
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[1U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[0U]))) 
                   >> 0x20U));
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
        = __Vtemp_h319630cf__0[2U];
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[3U] 
        = __Vtemp_h319630cf__0[3U];
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
        = ((__Vtemp_h9b7a1b1b__0[0U] << 6U) | ((0x20U 
                                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                   >> 0xeU)) 
                                               | (0x1fU 
                                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                     >> 0xeU))));
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[5U] 
        = ((__Vtemp_h9b7a1b1b__0[0U] >> 0x1aU) | (__Vtemp_h9b7a1b1b__0[1U] 
                                                  << 6U));
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[6U] 
        = ((__Vtemp_h9b7a1b1b__0[1U] >> 0x1aU) | ((0x3ffffc0U 
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
        = ((0x3fU & ((IData)(((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                              >> 0x20U)) >> 6U)) | 
           ((0xfc000000U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                            << 0x13U)) | (0x3ffffc0U 
                                          & ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                                      >> 0x20U)) 
                                             >> 6U))));
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[8U] 
        = (0x3fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                    >> 0xdU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[0U][0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
             [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
             [1U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                          [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                          [2U][0U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                        [0U][0U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                        [2U][0U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[0U][1U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
             [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
             [1U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                          [1U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                          [2U][1U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                        [0U][1U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                        [2U][1U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[0U][2U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
             [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
             [1U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                          [1U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                          [2U][2U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                        [0U][2U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                        [2U][2U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[0U][3U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
             [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
             [1U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                          [1U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                          [2U][3U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                        [0U][3U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                        [2U][3U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[0U][0U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
            [0U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
            [1U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
           [2U][0U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[0U][1U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
            [0U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
            [1U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
           [2U][1U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[0U][2U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
            [0U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
            [1U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
           [2U][2U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[0U][3U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
            [0U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
            [1U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
           [2U][3U]);
    __Vtemp_h5a48aef3__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [2U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [2U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [3U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [3U][0U]));
    __Vtemp_h5a48aef3__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [1U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [2U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [2U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [3U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [1U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [3U][1U]));
    __Vtemp_h5a48aef3__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [1U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [2U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [2U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [3U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [1U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [3U][2U]));
    __Vtemp_h5a48aef3__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [1U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [2U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [2U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [3U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [1U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [3U][3U]));
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h93e17113__0, __Vtemp_h5a48aef3__0, 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[2U][0U] 
        = __Vtemp_h93e17113__0[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[2U][1U] 
        = __Vtemp_h93e17113__0[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[2U][2U] 
        = __Vtemp_h93e17113__0[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[2U][3U] 
        = __Vtemp_h93e17113__0[3U];
    __Vtemp_h71d2c1b2__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [1U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [2U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [3U][0U]);
    __Vtemp_h71d2c1b2__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [1U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [2U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [3U][1U]);
    __Vtemp_h71d2c1b2__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [1U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [2U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [3U][2U]);
    __Vtemp_h71d2c1b2__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [1U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [2U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [3U][3U]);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h92a5e062__0, __Vtemp_h71d2c1b2__0, 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[2U][0U] 
        = __Vtemp_h92a5e062__0[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[2U][1U] 
        = __Vtemp_h92a5e062__0[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[2U][2U] 
        = __Vtemp_h92a5e062__0[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[2U][3U] 
        = __Vtemp_h92a5e062__0[3U];
    __Vtemp_h02d88ba1__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][0U];
    __Vtemp_h02d88ba1__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][1U];
    __Vtemp_h02d88ba1__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][2U];
    __Vtemp_h02d88ba1__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h17db7681__0, __Vtemp_h02d88ba1__0, 1U);
    __Vtemp_h02d88ba1__1[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][0U];
    __Vtemp_h02d88ba1__1[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][1U];
    __Vtemp_h02d88ba1__1[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][2U];
    __Vtemp_h02d88ba1__1[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hae07de05__0, __Vtemp_h02d88ba1__1, 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[1U][0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
             [3U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
             [4U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                          [4U][0U] & __Vtemp_h17db7681__0[0U])) 
           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
              [3U][0U] & __Vtemp_hae07de05__0[0U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[1U][1U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
             [3U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
             [4U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                          [4U][1U] & __Vtemp_h17db7681__0[1U])) 
           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
              [3U][1U] & __Vtemp_hae07de05__0[1U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[1U][2U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
             [3U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
             [4U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                          [4U][2U] & __Vtemp_h17db7681__0[2U])) 
           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
              [3U][2U] & __Vtemp_hae07de05__0[2U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[1U][3U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
             [3U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
             [4U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                          [4U][3U] & __Vtemp_h17db7681__0[3U])) 
           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
              [3U][3U] & __Vtemp_hae07de05__0[3U]));
    __Vtemp_h02d88ba1__2[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][0U];
    __Vtemp_h02d88ba1__2[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][1U];
    __Vtemp_h02d88ba1__2[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][2U];
    __Vtemp_h02d88ba1__2[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hf351dc3d__0, __Vtemp_h02d88ba1__2, 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[1U][0U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
            [3U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
            [4U][0U]) ^ __Vtemp_hf351dc3d__0[0U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[1U][1U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
            [3U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
            [4U][1U]) ^ __Vtemp_hf351dc3d__0[1U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[1U][2U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
            [3U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
            [4U][2U]) ^ __Vtemp_hf351dc3d__0[2U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[1U][3U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
            [3U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
            [4U][3U]) ^ __Vtemp_hf351dc3d__0[3U]);
    vlSelf->ysyx_22040127_top__DOT__mem_final_rdata 
        = ((0xffffffffffffff00ULL & vlSelf->ysyx_22040127_top__DOT__mem_final_rdata) 
           | (IData)((IData)((0xffU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata)))));
    vlSelf->ysyx_22040127_top__DOT__mem_final_rdata 
        = ((0xffffffffffff00ffULL & vlSelf->ysyx_22040127_top__DOT__mem_final_rdata) 
           | ((QData)((IData)((0xffU & ((((- (IData)(
                                                     (0U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                          >> 8U))))) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                                                   >> 7U)))))) 
                                         | ((- (IData)(
                                                       ((1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                             >> 8U))) 
                                                        | (5U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                               >> 8U)))))) 
                                            & (IData)(
                                                      (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                                       >> 8U)))) 
                                        | ((- (IData)(
                                                      (((2U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                             >> 8U))) 
                                                        | (6U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                               >> 8U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                              >> 8U)))))) 
                                           & (IData)(
                                                     (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                                      >> 8U))))))) 
              << 8U));
    vlSelf->ysyx_22040127_top__DOT__mem_final_rdata 
        = ((0xffffffff0000ffffULL & vlSelf->ysyx_22040127_top__DOT__mem_final_rdata) 
           | ((QData)((IData)((0xffffU & ((((- (IData)(
                                                       (0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                            >> 8U))))) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                                                     >> 7U)))))) 
                                           | ((- (IData)(
                                                         (1U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                              >> 8U))))) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                                                       >> 0xfU))))))) 
                                          | ((- (IData)(
                                                        (((2U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                               >> 8U))) 
                                                          | (6U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                 >> 8U)))) 
                                                         | (3U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                                >> 8U)))))) 
                                             & (IData)(
                                                       (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                                        >> 0x10U))))))) 
              << 0x10U));
    vlSelf->ysyx_22040127_top__DOT__mem_final_rdata 
        = ((0xffffffffULL & vlSelf->ysyx_22040127_top__DOT__mem_final_rdata) 
           | ((QData)((IData)((((((- (IData)((0U == 
                                              (7U & 
                                               (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                >> 8U))))) 
                                  & (- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                                           >> 7U)))))) 
                                 | ((- (IData)((1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                    >> 8U))))) 
                                    & (- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                                             >> 0xfU))))))) 
                                | ((- (IData)((2U == 
                                               (7U 
                                                & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                   >> 8U))))) 
                                   & (- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                                            >> 0x1fU))))))) 
                               | ((- (IData)((3U == 
                                              (7U & 
                                               (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                >> 8U))))) 
                                  & (IData)((vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata 
                                             >> 0x20U)))))) 
              << 0x20U));
    vlSelf->ysyx_22040127_top__DOT__ex_allowin = (1U 
                                                  & ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__ex_valid)) 
                                                     | (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__ex_ready_go)));
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_valid 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__ex_ready_go) 
           & (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__ex_valid));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard2 
        = (((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U])) 
            & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U]) 
               == (0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                    >> 0x34U))))) & 
           (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
            >> 7U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard1 
        = (((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U])) 
            & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U]) 
               == (0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                    >> 0x2fU))))) & 
           (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
            >> 7U));
    __Vtemp_h1cb6cc72__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [0U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [1U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                [2U][0U]);
    __Vtemp_h1cb6cc72__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [0U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [1U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                [2U][1U]);
    __Vtemp_h1cb6cc72__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [0U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [1U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                [2U][2U]);
    __Vtemp_h1cb6cc72__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [0U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [1U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                [2U][3U]);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_ha56a360c__0, __Vtemp_h1cb6cc72__0, 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s[1U][0U] 
        = __Vtemp_ha56a360c__0[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s[1U][1U] 
        = __Vtemp_ha56a360c__0[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s[1U][2U] 
        = __Vtemp_ha56a360c__0[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s[1U][3U] 
        = __Vtemp_ha56a360c__0[3U];
    __Vtemp_hb4671bef__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [1U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [1U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [2U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [2U][0U]));
    __Vtemp_hb4671bef__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [1U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [1U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [2U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [2U][1U]));
    __Vtemp_hb4671bef__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [1U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [1U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [2U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [2U][2U]));
    __Vtemp_hb4671bef__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [1U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [1U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [2U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [2U][3U]));
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h1d16a762__0, __Vtemp_hb4671bef__0, 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c[1U][0U] 
        = __Vtemp_h1d16a762__0[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c[1U][1U] 
        = __Vtemp_h1d16a762__0[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c[1U][2U] 
        = __Vtemp_h1d16a762__0[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c[1U][3U] 
        = __Vtemp_h1d16a762__0[3U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s[0U][0U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
            [0U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
            [1U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
           [2U][0U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s[0U][1U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
            [0U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
            [1U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
           [2U][1U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s[0U][2U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
            [0U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
            [1U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
           [2U][2U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s[0U][3U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
            [0U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
            [1U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
           [2U][3U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c[0U][0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
             [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
             [1U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                          [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                          [2U][0U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                        [0U][0U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                        [2U][0U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c[0U][1U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
             [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
             [1U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                          [1U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                          [2U][1U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                        [0U][1U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                        [2U][1U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c[0U][2U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
             [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
             [1U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                          [1U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                          [2U][2U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                        [0U][2U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                        [2U][2U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c[0U][3U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
             [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
             [1U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                          [1U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                          [2U][3U])) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                        [0U][3U] & 
                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                        [2U][3U]));
    __Vtemp_he2978c3e__0[0U] = (IData)((((QData)((IData)(
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
    __Vtemp_he2978c3e__0[1U] = (((IData)((((QData)((IData)(
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
        = __Vtemp_he2978c3e__0[0U];
    vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[3U] 
        = __Vtemp_he2978c3e__0[1U];
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
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard2 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard2) 
           & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
              >> 5U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard1 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard1) 
           & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
              >> 5U));
    __Vtemp_h1f409a06__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][0U];
    __Vtemp_h1f409a06__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][1U];
    __Vtemp_h1f409a06__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][2U];
    __Vtemp_h1f409a06__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_he96a18d8__0, __Vtemp_h1f409a06__0, 1U);
    __Vtemp_h1f409a06__1[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][0U];
    __Vtemp_h1f409a06__1[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][1U];
    __Vtemp_h1f409a06__1[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][2U];
    __Vtemp_h1f409a06__1[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hcf17f604__0, __Vtemp_h1f409a06__1, 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c[0U][0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
             [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
             [1U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                          [1U][0U] & __Vtemp_he96a18d8__0[0U])) 
           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
              [0U][0U] & __Vtemp_hcf17f604__0[0U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c[0U][1U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
             [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
             [1U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                          [1U][1U] & __Vtemp_he96a18d8__0[1U])) 
           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
              [0U][1U] & __Vtemp_hcf17f604__0[1U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c[0U][2U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
             [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
             [1U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                          [1U][2U] & __Vtemp_he96a18d8__0[2U])) 
           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
              [0U][2U] & __Vtemp_hcf17f604__0[2U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c[0U][3U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
             [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
             [1U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                          [1U][3U] & __Vtemp_he96a18d8__0[3U])) 
           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
              [0U][3U] & __Vtemp_hcf17f604__0[3U]));
    __Vtemp_h1f409a06__2[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][0U];
    __Vtemp_h1f409a06__2[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][1U];
    __Vtemp_h1f409a06__2[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][2U];
    __Vtemp_h1f409a06__2[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_he78ee9ec__0, __Vtemp_h1f409a06__2, 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s[0U][0U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
            [0U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
            [1U][0U]) ^ __Vtemp_he78ee9ec__0[0U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s[0U][1U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
            [0U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
            [1U][1U]) ^ __Vtemp_he78ee9ec__0[1U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s[0U][2U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
            [0U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
            [1U][2U]) ^ __Vtemp_he78ee9ec__0[2U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s[0U][3U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
            [0U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
            [1U][3U]) ^ __Vtemp_he78ee9ec__0[3U]);
    __Vtemp_h1515b6a6__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
                                [1U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [4U][0U]);
    __Vtemp_h1515b6a6__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
                                [1U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [4U][1U]);
    __Vtemp_h1515b6a6__0[2U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
                                [1U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [4U][2U]);
    __Vtemp_h1515b6a6__0[3U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
                                [1U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [4U][3U]);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hd3fea8a1__0, __Vtemp_h1515b6a6__0, 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s[1U][0U] 
        = __Vtemp_hd3fea8a1__0[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s[1U][1U] 
        = __Vtemp_hd3fea8a1__0[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s[1U][2U] 
        = __Vtemp_hd3fea8a1__0[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s[1U][3U] 
        = __Vtemp_hd3fea8a1__0[3U];
    __Vtemp_hf91934b5__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
                                [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [4U][0U]);
    __Vtemp_hf91934b5__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
                                [1U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [4U][1U]);
    __Vtemp_hf91934b5__0[2U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
                                [1U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [4U][2U]);
    __Vtemp_hf91934b5__0[3U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
                                [1U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [4U][3U]);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_he527fb2f__0, __Vtemp_hf91934b5__0, 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c[1U][0U] 
        = __Vtemp_he527fb2f__0[0U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c[1U][1U] 
        = __Vtemp_he527fb2f__0[1U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c[1U][2U] 
        = __Vtemp_he527fb2f__0[2U];
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c[1U][3U] 
        = __Vtemp_he527fb2f__0[3U];
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard2 
        = (((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U])) 
            & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U]) 
               == (0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                    >> 0x34U))))) & 
           (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U] 
            >> 5U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard1 
        = (((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U])) 
            & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U]) 
               == (0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                    >> 0x2fU))))) & 
           (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U] 
            >> 5U));
    __Vtemp_h5a241080__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][0U];
    __Vtemp_h5a241080__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][1U];
    __Vtemp_h5a241080__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][2U];
    __Vtemp_h5a241080__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h2e2480e7__0, __Vtemp_h5a241080__0, 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[0U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
            [0U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
            [1U][0U]) ^ __Vtemp_h2e2480e7__0[0U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[1U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
            [0U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
            [1U][1U]) ^ __Vtemp_h2e2480e7__0[1U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[2U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
            [0U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
            [1U][2U]) ^ __Vtemp_h2e2480e7__0[2U]);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[3U] 
        = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
            [0U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
            [1U][3U]) ^ __Vtemp_h2e2480e7__0[3U]);
    __Vtemp_h5a241080__1[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][0U];
    __Vtemp_h5a241080__1[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][1U];
    __Vtemp_h5a241080__1[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][2U];
    __Vtemp_h5a241080__1[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hb3856489__0, __Vtemp_h5a241080__1, 1U);
    __Vtemp_h5a241080__2[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][0U];
    __Vtemp_h5a241080__2[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][1U];
    __Vtemp_h5a241080__2[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][2U];
    __Vtemp_h5a241080__2[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h6fd1215c__0, __Vtemp_h5a241080__2, 1U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c[0U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
             [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
             [1U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
                          [1U][0U] & __Vtemp_hb3856489__0[0U])) 
           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
              [0U][0U] & __Vtemp_h6fd1215c__0[0U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c[1U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
             [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
             [1U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
                          [1U][1U] & __Vtemp_hb3856489__0[1U])) 
           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
              [0U][1U] & __Vtemp_h6fd1215c__0[1U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c[2U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
             [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
             [1U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
                          [1U][2U] & __Vtemp_hb3856489__0[2U])) 
           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
              [0U][2U] & __Vtemp_h6fd1215c__0[2U]));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c[3U] 
        = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
             [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
             [1U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
                          [1U][3U] & __Vtemp_hb3856489__0[3U])) 
           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
              [0U][3U] & __Vtemp_h6fd1215c__0[3U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2_tmp) 
           | ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard2) 
              & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                 >> 5U)));
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
                            == (0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                 >> 0x34U))))) 
                        & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                           >> 5U)) ? vlSelf->ysyx_22040127_top__DOT__wb_reg_wdata
                        : vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf
                       [(0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                          >> 0x34U)))]))));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1_tmp) 
           | ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard1) 
              & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                 >> 5U)));
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
                            == (0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                 >> 0x2fU))))) 
                        & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                           >> 5U)) ? vlSelf->ysyx_22040127_top__DOT__wb_reg_wdata
                        : vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf
                       [(0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                          >> 0x2fU)))]))));
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
    vlSelf->ysyx_22040127_top__DOT__id_to_ex_valid 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_ready_go) 
           & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_valid));
    vlSelf->ysyx_22040127_top__DOT__id_allowin = (1U 
                                                  & ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_valid)) 
                                                     | ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_ready_go) 
                                                        & (IData)(vlSelf->ysyx_22040127_top__DOT__ex_allowin))));
    vlSelf->ysyx_22040127_top__DOT__id_branch_taken 
        = (((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken) 
            | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr)) 
           | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)));
    vlSelf->ysyx_22040127_top__DOT__if_allowin = (1U 
                                                  & ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__if_valid)) 
                                                     | (IData)(vlSelf->ysyx_22040127_top__DOT__id_allowin)));
}
