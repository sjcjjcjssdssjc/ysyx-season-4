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
    tracep->declBit(c+158,"clk", false,-1);
    tracep->declBit(c+159,"rst", false,-1);
    tracep->declBus(c+160,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_22040127_top ");
    tracep->declBit(c+158,"clk", false,-1);
    tracep->declBit(c+159,"rst", false,-1);
    tracep->declBus(c+160,"pc", false,-1, 31,0);
    tracep->declQuad(c+34,"pcdata", false,-1, 63,0);
    tracep->declBus(c+36,"instruction", false,-1, 31,0);
    tracep->declQuad(c+161,"reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+37,"alu_output", false,-1, 63,0);
    tracep->declBus(c+163,"branch_result", false,-1, 31,0);
    tracep->declBit(c+39,"reg_wen", false,-1);
    tracep->declBus(c+40,"rd", false,-1, 4,0);
    tracep->declBus(c+41,"rs1", false,-1, 4,0);
    tracep->declBus(c+42,"rs2", false,-1, 4,0);
    tracep->declBus(c+43,"inst_type", false,-1, 2,0);
    tracep->declQuad(c+44,"imm", false,-1, 63,0);
    tracep->declBit(c+46,"imm_src1", false,-1);
    tracep->declBit(c+47,"imm_src2", false,-1);
    tracep->declBit(c+48,"ebreak", false,-1);
    tracep->declQuad(c+49,"alu_input1", false,-1, 63,0);
    tracep->declQuad(c+51,"alu_input2", false,-1, 63,0);
    tracep->declQuad(c+53,"reg_data1", false,-1, 63,0);
    tracep->declQuad(c+55,"reg_data2", false,-1, 63,0);
    tracep->declBit(c+57,"jalr", false,-1);
    tracep->declBit(c+58,"beq", false,-1);
    tracep->declBit(c+59,"bne", false,-1);
    tracep->declBit(c+60,"branch_taken", false,-1);
    tracep->declBit(c+61,"lb", false,-1);
    tracep->declBit(c+62,"lh", false,-1);
    tracep->declBit(c+63,"lw", false,-1);
    tracep->declBit(c+64,"ld", false,-1);
    tracep->declBit(c+65,"lbu", false,-1);
    tracep->declBit(c+66,"lhu", false,-1);
    tracep->declBit(c+67,"lwu", false,-1);
    tracep->declBit(c+68,"sb", false,-1);
    tracep->declBit(c+69,"sh", false,-1);
    tracep->declBit(c+70,"sw", false,-1);
    tracep->declBit(c+71,"sd", false,-1);
    tracep->declQuad(c+55,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+37,"mem_waddr", false,-1, 63,0);
    tracep->declQuad(c+37,"mem_raddr", false,-1, 63,0);
    tracep->declQuad(c+72,"loaded_data", false,-1, 63,0);
    tracep->declBit(c+74,"memread", false,-1);
    tracep->declBit(c+75,"memwrite", false,-1);
    tracep->declBus(c+164,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+165,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+166,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+167,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+168,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+169,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+170,"TYPE_N", false,-1, 2,0);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+36,"instruction", false,-1, 31,0);
    tracep->declBit(c+158,"clk", false,-1);
    tracep->declBit(c+159,"rst", false,-1);
    tracep->declBit(c+39,"reg_wen", false,-1);
    tracep->declBit(c+74,"memread", false,-1);
    tracep->declBus(c+40,"rd", false,-1, 4,0);
    tracep->declBus(c+41,"rs1", false,-1, 4,0);
    tracep->declBus(c+42,"rs2", false,-1, 4,0);
    tracep->declBus(c+43,"inst_type", false,-1, 2,0);
    tracep->declQuad(c+44,"imm", false,-1, 63,0);
    tracep->declBus(c+164,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+165,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+166,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+167,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+168,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+169,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+170,"TYPE_N", false,-1, 2,0);
    tracep->pushNamePrefix("inst_mux ");
    tracep->declBus(c+171,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+172,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+173,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+43,"out", false,-1, 2,0);
    tracep->declBus(c+76,"key", false,-1, 6,0);
    tracep->declBus(c+164,"default_out", false,-1, 2,0);
    tracep->declArray(c+174,"lut", false,-1, 109,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+171,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+172,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+173,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+178,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+43,"out", false,-1, 2,0);
    tracep->declBus(c+76,"key", false,-1, 6,0);
    tracep->declBus(c+164,"default_out", false,-1, 2,0);
    tracep->declArray(c+174,"lut", false,-1, 109,0);
    tracep->declBus(c+179,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+23+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+77,"lut_out", false,-1, 2,0);
    tracep->declBit(c+78,"hit", false,-1);
    tracep->declBus(c+180,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("exe ");
    tracep->declBus(c+36,"instruction", false,-1, 31,0);
    tracep->declBit(c+158,"clk", false,-1);
    tracep->declBit(c+159,"rst", false,-1);
    tracep->declBus(c+160,"pc", false,-1, 31,0);
    tracep->declQuad(c+49,"src1", false,-1, 63,0);
    tracep->declQuad(c+51,"src2", false,-1, 63,0);
    tracep->declQuad(c+44,"imm", false,-1, 63,0);
    tracep->declBus(c+43,"inst_type", false,-1, 2,0);
    tracep->declQuad(c+37,"alu_output", false,-1, 63,0);
    tracep->declBus(c+164,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+165,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+166,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+167,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+168,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+169,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+170,"TYPE_N", false,-1, 2,0);
    tracep->declBus(c+181,"op_add", false,-1, 5,0);
    tracep->declBus(c+182,"op_and", false,-1, 5,0);
    tracep->declBus(c+183,"op_or", false,-1, 5,0);
    tracep->declBus(c+184,"op_addw", false,-1, 5,0);
    tracep->declBus(c+185,"op_sub", false,-1, 5,0);
    tracep->declQuad(c+79,"calc_result", false,-1, 63,0);
    tracep->declQuad(c+81,"alu_op", false,-1, 63,0);
    tracep->declQuad(c+83,"sub", false,-1, 63,0);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+85,"in", false,-1, 5,0);
    tracep->declQuad(c+81,"out", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+158,"clk", false,-1);
    tracep->declBit(c+75,"memwrite", false,-1);
    tracep->declQuad(c+55,"wdata", false,-1, 63,0);
    tracep->declQuad(c+37,"waddr", false,-1, 63,0);
    tracep->declQuad(c+37,"raddr", false,-1, 63,0);
    tracep->declBit(c+61,"lb", false,-1);
    tracep->declBit(c+62,"lh", false,-1);
    tracep->declBit(c+63,"lw", false,-1);
    tracep->declBit(c+64,"ld", false,-1);
    tracep->declBit(c+65,"lbu", false,-1);
    tracep->declBit(c+66,"lhu", false,-1);
    tracep->declBit(c+67,"lwu", false,-1);
    tracep->declQuad(c+72,"loaded_data", false,-1, 63,0);
    tracep->declBit(c+68,"sb", false,-1);
    tracep->declBit(c+69,"sh", false,-1);
    tracep->declBit(c+70,"sw", false,-1);
    tracep->declBit(c+71,"sd", false,-1);
    tracep->declQuad(c+86,"doubly_aligned_data", false,-1, 63,0);
    tracep->declQuad(c+88,"rdata", false,-1, 63,0);
    tracep->declBus(c+90,"addr_lowmask", false,-1, 7,0);
    tracep->declBus(c+91,"wmask", false,-1, 7,0);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+92,"in", false,-1, 2,0);
    tracep->declBus(c+90,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regs ");
    tracep->declBus(c+186,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+187,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+158,"clk", false,-1);
    tracep->declBit(c+39,"wen", false,-1);
    tracep->declQuad(c+161,"wdata", false,-1, 63,0);
    tracep->declBus(c+40,"waddr", false,-1, 4,0);
    tracep->declBus(c+41,"raddr1", false,-1, 4,0);
    tracep->declBus(c+42,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+53,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+55,"rdata2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+93+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+157,"non_zerow", false,-1);
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
    VlWide<4>/*127:0*/ __Vtemp_h80a68caf__0;
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
    tracep->fullCData(oldp+12,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0]),7);
    tracep->fullCData(oldp+13,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[1]),7);
    tracep->fullCData(oldp+14,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[2]),7);
    tracep->fullCData(oldp+15,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[3]),7);
    tracep->fullCData(oldp+16,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[4]),7);
    tracep->fullCData(oldp+17,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[5]),7);
    tracep->fullCData(oldp+18,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[6]),7);
    tracep->fullCData(oldp+19,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[7]),7);
    tracep->fullCData(oldp+20,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[8]),7);
    tracep->fullCData(oldp+21,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[9]),7);
    tracep->fullCData(oldp+22,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[10]),7);
    tracep->fullCData(oldp+23,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0]),3);
    tracep->fullCData(oldp+24,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[1]),3);
    tracep->fullCData(oldp+25,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[2]),3);
    tracep->fullCData(oldp+26,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[3]),3);
    tracep->fullCData(oldp+27,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[4]),3);
    tracep->fullCData(oldp+28,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[5]),3);
    tracep->fullCData(oldp+29,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[6]),3);
    tracep->fullCData(oldp+30,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[7]),3);
    tracep->fullCData(oldp+31,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[8]),3);
    tracep->fullCData(oldp+32,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[9]),3);
    tracep->fullCData(oldp+33,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[10]),3);
    tracep->fullQData(oldp+34,(vlSelf->ysyx_22040127_top__DOT__pcdata),64);
    tracep->fullIData(oldp+36,(vlSelf->ysyx_22040127_top__DOT__instruction),32);
    tracep->fullQData(oldp+37,(vlSelf->ysyx_22040127_top__DOT__alu_output),64);
    tracep->fullBit(oldp+39,((1U & ((((~ (IData)((0U 
                                                  != (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))) 
                                      | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))) 
                                     | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))) 
                                    | (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))))));
    tracep->fullCData(oldp+40,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                         >> 7U))),5);
    tracep->fullCData(oldp+41,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+42,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+43,(vlSelf->ysyx_22040127_top__DOT__inst_type),3);
    tracep->fullQData(oldp+44,(vlSelf->ysyx_22040127_top__DOT__imm),64);
    tracep->fullBit(oldp+46,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                              | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))));
    tracep->fullBit(oldp+47,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                              | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))));
    tracep->fullBit(oldp+48,((((6U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                               & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                  >> 0x14U)) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0xffefff80U 
                                                            & vlSelf->ysyx_22040127_top__DOT__instruction)))))));
    tracep->fullQData(oldp+49,(vlSelf->ysyx_22040127_top__DOT__alu_input1),64);
    tracep->fullQData(oldp+51,(vlSelf->ysyx_22040127_top__DOT__alu_input2),64);
    tracep->fullQData(oldp+53,(vlSelf->ysyx_22040127_top__DOT__reg_data1),64);
    tracep->fullQData(oldp+55,(vlSelf->ysyx_22040127_top__DOT__reg_data2),64);
    tracep->fullBit(oldp+57,(vlSelf->ysyx_22040127_top__DOT__jalr));
    tracep->fullBit(oldp+58,((1U & (~ (IData)((0U != 
                                               (7U 
                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                   >> 0xcU))))))));
    tracep->fullBit(oldp+59,((1U & ((~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                    >> 0xdU))))) 
                                    & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                       >> 0xcU)))));
    tracep->fullBit(oldp+60,((((~ (IData)((0U != (7U 
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
    tracep->fullBit(oldp+61,((0U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+62,((1U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+63,((2U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+64,((3U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+65,((4U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+66,((5U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+67,((6U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+68,((0U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+69,((1U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+70,((2U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+71,((3U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullQData(oldp+72,(vlSelf->ysyx_22040127_top__DOT__loaded_data),64);
    tracep->fullBit(oldp+74,((IData)((0U == (0xf8U 
                                             & vlSelf->ysyx_22040127_top__DOT__instruction)))));
    tracep->fullBit(oldp+75,((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))));
    tracep->fullCData(oldp+76,((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction)),7);
    tracep->fullCData(oldp+77,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out),3);
    tracep->fullBit(oldp+78,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit));
    tracep->fullQData(oldp+79,(((((- (QData)((IData)(
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
    tracep->fullQData(oldp+81,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op),64);
    tracep->fullQData(oldp+83,((vlSelf->ysyx_22040127_top__DOT__alu_input1 
                                - vlSelf->ysyx_22040127_top__DOT__alu_input2)),64);
    tracep->fullCData(oldp+85,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in),6);
    tracep->fullQData(oldp+86,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data),64);
    tracep->fullQData(oldp+88,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__rdata),64);
    tracep->fullCData(oldp+90,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask),8);
    tracep->fullCData(oldp+91,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask),8);
    tracep->fullCData(oldp+92,((7U & (IData)(vlSelf->ysyx_22040127_top__DOT__alu_output))),3);
    tracep->fullQData(oldp+93,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[0]),64);
    tracep->fullQData(oldp+95,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[1]),64);
    tracep->fullQData(oldp+97,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[2]),64);
    tracep->fullQData(oldp+99,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[3]),64);
    tracep->fullQData(oldp+101,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[4]),64);
    tracep->fullQData(oldp+103,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[5]),64);
    tracep->fullQData(oldp+105,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[6]),64);
    tracep->fullQData(oldp+107,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[7]),64);
    tracep->fullQData(oldp+109,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[8]),64);
    tracep->fullQData(oldp+111,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[9]),64);
    tracep->fullQData(oldp+113,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[10]),64);
    tracep->fullQData(oldp+115,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[11]),64);
    tracep->fullQData(oldp+117,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[12]),64);
    tracep->fullQData(oldp+119,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[13]),64);
    tracep->fullQData(oldp+121,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[14]),64);
    tracep->fullQData(oldp+123,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[15]),64);
    tracep->fullQData(oldp+125,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[16]),64);
    tracep->fullQData(oldp+127,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[17]),64);
    tracep->fullQData(oldp+129,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[18]),64);
    tracep->fullQData(oldp+131,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[19]),64);
    tracep->fullQData(oldp+133,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[20]),64);
    tracep->fullQData(oldp+135,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[21]),64);
    tracep->fullQData(oldp+137,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[22]),64);
    tracep->fullQData(oldp+139,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[23]),64);
    tracep->fullQData(oldp+141,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[24]),64);
    tracep->fullQData(oldp+143,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[25]),64);
    tracep->fullQData(oldp+145,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[26]),64);
    tracep->fullQData(oldp+147,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[27]),64);
    tracep->fullQData(oldp+149,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[28]),64);
    tracep->fullQData(oldp+151,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[29]),64);
    tracep->fullQData(oldp+153,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[30]),64);
    tracep->fullQData(oldp+155,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[31]),64);
    tracep->fullBit(oldp+157,((0U != (0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                               >> 7U)))));
    tracep->fullBit(oldp+158,(vlSelf->clk));
    tracep->fullBit(oldp+159,(vlSelf->rst));
    tracep->fullIData(oldp+160,(vlSelf->pc),32);
    tracep->fullQData(oldp+161,(((IData)(vlSelf->ysyx_22040127_top__DOT__jalr)
                                  ? (QData)((IData)(
                                                    ((IData)(4U) 
                                                     + vlSelf->pc)))
                                  : ((IData)((0U == 
                                              (0xf8U 
                                               & vlSelf->ysyx_22040127_top__DOT__instruction)))
                                      ? vlSelf->ysyx_22040127_top__DOT__loaded_data
                                      : vlSelf->ysyx_22040127_top__DOT__alu_output))),64);
    tracep->fullIData(oldp+163,(((((~ (IData)((0U != 
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
    tracep->fullCData(oldp+164,(0U),3);
    tracep->fullCData(oldp+165,(1U),3);
    tracep->fullCData(oldp+166,(2U),3);
    tracep->fullCData(oldp+167,(3U),3);
    tracep->fullCData(oldp+168,(4U),3);
    tracep->fullCData(oldp+169,(5U),3);
    tracep->fullCData(oldp+170,(6U),3);
    tracep->fullIData(oldp+171,(0xbU),32);
    tracep->fullIData(oldp+172,(7U),32);
    tracep->fullIData(oldp+173,(3U),32);
    __Vtemp_h80a68caf__0[0U] = 0x39e46b1dU;
    __Vtemp_h80a68caf__0[1U] = 0x8deddc67U;
    __Vtemp_h80a68caf__0[2U] = 0xe4d80633U;
    __Vtemp_h80a68caf__0[3U] = 0xb96U;
    tracep->fullWData(oldp+174,(__Vtemp_h80a68caf__0),110);
    tracep->fullIData(oldp+178,(1U),32);
    tracep->fullIData(oldp+179,(0xaU),32);
    tracep->fullIData(oldp+180,(0xbU),32);
    tracep->fullCData(oldp+181,(0U),6);
    tracep->fullCData(oldp+182,(2U),6);
    tracep->fullCData(oldp+183,(0xcU),6);
    tracep->fullCData(oldp+184,(1U),6);
    tracep->fullCData(oldp+185,(0x20U),6);
    tracep->fullIData(oldp+186,(5U),32);
    tracep->fullIData(oldp+187,(0x40U),32);
}
