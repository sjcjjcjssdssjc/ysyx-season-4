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
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declBus(c+155,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_22040127_top ");
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declBus(c+155,"pc", false,-1, 31,0);
    tracep->declQuad(c+31,"pcdata", false,-1, 63,0);
    tracep->declBus(c+33,"instruction", false,-1, 31,0);
    tracep->declQuad(c+156,"reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+34,"alu_output", false,-1, 63,0);
    tracep->declBus(c+158,"branch_result", false,-1, 31,0);
    tracep->declBit(c+36,"reg_wen", false,-1);
    tracep->declBus(c+37,"rd", false,-1, 4,0);
    tracep->declBus(c+38,"rs1", false,-1, 4,0);
    tracep->declBus(c+39,"rs2", false,-1, 4,0);
    tracep->declBus(c+40,"inst_type", false,-1, 2,0);
    tracep->declQuad(c+41,"imm", false,-1, 63,0);
    tracep->declBit(c+43,"imm_src1", false,-1);
    tracep->declBit(c+44,"imm_src2", false,-1);
    tracep->declBit(c+45,"ebreak", false,-1);
    tracep->declQuad(c+46,"alu_input1", false,-1, 63,0);
    tracep->declQuad(c+48,"alu_input2", false,-1, 63,0);
    tracep->declQuad(c+50,"reg_data1", false,-1, 63,0);
    tracep->declQuad(c+52,"reg_data2", false,-1, 63,0);
    tracep->declBit(c+54,"jalr", false,-1);
    tracep->declBit(c+55,"beq", false,-1);
    tracep->declBit(c+56,"bne", false,-1);
    tracep->declBit(c+57,"branch_taken", false,-1);
    tracep->declBit(c+58,"lb", false,-1);
    tracep->declBit(c+59,"lh", false,-1);
    tracep->declBit(c+60,"lw", false,-1);
    tracep->declBit(c+61,"ld", false,-1);
    tracep->declBit(c+62,"lbu", false,-1);
    tracep->declBit(c+63,"lhu", false,-1);
    tracep->declBit(c+64,"lwu", false,-1);
    tracep->declBit(c+65,"sb", false,-1);
    tracep->declBit(c+66,"sh", false,-1);
    tracep->declBit(c+67,"sw", false,-1);
    tracep->declBit(c+68,"sd", false,-1);
    tracep->declQuad(c+52,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+34,"mem_waddr", false,-1, 63,0);
    tracep->declQuad(c+34,"mem_raddr", false,-1, 63,0);
    tracep->declQuad(c+69,"loaded_data", false,-1, 63,0);
    tracep->declBit(c+71,"memread", false,-1);
    tracep->declBit(c+72,"memwrite", false,-1);
    tracep->declBus(c+159,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+160,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+161,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+162,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+163,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+164,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+165,"TYPE_N", false,-1, 2,0);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+33,"instruction", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declBit(c+36,"reg_wen", false,-1);
    tracep->declBit(c+71,"memread", false,-1);
    tracep->declBus(c+37,"rd", false,-1, 4,0);
    tracep->declBus(c+38,"rs1", false,-1, 4,0);
    tracep->declBus(c+39,"rs2", false,-1, 4,0);
    tracep->declBus(c+40,"inst_type", false,-1, 2,0);
    tracep->declQuad(c+41,"imm", false,-1, 63,0);
    tracep->declBus(c+159,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+160,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+161,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+162,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+163,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+164,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+165,"TYPE_N", false,-1, 2,0);
    tracep->pushNamePrefix("inst_mux ");
    tracep->declBus(c+166,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+167,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+168,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+40,"out", false,-1, 2,0);
    tracep->declBus(c+73,"key", false,-1, 6,0);
    tracep->declBus(c+159,"default_out", false,-1, 2,0);
    tracep->declArray(c+169,"lut", false,-1, 99,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+166,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+167,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+168,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+173,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+40,"out", false,-1, 2,0);
    tracep->declBus(c+73,"key", false,-1, 6,0);
    tracep->declBus(c+159,"default_out", false,-1, 2,0);
    tracep->declArray(c+169,"lut", false,-1, 99,0);
    tracep->declBus(c+166,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+11+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+21+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+74,"lut_out", false,-1, 2,0);
    tracep->declBit(c+75,"hit", false,-1);
    tracep->declBus(c+174,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("exe ");
    tracep->declBus(c+33,"instruction", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declBus(c+155,"pc", false,-1, 31,0);
    tracep->declQuad(c+46,"src1", false,-1, 63,0);
    tracep->declQuad(c+48,"src2", false,-1, 63,0);
    tracep->declQuad(c+41,"imm", false,-1, 63,0);
    tracep->declBus(c+40,"inst_type", false,-1, 2,0);
    tracep->declQuad(c+34,"alu_output", false,-1, 63,0);
    tracep->declBus(c+159,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+160,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+161,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+162,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+163,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+164,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+165,"TYPE_N", false,-1, 2,0);
    tracep->declBus(c+175,"op_add", false,-1, 5,0);
    tracep->declBus(c+176,"op_and", false,-1, 5,0);
    tracep->declBus(c+177,"op_or", false,-1, 5,0);
    tracep->declBus(c+178,"op_addw", false,-1, 5,0);
    tracep->declBus(c+179,"op_sub", false,-1, 5,0);
    tracep->declQuad(c+76,"calc_result", false,-1, 63,0);
    tracep->declQuad(c+78,"alu_op", false,-1, 63,0);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+80,"in", false,-1, 5,0);
    tracep->declQuad(c+78,"out", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+72,"memwrite", false,-1);
    tracep->declQuad(c+52,"wdata", false,-1, 63,0);
    tracep->declQuad(c+34,"waddr", false,-1, 63,0);
    tracep->declQuad(c+34,"raddr", false,-1, 63,0);
    tracep->declBit(c+58,"lb", false,-1);
    tracep->declBit(c+59,"lh", false,-1);
    tracep->declBit(c+60,"lw", false,-1);
    tracep->declBit(c+61,"ld", false,-1);
    tracep->declBit(c+62,"lbu", false,-1);
    tracep->declBit(c+63,"lhu", false,-1);
    tracep->declBit(c+64,"lwu", false,-1);
    tracep->declQuad(c+69,"loaded_data", false,-1, 63,0);
    tracep->declBit(c+65,"sb", false,-1);
    tracep->declBit(c+66,"sh", false,-1);
    tracep->declBit(c+67,"sw", false,-1);
    tracep->declBit(c+68,"sd", false,-1);
    tracep->declQuad(c+81,"doubly_aligned_data", false,-1, 63,0);
    tracep->declQuad(c+83,"rdata", false,-1, 63,0);
    tracep->declBus(c+85,"addr_lowmask", false,-1, 7,0);
    tracep->declBus(c+86,"wmask", false,-1, 7,0);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+87,"in", false,-1, 2,0);
    tracep->declBus(c+85,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regs ");
    tracep->declBus(c+180,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+181,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+36,"wen", false,-1);
    tracep->declQuad(c+156,"wdata", false,-1, 63,0);
    tracep->declBus(c+37,"waddr", false,-1, 4,0);
    tracep->declBus(c+38,"raddr1", false,-1, 4,0);
    tracep->declBus(c+39,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+50,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+52,"rdata2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+88+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+152,"non_zerow", false,-1);
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
    VlWide<4>/*127:0*/ __Vtemp_h0d2b64db__0;
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
    tracep->fullCData(oldp+11,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0]),7);
    tracep->fullCData(oldp+12,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[1]),7);
    tracep->fullCData(oldp+13,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[2]),7);
    tracep->fullCData(oldp+14,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[3]),7);
    tracep->fullCData(oldp+15,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[4]),7);
    tracep->fullCData(oldp+16,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[5]),7);
    tracep->fullCData(oldp+17,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[6]),7);
    tracep->fullCData(oldp+18,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[7]),7);
    tracep->fullCData(oldp+19,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[8]),7);
    tracep->fullCData(oldp+20,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[9]),7);
    tracep->fullCData(oldp+21,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0]),3);
    tracep->fullCData(oldp+22,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[1]),3);
    tracep->fullCData(oldp+23,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[2]),3);
    tracep->fullCData(oldp+24,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[3]),3);
    tracep->fullCData(oldp+25,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[4]),3);
    tracep->fullCData(oldp+26,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[5]),3);
    tracep->fullCData(oldp+27,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[6]),3);
    tracep->fullCData(oldp+28,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[7]),3);
    tracep->fullCData(oldp+29,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[8]),3);
    tracep->fullCData(oldp+30,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[9]),3);
    tracep->fullQData(oldp+31,(vlSelf->ysyx_22040127_top__DOT__pcdata),64);
    tracep->fullIData(oldp+33,(vlSelf->ysyx_22040127_top__DOT__instruction),32);
    tracep->fullQData(oldp+34,(vlSelf->ysyx_22040127_top__DOT__alu_output),64);
    tracep->fullBit(oldp+36,((1U & ((((~ (IData)((0U 
                                                  != (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))) 
                                      | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))) 
                                     | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))) 
                                    | (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))))));
    tracep->fullCData(oldp+37,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                         >> 7U))),5);
    tracep->fullCData(oldp+38,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+39,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+40,(vlSelf->ysyx_22040127_top__DOT__inst_type),3);
    tracep->fullQData(oldp+41,(vlSelf->ysyx_22040127_top__DOT__imm),64);
    tracep->fullBit(oldp+43,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                              | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))));
    tracep->fullBit(oldp+44,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                              | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))));
    tracep->fullBit(oldp+45,((((6U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                               & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                  >> 0x14U)) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0xffefff80U 
                                                            & vlSelf->ysyx_22040127_top__DOT__instruction)))))));
    tracep->fullQData(oldp+46,(vlSelf->ysyx_22040127_top__DOT__alu_input1),64);
    tracep->fullQData(oldp+48,(vlSelf->ysyx_22040127_top__DOT__alu_input2),64);
    tracep->fullQData(oldp+50,(vlSelf->ysyx_22040127_top__DOT__reg_data1),64);
    tracep->fullQData(oldp+52,(vlSelf->ysyx_22040127_top__DOT__reg_data2),64);
    tracep->fullBit(oldp+54,(vlSelf->ysyx_22040127_top__DOT__jalr));
    tracep->fullBit(oldp+55,((1U & (~ (IData)((0U != 
                                               (7U 
                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                   >> 0xcU))))))));
    tracep->fullBit(oldp+56,((1U & ((~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                    >> 0xdU))))) 
                                    & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                       >> 0xcU)))));
    tracep->fullBit(oldp+57,((((~ (IData)((0U != (7U 
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
    tracep->fullBit(oldp+58,((0U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+59,((1U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+60,((2U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+61,((3U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+62,((4U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+63,((5U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+64,((6U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+65,((0U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+66,((1U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+67,((2U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+68,((3U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullQData(oldp+69,(vlSelf->ysyx_22040127_top__DOT__loaded_data),64);
    tracep->fullBit(oldp+71,((IData)((0U == (0xf8U 
                                             & vlSelf->ysyx_22040127_top__DOT__instruction)))));
    tracep->fullBit(oldp+72,((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))));
    tracep->fullCData(oldp+73,((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction)),7);
    tracep->fullCData(oldp+74,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out),3);
    tracep->fullBit(oldp+75,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit));
    tracep->fullQData(oldp+76,(((((- (QData)((IData)(
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
    tracep->fullQData(oldp+78,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op),64);
    tracep->fullCData(oldp+80,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in),6);
    tracep->fullQData(oldp+81,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data),64);
    tracep->fullQData(oldp+83,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__rdata),64);
    tracep->fullCData(oldp+85,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask),8);
    tracep->fullCData(oldp+86,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask),8);
    tracep->fullCData(oldp+87,((7U & (IData)(vlSelf->ysyx_22040127_top__DOT__alu_output))),3);
    tracep->fullQData(oldp+88,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[0]),64);
    tracep->fullQData(oldp+90,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[1]),64);
    tracep->fullQData(oldp+92,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[2]),64);
    tracep->fullQData(oldp+94,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[3]),64);
    tracep->fullQData(oldp+96,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[4]),64);
    tracep->fullQData(oldp+98,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[5]),64);
    tracep->fullQData(oldp+100,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[6]),64);
    tracep->fullQData(oldp+102,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[7]),64);
    tracep->fullQData(oldp+104,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[8]),64);
    tracep->fullQData(oldp+106,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[9]),64);
    tracep->fullQData(oldp+108,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[10]),64);
    tracep->fullQData(oldp+110,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[11]),64);
    tracep->fullQData(oldp+112,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[12]),64);
    tracep->fullQData(oldp+114,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[13]),64);
    tracep->fullQData(oldp+116,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[14]),64);
    tracep->fullQData(oldp+118,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[15]),64);
    tracep->fullQData(oldp+120,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[16]),64);
    tracep->fullQData(oldp+122,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[17]),64);
    tracep->fullQData(oldp+124,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[18]),64);
    tracep->fullQData(oldp+126,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[19]),64);
    tracep->fullQData(oldp+128,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[20]),64);
    tracep->fullQData(oldp+130,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[21]),64);
    tracep->fullQData(oldp+132,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[22]),64);
    tracep->fullQData(oldp+134,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[23]),64);
    tracep->fullQData(oldp+136,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[24]),64);
    tracep->fullQData(oldp+138,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[25]),64);
    tracep->fullQData(oldp+140,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[26]),64);
    tracep->fullQData(oldp+142,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[27]),64);
    tracep->fullQData(oldp+144,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[28]),64);
    tracep->fullQData(oldp+146,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[29]),64);
    tracep->fullQData(oldp+148,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[30]),64);
    tracep->fullQData(oldp+150,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[31]),64);
    tracep->fullBit(oldp+152,((0U != (0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                               >> 7U)))));
    tracep->fullBit(oldp+153,(vlSelf->clk));
    tracep->fullBit(oldp+154,(vlSelf->rst));
    tracep->fullIData(oldp+155,(vlSelf->pc),32);
    tracep->fullQData(oldp+156,(((IData)(vlSelf->ysyx_22040127_top__DOT__jalr)
                                  ? (QData)((IData)(
                                                    ((IData)(4U) 
                                                     + vlSelf->pc)))
                                  : ((IData)((0U == 
                                              (0xf8U 
                                               & vlSelf->ysyx_22040127_top__DOT__instruction)))
                                      ? vlSelf->ysyx_22040127_top__DOT__loaded_data
                                      : vlSelf->ysyx_22040127_top__DOT__alu_output))),64);
    tracep->fullIData(oldp+158,(((((~ (IData)((0U != 
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
    tracep->fullCData(oldp+159,(0U),3);
    tracep->fullCData(oldp+160,(1U),3);
    tracep->fullCData(oldp+161,(2U),3);
    tracep->fullCData(oldp+162,(3U),3);
    tracep->fullCData(oldp+163,(4U),3);
    tracep->fullCData(oldp+164,(5U),3);
    tracep->fullCData(oldp+165,(6U),3);
    tracep->fullIData(oldp+166,(0xaU),32);
    tracep->fullIData(oldp+167,(7U),32);
    tracep->fullIData(oldp+168,(3U),32);
    __Vtemp_h0d2b64db__0[0U] = 0x39e46b1dU;
    __Vtemp_h0d2b64db__0[1U] = 0x8ce37b77U;
    __Vtemp_h0d2b64db__0[2U] = 0xe5b93601U;
    __Vtemp_h0d2b64db__0[3U] = 2U;
    tracep->fullWData(oldp+169,(__Vtemp_h0d2b64db__0),100);
    tracep->fullIData(oldp+173,(1U),32);
    tracep->fullIData(oldp+174,(0xaU),32);
    tracep->fullCData(oldp+175,(0U),6);
    tracep->fullCData(oldp+176,(2U),6);
    tracep->fullCData(oldp+177,(0xcU),6);
    tracep->fullCData(oldp+178,(1U),6);
    tracep->fullCData(oldp+179,(0x20U),6);
    tracep->fullIData(oldp+180,(5U),32);
    tracep->fullIData(oldp+181,(0x40U),32);
}
