// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040127_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040127_top___024root.h"

void Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__wb__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

VL_ATTR_COLD void Vysyx_22040127_top___024root___initial__TOP__1(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___initial__TOP__1\n"); );
    // Body
    Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__wb__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf);
}

VL_ATTR_COLD void Vysyx_22040127_top___024root___initial__TOP__0(Vysyx_22040127_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_22040127_top___024root___eval_initial(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___eval_initial\n"); );
    // Body
    Vysyx_22040127_top___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vysyx_22040127_top___024root___initial__TOP__1(vlSelf);
}

VL_ATTR_COLD void Vysyx_22040127_top___024root___settle__TOP__0(Vysyx_22040127_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_22040127_top___024root___eval_settle(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___eval_settle\n"); );
    // Body
    Vysyx_22040127_top___024root___settle__TOP__0(vlSelf);
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
    vlSelf->ysyx_22040127_top__DOT__mhartid = 0;
    vlSelf->ysyx_22040127_top__DOT__if_pcdata = 0;
    vlSelf->ysyx_22040127_top__DOT__if_instruction = 0;
    vlSelf->ysyx_22040127_top__DOT__id_ebreak = 0;
    vlSelf->ysyx_22040127_top__DOT__ex_ebreak = 0;
    vlSelf->ysyx_22040127_top__DOT__mem_ebreak = 0;
    vlSelf->ysyx_22040127_top__DOT__wb_ebreak = 0;
    vlSelf->ysyx_22040127_top__DOT__reg_wdata = 0;
    vlSelf->ysyx_22040127_top__DOT__alu_output = 0;
    vlSelf->ysyx_22040127_top__DOT__id_branch_taken = 0;
    vlSelf->ysyx_22040127_top__DOT__id_jalr = 0;
    vlSelf->ysyx_22040127_top__DOT__if_allowin = 0;
    vlSelf->ysyx_22040127_top__DOT__id_allowin = 0;
    vlSelf->ysyx_22040127_top__DOT__ex_allowin = 0;
    vlSelf->ysyx_22040127_top__DOT__ex_ready_go = 0;
    vlSelf->ysyx_22040127_top__DOT__id_to_ex_valid = 0;
    vlSelf->ysyx_22040127_top__DOT__ex_to_mem_valid = 0;
    vlSelf->ysyx_22040127_top__DOT__id_flush = 0;
    vlSelf->ysyx_22040127_top__DOT__ex_flush = 0;
    vlSelf->ysyx_22040127_top__DOT__mem_flush = 0;
    VL_ZERO_RESET_W(262, vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus);
    VL_ZERO_RESET_W(192, vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus);
    vlSelf->ysyx_22040127_top__DOT__mem_final_rdata = 0;
    vlSelf->ysyx_22040127_top__DOT__wb_reg_wdata = 0;
    vlSelf->ysyx_22040127_top__DOT__wb_csrwdata = 0;
    vlSelf->ysyx_22040127_top__DOT__wb_csrrdata = 0;
    vlSelf->ysyx_22040127_top__DOT__diff_output_ready = 0;
    vlSelf->ysyx_22040127_top__DOT__cache_state = 0;
    vlSelf->ysyx_22040127_top__DOT__if_valid = 0;
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
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
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
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_stage2 = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_ok = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__ex_valid = 0;
    VL_ZERO_RESET_W(275, vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_ready = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_state = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__cache_readygo = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sra = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_srl = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sll = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber4 = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber3 = 0;
    VL_ZERO_RESET_W(65, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__x_ext);
    VL_ZERO_RESET_W(67, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext);
    for (int __Vi0=0; __Vi0<33; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c[__Vi0]);
    }
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b0____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b1____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b2____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b3____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b4____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b5____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b6____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b7____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b8____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b9____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b10____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b11____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b12____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b13____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b14____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b15____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b16____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b17____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b18____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b19____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b20____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b21____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b22____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b23____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b24____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b25____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b26____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b27____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b28____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b29____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b30____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b31____pinNumber5);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b32____pinNumber5);
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
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__sb = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__sh = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__sw = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__sd = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_wdata = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_valid = 0;
    VL_ZERO_RESET_W(262, vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg);
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_wmask = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_size = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT____Vcellinp__dcache__input_valid = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__input_size_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__input_offset_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0hit_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1hit_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__mem_addr = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_req_data);
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__mem_wen = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__mem_strb = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_res_valid = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_req_wen = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_req_strb = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_req_valid = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_req_addr = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_mrdata);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0D[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1D[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0V[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1V[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0tags[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1tags[__Vi0] = 0;
    }
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_index_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_offset_reg = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_strb);
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_wen_way0 = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_wen_way1 = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_wdata);
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_miss = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_wen_way0_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_wen_way1_reg = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__ex_cache_strb = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_rdata_way0);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_rdata_way1);
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0hit = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1hit = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0dirty = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1dirty = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0valid = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1valid = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__ex_cache_wdata = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_raw_way0 = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_raw_way1 = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_raw = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cnt = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__dcache_way1__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__dcache_way2__DOT__ram[__Vi0]);
    }
    vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpp = 0;
    vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpie = 0;
    vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mie = 0;
    vlSelf->ysyx_22040127_top__DOT__wb__DOT__wb_flush = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[__Vi0] = 0;
    }
    VL_ZERO_RESET_W(192, vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg);
    vlSelf->__Vtask_ysyx_22040127_top__DOT__pmem_read__0__doubly_aligned_data = 0;
    vlSelf->__Vtask_ysyx_22040127_top__DOT__pmem_read__1__doubly_aligned_data = 0;
    vlSelf->__Vtask_ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__pmem_read__4__doubly_aligned_data = 0;
    vlSelf->__Vtask_ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__pmem_read__5__doubly_aligned_data = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
