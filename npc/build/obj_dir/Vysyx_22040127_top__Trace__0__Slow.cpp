// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040127_top__Syms.h"


VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_init_sub__TOP__0(Vysyx_22040127_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+161,"clk", false,-1);
    tracep->declBit(c+162,"rst", false,-1);
    tracep->declBus(c+163,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_22040127_top ");
    tracep->declBit(c+161,"clk", false,-1);
    tracep->declBit(c+162,"rst", false,-1);
    tracep->declBus(c+163,"pc", false,-1, 31,0);
    tracep->declQuad(c+37,"pcdata", false,-1, 63,0);
    tracep->declBus(c+39,"instruction", false,-1, 31,0);
    tracep->declQuad(c+164,"reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+40,"alu_output", false,-1, 63,0);
    tracep->declBus(c+166,"branch_result", false,-1, 31,0);
    tracep->declBit(c+42,"reg_wen", false,-1);
    tracep->declBus(c+43,"rd", false,-1, 4,0);
    tracep->declBus(c+44,"rs1", false,-1, 4,0);
    tracep->declBus(c+45,"rs2", false,-1, 4,0);
    tracep->declBus(c+46,"inst_type", false,-1, 2,0);
    tracep->declQuad(c+47,"imm", false,-1, 63,0);
    tracep->declBit(c+49,"imm_src1", false,-1);
    tracep->declBit(c+50,"imm_src2", false,-1);
    tracep->declBit(c+51,"ebreak", false,-1);
    tracep->declQuad(c+52,"alu_input1", false,-1, 63,0);
    tracep->declQuad(c+54,"alu_input2", false,-1, 63,0);
    tracep->declQuad(c+56,"reg_data1", false,-1, 63,0);
    tracep->declQuad(c+58,"reg_data2", false,-1, 63,0);
    tracep->declBit(c+60,"jalr", false,-1);
    tracep->declBit(c+61,"beq", false,-1);
    tracep->declBit(c+62,"bne", false,-1);
    tracep->declBit(c+63,"branch_taken", false,-1);
    tracep->declBit(c+64,"lb", false,-1);
    tracep->declBit(c+65,"lh", false,-1);
    tracep->declBit(c+66,"lw", false,-1);
    tracep->declBit(c+67,"ld", false,-1);
    tracep->declBit(c+68,"lbu", false,-1);
    tracep->declBit(c+69,"lhu", false,-1);
    tracep->declBit(c+70,"lwu", false,-1);
    tracep->declBit(c+71,"sb", false,-1);
    tracep->declBit(c+72,"sh", false,-1);
    tracep->declBit(c+73,"sw", false,-1);
    tracep->declBit(c+74,"sd", false,-1);
    tracep->declQuad(c+58,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+40,"mem_waddr", false,-1, 63,0);
    tracep->declQuad(c+40,"mem_raddr", false,-1, 63,0);
    tracep->declQuad(c+75,"loaded_data", false,-1, 63,0);
    tracep->declBit(c+77,"memread", false,-1);
    tracep->declBit(c+78,"memwrite", false,-1);
    tracep->declBus(c+167,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+168,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+169,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+170,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+171,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+172,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+173,"TYPE_N", false,-1, 2,0);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+39,"instruction", false,-1, 31,0);
    tracep->declBit(c+161,"clk", false,-1);
    tracep->declBit(c+162,"rst", false,-1);
    tracep->declBit(c+42,"reg_wen", false,-1);
    tracep->declBit(c+77,"memread", false,-1);
    tracep->declBus(c+43,"rd", false,-1, 4,0);
    tracep->declBus(c+44,"rs1", false,-1, 4,0);
    tracep->declBus(c+45,"rs2", false,-1, 4,0);
    tracep->declBus(c+46,"inst_type", false,-1, 2,0);
    tracep->declQuad(c+47,"imm", false,-1, 63,0);
    tracep->declBus(c+167,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+168,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+169,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+170,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+171,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+172,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+173,"TYPE_N", false,-1, 2,0);
    tracep->pushNamePrefix("inst_mux ");
    tracep->declBus(c+174,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+175,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+176,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+46,"out", false,-1, 2,0);
    tracep->declBus(c+79,"key", false,-1, 6,0);
    tracep->declBus(c+167,"default_out", false,-1, 2,0);
    tracep->declArray(c+177,"lut", false,-1, 119,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+174,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+175,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+176,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+181,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+46,"out", false,-1, 2,0);
    tracep->declBus(c+79,"key", false,-1, 6,0);
    tracep->declBus(c+167,"default_out", false,-1, 2,0);
    tracep->declArray(c+177,"lut", false,-1, 119,0);
    tracep->declBus(c+182,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+13+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+25+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+80,"lut_out", false,-1, 2,0);
    tracep->declBit(c+81,"hit", false,-1);
    tracep->declBus(c+183,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("exe ");
    tracep->declBus(c+39,"instruction", false,-1, 31,0);
    tracep->declBit(c+161,"clk", false,-1);
    tracep->declBit(c+162,"rst", false,-1);
    tracep->declBus(c+163,"pc", false,-1, 31,0);
    tracep->declQuad(c+52,"src1", false,-1, 63,0);
    tracep->declQuad(c+54,"src2", false,-1, 63,0);
    tracep->declQuad(c+47,"imm", false,-1, 63,0);
    tracep->declBus(c+46,"inst_type", false,-1, 2,0);
    tracep->declQuad(c+40,"alu_output", false,-1, 63,0);
    tracep->declBus(c+167,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+168,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+169,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+170,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+171,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+172,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+173,"TYPE_N", false,-1, 2,0);
    tracep->declBus(c+184,"op_add", false,-1, 5,0);
    tracep->declBus(c+185,"op_and", false,-1, 5,0);
    tracep->declBus(c+186,"op_or", false,-1, 5,0);
    tracep->declBus(c+187,"op_addw", false,-1, 5,0);
    tracep->declBus(c+188,"op_sub", false,-1, 5,0);
    tracep->declQuad(c+82,"calc_result", false,-1, 63,0);
    tracep->declQuad(c+84,"alu_op", false,-1, 63,0);
    tracep->declQuad(c+86,"sub", false,-1, 63,0);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+88,"in", false,-1, 5,0);
    tracep->declQuad(c+84,"out", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+161,"clk", false,-1);
    tracep->declBit(c+78,"memwrite", false,-1);
    tracep->declQuad(c+58,"wdata", false,-1, 63,0);
    tracep->declQuad(c+40,"waddr", false,-1, 63,0);
    tracep->declQuad(c+40,"raddr", false,-1, 63,0);
    tracep->declBit(c+64,"lb", false,-1);
    tracep->declBit(c+65,"lh", false,-1);
    tracep->declBit(c+66,"lw", false,-1);
    tracep->declBit(c+67,"ld", false,-1);
    tracep->declBit(c+68,"lbu", false,-1);
    tracep->declBit(c+69,"lhu", false,-1);
    tracep->declBit(c+70,"lwu", false,-1);
    tracep->declQuad(c+75,"loaded_data", false,-1, 63,0);
    tracep->declBit(c+71,"sb", false,-1);
    tracep->declBit(c+72,"sh", false,-1);
    tracep->declBit(c+73,"sw", false,-1);
    tracep->declBit(c+74,"sd", false,-1);
    tracep->declQuad(c+89,"doubly_aligned_data", false,-1, 63,0);
    tracep->declQuad(c+91,"rdata", false,-1, 63,0);
    tracep->declBus(c+93,"addr_lowmask", false,-1, 7,0);
    tracep->declBus(c+94,"wmask", false,-1, 7,0);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+95,"in", false,-1, 2,0);
    tracep->declBus(c+93,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regs ");
    tracep->declBus(c+189,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+190,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+161,"clk", false,-1);
    tracep->declBit(c+42,"wen", false,-1);
    tracep->declQuad(c+164,"wdata", false,-1, 63,0);
    tracep->declBus(c+43,"waddr", false,-1, 4,0);
    tracep->declBus(c+44,"raddr1", false,-1, 4,0);
    tracep->declBus(c+45,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+56,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+58,"rdata2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+96+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+160,"non_zerow", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_init_top(Vysyx_22040127_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_22040127_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22040127_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22040127_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_register(Vysyx_22040127_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_22040127_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_22040127_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_22040127_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_full_sub_0(Vysyx_22040127_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_22040127_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040127_top___024root*>(voidSelf);
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_22040127_top___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_full_sub_0(Vysyx_22040127_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_hdbbc8edc__0;
    // Body
    tracep->fullSData(oldp+1,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[0]),10);
    tracep->fullSData(oldp+2,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[1]),10);
    tracep->fullSData(oldp+3,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[2]),10);
    tracep->fullSData(oldp+4,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[3]),10);
    tracep->fullSData(oldp+5,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[4]),10);
    tracep->fullSData(oldp+6,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[5]),10);
    tracep->fullSData(oldp+7,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[6]),10);
    tracep->fullSData(oldp+8,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[7]),10);
    tracep->fullSData(oldp+9,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[8]),10);
    tracep->fullSData(oldp+10,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[9]),10);
    tracep->fullSData(oldp+11,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[10]),10);
    tracep->fullSData(oldp+12,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[11]),10);
    tracep->fullCData(oldp+13,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0]),7);
    tracep->fullCData(oldp+14,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[1]),7);
    tracep->fullCData(oldp+15,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[2]),7);
    tracep->fullCData(oldp+16,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[3]),7);
    tracep->fullCData(oldp+17,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[4]),7);
    tracep->fullCData(oldp+18,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[5]),7);
    tracep->fullCData(oldp+19,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[6]),7);
    tracep->fullCData(oldp+20,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[7]),7);
    tracep->fullCData(oldp+21,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[8]),7);
    tracep->fullCData(oldp+22,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[9]),7);
    tracep->fullCData(oldp+23,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[10]),7);
    tracep->fullCData(oldp+24,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[11]),7);
    tracep->fullCData(oldp+25,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0]),3);
    tracep->fullCData(oldp+26,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[1]),3);
    tracep->fullCData(oldp+27,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[2]),3);
    tracep->fullCData(oldp+28,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[3]),3);
    tracep->fullCData(oldp+29,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[4]),3);
    tracep->fullCData(oldp+30,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[5]),3);
    tracep->fullCData(oldp+31,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[6]),3);
    tracep->fullCData(oldp+32,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[7]),3);
    tracep->fullCData(oldp+33,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[8]),3);
    tracep->fullCData(oldp+34,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[9]),3);
    tracep->fullCData(oldp+35,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[10]),3);
    tracep->fullCData(oldp+36,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[11]),3);
    tracep->fullQData(oldp+37,(vlSelf->ysyx_22040127_top__DOT__pcdata),64);
    tracep->fullIData(oldp+39,(vlSelf->ysyx_22040127_top__DOT__instruction),32);
    tracep->fullQData(oldp+40,(vlSelf->ysyx_22040127_top__DOT__alu_output),64);
    tracep->fullBit(oldp+42,((1U & ((((~ (IData)((0U 
                                                  != (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))) 
                                      | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))) 
                                     | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))) 
                                    | (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))))));
    tracep->fullCData(oldp+43,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                         >> 7U))),5);
    tracep->fullCData(oldp+44,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+45,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+46,(vlSelf->ysyx_22040127_top__DOT__inst_type),3);
    tracep->fullQData(oldp+47,(vlSelf->ysyx_22040127_top__DOT__imm),64);
    tracep->fullBit(oldp+49,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                              | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))));
    tracep->fullBit(oldp+50,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                              | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))));
    tracep->fullBit(oldp+51,((((6U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                               & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                  >> 0x14U)) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0xffefff80U 
                                                            & vlSelf->ysyx_22040127_top__DOT__instruction)))))));
    tracep->fullQData(oldp+52,(vlSelf->ysyx_22040127_top__DOT__alu_input1),64);
    tracep->fullQData(oldp+54,(vlSelf->ysyx_22040127_top__DOT__alu_input2),64);
    tracep->fullQData(oldp+56,(vlSelf->ysyx_22040127_top__DOT__reg_data1),64);
    tracep->fullQData(oldp+58,(vlSelf->ysyx_22040127_top__DOT__reg_data2),64);
    tracep->fullBit(oldp+60,(vlSelf->ysyx_22040127_top__DOT__jalr));
    tracep->fullBit(oldp+61,((1U & (~ (IData)((0U != 
                                               (7U 
                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                   >> 0xcU))))))));
    tracep->fullBit(oldp+62,((1U & ((~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                    >> 0xdU))))) 
                                    & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                       >> 0xcU)))));
    tracep->fullBit(oldp+63,((((~ (IData)((0U != (7U 
                                                  & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                     >> 0xcU))))) 
                               & (vlSelf->ysyx_22040127_top__DOT__reg_data1 
                                  == vlSelf->ysyx_22040127_top__DOT__reg_data2)) 
                              | (((~ (IData)((0U != 
                                              (3U & 
                                               (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                >> 0xdU))))) 
                                  & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                     >> 0xcU)) & (vlSelf->ysyx_22040127_top__DOT__reg_data1 
                                                  != vlSelf->ysyx_22040127_top__DOT__reg_data2)))));
    tracep->fullBit(oldp+64,((0U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+65,((1U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+66,((2U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+67,((3U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+68,((4U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+69,((5U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+70,((6U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+71,((0U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+72,((1U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+73,((2U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+74,((3U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullQData(oldp+75,(vlSelf->ysyx_22040127_top__DOT__loaded_data),64);
    tracep->fullBit(oldp+77,((IData)((0U == (0x7cU 
                                             & vlSelf->ysyx_22040127_top__DOT__instruction)))));
    tracep->fullBit(oldp+78,((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))));
    tracep->fullCData(oldp+79,((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction)),7);
    tracep->fullCData(oldp+80,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out),3);
    tracep->fullBit(oldp+81,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit));
    tracep->fullQData(oldp+82,(((((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
                                                                 >> 1U)))))) 
                                  & (((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(
                                                                             (vlSelf->ysyx_22040127_top__DOT__alu_input1 
                                                                              >> 0x1fU)) 
                                                                     ^ (IData)(
                                                                               (vlSelf->ysyx_22040127_top__DOT__alu_input2 
                                                                                >> 0x1fU)))))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((IData)(vlSelf->ysyx_22040127_top__DOT__alu_input1) 
                                                                   + (IData)(vlSelf->ysyx_22040127_top__DOT__alu_input2)))))) 
                                 | ((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op))))) 
                                    & (vlSelf->ysyx_22040127_top__DOT__alu_input1 
                                       + vlSelf->ysyx_22040127_top__DOT__alu_input2))) 
                                | ((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
                                                                  >> 0x20U)))))) 
                                   & (vlSelf->ysyx_22040127_top__DOT__alu_input1 
                                      - vlSelf->ysyx_22040127_top__DOT__alu_input2)))),64);
    tracep->fullQData(oldp+84,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op),64);
    tracep->fullQData(oldp+86,((vlSelf->ysyx_22040127_top__DOT__alu_input1 
                                - vlSelf->ysyx_22040127_top__DOT__alu_input2)),64);
    tracep->fullCData(oldp+88,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in),6);
    tracep->fullQData(oldp+89,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data),64);
    tracep->fullQData(oldp+91,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__rdata),64);
    tracep->fullCData(oldp+93,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask),8);
    tracep->fullCData(oldp+94,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask),8);
    tracep->fullCData(oldp+95,((7U & (IData)(vlSelf->ysyx_22040127_top__DOT__alu_output))),3);
    tracep->fullQData(oldp+96,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[0]),64);
    tracep->fullQData(oldp+98,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[1]),64);
    tracep->fullQData(oldp+100,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[2]),64);
    tracep->fullQData(oldp+102,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[3]),64);
    tracep->fullQData(oldp+104,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[4]),64);
    tracep->fullQData(oldp+106,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[5]),64);
    tracep->fullQData(oldp+108,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[6]),64);
    tracep->fullQData(oldp+110,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[7]),64);
    tracep->fullQData(oldp+112,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[8]),64);
    tracep->fullQData(oldp+114,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[9]),64);
    tracep->fullQData(oldp+116,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[10]),64);
    tracep->fullQData(oldp+118,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[11]),64);
    tracep->fullQData(oldp+120,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[12]),64);
    tracep->fullQData(oldp+122,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[13]),64);
    tracep->fullQData(oldp+124,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[14]),64);
    tracep->fullQData(oldp+126,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[15]),64);
    tracep->fullQData(oldp+128,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[16]),64);
    tracep->fullQData(oldp+130,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[17]),64);
    tracep->fullQData(oldp+132,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[18]),64);
    tracep->fullQData(oldp+134,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[19]),64);
    tracep->fullQData(oldp+136,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[20]),64);
    tracep->fullQData(oldp+138,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[21]),64);
    tracep->fullQData(oldp+140,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[22]),64);
    tracep->fullQData(oldp+142,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[23]),64);
    tracep->fullQData(oldp+144,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[24]),64);
    tracep->fullQData(oldp+146,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[25]),64);
    tracep->fullQData(oldp+148,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[26]),64);
    tracep->fullQData(oldp+150,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[27]),64);
    tracep->fullQData(oldp+152,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[28]),64);
    tracep->fullQData(oldp+154,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[29]),64);
    tracep->fullQData(oldp+156,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[30]),64);
    tracep->fullQData(oldp+158,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[31]),64);
    tracep->fullBit(oldp+160,((0U != (0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                               >> 7U)))));
    tracep->fullBit(oldp+161,(vlSelf->clk));
    tracep->fullBit(oldp+162,(vlSelf->rst));
    tracep->fullIData(oldp+163,(vlSelf->pc),32);
    tracep->fullQData(oldp+164,(((IData)(vlSelf->ysyx_22040127_top__DOT__jalr)
                                  ? (QData)((IData)(
                                                    ((IData)(4U) 
                                                     + vlSelf->pc)))
                                  : ((IData)((0U == 
                                              (0x7cU 
                                               & vlSelf->ysyx_22040127_top__DOT__instruction)))
                                      ? vlSelf->ysyx_22040127_top__DOT__loaded_data
                                      : vlSelf->ysyx_22040127_top__DOT__alu_output))),64);
    tracep->fullIData(oldp+166,(((((~ (IData)((0U != 
                                               (7U 
                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                   >> 0xcU))))) 
                                   & (vlSelf->ysyx_22040127_top__DOT__reg_data1 
                                      == vlSelf->ysyx_22040127_top__DOT__reg_data2)) 
                                  | (((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                      >> 0xdU))))) 
                                      & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                         >> 0xcU)) 
                                     & (vlSelf->ysyx_22040127_top__DOT__reg_data1 
                                        != vlSelf->ysyx_22040127_top__DOT__reg_data2)))
                                  ? (vlSelf->pc + (IData)(vlSelf->ysyx_22040127_top__DOT__imm))
                                  : ((IData)(4U) + vlSelf->pc))),32);
    tracep->fullCData(oldp+167,(0U),3);
    tracep->fullCData(oldp+168,(1U),3);
    tracep->fullCData(oldp+169,(2U),3);
    tracep->fullCData(oldp+170,(3U),3);
    tracep->fullCData(oldp+171,(4U),3);
    tracep->fullCData(oldp+172,(5U),3);
    tracep->fullCData(oldp+173,(6U),3);
    tracep->fullIData(oldp+174,(0xcU),32);
    tracep->fullIData(oldp+175,(7U),32);
    tracep->fullIData(oldp+176,(3U),32);
    __Vtemp_hdbbc8edc__0[0U] = 0x39e46b1dU;
    __Vtemp_hdbbc8edc__0[1U] = 0x8deddc67U;
    __Vtemp_hdbbc8edc__0[2U] = 0x60980633U;
    __Vtemp_hdbbc8edc__0[3U] = 0x2e5b93U;
    tracep->fullWData(oldp+177,(__Vtemp_hdbbc8edc__0),120);
    tracep->fullIData(oldp+181,(1U),32);
    tracep->fullIData(oldp+182,(0xaU),32);
    tracep->fullIData(oldp+183,(0xcU),32);
    tracep->fullCData(oldp+184,(0U),6);
    tracep->fullCData(oldp+185,(2U),6);
    tracep->fullCData(oldp+186,(0xcU),6);
    tracep->fullCData(oldp+187,(1U),6);
    tracep->fullCData(oldp+188,(0x20U),6);
    tracep->fullIData(oldp+189,(5U),32);
    tracep->fullIData(oldp+190,(0x40U),32);
}
