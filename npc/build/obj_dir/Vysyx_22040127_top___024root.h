// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040127_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040127_TOP___024ROOT_H_
#define VERILATED_VYSYX_22040127_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_22040127_top__Syms;
VL_MODULE(Vysyx_22040127_top___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(wb_valid,0,0);
        CData/*0:0*/ ysyx_22040127_top__DOT__id_ebreak;
        CData/*0:0*/ ysyx_22040127_top__DOT__ex_ebreak;
        CData/*0:0*/ ysyx_22040127_top__DOT__mem_ebreak;
        CData/*0:0*/ ysyx_22040127_top__DOT__wb_ebreak;
        CData/*0:0*/ ysyx_22040127_top__DOT__id_branch_taken;
        CData/*0:0*/ ysyx_22040127_top__DOT__id_jalr;
        CData/*0:0*/ ysyx_22040127_top__DOT__if_allowin;
        CData/*0:0*/ ysyx_22040127_top__DOT__id_allowin;
        CData/*0:0*/ ysyx_22040127_top__DOT__ex_allowin;
        CData/*0:0*/ ysyx_22040127_top__DOT__id_to_ex_valid;
        CData/*0:0*/ ysyx_22040127_top__DOT__ex_to_mem_valid;
        CData/*0:0*/ ysyx_22040127_top__DOT__id_flush;
        CData/*0:0*/ ysyx_22040127_top__DOT__ex_flush;
        CData/*0:0*/ ysyx_22040127_top__DOT__mem_flush;
        CData/*0:0*/ ysyx_22040127_top__DOT__if_valid;
        CData/*0:0*/ ysyx_22040127_top__DOT__dec__DOT__btype_taken;
        CData/*2:0*/ ysyx_22040127_top__DOT__dec__DOT__id_inst_type;
        CData/*0:0*/ ysyx_22040127_top__DOT__dec__DOT__id_jalr;
        CData/*0:0*/ ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard1;
        CData/*0:0*/ ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard2;
        CData/*0:0*/ ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard1;
        CData/*0:0*/ ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard2;
        CData/*0:0*/ ysyx_22040127_top__DOT__dec__DOT__load_use_hazard1;
        CData/*0:0*/ ysyx_22040127_top__DOT__dec__DOT__load_use_hazard2;
        CData/*0:0*/ ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1_tmp;
        CData/*0:0*/ ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2_tmp;
        CData/*0:0*/ ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1;
        CData/*0:0*/ ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2;
        CData/*0:0*/ ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard1_tmp;
        CData/*0:0*/ ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard2_tmp;
        CData/*0:0*/ ysyx_22040127_top__DOT__dec__DOT__id_ready_go;
        CData/*0:0*/ ysyx_22040127_top__DOT__dec__DOT__id_valid;
        CData/*2:0*/ ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_22040127_top__DOT__exe__DOT__ex_ready_go;
        CData/*0:0*/ ysyx_22040127_top__DOT__exe__DOT__mul_type;
        CData/*0:0*/ ysyx_22040127_top__DOT__exe__DOT__div_type;
        CData/*0:0*/ ysyx_22040127_top__DOT__exe__DOT__div_sign;
        CData/*0:0*/ ysyx_22040127_top__DOT__exe__DOT__mul_stage2;
        CData/*0:0*/ ysyx_22040127_top__DOT__exe__DOT__mul_ok;
        CData/*0:0*/ ysyx_22040127_top__DOT__exe__DOT__ex_valid;
        CData/*0:0*/ ysyx_22040127_top__DOT__exe__DOT__div_ready;
        CData/*1:0*/ ysyx_22040127_top__DOT__exe__DOT__div_state;
        CData/*5:0*/ ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in;
        CData/*6:0*/ ysyx_22040127_top__DOT__exe__DOT__div__DOT__cnt;
        CData/*0:0*/ ysyx_22040127_top__DOT__mem__DOT__mem_valid;
        CData/*7:0*/ ysyx_22040127_top__DOT__mem__DOT__addr_lowmask;
        CData/*7:0*/ ysyx_22040127_top__DOT__mem__DOT__wmask;
        CData/*1:0*/ ysyx_22040127_top__DOT__wb__DOT__mstatus_mpp;
        CData/*0:0*/ ysyx_22040127_top__DOT__wb__DOT__mstatus_mpie;
        CData/*0:0*/ ysyx_22040127_top__DOT__wb__DOT__mstatus_mie;
        CData/*0:0*/ ysyx_22040127_top__DOT__wb__DOT__wb_flush;
        CData/*0:0*/ __Vclklast__TOP__clk;
        VL_OUT(if_pc,31,0);
        VL_OUT(wb_pc,31,0);
        IData/*31:0*/ ysyx_22040127_top__DOT__if_instruction;
        VlWide<9>/*261:0*/ ysyx_22040127_top__DOT__ex_to_mem_bus;
        VlWide<6>/*191:0*/ ysyx_22040127_top__DOT__mem_to_wb_bus;
        IData/*31:0*/ ysyx_22040127_top__DOT__exe__DOT__itype_alu_op;
        IData/*31:0*/ ysyx_22040127_top__DOT__exe__DOT__addw_result;
        IData/*31:0*/ ysyx_22040127_top__DOT__exe__DOT__subw_result;
    };
    struct {
        IData/*31:0*/ ysyx_22040127_top__DOT__exe__DOT__src1_sllw;
        IData/*31:0*/ ysyx_22040127_top__DOT__exe__DOT__src1_srlw;
        VlWide<9>/*274:0*/ ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg;
        VlWide<3>/*64:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT__x_ext;
        VlWide<3>/*66:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b0____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b1____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b2____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b3____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b4____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b5____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b6____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b7____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b8____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b9____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b10____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b11____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b12____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b13____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b14____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b15____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b16____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b17____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b18____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b19____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b20____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b21____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b22____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b23____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b24____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b25____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b26____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b27____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b28____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b29____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b30____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b31____pinNumber5;
        VlWide<4>/*127:0*/ ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b32____pinNumber5;
        VlWide<5>/*128:0*/ ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend;
        VlWide<3>/*64:0*/ ysyx_22040127_top__DOT__exe__DOT__div__DOT__subres;
        VlWide<9>/*261:0*/ ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg;
        VlWide<6>/*191:0*/ ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg;
        VL_OUT64(mepc,63,0);
        VL_OUT64(mtvec,63,0);
        VL_OUT64(mstatus,63,0);
        VL_OUT64(mcause,63,0);
        VL_OUT64(mie,63,0);
        VL_OUT64(mip,63,0);
        VL_OUT64(mscratch,63,0);
        VL_OUT64(mtval,63,0);
        QData/*63:0*/ ysyx_22040127_top__DOT__mhartid;
        QData/*63:0*/ ysyx_22040127_top__DOT__if_pcdata;
        QData/*63:0*/ ysyx_22040127_top__DOT__reg_wdata;
        QData/*63:0*/ ysyx_22040127_top__DOT__alu_output;
        QData/*63:0*/ ysyx_22040127_top__DOT__mem_final_rdata;
        QData/*63:0*/ ysyx_22040127_top__DOT__wb_reg_wdata;
        QData/*63:0*/ ysyx_22040127_top__DOT__wb_csrwdata;
        QData/*63:0*/ ysyx_22040127_top__DOT__wb_csrrdata;
        QData/*63:0*/ ysyx_22040127_top__DOT__dec__DOT__id_imm;
        QData/*63:0*/ ysyx_22040127_top__DOT__dec__DOT__id_alu_input1;
        QData/*63:0*/ ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final;
    };
    struct {
        QData/*63:0*/ ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final;
        QData/*63:0*/ ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg;
        QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT__rtype_calc_result;
        QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT__itype_calc_result;
        QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op;
        QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT__sext_addw_result;
        QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT__sext_src1_sraw;
        QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT__sext_src1_sllw;
        QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT__sext_src1_srlw;
        QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT__res_sra;
        QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT__res_srl;
        QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT__res_sll;
        QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber4;
        QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber3;
        QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT__div__DOT__divisor;
        QData/*63:0*/ ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data;
        QData/*63:0*/ ysyx_22040127_top__DOT__mem__DOT__rawdata;
        QData/*63:0*/ __Vtask_ysyx_22040127_top__DOT__pmem_read__0__doubly_aligned_data;
        QData/*63:0*/ __Vtask_ysyx_22040127_top__DOT__pmem_read__1__doubly_aligned_data;
        QData/*63:0*/ __Vtask_ysyx_22040127_top__DOT__mem__DOT__pmem_read__4__doubly_aligned_data;
        VlUnpacked<SData/*9:0*/, 12> ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 12> ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 12> ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<4>/*127:0*/, 33> ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum;
        VlUnpacked<VlWide<4>/*127:0*/, 11> ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s;
        VlUnpacked<VlWide<4>/*127:0*/, 11> ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c;
        VlUnpacked<VlWide<4>/*127:0*/, 7> ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s;
        VlUnpacked<VlWide<4>/*127:0*/, 7> ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c;
        VlUnpacked<VlWide<4>/*127:0*/, 5> ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s;
        VlUnpacked<VlWide<4>/*127:0*/, 5> ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c;
        VlUnpacked<VlWide<4>/*127:0*/, 3> ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s;
        VlUnpacked<VlWide<4>/*127:0*/, 3> ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c;
        VlUnpacked<VlWide<4>/*127:0*/, 3> ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s;
        VlUnpacked<VlWide<4>/*127:0*/, 3> ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c;
        VlUnpacked<VlWide<4>/*127:0*/, 2> ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s;
        VlUnpacked<VlWide<4>/*127:0*/, 2> ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22040127_top__DOT__wb__DOT__rf;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vysyx_22040127_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vysyx_22040127_top___024root(const char* name);
    ~Vysyx_22040127_top___024root();
    VL_UNCOPYABLE(Vysyx_22040127_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040127_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
