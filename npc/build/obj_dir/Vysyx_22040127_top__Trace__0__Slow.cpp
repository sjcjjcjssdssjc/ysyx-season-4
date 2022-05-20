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
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declBus(c+1474,"if_pc", false,-1, 31,0);
    tracep->declBit(c+1475,"wb_valid", false,-1);
    tracep->declBus(c+1476,"wb_pc", false,-1, 31,0);
    tracep->declQuad(c+1477,"mepc", false,-1, 63,0);
    tracep->declQuad(c+1479,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+1481,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+1483,"mcause", false,-1, 63,0);
    tracep->declQuad(c+1485,"mie", false,-1, 63,0);
    tracep->declQuad(c+1487,"mip", false,-1, 63,0);
    tracep->declQuad(c+1489,"mscratch", false,-1, 63,0);
    tracep->declQuad(c+1491,"mtval", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040127_top ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declBus(c+1474,"if_pc", false,-1, 31,0);
    tracep->declBit(c+1475,"wb_valid", false,-1);
    tracep->declBus(c+1476,"wb_pc", false,-1, 31,0);
    tracep->declQuad(c+1477,"mepc", false,-1, 63,0);
    tracep->declQuad(c+1479,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+1481,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+1483,"mcause", false,-1, 63,0);
    tracep->declQuad(c+1485,"mie", false,-1, 63,0);
    tracep->declQuad(c+1487,"mip", false,-1, 63,0);
    tracep->declQuad(c+1489,"mscratch", false,-1, 63,0);
    tracep->declQuad(c+1491,"mtval", false,-1, 63,0);
    tracep->declQuad(c+37,"mhartid", false,-1, 63,0);
    tracep->declQuad(c+39,"if_pcdata", false,-1, 63,0);
    tracep->declBus(c+41,"if_instruction", false,-1, 31,0);
    tracep->declBit(c+42,"if_ebreak", false,-1);
    tracep->declBit(c+43,"if_uart", false,-1);
    tracep->declBit(c+44,"id_ebreak", false,-1);
    tracep->declBit(c+45,"ex_ebreak", false,-1);
    tracep->declBit(c+46,"mem_ebreak", false,-1);
    tracep->declBit(c+47,"wb_ebreak", false,-1);
    tracep->declQuad(c+1495,"reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+1497,"alu_output", false,-1, 63,0);
    tracep->declBus(c+48,"id_branch_result", false,-1, 31,0);
    tracep->declBit(c+49,"id_branch_taken", false,-1);
    tracep->declBus(c+50,"id_rs1", false,-1, 4,0);
    tracep->declBus(c+51,"id_rs2", false,-1, 4,0);
    tracep->declQuad(c+52,"id_regdata1", false,-1, 63,0);
    tracep->declQuad(c+54,"id_regdata2", false,-1, 63,0);
    tracep->declBit(c+1499,"id_jalr", false,-1);
    tracep->declBit(c+56,"if_allowin", false,-1);
    tracep->declBit(c+57,"id_allowin", false,-1);
    tracep->declBit(c+58,"ex_allowin", false,-1);
    tracep->declBit(c+1500,"mem_allowin", false,-1);
    tracep->declBit(c+1500,"wb_allowin", false,-1);
    tracep->declBit(c+59,"if_to_id_valid", false,-1);
    tracep->declBit(c+60,"id_to_ex_valid", false,-1);
    tracep->declBit(c+61,"ex_to_mem_valid", false,-1);
    tracep->declBit(c+62,"mem_to_wb_valid", false,-1);
    tracep->declBit(c+63,"if_flush", false,-1);
    tracep->declBit(c+64,"id_flush", false,-1);
    tracep->declBit(c+65,"ex_flush", false,-1);
    tracep->declBit(c+66,"mem_flush", false,-1);
    tracep->declQuad(c+1493,"if_to_id_bus", false,-1, 63,0);
    tracep->declArray(c+67,"id_to_ex_bus", false,-1, 274,0);
    tracep->declArray(c+76,"ex_to_mem_bus", false,-1, 261,0);
    tracep->declArray(c+85,"mem_to_wb_bus", false,-1, 191,0);
    tracep->declQuad(c+91,"mem_alu_output", false,-1, 63,0);
    tracep->declBit(c+93,"mem_memread", false,-1);
    tracep->declQuad(c+94,"mem_final_rdata", false,-1, 63,0);
    tracep->declQuad(c+96,"wb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+98,"wb_csrwdata", false,-1, 63,0);
    tracep->declQuad(c+100,"wb_csrrdata", false,-1, 63,0);
    tracep->declBit(c+63,"wb_mret", false,-1);
    tracep->declBit(c+102,"wb_csr_we", false,-1);
    tracep->declBus(c+103,"wb_rd", false,-1, 4,0);
    tracep->declBit(c+104,"wb_reg_wen", false,-1);
    tracep->declBit(c+59,"if_valid", false,-1);
    tracep->declBit(c+1500,"if_ready_go", false,-1);
    tracep->declBus(c+1501,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+1502,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+1503,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+1504,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+1505,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+1506,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+1507,"TYPE_N", false,-1, 2,0);
    tracep->pushNamePrefix("dec ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declBit(c+57,"id_allowin", false,-1);
    tracep->declBit(c+58,"ex_allowin", false,-1);
    tracep->declBit(c+59,"if_to_id_valid", false,-1);
    tracep->declBit(c+60,"id_to_ex_valid", false,-1);
    tracep->declArray(c+67,"id_to_ex_bus", false,-1, 274,0);
    tracep->declQuad(c+1493,"if_to_id_bus", false,-1, 63,0);
    tracep->declBus(c+50,"id_rs1", false,-1, 4,0);
    tracep->declBus(c+51,"id_rs2", false,-1, 4,0);
    tracep->declQuad(c+52,"id_regdata1_tmp", false,-1, 63,0);
    tracep->declQuad(c+54,"id_regdata2_tmp", false,-1, 63,0);
    tracep->declBus(c+48,"id_branch_result", false,-1, 31,0);
    tracep->declBit(c+49,"id_branch_taken", false,-1);
    tracep->declBus(c+105,"ex_rd", false,-1, 4,0);
    tracep->declBus(c+106,"mem_rd", false,-1, 4,0);
    tracep->declBus(c+103,"wb_rd", false,-1, 4,0);
    tracep->declQuad(c+107,"ex_alu_output", false,-1, 63,0);
    tracep->declQuad(c+91,"mem_alu_output", false,-1, 63,0);
    tracep->declQuad(c+96,"wb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+109,"ex_memread", false,-1);
    tracep->declBit(c+93,"mem_memread", false,-1);
    tracep->declQuad(c+94,"mem_final_rdata", false,-1, 63,0);
    tracep->declBit(c+110,"ex_reg_wen", false,-1);
    tracep->declBit(c+111,"mem_reg_wen", false,-1);
    tracep->declBit(c+104,"wb_reg_wen", false,-1);
    tracep->declBit(c+112,"mem_mret", false,-1);
    tracep->declBit(c+113,"ex_csr_we", false,-1);
    tracep->declBit(c+114,"mem_csr_we", false,-1);
    tracep->declBit(c+102,"wb_csr_we", false,-1);
    tracep->declBit(c+63,"if_flush", false,-1);
    tracep->declBit(c+64,"id_flush", false,-1);
    tracep->declBus(c+1501,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+1502,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+1503,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+1504,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+1505,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+1506,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+1507,"TYPE_N", false,-1, 2,0);
    tracep->declBit(c+115,"beq", false,-1);
    tracep->declBit(c+116,"bne", false,-1);
    tracep->declBit(c+117,"blt", false,-1);
    tracep->declBit(c+118,"bltu", false,-1);
    tracep->declBit(c+119,"bge", false,-1);
    tracep->declBit(c+120,"bgeu", false,-1);
    tracep->declBit(c+121,"btype_taken", false,-1);
    tracep->declBit(c+122,"imm_src1", false,-1);
    tracep->declBit(c+123,"imm_src2", false,-1);
    tracep->declBus(c+124,"id_aluop", false,-1, 5,0);
    tracep->declBus(c+125,"id_memop", false,-1, 2,0);
    tracep->declBus(c+126,"id_rd", false,-1, 4,0);
    tracep->declBit(c+127,"id_reg_wen", false,-1);
    tracep->declBit(c+128,"id_memwrite", false,-1);
    tracep->declBit(c+129,"id_memread", false,-1);
    tracep->declBus(c+130,"id_inst_type", false,-1, 2,0);
    tracep->declQuad(c+131,"id_imm", false,-1, 63,0);
    tracep->declBit(c+133,"id_jalr", false,-1);
    tracep->declQuad(c+134,"id_alu_input1", false,-1, 63,0);
    tracep->declQuad(c+136,"id_alu_input2", false,-1, 63,0);
    tracep->declQuad(c+138,"id_regdata1_final", false,-1, 63,0);
    tracep->declQuad(c+140,"id_regdata2_final", false,-1, 63,0);
    tracep->declQuad(c+140,"id_mem_wdata", false,-1, 63,0);
    tracep->declBit(c+142,"exid_raw_hazard1", false,-1);
    tracep->declBit(c+143,"exid_raw_hazard2", false,-1);
    tracep->declBit(c+144,"memid_raw_hazard1", false,-1);
    tracep->declBit(c+145,"memid_raw_hazard2", false,-1);
    tracep->declBit(c+146,"wbid_raw_hazard1", false,-1);
    tracep->declBit(c+147,"wbid_raw_hazard2", false,-1);
    tracep->declBit(c+148,"load_use_hazard1", false,-1);
    tracep->declBit(c+149,"load_use_hazard2", false,-1);
    tracep->declBit(c+150,"mem_load_use_hazard1_tmp", false,-1);
    tracep->declBit(c+151,"mem_load_use_hazard2_tmp", false,-1);
    tracep->declBit(c+152,"mem_load_use_hazard1", false,-1);
    tracep->declBit(c+153,"mem_load_use_hazard2", false,-1);
    tracep->declBit(c+154,"wb_load_use_hazard1_tmp", false,-1);
    tracep->declBit(c+155,"wb_load_use_hazard2_tmp", false,-1);
    tracep->declBit(c+154,"wb_load_use_hazard1", false,-1);
    tracep->declBit(c+155,"wb_load_use_hazard2", false,-1);
    tracep->declBit(c+156,"id_ready_go", false,-1);
    tracep->declBit(c+157,"id_valid", false,-1);
    tracep->declQuad(c+158,"if_to_id_bus_reg", false,-1, 63,0);
    tracep->declBus(c+160,"id_pc", false,-1, 31,0);
    tracep->declBus(c+161,"id_instruction", false,-1, 31,0);
    tracep->declBit(c+162,"id_mret", false,-1);
    tracep->declBit(c+163,"id_ecall", false,-1);
    tracep->declBit(c+164,"id_csrrw", false,-1);
    tracep->declBit(c+165,"id_csrrs", false,-1);
    tracep->declBit(c+166,"id_csrrc", false,-1);
    tracep->declBit(c+167,"id_csrrwi", false,-1);
    tracep->declBit(c+168,"id_csrrsi", false,-1);
    tracep->declBit(c+169,"id_csrrci", false,-1);
    tracep->pushNamePrefix("inst_mux ");
    tracep->declBus(c+1508,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1509,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1510,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+130,"out", false,-1, 2,0);
    tracep->declBus(c+170,"key", false,-1, 6,0);
    tracep->declBus(c+1501,"default_out", false,-1, 2,0);
    tracep->declArray(c+1511,"lut", false,-1, 119,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1508,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1509,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1510,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1515,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+130,"out", false,-1, 2,0);
    tracep->declBus(c+170,"key", false,-1, 6,0);
    tracep->declBus(c+1501,"default_out", false,-1, 2,0);
    tracep->declArray(c+1511,"lut", false,-1, 119,0);
    tracep->declBus(c+1516,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+13+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+25+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+171,"lut_out", false,-1, 2,0);
    tracep->declBit(c+172,"hit", false,-1);
    tracep->declBus(c+1517,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("exe ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declBit(c+58,"ex_allowin", false,-1);
    tracep->declBit(c+1500,"mem_allowin", false,-1);
    tracep->declBit(c+60,"id_to_ex_valid", false,-1);
    tracep->declBit(c+61,"ex_to_mem_valid", false,-1);
    tracep->declArray(c+67,"id_to_ex_bus", false,-1, 274,0);
    tracep->declArray(c+76,"ex_to_mem_bus", false,-1, 261,0);
    tracep->declBit(c+112,"mem_mret", false,-1);
    tracep->declBit(c+64,"id_flush", false,-1);
    tracep->declBit(c+65,"ex_flush", false,-1);
    tracep->declQuad(c+173,"rtype_calc_result", false,-1, 63,0);
    tracep->declQuad(c+175,"itype_calc_result", false,-1, 63,0);
    tracep->declQuad(c+177,"rtype_alu_op", false,-1, 63,0);
    tracep->declBus(c+179,"itype_alu_op", false,-1, 31,0);
    tracep->declQuad(c+180,"sub", false,-1, 63,0);
    tracep->declBus(c+182,"addw_result", false,-1, 31,0);
    tracep->declBus(c+183,"subw_result", false,-1, 31,0);
    tracep->declBus(c+184,"mulw_result", false,-1, 31,0);
    tracep->declBus(c+185,"divw_result", false,-1, 31,0);
    tracep->declBus(c+185,"divuw_result", false,-1, 31,0);
    tracep->declBus(c+186,"remw_result", false,-1, 31,0);
    tracep->declBus(c+186,"remuw_result", false,-1, 31,0);
    tracep->declQuad(c+187,"sext_addw_result", false,-1, 63,0);
    tracep->declQuad(c+189,"sext_subw_result", false,-1, 63,0);
    tracep->declQuad(c+191,"sext_mulw_result", false,-1, 63,0);
    tracep->declQuad(c+193,"sext_divw_result", false,-1, 63,0);
    tracep->declQuad(c+193,"sext_divuw_result", false,-1, 63,0);
    tracep->declQuad(c+195,"sext_remw_result", false,-1, 63,0);
    tracep->declQuad(c+195,"sext_remuw_result", false,-1, 63,0);
    tracep->declBus(c+197,"src1_sllw", false,-1, 31,0);
    tracep->declBus(c+198,"src1_srlw", false,-1, 31,0);
    tracep->declBus(c+199,"sft_input2", false,-1, 5,0);
    tracep->declQuad(c+200,"sra_mask_32", false,-1, 63,0);
    tracep->declQuad(c+202,"sra_mask_64", false,-1, 63,0);
    tracep->declQuad(c+204,"sext_src1_sraw", false,-1, 63,0);
    tracep->declQuad(c+206,"sext_src1_sllw", false,-1, 63,0);
    tracep->declQuad(c+208,"sext_src1_srlw", false,-1, 63,0);
    tracep->declQuad(c+210,"ex_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+212,"ex_pc", false,-1, 31,0);
    tracep->declBus(c+213,"ex_aluop", false,-1, 5,0);
    tracep->declBus(c+214,"ex_memop", false,-1, 2,0);
    tracep->declBit(c+215,"ex_ready_go", false,-1);
    tracep->declBit(c+216,"ex_memwrite", false,-1);
    tracep->declBit(c+217,"ex_memread", false,-1);
    tracep->declBus(c+218,"ex_rd", false,-1, 4,0);
    tracep->declBus(c+219,"ex_inst_type", false,-1, 2,0);
    tracep->declBit(c+220,"ex_jalr", false,-1);
    tracep->declQuad(c+221,"ex_alu_input1", false,-1, 63,0);
    tracep->declQuad(c+223,"ex_alu_input2", false,-1, 63,0);
    tracep->declBus(c+225,"ex_rs1", false,-1, 4,0);
    tracep->declBus(c+226,"ex_rs2", false,-1, 4,0);
    tracep->declBit(c+227,"ex_reg_wen", false,-1);
    tracep->declBit(c+228,"mul_type", false,-1);
    tracep->declBit(c+229,"div_type", false,-1);
    tracep->declBit(c+230,"div_sign", false,-1);
    tracep->declBit(c+231,"mul_stage2", false,-1);
    tracep->declBit(c+232,"mul_ok", false,-1);
    tracep->declBit(c+233,"sign1", false,-1);
    tracep->declBit(c+234,"sign2", false,-1);
    tracep->declQuad(c+235,"mul_res_high", false,-1, 63,0);
    tracep->declQuad(c+237,"mul_res_low", false,-1, 63,0);
    tracep->declBit(c+239,"ex_valid", false,-1);
    tracep->declArray(c+240,"id_to_ex_bus_reg", false,-1, 274,0);
    tracep->declQuad(c+249,"ex_alu_output", false,-1, 63,0);
    tracep->declBit(c+251,"div_ready", false,-1);
    tracep->declBus(c+252,"div_state", false,-1, 1,0);
    tracep->declQuad(c+253,"quo", false,-1, 63,0);
    tracep->declQuad(c+255,"rem", false,-1, 63,0);
    tracep->declBit(c+257,"ex_mret", false,-1);
    tracep->declBit(c+258,"ex_ecall", false,-1);
    tracep->declBit(c+259,"ex_csrrw", false,-1);
    tracep->declBit(c+260,"ex_csrrs", false,-1);
    tracep->declBit(c+261,"ex_csrrc", false,-1);
    tracep->declBit(c+262,"ex_csrrwi", false,-1);
    tracep->declBit(c+263,"ex_csrrsi", false,-1);
    tracep->declBit(c+264,"ex_csrrci", false,-1);
    tracep->declBit(c+265,"ex_csr_we", false,-1);
    tracep->declBus(c+266,"ex_des_csr", false,-1, 11,0);
    tracep->declBus(c+1518,"op_add", false,-1, 5,0);
    tracep->declBus(c+1519,"op_mul", false,-1, 5,0);
    tracep->declBus(c+1520,"op_sub", false,-1, 5,0);
    tracep->declBus(c+1521,"op_addw", false,-1, 5,0);
    tracep->declBus(c+1522,"op_or", false,-1, 5,0);
    tracep->declBus(c+1523,"op_xor", false,-1, 5,0);
    tracep->declBus(c+1524,"op_sll", false,-1, 5,0);
    tracep->declBus(c+1525,"op_slt", false,-1, 5,0);
    tracep->declBus(c+1526,"op_sltu", false,-1, 5,0);
    tracep->declBus(c+1527,"op_and", false,-1, 5,0);
    tracep->declBus(c+1528,"op_div", false,-1, 5,0);
    tracep->declBus(c+1529,"op_divu", false,-1, 5,0);
    tracep->declBus(c+1530,"op_remu", false,-1, 5,0);
    tracep->declBus(c+1531,"op_rem", false,-1, 5,0);
    tracep->declBus(c+1532,"op_subw", false,-1, 5,0);
    tracep->declBus(c+1533,"op_mulw", false,-1, 5,0);
    tracep->declBus(c+1534,"op_sllw", false,-1, 5,0);
    tracep->declBus(c+1535,"op_srl", false,-1, 5,0);
    tracep->declBus(c+1536,"op_sra", false,-1, 5,0);
    tracep->declBus(c+1537,"op_divw", false,-1, 5,0);
    tracep->declBus(c+1538,"op_srlw", false,-1, 5,0);
    tracep->declBus(c+1539,"op_sraw", false,-1, 5,0);
    tracep->declBus(c+1540,"op_divuw", false,-1, 5,0);
    tracep->declBus(c+1541,"op_remw", false,-1, 5,0);
    tracep->declBus(c+1542,"op_remuw", false,-1, 5,0);
    tracep->declBus(c+1543,"op_mulhu", false,-1, 5,0);
    tracep->declBus(c+1544,"op_mulh", false,-1, 5,0);
    tracep->declBus(c+1545,"op_mulhsu", false,-1, 5,0);
    tracep->declBus(c+1546,"op_addi", false,-1, 4,0);
    tracep->declBus(c+1547,"op_andi", false,-1, 4,0);
    tracep->declBus(c+1548,"op_ori", false,-1, 4,0);
    tracep->declBus(c+1549,"op_xori", false,-1, 4,0);
    tracep->declBus(c+1550,"op_sltiu", false,-1, 4,0);
    tracep->declBus(c+1551,"op_sri", false,-1, 4,0);
    tracep->declBus(c+1552,"op_slli", false,-1, 4,0);
    tracep->declBus(c+1553,"op_addiw", false,-1, 4,0);
    tracep->declBus(c+1554,"op_slliw", false,-1, 4,0);
    tracep->declBus(c+1555,"op_sriw", false,-1, 4,0);
    tracep->declBus(c+1556,"op_slti", false,-1, 4,0);
    tracep->declQuad(c+267,"res_sra", false,-1, 63,0);
    tracep->declQuad(c+269,"res_srl", false,-1, 63,0);
    tracep->declQuad(c+271,"res_sll", false,-1, 63,0);
    tracep->declBus(c+1501,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+1502,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+1503,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+1504,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+1505,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+1506,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+1507,"TYPE_N", false,-1, 2,0);
    tracep->pushNamePrefix("dec_itype ");
    tracep->declBus(c+273,"in", false,-1, 4,0);
    tracep->declBus(c+179,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec_rtype ");
    tracep->declBus(c+274,"in", false,-1, 5,0);
    tracep->declQuad(c+177,"out", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declQuad(c+275,"x", false,-1, 63,0);
    tracep->declQuad(c+277,"y", false,-1, 63,0);
    tracep->declBit(c+230,"s", false,-1);
    tracep->declBit(c+229,"is_div", false,-1);
    tracep->declBit(c+251,"ready", false,-1);
    tracep->declBus(c+252,"state", false,-1, 1,0);
    tracep->declQuad(c+253,"quo", false,-1, 63,0);
    tracep->declQuad(c+255,"rem", false,-1, 63,0);
    tracep->declBus(c+1557,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1558,"DIV_ON", false,-1, 1,0);
    tracep->declBus(c+1559,"DIV_ZERO", false,-1, 1,0);
    tracep->declBus(c+1560,"DIV_END", false,-1, 1,0);
    tracep->declBus(c+279,"cnt", false,-1, 6,0);
    tracep->declArray(c+280,"dividend", false,-1, 128,0);
    tracep->declQuad(c+285,"divisor", false,-1, 63,0);
    tracep->declArray(c+287,"subres", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declQuad(c+221,"x", false,-1, 63,0);
    tracep->declQuad(c+223,"y", false,-1, 63,0);
    tracep->declBit(c+233,"xs", false,-1);
    tracep->declBit(c+234,"ys", false,-1);
    tracep->declQuad(c+235,"high", false,-1, 63,0);
    tracep->declQuad(c+237,"low", false,-1, 63,0);
    tracep->declBit(c+228,"mul_type", false,-1);
    tracep->declBit(c+231,"mul_stage2", false,-1);
    tracep->declBit(c+232,"mul_ok", false,-1);
    tracep->declArray(c+290,"x_ext", false,-1, 64,0);
    tracep->declArray(c+293,"y_ext", false,-1, 66,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declArray(c+296+i*4,"l1s", true,(i+0), 127,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declArray(c+340+i*4,"l1c", true,(i+0), 127,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declArray(c+384+i*4,"l2s", true,(i+0), 127,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declArray(c+412+i*4,"l2c", true,(i+0), 127,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+440+i*4,"l3s", true,(i+0), 127,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+460+i*4,"l3c", true,(i+0), 127,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+480+i*4,"l4s", true,(i+0), 127,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+492+i*4,"l4c", true,(i+0), 127,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+504+i*4,"l5s", true,(i+0), 127,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+516+i*4,"l5c", true,(i+0), 127,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+528+i*4,"l6s", true,(i+0), 127,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+536+i*4,"l6c", true,(i+0), 127,0);
    }
    tracep->declArray(c+544,"l7s", false,-1, 127,0);
    tracep->declArray(c+548,"l7c", false,-1, 127,0);
    tracep->declArray(c+552,"l8s", false,-1, 127,0);
    tracep->declArray(c+556,"l8c", false,-1, 127,0);
    tracep->declArray(c+560,"res", false,-1, 127,0);
    tracep->pushNamePrefix("b0 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+564,"y", false,-1, 2,0);
    tracep->declArray(c+565,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b1 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+572,"y", false,-1, 2,0);
    tracep->declArray(c+573,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b10 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+577,"y", false,-1, 2,0);
    tracep->declArray(c+578,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b11 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+582,"y", false,-1, 2,0);
    tracep->declArray(c+583,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b12 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+587,"y", false,-1, 2,0);
    tracep->declArray(c+588,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b13 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+592,"y", false,-1, 2,0);
    tracep->declArray(c+593,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b14 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+597,"y", false,-1, 2,0);
    tracep->declArray(c+598,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b15 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+602,"y", false,-1, 2,0);
    tracep->declArray(c+603,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b16 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+607,"y", false,-1, 2,0);
    tracep->declArray(c+608,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b17 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+612,"y", false,-1, 2,0);
    tracep->declArray(c+613,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b18 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+617,"y", false,-1, 2,0);
    tracep->declArray(c+618,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b19 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+622,"y", false,-1, 2,0);
    tracep->declArray(c+623,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b2 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+627,"y", false,-1, 2,0);
    tracep->declArray(c+628,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b20 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+632,"y", false,-1, 2,0);
    tracep->declArray(c+633,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b21 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+637,"y", false,-1, 2,0);
    tracep->declArray(c+638,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b22 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+642,"y", false,-1, 2,0);
    tracep->declArray(c+643,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b23 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+647,"y", false,-1, 2,0);
    tracep->declArray(c+648,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b24 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+652,"y", false,-1, 2,0);
    tracep->declArray(c+653,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b25 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+657,"y", false,-1, 2,0);
    tracep->declArray(c+658,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b26 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+662,"y", false,-1, 2,0);
    tracep->declArray(c+663,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b27 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+667,"y", false,-1, 2,0);
    tracep->declArray(c+668,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b28 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+672,"y", false,-1, 2,0);
    tracep->declArray(c+673,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b29 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+677,"y", false,-1, 2,0);
    tracep->declArray(c+678,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b3 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+682,"y", false,-1, 2,0);
    tracep->declArray(c+683,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b30 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+687,"y", false,-1, 2,0);
    tracep->declArray(c+688,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b31 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+692,"y", false,-1, 2,0);
    tracep->declArray(c+693,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b32 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+697,"y", false,-1, 2,0);
    tracep->declArray(c+698,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b4 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+702,"y", false,-1, 2,0);
    tracep->declArray(c+703,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b5 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+707,"y", false,-1, 2,0);
    tracep->declArray(c+708,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b6 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+712,"y", false,-1, 2,0);
    tracep->declArray(c+713,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b7 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+717,"y", false,-1, 2,0);
    tracep->declArray(c+718,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b8 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+722,"y", false,-1, 2,0);
    tracep->declArray(c+723,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b9 ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declArray(c+290,"x", false,-1, 64,0);
    tracep->declBus(c+727,"y", false,-1, 2,0);
    tracep->declArray(c+728,"z", false,-1, 127,0);
    tracep->declArray(c+569,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_1 ");
    tracep->declArray(c+732,"x", false,-1, 127,0);
    tracep->declArray(c+736,"y", false,-1, 127,0);
    tracep->declArray(c+740,"z", false,-1, 127,0);
    tracep->declArray(c+744,"s", false,-1, 127,0);
    tracep->declArray(c+748,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_10 ");
    tracep->declArray(c+752,"x", false,-1, 127,0);
    tracep->declArray(c+756,"y", false,-1, 127,0);
    tracep->declArray(c+760,"z", false,-1, 127,0);
    tracep->declArray(c+764,"s", false,-1, 127,0);
    tracep->declArray(c+768,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_11 ");
    tracep->declArray(c+772,"x", false,-1, 127,0);
    tracep->declArray(c+776,"y", false,-1, 127,0);
    tracep->declArray(c+780,"z", false,-1, 127,0);
    tracep->declArray(c+784,"s", false,-1, 127,0);
    tracep->declArray(c+788,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_2 ");
    tracep->declArray(c+792,"x", false,-1, 127,0);
    tracep->declArray(c+796,"y", false,-1, 127,0);
    tracep->declArray(c+800,"z", false,-1, 127,0);
    tracep->declArray(c+804,"s", false,-1, 127,0);
    tracep->declArray(c+808,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_3 ");
    tracep->declArray(c+812,"x", false,-1, 127,0);
    tracep->declArray(c+816,"y", false,-1, 127,0);
    tracep->declArray(c+820,"z", false,-1, 127,0);
    tracep->declArray(c+824,"s", false,-1, 127,0);
    tracep->declArray(c+828,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_4 ");
    tracep->declArray(c+832,"x", false,-1, 127,0);
    tracep->declArray(c+836,"y", false,-1, 127,0);
    tracep->declArray(c+840,"z", false,-1, 127,0);
    tracep->declArray(c+844,"s", false,-1, 127,0);
    tracep->declArray(c+848,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_5 ");
    tracep->declArray(c+852,"x", false,-1, 127,0);
    tracep->declArray(c+856,"y", false,-1, 127,0);
    tracep->declArray(c+860,"z", false,-1, 127,0);
    tracep->declArray(c+864,"s", false,-1, 127,0);
    tracep->declArray(c+868,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_6 ");
    tracep->declArray(c+872,"x", false,-1, 127,0);
    tracep->declArray(c+876,"y", false,-1, 127,0);
    tracep->declArray(c+880,"z", false,-1, 127,0);
    tracep->declArray(c+884,"s", false,-1, 127,0);
    tracep->declArray(c+888,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_7 ");
    tracep->declArray(c+892,"x", false,-1, 127,0);
    tracep->declArray(c+896,"y", false,-1, 127,0);
    tracep->declArray(c+900,"z", false,-1, 127,0);
    tracep->declArray(c+904,"s", false,-1, 127,0);
    tracep->declArray(c+908,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_8 ");
    tracep->declArray(c+912,"x", false,-1, 127,0);
    tracep->declArray(c+916,"y", false,-1, 127,0);
    tracep->declArray(c+920,"z", false,-1, 127,0);
    tracep->declArray(c+924,"s", false,-1, 127,0);
    tracep->declArray(c+928,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_9 ");
    tracep->declArray(c+932,"x", false,-1, 127,0);
    tracep->declArray(c+936,"y", false,-1, 127,0);
    tracep->declArray(c+940,"z", false,-1, 127,0);
    tracep->declArray(c+944,"s", false,-1, 127,0);
    tracep->declArray(c+948,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_1 ");
    tracep->declArray(c+952,"x", false,-1, 127,0);
    tracep->declArray(c+956,"y", false,-1, 127,0);
    tracep->declArray(c+960,"z", false,-1, 127,0);
    tracep->declArray(c+964,"s", false,-1, 127,0);
    tracep->declArray(c+968,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_2 ");
    tracep->declArray(c+972,"x", false,-1, 127,0);
    tracep->declArray(c+976,"y", false,-1, 127,0);
    tracep->declArray(c+980,"z", false,-1, 127,0);
    tracep->declArray(c+984,"s", false,-1, 127,0);
    tracep->declArray(c+988,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_3 ");
    tracep->declArray(c+992,"x", false,-1, 127,0);
    tracep->declArray(c+996,"y", false,-1, 127,0);
    tracep->declArray(c+1000,"z", false,-1, 127,0);
    tracep->declArray(c+1004,"s", false,-1, 127,0);
    tracep->declArray(c+1008,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_4 ");
    tracep->declArray(c+1012,"x", false,-1, 127,0);
    tracep->declArray(c+1016,"y", false,-1, 127,0);
    tracep->declArray(c+1020,"z", false,-1, 127,0);
    tracep->declArray(c+1024,"s", false,-1, 127,0);
    tracep->declArray(c+1028,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_5 ");
    tracep->declArray(c+1032,"x", false,-1, 127,0);
    tracep->declArray(c+1036,"y", false,-1, 127,0);
    tracep->declArray(c+1040,"z", false,-1, 127,0);
    tracep->declArray(c+1044,"s", false,-1, 127,0);
    tracep->declArray(c+1048,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_6 ");
    tracep->declArray(c+1052,"x", false,-1, 127,0);
    tracep->declArray(c+1056,"y", false,-1, 127,0);
    tracep->declArray(c+1060,"z", false,-1, 127,0);
    tracep->declArray(c+1064,"s", false,-1, 127,0);
    tracep->declArray(c+1068,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_7 ");
    tracep->declArray(c+1072,"x", false,-1, 127,0);
    tracep->declArray(c+1076,"y", false,-1, 127,0);
    tracep->declArray(c+1080,"z", false,-1, 127,0);
    tracep->declArray(c+1084,"s", false,-1, 127,0);
    tracep->declArray(c+1088,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l3_1 ");
    tracep->declArray(c+1092,"x", false,-1, 127,0);
    tracep->declArray(c+1096,"y", false,-1, 127,0);
    tracep->declArray(c+1100,"z", false,-1, 127,0);
    tracep->declArray(c+1104,"s", false,-1, 127,0);
    tracep->declArray(c+1108,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l3_2 ");
    tracep->declArray(c+1112,"x", false,-1, 127,0);
    tracep->declArray(c+1116,"y", false,-1, 127,0);
    tracep->declArray(c+1120,"z", false,-1, 127,0);
    tracep->declArray(c+1124,"s", false,-1, 127,0);
    tracep->declArray(c+1128,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l3_3 ");
    tracep->declArray(c+1132,"x", false,-1, 127,0);
    tracep->declArray(c+1136,"y", false,-1, 127,0);
    tracep->declArray(c+1140,"z", false,-1, 127,0);
    tracep->declArray(c+1144,"s", false,-1, 127,0);
    tracep->declArray(c+1148,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l3_4 ");
    tracep->declArray(c+1152,"x", false,-1, 127,0);
    tracep->declArray(c+1156,"y", false,-1, 127,0);
    tracep->declArray(c+1160,"z", false,-1, 127,0);
    tracep->declArray(c+1164,"s", false,-1, 127,0);
    tracep->declArray(c+1168,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l3_5 ");
    tracep->declArray(c+1172,"x", false,-1, 127,0);
    tracep->declArray(c+1176,"y", false,-1, 127,0);
    tracep->declArray(c+1180,"z", false,-1, 127,0);
    tracep->declArray(c+1184,"s", false,-1, 127,0);
    tracep->declArray(c+1188,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l4_1 ");
    tracep->declArray(c+1192,"x", false,-1, 127,0);
    tracep->declArray(c+1196,"y", false,-1, 127,0);
    tracep->declArray(c+1200,"z", false,-1, 127,0);
    tracep->declArray(c+1204,"s", false,-1, 127,0);
    tracep->declArray(c+1208,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l4_2 ");
    tracep->declArray(c+1212,"x", false,-1, 127,0);
    tracep->declArray(c+1216,"y", false,-1, 127,0);
    tracep->declArray(c+1220,"z", false,-1, 127,0);
    tracep->declArray(c+1224,"s", false,-1, 127,0);
    tracep->declArray(c+1228,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l4_3 ");
    tracep->declArray(c+1232,"x", false,-1, 127,0);
    tracep->declArray(c+1236,"y", false,-1, 127,0);
    tracep->declArray(c+1240,"z", false,-1, 127,0);
    tracep->declArray(c+1244,"s", false,-1, 127,0);
    tracep->declArray(c+1248,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l5_1 ");
    tracep->declArray(c+1252,"x", false,-1, 127,0);
    tracep->declArray(c+1256,"y", false,-1, 127,0);
    tracep->declArray(c+1260,"z", false,-1, 127,0);
    tracep->declArray(c+1264,"s", false,-1, 127,0);
    tracep->declArray(c+1268,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l5_2 ");
    tracep->declArray(c+1272,"x", false,-1, 127,0);
    tracep->declArray(c+1276,"y", false,-1, 127,0);
    tracep->declArray(c+1280,"z", false,-1, 127,0);
    tracep->declArray(c+1284,"s", false,-1, 127,0);
    tracep->declArray(c+1288,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l6_1 ");
    tracep->declArray(c+1292,"x", false,-1, 127,0);
    tracep->declArray(c+1296,"y", false,-1, 127,0);
    tracep->declArray(c+1300,"z", false,-1, 127,0);
    tracep->declArray(c+1304,"s", false,-1, 127,0);
    tracep->declArray(c+1308,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l7_1 ");
    tracep->declArray(c+1312,"x", false,-1, 127,0);
    tracep->declArray(c+1316,"y", false,-1, 127,0);
    tracep->declArray(c+1320,"z", false,-1, 127,0);
    tracep->declArray(c+544,"s", false,-1, 127,0);
    tracep->declArray(c+548,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l8_1 ");
    tracep->declArray(c+544,"x", false,-1, 127,0);
    tracep->declArray(c+1324,"y", false,-1, 127,0);
    tracep->declArray(c+1328,"z", false,-1, 127,0);
    tracep->declArray(c+552,"s", false,-1, 127,0);
    tracep->declArray(c+556,"c", false,-1, 127,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declBit(c+1500,"mem_allowin", false,-1);
    tracep->declBit(c+1500,"wb_allowin", false,-1);
    tracep->declBit(c+61,"ex_to_mem_valid", false,-1);
    tracep->declBit(c+62,"mem_to_wb_valid", false,-1);
    tracep->declArray(c+76,"ex_to_mem_bus", false,-1, 261,0);
    tracep->declArray(c+85,"mem_to_wb_bus", false,-1, 191,0);
    tracep->declQuad(c+91,"mem_alu_output", false,-1, 63,0);
    tracep->declQuad(c+94,"mem_final_rdata", false,-1, 63,0);
    tracep->declBit(c+93,"mem_memread", false,-1);
    tracep->declBit(c+65,"ex_flush", false,-1);
    tracep->declBit(c+66,"mem_flush", false,-1);
    tracep->declBus(c+1332,"mem_memop", false,-1, 2,0);
    tracep->declBit(c+1333,"mem_memwrite", false,-1);
    tracep->declQuad(c+1334,"mem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+1336,"lb", false,-1);
    tracep->declBit(c+1337,"lh", false,-1);
    tracep->declBit(c+1338,"lw", false,-1);
    tracep->declBit(c+1339,"ld", false,-1);
    tracep->declBit(c+1340,"lbu", false,-1);
    tracep->declBit(c+1341,"lhu", false,-1);
    tracep->declBit(c+1342,"lwu", false,-1);
    tracep->declBit(c+1343,"sb", false,-1);
    tracep->declBit(c+1344,"sh", false,-1);
    tracep->declBit(c+1345,"sw", false,-1);
    tracep->declBit(c+1346,"sd", false,-1);
    tracep->declBit(c+1500,"mem_ready_go", false,-1);
    tracep->declBit(c+1347,"mem_reg_wen", false,-1);
    tracep->declBus(c+1348,"mem_rs1", false,-1, 4,0);
    tracep->declQuad(c+1349,"mem_alu_input1", false,-1, 63,0);
    tracep->declBus(c+1351,"mem_des_csr", false,-1, 11,0);
    tracep->declBus(c+1352,"mem_rd", false,-1, 4,0);
    tracep->declBus(c+1353,"mem_pc", false,-1, 31,0);
    tracep->declBit(c+1354,"mem_jalr", false,-1);
    tracep->declQuad(c+1355,"mem_wdata_tmp", false,-1, 63,0);
    tracep->declQuad(c+1357,"mem_wdata", false,-1, 63,0);
    tracep->declBit(c+62,"mem_valid", false,-1);
    tracep->declBit(c+1359,"mem_mret", false,-1);
    tracep->declBit(c+1360,"mem_ecall", false,-1);
    tracep->declBit(c+1361,"mem_csrrw", false,-1);
    tracep->declBit(c+1362,"mem_csrrs", false,-1);
    tracep->declBit(c+1363,"mem_csrrc", false,-1);
    tracep->declBit(c+1364,"mem_csrrwi", false,-1);
    tracep->declBit(c+1365,"mem_csrrsi", false,-1);
    tracep->declBit(c+1366,"mem_csrrci", false,-1);
    tracep->declBit(c+1367,"mem_csr_we", false,-1);
    tracep->declArray(c+1368,"ex_to_mem_bus_reg", false,-1, 261,0);
    tracep->declQuad(c+1377,"doubly_aligned_data", false,-1, 63,0);
    tracep->declQuad(c+1379,"rawdata", false,-1, 63,0);
    tracep->declBus(c+1381,"addr_lowmask", false,-1, 7,0);
    tracep->declBus(c+1382,"wmask", false,-1, 7,0);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+1383,"in", false,-1, 2,0);
    tracep->declBus(c+1381,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb ");
    tracep->declBit(c+1472,"clk", false,-1);
    tracep->declBit(c+1473,"rst", false,-1);
    tracep->declBit(c+1500,"wb_allowin", false,-1);
    tracep->declBit(c+62,"mem_to_wb_valid", false,-1);
    tracep->declArray(c+85,"mem_to_wb_bus", false,-1, 191,0);
    tracep->declBus(c+50,"raddr1", false,-1, 4,0);
    tracep->declBus(c+51,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+52,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+54,"rdata2", false,-1, 63,0);
    tracep->declBus(c+103,"wb_rd", false,-1, 4,0);
    tracep->declQuad(c+96,"wb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+1475,"wb_valid", false,-1);
    tracep->declBus(c+1476,"wb_pc", false,-1, 31,0);
    tracep->declBit(c+104,"wb_reg_wen", false,-1);
    tracep->declQuad(c+98,"wb_csrwdata", false,-1, 63,0);
    tracep->declQuad(c+100,"wb_csrrdata", false,-1, 63,0);
    tracep->declBit(c+63,"wb_mret", false,-1);
    tracep->declBit(c+102,"wb_csr_we", false,-1);
    tracep->declQuad(c+1477,"csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+1479,"csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+1481,"csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+1483,"csr_mcause", false,-1, 63,0);
    tracep->declQuad(c+1485,"csr_mie", false,-1, 63,0);
    tracep->declQuad(c+1487,"csr_mip", false,-1, 63,0);
    tracep->declQuad(c+1489,"csr_mscratch", false,-1, 63,0);
    tracep->declQuad(c+37,"csr_mhartid", false,-1, 63,0);
    tracep->declBit(c+66,"mem_flush", false,-1);
    tracep->declBus(c+1561,"MTVEC", false,-1, 11,0);
    tracep->declBus(c+1562,"MCAUSE", false,-1, 11,0);
    tracep->declBus(c+1563,"MSTATUS", false,-1, 11,0);
    tracep->declBus(c+1564,"MEPC", false,-1, 11,0);
    tracep->declBus(c+1565,"MIE", false,-1, 11,0);
    tracep->declBus(c+1566,"MIP", false,-1, 11,0);
    tracep->declBus(c+1567,"MSCRATCH", false,-1, 11,0);
    tracep->declBus(c+1568,"MHARTID", false,-1, 11,0);
    tracep->declBus(c+1384,"wb_des_csr", false,-1, 11,0);
    tracep->declQuad(c+1385,"wb_reg_wdata_tmp", false,-1, 63,0);
    tracep->declBus(c+1387,"mstatus_mpp", false,-1, 1,0);
    tracep->declBit(c+1388,"mstatus_mpie", false,-1);
    tracep->declBit(c+1389,"mstatus_mie", false,-1);
    tracep->declBit(c+1390,"wb_flush", false,-1);
    tracep->declBus(c+1391,"wb_rs1", false,-1, 4,0);
    tracep->declBit(c+1392,"wb_ecall", false,-1);
    tracep->declBit(c+1393,"wb_csrrw", false,-1);
    tracep->declBit(c+1394,"wb_csrrs", false,-1);
    tracep->declBit(c+1395,"wb_csrrc", false,-1);
    tracep->declBit(c+1396,"wb_csrrwi", false,-1);
    tracep->declBit(c+1397,"wb_csrrsi", false,-1);
    tracep->declBit(c+1398,"wb_csrrci", false,-1);
    tracep->declQuad(c+1399,"wb_alu_input1", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1401+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declArray(c+1465,"mem_to_wb_bus_reg", false,-1, 191,0);
    tracep->declBit(c+1471,"non_zerow", false,-1);
    tracep->declBit(c+1500,"wb_ready_go", false,-1);
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
    VlWide<9>/*287:0*/ __Vtemp_h6ae3444b__0;
    VlWide<4>/*127:0*/ __Vtemp_h1fdd8292__0;
    VlWide<4>/*127:0*/ __Vtemp_h5a241144__0;
    VlWide<4>/*127:0*/ __Vtemp_h76c294e2__0;
    VlWide<4>/*127:0*/ __Vtemp_hc42eddb7__0;
    VlWide<4>/*127:0*/ __Vtemp_h1fdd8292__1;
    VlWide<4>/*127:0*/ __Vtemp_h522dbf0a__0;
    VlWide<4>/*127:0*/ __Vtemp_h1a534702__0;
    VlWide<4>/*127:0*/ __Vtemp_h5a241144__2;
    VlWide<4>/*127:0*/ __Vtemp_hc0fdef7e__0;
    VlWide<4>/*127:0*/ __Vtemp_h21d0374a__0;
    VlWide<3>/*95:0*/ __Vtemp_h5e726cb9__0;
    VlWide<3>/*95:0*/ __Vtemp_h2024e4e5__0;
    VlWide<3>/*95:0*/ __Vtemp_hdab1d851__0;
    VlWide<3>/*95:0*/ __Vtemp_h9fb190ff__0;
    VlWide<4>/*127:0*/ __Vtemp_ha2f4aa87__0;
    VlWide<4>/*127:0*/ __Vtemp_h84c11fea__0;
    VlWide<4>/*127:0*/ __Vtemp_ha13feb02__0;
    VlWide<4>/*127:0*/ __Vtemp_h05f44798__0;
    VlWide<4>/*127:0*/ __Vtemp_he62c9636__0;
    VlWide<4>/*127:0*/ __Vtemp_hcbf1bc4f__0;
    VlWide<4>/*127:0*/ __Vtemp_he15e0589__0;
    VlWide<4>/*127:0*/ __Vtemp_h56daa6d4__0;
    VlWide<4>/*127:0*/ __Vtemp_h4595720e__0;
    VlWide<4>/*127:0*/ __Vtemp_h4ee7a19f__0;
    VlWide<4>/*127:0*/ __Vtemp_h59366efe__0;
    VlWide<4>/*127:0*/ __Vtemp_he7eaeb27__0;
    VlWide<4>/*127:0*/ __Vtemp_h04be3098__0;
    VlWide<4>/*127:0*/ __Vtemp_h2ad69785__0;
    VlWide<4>/*127:0*/ __Vtemp_h0254ffe9__0;
    VlWide<4>/*127:0*/ __Vtemp_hb73adfb5__0;
    VlWide<4>/*127:0*/ __Vtemp_h2e174758__0;
    VlWide<4>/*127:0*/ __Vtemp_h69355225__0;
    VlWide<4>/*127:0*/ __Vtemp_hc43fb470__0;
    VlWide<4>/*127:0*/ __Vtemp_h30ce69e9__0;
    VlWide<4>/*127:0*/ __Vtemp_h6208bde2__0;
    VlWide<4>/*127:0*/ __Vtemp_h49da03eb__0;
    VlWide<4>/*127:0*/ __Vtemp_had93eb43__0;
    VlWide<4>/*127:0*/ __Vtemp_h3c043eb5__0;
    VlWide<4>/*127:0*/ __Vtemp_ha924c5a8__0;
    VlWide<4>/*127:0*/ __Vtemp_h6241e666__0;
    VlWide<4>/*127:0*/ __Vtemp_hc7598cf0__0;
    VlWide<4>/*127:0*/ __Vtemp_h818b2e10__0;
    VlWide<4>/*127:0*/ __Vtemp_he11f6c98__0;
    VlWide<4>/*127:0*/ __Vtemp_h544cee01__0;
    VlWide<4>/*127:0*/ __Vtemp_h604618a7__0;
    VlWide<4>/*127:0*/ __Vtemp_h0011670c__0;
    VlWide<4>/*127:0*/ __Vtemp_h456941c4__0;
    VlWide<4>/*127:0*/ __Vtemp_he78eae4f__0;
    VlWide<4>/*127:0*/ __Vtemp_hea00f9ba__0;
    VlWide<4>/*127:0*/ __Vtemp_h3407a5e1__0;
    VlWide<4>/*127:0*/ __Vtemp_h8015b798__0;
    VlWide<4>/*127:0*/ __Vtemp_hf57249c8__0;
    VlWide<4>/*127:0*/ __Vtemp_hef724dde__0;
    VlWide<4>/*127:0*/ __Vtemp_h1ab3a480__0;
    VlWide<4>/*127:0*/ __Vtemp_he7ec8c7e__0;
    VlWide<4>/*127:0*/ __Vtemp_h2629b991__0;
    VlWide<4>/*127:0*/ __Vtemp_h3aac0a00__0;
    VlWide<4>/*127:0*/ __Vtemp_hb732e964__0;
    VlWide<4>/*127:0*/ __Vtemp_h046a7832__0;
    VlWide<4>/*127:0*/ __Vtemp_h6d418be5__0;
    VlWide<4>/*127:0*/ __Vtemp_h0182840a__0;
    VlWide<4>/*127:0*/ __Vtemp_hb214662e__0;
    VlWide<4>/*127:0*/ __Vtemp_h5146fe53__0;
    VlWide<4>/*127:0*/ __Vtemp_h1cac1abb__0;
    VlWide<4>/*127:0*/ __Vtemp_h86d60f8f__0;
    VlWide<4>/*127:0*/ __Vtemp_h7f006057__0;
    VlWide<4>/*127:0*/ __Vtemp_h2e51ecc1__0;
    VlWide<4>/*127:0*/ __Vtemp_hc633255e__0;
    VlWide<4>/*127:0*/ __Vtemp_h5f7d747f__0;
    VlWide<4>/*127:0*/ __Vtemp_h7f9cc2a2__0;
    VlWide<4>/*127:0*/ __Vtemp_h2ecbf711__0;
    VlWide<4>/*127:0*/ __Vtemp_haf5dff14__0;
    VlWide<4>/*127:0*/ __Vtemp_h9f8a9bcc__0;
    VlWide<4>/*127:0*/ __Vtemp_h65fcf2e9__0;
    VlWide<4>/*127:0*/ __Vtemp_h6b5a749e__0;
    VlWide<4>/*127:0*/ __Vtemp_hbc51cd3a__0;
    VlWide<4>/*127:0*/ __Vtemp_hbe7230a4__0;
    VlWide<4>/*127:0*/ __Vtemp_h5e80b166__0;
    VlWide<4>/*127:0*/ __Vtemp_hf17187cd__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1718a09__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1718856__0;
    VlWide<4>/*127:0*/ __Vtemp_h92c348b0__0;
    VlWide<4>/*127:0*/ __Vtemp_h173af8c6__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1718a91__0;
    VlWide<4>/*127:0*/ __Vtemp_hf17188d4__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1718b12__0;
    VlWide<4>/*127:0*/ __Vtemp_h7152695f__0;
    VlWide<4>/*127:0*/ __Vtemp_h41363071__0;
    VlWide<4>/*127:0*/ __Vtemp_hf17195a5__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1718b8a__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1718a27__0;
    VlWide<4>/*127:0*/ __Vtemp_hae126eed__0;
    VlWide<4>/*127:0*/ __Vtemp_hc13907b7__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1719407__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1718a4c__0;
    VlWide<4>/*127:0*/ __Vtemp_h07c4056d__0;
    VlWide<4>/*127:0*/ __Vtemp_hb0af998d__0;
    VlWide<4>/*127:0*/ __Vtemp_hf5d7ba4d__0;
    VlWide<4>/*127:0*/ __Vtemp_h00f21e9e__0;
    VlWide<4>/*127:0*/ __Vtemp_h7ce663a5__0;
    VlWide<4>/*127:0*/ __Vtemp_hac2a4a9e__0;
    VlWide<4>/*127:0*/ __Vtemp_hfcaac4cd__0;
    VlWide<4>/*127:0*/ __Vtemp_h3c616819__0;
    VlWide<4>/*127:0*/ __Vtemp_hb6585417__0;
    VlWide<4>/*127:0*/ __Vtemp_hf5531076__0;
    VlWide<4>/*127:0*/ __Vtemp_h57954f3d__0;
    VlWide<4>/*127:0*/ __Vtemp_h7f281be0__0;
    VlWide<4>/*127:0*/ __Vtemp_h2e2ac58e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd7c89330__0;
    VlWide<4>/*127:0*/ __Vtemp_h2e9ce97d__0;
    VlWide<4>/*127:0*/ __Vtemp_h1527ddb5__0;
    VlWide<4>/*127:0*/ __Vtemp_h75d709c3__0;
    VlWide<4>/*127:0*/ __Vtemp_h779da789__0;
    VlWide<4>/*127:0*/ __Vtemp_h9354c33b__0;
    VlWide<4>/*127:0*/ __Vtemp_h4b9ad8a3__0;
    VlWide<4>/*127:0*/ __Vtemp_h631ff6d7__0;
    VlWide<4>/*127:0*/ __Vtemp_hf43c4642__0;
    VlWide<4>/*127:0*/ __Vtemp_hf43c4783__0;
    VlWide<4>/*127:0*/ __Vtemp_hf43c46c8__0;
    VlWide<4>/*127:0*/ __Vtemp_hd011b6c0__0;
    VlWide<4>/*127:0*/ __Vtemp_h010b5776__0;
    VlWide<4>/*127:0*/ __Vtemp_hf43c43fb__0;
    VlWide<4>/*127:0*/ __Vtemp_hf43c473f__0;
    VlWide<4>/*127:0*/ __Vtemp_hf43c447e__0;
    VlWide<4>/*127:0*/ __Vtemp_h32f509e6__0;
    VlWide<4>/*127:0*/ __Vtemp_h3692e320__0;
    VlWide<4>/*127:0*/ __Vtemp_hf43c43bd__0;
    VlWide<4>/*127:0*/ __Vtemp_hdbcd2375__0;
    VlWide<4>/*127:0*/ __Vtemp_he45c737d__0;
    VlWide<4>/*127:0*/ __Vtemp_h7097f915__0;
    VlWide<4>/*127:0*/ __Vtemp_h27c1727b__0;
    VlWide<4>/*127:0*/ __Vtemp_hb3ce6205__0;
    VlWide<4>/*127:0*/ __Vtemp_h4c5c1491__0;
    VlWide<4>/*127:0*/ __Vtemp_hb3ce6544__0;
    VlWide<4>/*127:0*/ __Vtemp_h062ec0c0__0;
    VlWide<4>/*127:0*/ __Vtemp_hb3ce647d__0;
    VlWide<4>/*127:0*/ __Vtemp_h434bb540__0;
    VlWide<4>/*127:0*/ __Vtemp_hc42eda11__0;
    VlWide<4>/*127:0*/ __Vtemp_h69bc9e05__0;
    VlWide<4>/*127:0*/ __Vtemp_had8bdbe8__0;
    VlWide<4>/*127:0*/ __Vtemp_h2a7b3d93__0;
    VlWide<4>/*127:0*/ __Vtemp_hb3ce61b9__0;
    VlWide<4>/*127:0*/ __Vtemp_ha582bfc5__0;
    VlWide<4>/*127:0*/ __Vtemp_hb3ce64fa__0;
    VlWide<4>/*127:0*/ __Vtemp_h97d19be7__0;
    VlWide<4>/*127:0*/ __Vtemp_hb3ce6447__0;
    VlWide<4>/*127:0*/ __Vtemp_h9782f714__0;
    VlWide<4>/*127:0*/ __Vtemp_h977c8557__0;
    VlWide<4>/*127:0*/ __Vtemp_h43107266__0;
    VlWide<4>/*127:0*/ __Vtemp_h8816b1a8__0;
    VlWide<4>/*127:0*/ __Vtemp_hc21668af__0;
    VlWide<4>/*127:0*/ __Vtemp_h7aa39406__0;
    VlWide<4>/*127:0*/ __Vtemp_h7aa38ec3__0;
    VlWide<4>/*127:0*/ __Vtemp_h7aa38f88__0;
    VlWide<4>/*127:0*/ __Vtemp_h8eaa5fe3__0;
    VlWide<4>/*127:0*/ __Vtemp_hed7aab57__0;
    VlWide<4>/*127:0*/ __Vtemp_h7aa38e4b__0;
    VlWide<4>/*127:0*/ __Vtemp_h7aa38f0f__0;
    VlWide<4>/*127:0*/ __Vtemp_h02d88ba1__0;
    VlWide<4>/*127:0*/ __Vtemp_h17db7681__0;
    VlWide<4>/*127:0*/ __Vtemp_h02d88ba1__1;
    VlWide<4>/*127:0*/ __Vtemp_hae07de05__0;
    VlWide<4>/*127:0*/ __Vtemp_h5868981e__0;
    VlWide<4>/*127:0*/ __Vtemp_h02d88ba1__2;
    VlWide<4>/*127:0*/ __Vtemp_hf351dc3d__0;
    VlWide<4>/*127:0*/ __Vtemp_h02d88ba1__3;
    VlWide<4>/*127:0*/ __Vtemp_h7de6b44b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc9a0e09f__0;
    VlWide<4>/*127:0*/ __Vtemp_h02d889e4__0;
    VlWide<4>/*127:0*/ __Vtemp_hf4d9a659__0;
    VlWide<4>/*127:0*/ __Vtemp_h02d88d27__0;
    VlWide<4>/*127:0*/ __Vtemp_h3baf7741__0;
    VlWide<4>/*127:0*/ __Vtemp_h02d88d5c__0;
    VlWide<4>/*127:0*/ __Vtemp_hbda4f3d7__0;
    VlWide<4>/*127:0*/ __Vtemp_he90a56f4__0;
    VlWide<4>/*127:0*/ __Vtemp_h105cd53d__0;
    VlWide<4>/*127:0*/ __Vtemp_h733eaa06__0;
    VlWide<4>/*127:0*/ __Vtemp_h1c934518__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a1cf969__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a1cf635__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a1cf8ec__0;
    VlWide<4>/*127:0*/ __Vtemp_h8bd31a77__0;
    VlWide<4>/*127:0*/ __Vtemp_h04764766__0;
    VlWide<4>/*127:0*/ __Vtemp_h389af2c0__0;
    VlWide<4>/*127:0*/ __Vtemp_h27ad1993__0;
    VlWide<4>/*127:0*/ __Vtemp_h389ae07c__0;
    VlWide<4>/*127:0*/ __Vtemp_h2fe70ba8__0;
    VlWide<4>/*127:0*/ __Vtemp_h389af339__0;
    VlWide<4>/*127:0*/ __Vtemp_h2505e54d__0;
    VlWide<4>/*127:0*/ __Vtemp_hf4b4c777__0;
    VlWide<4>/*127:0*/ __Vtemp_hb4268308__0;
    VlWide<4>/*127:0*/ __Vtemp_hc256cb40__0;
    VlWide<4>/*127:0*/ __Vtemp_hfb626bf9__0;
    VlWide<4>/*127:0*/ __Vtemp_hafce953c__0;
    VlWide<4>/*127:0*/ __Vtemp_hafce9280__0;
    VlWide<4>/*127:0*/ __Vtemp_h1f409a06__0;
    VlWide<4>/*127:0*/ __Vtemp_he96a18d8__0;
    VlWide<4>/*127:0*/ __Vtemp_h1f409a06__1;
    VlWide<4>/*127:0*/ __Vtemp_hcf17f604__0;
    VlWide<4>/*127:0*/ __Vtemp_h338341c3__0;
    VlWide<4>/*127:0*/ __Vtemp_h1f409a06__2;
    VlWide<4>/*127:0*/ __Vtemp_he78ee9ec__0;
    VlWide<4>/*127:0*/ __Vtemp_h1f409a06__3;
    VlWide<4>/*127:0*/ __Vtemp_h34003953__0;
    VlWide<4>/*127:0*/ __Vtemp_hc0bfc1cd__0;
    VlWide<4>/*127:0*/ __Vtemp_hb135bb7f__0;
    VlWide<4>/*127:0*/ __Vtemp_hb135b9bb__0;
    VlWide<4>/*127:0*/ __Vtemp_h5a241080__0;
    VlWide<4>/*127:0*/ __Vtemp_h2e2480e7__0;
    VlWide<4>/*127:0*/ __Vtemp_h1fdd8292__2;
    VlWide<4>/*127:0*/ __Vtemp_h5a241144__3;
    VlWide<4>/*127:0*/ __Vtemp_h0866dee8__0;
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
    tracep->fullQData(oldp+37,(vlSelf->ysyx_22040127_top__DOT__mhartid),64);
    tracep->fullQData(oldp+39,(vlSelf->ysyx_22040127_top__DOT__if_pcdata),64);
    tracep->fullIData(oldp+41,(vlSelf->ysyx_22040127_top__DOT__if_instruction),32);
    tracep->fullBit(oldp+42,(((IData)((0x100073U == 
                                       (0x10007fU & vlSelf->ysyx_22040127_top__DOT__if_instruction))) 
                              & (~ (IData)((0U != (0xffefff80U 
                                                   & vlSelf->ysyx_22040127_top__DOT__if_instruction)))))));
    tracep->fullBit(oldp+43,((0x7bU == (0x7fU & vlSelf->ysyx_22040127_top__DOT__if_instruction))));
    tracep->fullBit(oldp+44,(vlSelf->ysyx_22040127_top__DOT__id_ebreak));
    tracep->fullBit(oldp+45,(vlSelf->ysyx_22040127_top__DOT__ex_ebreak));
    tracep->fullBit(oldp+46,(vlSelf->ysyx_22040127_top__DOT__mem_ebreak));
    tracep->fullBit(oldp+47,(vlSelf->ysyx_22040127_top__DOT__wb_ebreak));
    tracep->fullIData(oldp+48,(((((- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken))) 
                                  & ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg) 
                                     + (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm))) 
                                 | (0xfffffffeU & (
                                                   (- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr))) 
                                                   & ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final) 
                                                      + 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                               >> 0x3fU))))) 
                                                        << 0xcU) 
                                                       | (0xfffU 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                     >> 0x34U)))))))) 
                                | ((- (IData)((3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))) 
                                   & ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg) 
                                      + (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1))))),32);
    tracep->fullBit(oldp+49,(vlSelf->ysyx_22040127_top__DOT__id_branch_taken));
    tracep->fullCData(oldp+50,((0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                 >> 0x2fU)))),5);
    tracep->fullCData(oldp+51,((0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                 >> 0x34U)))),5);
    tracep->fullQData(oldp+52,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf
                               [(0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                  >> 0x2fU)))]),64);
    tracep->fullQData(oldp+54,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf
                               [(0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                  >> 0x34U)))]),64);
    tracep->fullBit(oldp+56,(vlSelf->ysyx_22040127_top__DOT__if_allowin));
    tracep->fullBit(oldp+57,(vlSelf->ysyx_22040127_top__DOT__id_allowin));
    tracep->fullBit(oldp+58,(vlSelf->ysyx_22040127_top__DOT__ex_allowin));
    tracep->fullBit(oldp+59,(vlSelf->ysyx_22040127_top__DOT__if_valid));
    tracep->fullBit(oldp+60,(vlSelf->ysyx_22040127_top__DOT__id_to_ex_valid));
    tracep->fullBit(oldp+61,(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_valid));
    tracep->fullBit(oldp+62,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_valid));
    tracep->fullBit(oldp+63,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                    >> 0xdU))));
    tracep->fullBit(oldp+64,(vlSelf->ysyx_22040127_top__DOT__id_flush));
    tracep->fullBit(oldp+65,(vlSelf->ysyx_22040127_top__DOT__ex_flush));
    tracep->fullBit(oldp+66,(vlSelf->ysyx_22040127_top__DOT__mem_flush));
    __Vtemp_h6ae3444b__0[0U] = (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final);
    __Vtemp_h6ae3444b__0[1U] = (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final 
                                        >> 0x20U));
    __Vtemp_h6ae3444b__0[2U] = (IData)((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                         | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                         ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                         : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final));
    __Vtemp_h6ae3444b__0[3U] = (IData)(((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                          | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                          ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                          : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final) 
                                        >> 0x20U));
    __Vtemp_h6ae3444b__0[4U] = (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1);
    __Vtemp_h6ae3444b__0[5U] = (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1 
                                        >> 0x20U));
    __Vtemp_h6ae3444b__0[6U] = (((IData)((((QData)((IData)(
                                                           (0xfffU 
                                                            & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm)))) 
                                           << 0x34U) 
                                          | (((QData)((IData)(
                                                              ((0x3020000000000000ULL 
                                                                == 
                                                                (0xffffff8000000000ULL 
                                                                 & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                               & (6U 
                                                                  == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                              << 0x33U) 
                                             | (((QData)((IData)(
                                                                 ((~ (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x1ffffffU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x27U)))))) 
                                                                  & (6U 
                                                                     == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    ((0x100000000000ULL 
                                                                      == 
                                                                      (0x700000000000ULL 
                                                                       & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                     & (6U 
                                                                        == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(
                                                                       ((0x200000000000ULL 
                                                                         == 
                                                                         (0x700000000000ULL 
                                                                          & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                        & (6U 
                                                                           == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          ((0x300000000000ULL 
                                                                            == 
                                                                            (0x700000000000ULL 
                                                                             & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                           & (6U 
                                                                              == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(
                                                                             ((0x500000000000ULL 
                                                                               == 
                                                                               (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                              & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                ((0x600000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                << 0x2dU) 
                                                               | (((QData)((IData)(
                                                                                ((0x700000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x3eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x39U)) 
                                                                                << 0xaU)) 
                                                                                | (0x3c0U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x23U)) 
                                                                                << 6U)))) 
                                                                                | ((0x38U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))) 
                                                                                | (1U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                                                | (3U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                                                | (4U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                                                | (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                                                << 2U)) 
                                                                                | (((2U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0x300000000ULL 
                                                                                == 
                                                                                (0x7f00000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)))))))))))))))))))) 
                                 << 0x13U) | ((0x7c000U 
                                               & ((IData)(
                                                          (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                           >> 0x27U)) 
                                                  << 0xeU)) 
                                              | ((0x3e00U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                              >> 0x2fU)) 
                                                     << 9U)) 
                                                 | ((0x1f0U 
                                                     & ((IData)(
                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                 >> 0x34U)) 
                                                        << 4U)) 
                                                    | (((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr))))));
    __Vtemp_h6ae3444b__0[7U] = (((IData)((((QData)((IData)(
                                                           (0xfffU 
                                                            & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm)))) 
                                           << 0x34U) 
                                          | (((QData)((IData)(
                                                              ((0x3020000000000000ULL 
                                                                == 
                                                                (0xffffff8000000000ULL 
                                                                 & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                               & (6U 
                                                                  == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                              << 0x33U) 
                                             | (((QData)((IData)(
                                                                 ((~ (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x1ffffffU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x27U)))))) 
                                                                  & (6U 
                                                                     == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    ((0x100000000000ULL 
                                                                      == 
                                                                      (0x700000000000ULL 
                                                                       & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                     & (6U 
                                                                        == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(
                                                                       ((0x200000000000ULL 
                                                                         == 
                                                                         (0x700000000000ULL 
                                                                          & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                        & (6U 
                                                                           == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          ((0x300000000000ULL 
                                                                            == 
                                                                            (0x700000000000ULL 
                                                                             & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                           & (6U 
                                                                              == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(
                                                                             ((0x500000000000ULL 
                                                                               == 
                                                                               (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                              & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                ((0x600000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                << 0x2dU) 
                                                               | (((QData)((IData)(
                                                                                ((0x700000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x3eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x39U)) 
                                                                                << 0xaU)) 
                                                                                | (0x3c0U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x23U)) 
                                                                                << 6U)))) 
                                                                                | ((0x38U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))) 
                                                                                | (1U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                                                | (3U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                                                | (4U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                                                | (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                                                << 2U)) 
                                                                                | (((2U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0x300000000ULL 
                                                                                == 
                                                                                (0x7f00000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)))))))))))))))))))) 
                                 >> 0xdU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        (0xfffU 
                                                                         & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm)))) 
                                                        << 0x34U) 
                                                       | (((QData)((IData)(
                                                                           ((0x3020000000000000ULL 
                                                                             == 
                                                                             (0xffffff8000000000ULL 
                                                                              & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                            & (6U 
                                                                               == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                           << 0x33U) 
                                                          | (((QData)((IData)(
                                                                              ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x27U)))))) 
                                                                               & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                              << 0x32U) 
                                                             | (((QData)((IData)(
                                                                                ((0x100000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                 << 0x31U) 
                                                                | (((QData)((IData)(
                                                                                ((0x200000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                    << 0x30U) 
                                                                   | (((QData)((IData)(
                                                                                ((0x300000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                       << 0x2fU) 
                                                                      | (((QData)((IData)(
                                                                                ((0x500000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                          << 0x2eU) 
                                                                         | (((QData)((IData)(
                                                                                ((0x600000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                             << 0x2dU) 
                                                                            | (((QData)((IData)(
                                                                                ((0x700000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                                << 0x2cU) 
                                                                               | (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                << 0xcU) 
                                                                                | (QData)((IData)(
                                                                                (((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x3eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x39U)) 
                                                                                << 0xaU)) 
                                                                                | (0x3c0U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x23U)) 
                                                                                << 6U)))) 
                                                                                | ((0x38U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))) 
                                                                                | (1U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                                                | (3U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                                                | (4U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                                                | (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                                                << 2U)) 
                                                                                | (((2U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0x300000000ULL 
                                                                                == 
                                                                                (0x7f00000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg))))))))))))))))))) 
                                                      >> 0x20U)) 
                                             << 0x13U));
    __Vtemp_h6ae3444b__0[8U] = ((IData)(((((QData)((IData)(
                                                           (0xfffU 
                                                            & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm)))) 
                                           << 0x34U) 
                                          | (((QData)((IData)(
                                                              ((0x3020000000000000ULL 
                                                                == 
                                                                (0xffffff8000000000ULL 
                                                                 & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                               & (6U 
                                                                  == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                              << 0x33U) 
                                             | (((QData)((IData)(
                                                                 ((~ (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x1ffffffU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x27U)))))) 
                                                                  & (6U 
                                                                     == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    ((0x100000000000ULL 
                                                                      == 
                                                                      (0x700000000000ULL 
                                                                       & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                     & (6U 
                                                                        == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(
                                                                       ((0x200000000000ULL 
                                                                         == 
                                                                         (0x700000000000ULL 
                                                                          & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                        & (6U 
                                                                           == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          ((0x300000000000ULL 
                                                                            == 
                                                                            (0x700000000000ULL 
                                                                             & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                           & (6U 
                                                                              == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(
                                                                             ((0x500000000000ULL 
                                                                               == 
                                                                               (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                              & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                ((0x600000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                << 0x2dU) 
                                                               | (((QData)((IData)(
                                                                                ((0x700000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x3eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x39U)) 
                                                                                << 0xaU)) 
                                                                                | (0x3c0U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x23U)) 
                                                                                << 6U)))) 
                                                                                | ((0x38U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))) 
                                                                                | (1U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                                                | (3U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                                                | (4U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                                                | (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                                                << 2U)) 
                                                                                | (((2U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0x300000000ULL 
                                                                                == 
                                                                                (0x7f00000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg))))))))))))))))))) 
                                         >> 0x20U)) 
                                >> 0xdU);
    tracep->fullWData(oldp+67,(__Vtemp_h6ae3444b__0),275);
    tracep->fullWData(oldp+76,(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus),262);
    tracep->fullWData(oldp+85,(vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus),192);
    tracep->fullQData(oldp+91,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])))),64);
    tracep->fullBit(oldp+93,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                    >> 5U))));
    tracep->fullQData(oldp+94,(vlSelf->ysyx_22040127_top__DOT__mem_final_rdata),64);
    tracep->fullQData(oldp+96,(vlSelf->ysyx_22040127_top__DOT__wb_reg_wdata),64);
    tracep->fullQData(oldp+98,(vlSelf->ysyx_22040127_top__DOT__wb_csrwdata),64);
    tracep->fullQData(oldp+100,(vlSelf->ysyx_22040127_top__DOT__wb_csrrdata),64);
    tracep->fullBit(oldp+102,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                     >> 0xeU))));
    tracep->fullCData(oldp+103,((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])),5);
    tracep->fullBit(oldp+104,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                     >> 5U))));
    tracep->fullCData(oldp+105,((0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U])),5);
    tracep->fullCData(oldp+106,((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U])),5);
    tracep->fullQData(oldp+107,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])))),64);
    tracep->fullBit(oldp+109,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                     >> 5U))));
    tracep->fullBit(oldp+110,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                     >> 7U))));
    tracep->fullBit(oldp+111,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U] 
                                     >> 5U))));
    tracep->fullBit(oldp+112,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[3U] 
                                     >> 0xdU))));
    tracep->fullBit(oldp+113,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[5U] 
                                     >> 0x14U))));
    tracep->fullBit(oldp+114,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[3U] 
                                     >> 0xeU))));
    tracep->fullBit(oldp+115,((1U & (~ (IData)((0U 
                                                != 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                            >> 0x2cU)))))))));
    tracep->fullBit(oldp+116,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                             >> 0x2dU)))))) 
                                     & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                >> 0x2cU))))));
    tracep->fullBit(oldp+117,((4U == (7U & (IData)(
                                                   (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                    >> 0x2cU))))));
    tracep->fullBit(oldp+118,((6U == (7U & (IData)(
                                                   (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                    >> 0x2cU))))));
    tracep->fullBit(oldp+119,((5U == (7U & (IData)(
                                                   (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                    >> 0x2cU))))));
    tracep->fullBit(oldp+120,((7U == (7U & (IData)(
                                                   (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                    >> 0x2cU))))));
    tracep->fullBit(oldp+121,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken));
    tracep->fullBit(oldp+122,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                               | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
    tracep->fullBit(oldp+123,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                               | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
    tracep->fullCData(oldp+124,(((0x20U & ((IData)(
                                                   (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                    >> 0x3eU)) 
                                           << 5U)) 
                                 | ((0x10U & ((IData)(
                                                      (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                       >> 0x39U)) 
                                              << 4U)) 
                                    | (0xfU & (IData)(
                                                      (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                       >> 0x23U)))))),6);
    tracep->fullCData(oldp+125,((7U & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                               >> 0x2cU)))),3);
    tracep->fullCData(oldp+126,((0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                  >> 0x27U)))),5);
    tracep->fullBit(oldp+127,((1U & (((((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))) 
                                        | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                       | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                      | (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                     | (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+128,((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))));
    tracep->fullBit(oldp+129,((IData)((0x300000000ULL 
                                       == (0x7f00000000ULL 
                                           & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)))));
    tracep->fullCData(oldp+130,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type),3);
    tracep->fullQData(oldp+131,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm),64);
    tracep->fullBit(oldp+133,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr));
    tracep->fullQData(oldp+134,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1),64);
    tracep->fullQData(oldp+136,((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                  | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                  ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                  : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final)),64);
    tracep->fullQData(oldp+138,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final),64);
    tracep->fullQData(oldp+140,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final),64);
    tracep->fullBit(oldp+142,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard1));
    tracep->fullBit(oldp+143,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard2));
    tracep->fullBit(oldp+144,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard1));
    tracep->fullBit(oldp+145,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard2));
    tracep->fullBit(oldp+146,((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                                & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                                   == (0x1fU & (IData)(
                                                       (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                        >> 0x2fU))))) 
                               & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                  >> 5U))));
    tracep->fullBit(oldp+147,((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                                & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                                   == (0x1fU & (IData)(
                                                       (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                        >> 0x34U))))) 
                               & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                  >> 5U))));
    tracep->fullBit(oldp+148,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard1));
    tracep->fullBit(oldp+149,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard2));
    tracep->fullBit(oldp+150,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1_tmp));
    tracep->fullBit(oldp+151,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2_tmp));
    tracep->fullBit(oldp+152,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1));
    tracep->fullBit(oldp+153,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2));
    tracep->fullBit(oldp+154,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard1_tmp));
    tracep->fullBit(oldp+155,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard2_tmp));
    tracep->fullBit(oldp+156,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_ready_go));
    tracep->fullBit(oldp+157,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_valid));
    tracep->fullQData(oldp+158,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg),64);
    tracep->fullIData(oldp+160,((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)),32);
    tracep->fullIData(oldp+161,((IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                         >> 0x20U))),32);
    tracep->fullBit(oldp+162,((IData)(((0x3020000000000000ULL 
                                        == (0xffffff8000000000ULL 
                                            & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+163,(((~ (IData)((0U != (0x1ffffffU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                             >> 0x27U)))))) 
                               & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
    tracep->fullBit(oldp+164,((IData)(((0x100000000000ULL 
                                        == (0x700000000000ULL 
                                            & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+165,((IData)(((0x200000000000ULL 
                                        == (0x700000000000ULL 
                                            & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+166,((IData)(((0x300000000000ULL 
                                        == (0x700000000000ULL 
                                            & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+167,((IData)(((0x500000000000ULL 
                                        == (0x700000000000ULL 
                                            & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+168,((IData)(((0x600000000000ULL 
                                        == (0x700000000000ULL 
                                            & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+169,((IData)(((0x700000000000ULL 
                                        == (0x700000000000ULL 
                                            & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullCData(oldp+170,((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                  >> 0x20U)))),7);
    tracep->fullCData(oldp+171,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out),3);
    tracep->fullBit(oldp+172,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit));
    tracep->fullQData(oldp+173,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_calc_result),64);
    tracep->fullQData(oldp+175,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_calc_result),64);
    tracep->fullQData(oldp+177,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op),64);
    tracep->fullIData(oldp+179,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op),32);
    tracep->fullQData(oldp+180,(((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                 - (((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))))),64);
    tracep->fullIData(oldp+182,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__addw_result),32);
    tracep->fullIData(oldp+183,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result),32);
    tracep->fullIData(oldp+184,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U]),32);
    tracep->fullIData(oldp+185,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U]),32);
    tracep->fullIData(oldp+186,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                  << 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                               >> 1U))),32);
    tracep->fullQData(oldp+187,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_addw_result),64);
    tracep->fullQData(oldp+189,((((QData)((IData)((- (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result)))),64);
    tracep->fullQData(oldp+191,((((QData)((IData)((- (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U] 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U])))),64);
    tracep->fullQData(oldp+193,((((QData)((IData)((- (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U] 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U])))),64);
    tracep->fullQData(oldp+195,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U]))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                                                << 0x1fU) 
                                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                                                  >> 1U)))))),64);
    tracep->fullIData(oldp+197,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_sllw),32);
    tracep->fullIData(oldp+198,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_srlw),32);
    tracep->fullCData(oldp+199,((0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])),6);
    tracep->fullQData(oldp+200,((0xffffffff00000000ULL 
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
                                                      : 0U)))))),64);
    tracep->fullQData(oldp+202,((~ (0xffffffffffffffffULL 
                                    >> (0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))),64);
    tracep->fullQData(oldp+204,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sraw),64);
    tracep->fullQData(oldp+206,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sllw),64);
    tracep->fullQData(oldp+208,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_srlw),64);
    tracep->fullQData(oldp+210,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[0U])))),64);
    tracep->fullIData(oldp+212,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                  << 1U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                            >> 0x1fU))),32);
    tracep->fullCData(oldp+213,((0x3fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 0x19U))),6);
    tracep->fullCData(oldp+214,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                       >> 0x16U))),3);
    tracep->fullBit(oldp+215,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__ex_ready_go));
    tracep->fullBit(oldp+216,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 0x14U))));
    tracep->fullBit(oldp+217,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 0x13U))));
    tracep->fullCData(oldp+218,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 0xeU))),5);
    tracep->fullCData(oldp+219,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                       >> 1U))),3);
    tracep->fullBit(oldp+220,((1U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])));
    tracep->fullQData(oldp+221,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])))),64);
    tracep->fullQData(oldp+223,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))),64);
    tracep->fullCData(oldp+225,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 9U))),5);
    tracep->fullCData(oldp+226,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 4U))),5);
    tracep->fullBit(oldp+227,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 0x15U))));
    tracep->fullBit(oldp+228,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_type));
    tracep->fullBit(oldp+229,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_type));
    tracep->fullBit(oldp+230,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_sign));
    tracep->fullBit(oldp+231,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_stage2));
    tracep->fullBit(oldp+232,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_ok));
    tracep->fullBit(oldp+233,((1U & (~ (IData)((0xc00000U 
                                                == 
                                                (0xc00000U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])))))));
    tracep->fullBit(oldp+234,((1U & (~ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                        >> 0x17U)))));
    tracep->fullQData(oldp+235,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[2U])))),64);
    tracep->fullQData(oldp+237,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U])))),64);
    tracep->fullBit(oldp+239,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__ex_valid));
    tracep->fullWData(oldp+240,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg),275);
    tracep->fullQData(oldp+249,(((8U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                  ? ((4U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                      ? 0ULL : ((2U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                 ? 0ULL
                                                 : vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_calc_result))
                                  : ((4U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                      ? ((2U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                          ? (QData)((IData)(
                                                            ((IData)(4U) 
                                                             + 
                                                             ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                               << 1U) 
                                                              | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                 >> 0x1fU)))))
                                          : ((((QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                             + (((QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))))
                                      : ((2U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                          ? ((0x8000000U 
                                              & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                              ? (((QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])))
                                              : ((((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                                 + (QData)((IData)(
                                                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                     << 1U) 
                                                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                       >> 0x1fU))))))
                                          : ((1U & 
                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                              ? (QData)((IData)(
                                                                ((IData)(4U) 
                                                                 + 
                                                                 ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                   << 1U) 
                                                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                     >> 0x1fU)))))
                                              : vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_calc_result))))),64);
    tracep->fullBit(oldp+251,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_ready));
    tracep->fullCData(oldp+252,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_state),2);
    tracep->fullQData(oldp+253,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U])))),64);
    tracep->fullQData(oldp+255,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[4U])) 
                                  << 0x3fU) | (((QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U])) 
                                                << 0x1fU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U])) 
                                                  >> 1U)))),64);
    tracep->fullBit(oldp+257,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 6U))));
    tracep->fullBit(oldp+258,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 5U))));
    tracep->fullBit(oldp+259,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 4U))));
    tracep->fullBit(oldp+260,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 3U))));
    tracep->fullBit(oldp+261,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 2U))));
    tracep->fullBit(oldp+262,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 1U))));
    tracep->fullBit(oldp+263,((1U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])));
    tracep->fullBit(oldp+264,((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                               >> 0x1fU)));
    tracep->fullBit(oldp+265,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                >> 0x1fU) | (0U != 
                                             (0x7fU 
                                              & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])))));
    tracep->fullSData(oldp+266,((0xfffU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                           >> 7U))),12);
    tracep->fullQData(oldp+267,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sra),64);
    tracep->fullQData(oldp+269,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_srl),64);
    tracep->fullQData(oldp+271,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sll),64);
    tracep->fullCData(oldp+273,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 0x16U))),5);
    tracep->fullCData(oldp+274,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in),6);
    tracep->fullQData(oldp+275,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber3),64);
    tracep->fullQData(oldp+277,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber4),64);
    tracep->fullCData(oldp+279,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__cnt),7);
    tracep->fullWData(oldp+280,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend),129);
    tracep->fullQData(oldp+285,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__divisor),64);
    tracep->fullWData(oldp+287,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__subres),65);
    tracep->fullWData(oldp+290,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__x_ext),65);
    tracep->fullWData(oldp+293,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext),67);
    tracep->fullWData(oldp+296,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[0]),128);
    tracep->fullWData(oldp+300,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[1]),128);
    tracep->fullWData(oldp+304,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[2]),128);
    tracep->fullWData(oldp+308,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[3]),128);
    tracep->fullWData(oldp+312,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[4]),128);
    tracep->fullWData(oldp+316,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[5]),128);
    tracep->fullWData(oldp+320,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[6]),128);
    tracep->fullWData(oldp+324,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[7]),128);
    tracep->fullWData(oldp+328,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[8]),128);
    tracep->fullWData(oldp+332,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[9]),128);
    tracep->fullWData(oldp+336,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[10]),128);
    tracep->fullWData(oldp+340,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[0]),128);
    tracep->fullWData(oldp+344,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[1]),128);
    tracep->fullWData(oldp+348,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[2]),128);
    tracep->fullWData(oldp+352,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[3]),128);
    tracep->fullWData(oldp+356,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[4]),128);
    tracep->fullWData(oldp+360,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[5]),128);
    tracep->fullWData(oldp+364,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[6]),128);
    tracep->fullWData(oldp+368,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[7]),128);
    tracep->fullWData(oldp+372,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[8]),128);
    tracep->fullWData(oldp+376,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[9]),128);
    tracep->fullWData(oldp+380,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[10]),128);
    tracep->fullWData(oldp+384,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[0]),128);
    tracep->fullWData(oldp+388,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[1]),128);
    tracep->fullWData(oldp+392,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[2]),128);
    tracep->fullWData(oldp+396,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[3]),128);
    tracep->fullWData(oldp+400,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[4]),128);
    tracep->fullWData(oldp+404,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[5]),128);
    tracep->fullWData(oldp+408,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[6]),128);
    tracep->fullWData(oldp+412,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[0]),128);
    tracep->fullWData(oldp+416,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[1]),128);
    tracep->fullWData(oldp+420,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[2]),128);
    tracep->fullWData(oldp+424,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[3]),128);
    tracep->fullWData(oldp+428,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[4]),128);
    tracep->fullWData(oldp+432,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[5]),128);
    tracep->fullWData(oldp+436,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[6]),128);
    tracep->fullWData(oldp+440,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[0]),128);
    tracep->fullWData(oldp+444,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[1]),128);
    tracep->fullWData(oldp+448,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[2]),128);
    tracep->fullWData(oldp+452,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[3]),128);
    tracep->fullWData(oldp+456,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[4]),128);
    tracep->fullWData(oldp+460,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[0]),128);
    tracep->fullWData(oldp+464,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[1]),128);
    tracep->fullWData(oldp+468,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[2]),128);
    tracep->fullWData(oldp+472,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[3]),128);
    tracep->fullWData(oldp+476,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[4]),128);
    tracep->fullWData(oldp+480,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[0]),128);
    tracep->fullWData(oldp+484,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[1]),128);
    tracep->fullWData(oldp+488,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[2]),128);
    tracep->fullWData(oldp+492,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[0]),128);
    tracep->fullWData(oldp+496,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[1]),128);
    tracep->fullWData(oldp+500,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[2]),128);
    tracep->fullWData(oldp+504,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s[0]),128);
    tracep->fullWData(oldp+508,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s[1]),128);
    tracep->fullWData(oldp+512,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s[2]),128);
    tracep->fullWData(oldp+516,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c[0]),128);
    tracep->fullWData(oldp+520,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c[1]),128);
    tracep->fullWData(oldp+524,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c[2]),128);
    tracep->fullWData(oldp+528,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s[0]),128);
    tracep->fullWData(oldp+532,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s[1]),128);
    tracep->fullWData(oldp+536,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c[0]),128);
    tracep->fullWData(oldp+540,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c[1]),128);
    tracep->fullWData(oldp+544,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s),128);
    tracep->fullWData(oldp+548,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c),128);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h1fdd8292__0, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c, 1U);
    __Vtemp_h5a241144__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][0U];
    __Vtemp_h5a241144__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][1U];
    __Vtemp_h5a241144__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][2U];
    __Vtemp_h5a241144__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h76c294e2__0, __Vtemp_h5a241144__0, 1U);
    __Vtemp_hc42eddb7__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[0U] 
                                 ^ __Vtemp_h1fdd8292__0[0U]) 
                                ^ __Vtemp_h76c294e2__0[0U]);
    __Vtemp_hc42eddb7__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[1U] 
                                 ^ __Vtemp_h1fdd8292__0[1U]) 
                                ^ __Vtemp_h76c294e2__0[1U]);
    __Vtemp_hc42eddb7__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[2U] 
                                 ^ __Vtemp_h1fdd8292__0[2U]) 
                                ^ __Vtemp_h76c294e2__0[2U]);
    __Vtemp_hc42eddb7__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[3U] 
                                 ^ __Vtemp_h1fdd8292__0[3U]) 
                                ^ __Vtemp_h76c294e2__0[3U]);
    tracep->fullWData(oldp+552,(__Vtemp_hc42eddb7__0),128);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h1fdd8292__1, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c, 1U);
    __Vtemp_h522dbf0a__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c[0U] 
                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
                                [1U][0U]);
    __Vtemp_h522dbf0a__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c[1U] 
                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
                                [1U][1U]);
    __Vtemp_h522dbf0a__0[2U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c[2U] 
                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
                                [1U][2U]);
    __Vtemp_h522dbf0a__0[3U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c[3U] 
                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
                                [1U][3U]);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h1a534702__0, __Vtemp_h522dbf0a__0, 1U);
    __Vtemp_h5a241144__2[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][0U];
    __Vtemp_h5a241144__2[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][1U];
    __Vtemp_h5a241144__2[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][2U];
    __Vtemp_h5a241144__2[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hc0fdef7e__0, __Vtemp_h5a241144__2, 1U);
    __Vtemp_h21d0374a__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[0U] 
                                  & __Vtemp_h1fdd8292__1[0U]) 
                                 | __Vtemp_h1a534702__0[0U]) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[0U] 
                                   & __Vtemp_hc0fdef7e__0[0U]));
    __Vtemp_h21d0374a__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[1U] 
                                  & __Vtemp_h1fdd8292__1[1U]) 
                                 | __Vtemp_h1a534702__0[1U]) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[1U] 
                                   & __Vtemp_hc0fdef7e__0[1U]));
    __Vtemp_h21d0374a__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[2U] 
                                  & __Vtemp_h1fdd8292__1[2U]) 
                                 | __Vtemp_h1a534702__0[2U]) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[2U] 
                                   & __Vtemp_hc0fdef7e__0[2U]));
    __Vtemp_h21d0374a__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[3U] 
                                  & __Vtemp_h1fdd8292__1[3U]) 
                                 | __Vtemp_h1a534702__0[3U]) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[3U] 
                                   & __Vtemp_hc0fdef7e__0[3U]));
    tracep->fullWData(oldp+556,(__Vtemp_h21d0374a__0),128);
    tracep->fullWData(oldp+560,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res),128);
    tracep->fullCData(oldp+564,((6U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       << 1U))),3);
    tracep->fullWData(oldp+565,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b0____pinNumber5),128);
    __Vtemp_h5e726cb9__0[0U] = 1U;
    __Vtemp_h5e726cb9__0[1U] = 0U;
    __Vtemp_h5e726cb9__0[2U] = 0U;
    __Vtemp_h2024e4e5__0[0U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__x_ext[0U]);
    __Vtemp_h2024e4e5__0[1U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__x_ext[1U]);
    __Vtemp_h2024e4e5__0[2U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__x_ext[2U]);
    VL_ADD_W(3, __Vtemp_hdab1d851__0, __Vtemp_h5e726cb9__0, __Vtemp_h2024e4e5__0);
    __Vtemp_h9fb190ff__0[0U] = __Vtemp_hdab1d851__0[0U];
    __Vtemp_h9fb190ff__0[1U] = __Vtemp_hdab1d851__0[1U];
    __Vtemp_h9fb190ff__0[2U] = (1U & __Vtemp_hdab1d851__0[2U]);
    tracep->fullWData(oldp+569,(__Vtemp_h9fb190ff__0),65);
    tracep->fullCData(oldp+572,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 1U))),3);
    tracep->fullWData(oldp+573,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b1____pinNumber5),128);
    tracep->fullCData(oldp+577,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0x13U))),3);
    tracep->fullWData(oldp+578,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b10____pinNumber5),128);
    tracep->fullCData(oldp+582,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0x15U))),3);
    tracep->fullWData(oldp+583,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b11____pinNumber5),128);
    tracep->fullCData(oldp+587,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0x17U))),3);
    tracep->fullWData(oldp+588,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b12____pinNumber5),128);
    tracep->fullCData(oldp+592,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0x19U))),3);
    tracep->fullWData(oldp+593,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b13____pinNumber5),128);
    tracep->fullCData(oldp+597,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0x1bU))),3);
    tracep->fullWData(oldp+598,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b14____pinNumber5),128);
    tracep->fullCData(oldp+602,((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                 >> 0x1dU)),3);
    tracep->fullWData(oldp+603,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b15____pinNumber5),128);
    tracep->fullCData(oldp+607,((7U & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                        << 1U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                                  >> 0x1fU)))),3);
    tracep->fullWData(oldp+608,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b16____pinNumber5),128);
    tracep->fullCData(oldp+612,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 1U))),3);
    tracep->fullWData(oldp+613,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b17____pinNumber5),128);
    tracep->fullCData(oldp+617,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 3U))),3);
    tracep->fullWData(oldp+618,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b18____pinNumber5),128);
    tracep->fullCData(oldp+622,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 5U))),3);
    tracep->fullWData(oldp+623,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b19____pinNumber5),128);
    tracep->fullCData(oldp+627,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 3U))),3);
    tracep->fullWData(oldp+628,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b2____pinNumber5),128);
    tracep->fullCData(oldp+632,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 7U))),3);
    tracep->fullWData(oldp+633,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b20____pinNumber5),128);
    tracep->fullCData(oldp+637,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 9U))),3);
    tracep->fullWData(oldp+638,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b21____pinNumber5),128);
    tracep->fullCData(oldp+642,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0xbU))),3);
    tracep->fullWData(oldp+643,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b22____pinNumber5),128);
    tracep->fullCData(oldp+647,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0xdU))),3);
    tracep->fullWData(oldp+648,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b23____pinNumber5),128);
    tracep->fullCData(oldp+652,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0xfU))),3);
    tracep->fullWData(oldp+653,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b24____pinNumber5),128);
    tracep->fullCData(oldp+657,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0x11U))),3);
    tracep->fullWData(oldp+658,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b25____pinNumber5),128);
    tracep->fullCData(oldp+662,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0x13U))),3);
    tracep->fullWData(oldp+663,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b26____pinNumber5),128);
    tracep->fullCData(oldp+667,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0x15U))),3);
    tracep->fullWData(oldp+668,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b27____pinNumber5),128);
    tracep->fullCData(oldp+672,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0x17U))),3);
    tracep->fullWData(oldp+673,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b28____pinNumber5),128);
    tracep->fullCData(oldp+677,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0x19U))),3);
    tracep->fullWData(oldp+678,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b29____pinNumber5),128);
    tracep->fullCData(oldp+682,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 5U))),3);
    tracep->fullWData(oldp+683,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b3____pinNumber5),128);
    tracep->fullCData(oldp+687,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0x1bU))),3);
    tracep->fullWData(oldp+688,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b30____pinNumber5),128);
    tracep->fullCData(oldp+692,((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                 >> 0x1dU)),3);
    tracep->fullWData(oldp+693,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b31____pinNumber5),128);
    tracep->fullCData(oldp+697,((7U & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[2U] 
                                        << 1U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                                  >> 0x1fU)))),3);
    tracep->fullWData(oldp+698,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b32____pinNumber5),128);
    tracep->fullCData(oldp+702,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 7U))),3);
    tracep->fullWData(oldp+703,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b4____pinNumber5),128);
    tracep->fullCData(oldp+707,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 9U))),3);
    tracep->fullWData(oldp+708,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b5____pinNumber5),128);
    tracep->fullCData(oldp+712,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0xbU))),3);
    tracep->fullWData(oldp+713,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b6____pinNumber5),128);
    tracep->fullCData(oldp+717,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0xdU))),3);
    tracep->fullWData(oldp+718,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b7____pinNumber5),128);
    tracep->fullCData(oldp+722,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0xfU))),3);
    tracep->fullWData(oldp+723,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b8____pinNumber5),128);
    tracep->fullCData(oldp+727,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0x11U))),3);
    tracep->fullWData(oldp+728,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b9____pinNumber5),128);
    __Vtemp_ha2f4aa87__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0U][0U];
    __Vtemp_ha2f4aa87__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0U][1U];
    __Vtemp_ha2f4aa87__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0U][2U];
    __Vtemp_ha2f4aa87__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0U][3U];
    tracep->fullWData(oldp+732,(__Vtemp_ha2f4aa87__0),128);
    __Vtemp_h84c11fea__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [1U][0U] << 2U);
    __Vtemp_h84c11fea__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [1U][0U] >> 0x1eU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [1U][1U] << 2U));
    __Vtemp_h84c11fea__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [1U][1U] >> 0x1eU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [1U][2U] << 2U));
    __Vtemp_h84c11fea__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [1U][2U] >> 0x1eU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [1U][3U] << 2U));
    tracep->fullWData(oldp+736,(__Vtemp_h84c11fea__0),128);
    __Vtemp_ha13feb02__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [2U][0U] << 4U);
    __Vtemp_ha13feb02__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [2U][0U] >> 0x1cU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [2U][1U] << 4U));
    __Vtemp_ha13feb02__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [2U][1U] >> 0x1cU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [2U][2U] << 4U));
    __Vtemp_ha13feb02__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [2U][2U] >> 0x1cU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [2U][3U] << 4U));
    tracep->fullWData(oldp+740,(__Vtemp_ha13feb02__0),128);
    __Vtemp_h05f44798__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0U][0U] ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                             [1U][0U] 
                                             << 2U)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [2U][0U] << 4U));
    __Vtemp_h05f44798__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0U][1U] ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                              [1U][0U] 
                                              >> 0x1eU) 
                                             | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                [1U][1U] 
                                                << 2U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [2U][0U] >> 0x1cU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [2U][1U] << 4U)));
    __Vtemp_h05f44798__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0U][2U] ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                              [1U][1U] 
                                              >> 0x1eU) 
                                             | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                [1U][2U] 
                                                << 2U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [2U][1U] >> 0x1cU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [2U][2U] << 4U)));
    __Vtemp_h05f44798__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0U][3U] ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                              [1U][2U] 
                                              >> 0x1eU) 
                                             | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                [1U][3U] 
                                                << 2U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [2U][2U] >> 0x1cU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [2U][3U] << 4U)));
    tracep->fullWData(oldp+744,(__Vtemp_h05f44798__0),128);
    __Vtemp_he62c9636__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0U][0U] & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                              [1U][0U] 
                                              << 2U)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [1U][0U] << 2U) 
                                    & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [2U][0U] << 4U))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0U][0U] & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                               [2U][0U] 
                                               << 4U)));
    __Vtemp_he62c9636__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_he62c9636__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_he62c9636__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    tracep->fullWData(oldp+748,(__Vtemp_he62c9636__0),128);
    __Vtemp_hcbf1bc4f__0[0U] = 0U;
    __Vtemp_hcbf1bc4f__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x1bU][0U] << 0x16U);
    __Vtemp_hcbf1bc4f__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1bU][0U] >> 0xaU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1bU][1U] << 0x16U));
    __Vtemp_hcbf1bc4f__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1bU][1U] >> 0xaU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1bU][2U] << 0x16U));
    tracep->fullWData(oldp+752,(__Vtemp_hcbf1bc4f__0),128);
    __Vtemp_he15e0589__0[0U] = 0U;
    __Vtemp_he15e0589__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x1cU][0U] << 0x18U);
    __Vtemp_he15e0589__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1cU][0U] >> 8U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1cU][1U] << 0x18U));
    __Vtemp_he15e0589__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1cU][1U] >> 8U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1cU][2U] << 0x18U));
    tracep->fullWData(oldp+756,(__Vtemp_he15e0589__0),128);
    __Vtemp_h56daa6d4__0[0U] = 0U;
    __Vtemp_h56daa6d4__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x1dU][0U] << 0x1aU);
    __Vtemp_h56daa6d4__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1dU][0U] >> 6U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1dU][1U] << 0x1aU));
    __Vtemp_h56daa6d4__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1dU][1U] >> 6U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1dU][2U] << 0x1aU));
    tracep->fullWData(oldp+760,(__Vtemp_h56daa6d4__0),128);
    __Vtemp_h4595720e__0[0U] = 0U;
    __Vtemp_h4595720e__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x1bU][0U] << 0x16U) 
                                 ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x1cU][0U] << 0x18U)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1dU][0U] << 0x1aU));
    __Vtemp_h4595720e__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1bU][0U] >> 0xaU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1bU][1U] << 0x16U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1cU][0U] >> 8U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1cU][1U] 
                                       << 0x18U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x1dU][0U] >> 6U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x1dU][1U] << 0x1aU)));
    __Vtemp_h4595720e__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1bU][1U] >> 0xaU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1bU][2U] << 0x16U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1cU][1U] >> 8U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1cU][2U] 
                                       << 0x18U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x1dU][1U] >> 6U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x1dU][2U] << 0x1aU)));
    tracep->fullWData(oldp+764,(__Vtemp_h4595720e__0),128);
    __Vtemp_h4ee7a19f__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_h4ee7a19f__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_h59366efe__0[0U] = 0U;
    __Vtemp_h59366efe__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1bU][0U] << 0x16U) 
                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1cU][0U] << 0x18U)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1cU][0U] << 0x18U) 
                                    & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1dU][0U] 
                                       << 0x1aU))) 
                                | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x1bU][0U] << 0x16U) 
                                   & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x1dU][0U] << 0x1aU)));
    __Vtemp_h59366efe__0[2U] = (__Vtemp_h4ee7a19f__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1bU][0U] >> 0xaU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1bU][1U] 
                                       << 0x16U)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1dU][0U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1dU][1U] 
                                       << 0x1aU))));
    __Vtemp_h59366efe__0[3U] = (__Vtemp_h4ee7a19f__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1bU][1U] >> 0xaU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1bU][2U] 
                                       << 0x16U)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1dU][1U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1dU][2U] 
                                       << 0x1aU))));
    tracep->fullWData(oldp+768,(__Vtemp_h59366efe__0),128);
    __Vtemp_he7eaeb27__0[0U] = 0U;
    __Vtemp_he7eaeb27__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x1eU][0U] << 0x1cU);
    __Vtemp_he7eaeb27__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1eU][0U] >> 4U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1eU][1U] << 0x1cU));
    __Vtemp_he7eaeb27__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1eU][1U] >> 4U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1eU][2U] << 0x1cU));
    tracep->fullWData(oldp+772,(__Vtemp_he7eaeb27__0),128);
    __Vtemp_h04be3098__0[0U] = 0U;
    __Vtemp_h04be3098__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x1fU][0U] << 0x1eU);
    __Vtemp_h04be3098__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1fU][0U] >> 2U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1fU][1U] << 0x1eU));
    __Vtemp_h04be3098__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1fU][1U] >> 2U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1fU][2U] << 0x1eU));
    tracep->fullWData(oldp+776,(__Vtemp_h04be3098__0),128);
    __Vtemp_h2ad69785__0[0U] = 0U;
    __Vtemp_h2ad69785__0[1U] = 0U;
    __Vtemp_h2ad69785__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                         [0x20U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                          [0x20U][0U]))));
    __Vtemp_h2ad69785__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                          [0x20U][1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                           [0x20U][0U]))) 
                                        >> 0x20U));
    tracep->fullWData(oldp+780,(__Vtemp_h2ad69785__0),128);
    __Vtemp_h0254ffe9__0[0U] = 0U;
    __Vtemp_h0254ffe9__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1eU][0U] << 0x1cU) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1fU][0U] << 0x1eU));
    __Vtemp_h0254ffe9__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1eU][0U] >> 4U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1eU][1U] << 0x1cU)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1fU][0U] >> 2U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1fU][1U] 
                                       << 0x1eU))) 
                                ^ (IData)((((QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                            [0x20U][1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                             [0x20U][0U])))));
    __Vtemp_h0254ffe9__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1eU][1U] >> 4U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1eU][2U] << 0x1cU)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1fU][1U] >> 2U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1fU][2U] 
                                       << 0x1eU))) 
                                ^ (IData)(((((QData)((IData)(
                                                             vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                             [0x20U][1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                              [0x20U][0U]))) 
                                           >> 0x20U)));
    tracep->fullWData(oldp+784,(__Vtemp_h0254ffe9__0),128);
    __Vtemp_hb73adfb5__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_hb73adfb5__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_h2e174758__0[0U] = 0U;
    __Vtemp_h2e174758__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1eU][0U] << 0x1cU) 
                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1fU][0U] << 0x1eU));
    __Vtemp_h2e174758__0[2U] = (__Vtemp_hb73adfb5__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1eU][0U] >> 4U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1eU][1U] 
                                       << 0x1cU)) & (IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                              [0x20U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                               [0x20U][0U]))))));
    __Vtemp_h2e174758__0[3U] = (__Vtemp_hb73adfb5__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1eU][1U] >> 4U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1eU][2U] 
                                       << 0x1cU)) & (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                               [0x20U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                                [0x20U][0U]))) 
                                                             >> 0x20U))));
    tracep->fullWData(oldp+788,(__Vtemp_h2e174758__0),128);
    __Vtemp_h69355225__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [3U][0U] << 6U);
    __Vtemp_h69355225__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [3U][0U] >> 0x1aU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][1U] << 6U));
    __Vtemp_h69355225__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [3U][1U] >> 0x1aU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][2U] << 6U));
    __Vtemp_h69355225__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [3U][2U] >> 0x1aU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][3U] << 6U));
    tracep->fullWData(oldp+792,(__Vtemp_h69355225__0),128);
    __Vtemp_hc43fb470__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [4U][0U] << 8U);
    __Vtemp_hc43fb470__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [4U][0U] >> 0x18U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [4U][1U] << 8U));
    __Vtemp_hc43fb470__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [4U][1U] >> 0x18U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [4U][2U] << 8U));
    __Vtemp_hc43fb470__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [4U][2U] >> 0x18U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [4U][3U] << 8U));
    tracep->fullWData(oldp+796,(__Vtemp_hc43fb470__0),128);
    __Vtemp_h30ce69e9__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [5U][0U] << 0xaU);
    __Vtemp_h30ce69e9__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [5U][0U] >> 0x16U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [5U][1U] << 0xaU));
    __Vtemp_h30ce69e9__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [5U][1U] >> 0x16U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [5U][2U] << 0xaU));
    __Vtemp_h30ce69e9__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [5U][2U] >> 0x16U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [5U][3U] << 0xaU));
    tracep->fullWData(oldp+800,(__Vtemp_h30ce69e9__0),128);
    __Vtemp_h6208bde2__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [3U][0U] << 6U) ^ 
                                 (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [4U][0U] << 8U)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [5U][0U] << 0xaU));
    __Vtemp_h6208bde2__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][0U] >> 0x1aU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [3U][1U] << 6U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][0U] >> 0x18U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [4U][1U] << 8U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [5U][0U] >> 0x16U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [5U][1U] << 0xaU)));
    __Vtemp_h6208bde2__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][1U] >> 0x1aU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [3U][2U] << 6U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][1U] >> 0x18U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [4U][2U] << 8U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [5U][1U] >> 0x16U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [5U][2U] << 0xaU)));
    __Vtemp_h6208bde2__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][2U] >> 0x1aU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [3U][3U] << 6U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][2U] >> 0x18U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [4U][3U] << 8U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [5U][2U] >> 0x16U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [5U][3U] << 0xaU)));
    tracep->fullWData(oldp+804,(__Vtemp_h6208bde2__0),128);
    __Vtemp_h49da03eb__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_h49da03eb__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_h49da03eb__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_had93eb43__0[0U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][0U] << 6U) 
                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][0U] << 8U)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][0U] << 8U) 
                                    & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [5U][0U] << 0xaU))) 
                                | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [3U][0U] << 6U) 
                                   & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [5U][0U] << 0xaU)));
    __Vtemp_had93eb43__0[1U] = (__Vtemp_h49da03eb__0[1U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [3U][0U] >> 0x1aU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [3U][1U] << 6U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [5U][0U] >> 0x16U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [5U][1U] << 0xaU))));
    __Vtemp_had93eb43__0[2U] = (__Vtemp_h49da03eb__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [3U][1U] >> 0x1aU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [3U][2U] << 6U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [5U][1U] >> 0x16U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [5U][2U] << 0xaU))));
    __Vtemp_had93eb43__0[3U] = (__Vtemp_h49da03eb__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [3U][2U] >> 0x1aU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [3U][3U] << 6U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [5U][2U] >> 0x16U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [5U][3U] << 0xaU))));
    tracep->fullWData(oldp+808,(__Vtemp_had93eb43__0),128);
    __Vtemp_h3c043eb5__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [6U][0U] << 0xcU);
    __Vtemp_h3c043eb5__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [6U][0U] >> 0x14U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][1U] << 0xcU));
    __Vtemp_h3c043eb5__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [6U][1U] >> 0x14U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][2U] << 0xcU));
    __Vtemp_h3c043eb5__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [6U][2U] >> 0x14U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][3U] << 0xcU));
    tracep->fullWData(oldp+812,(__Vtemp_h3c043eb5__0),128);
    __Vtemp_ha924c5a8__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [7U][0U] << 0xeU);
    __Vtemp_ha924c5a8__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [7U][0U] >> 0x12U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [7U][1U] << 0xeU));
    __Vtemp_ha924c5a8__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [7U][1U] >> 0x12U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [7U][2U] << 0xeU));
    __Vtemp_ha924c5a8__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [7U][2U] >> 0x12U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [7U][3U] << 0xeU));
    tracep->fullWData(oldp+816,(__Vtemp_ha924c5a8__0),128);
    __Vtemp_h6241e666__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [8U][0U] << 0x10U);
    __Vtemp_h6241e666__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [8U][0U] >> 0x10U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [8U][1U] << 0x10U));
    __Vtemp_h6241e666__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [8U][1U] >> 0x10U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [8U][2U] << 0x10U));
    __Vtemp_h6241e666__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [8U][2U] >> 0x10U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [8U][3U] << 0x10U));
    tracep->fullWData(oldp+820,(__Vtemp_h6241e666__0),128);
    __Vtemp_hc7598cf0__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [6U][0U] << 0xcU) 
                                 ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [7U][0U] << 0xeU)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [8U][0U] << 0x10U));
    __Vtemp_hc7598cf0__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][0U] >> 0x14U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [6U][1U] << 0xcU)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][0U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [7U][1U] << 0xeU))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [8U][0U] >> 0x10U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [8U][1U] << 0x10U)));
    __Vtemp_hc7598cf0__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][1U] >> 0x14U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [6U][2U] << 0xcU)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][1U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [7U][2U] << 0xeU))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [8U][1U] >> 0x10U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [8U][2U] << 0x10U)));
    __Vtemp_hc7598cf0__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][2U] >> 0x14U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [6U][3U] << 0xcU)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][2U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [7U][3U] << 0xeU))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [8U][2U] >> 0x10U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [8U][3U] << 0x10U)));
    tracep->fullWData(oldp+824,(__Vtemp_hc7598cf0__0),128);
    __Vtemp_h818b2e10__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_h818b2e10__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_h818b2e10__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_he11f6c98__0[0U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][0U] << 0xcU) 
                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][0U] << 0xeU)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][0U] << 0xeU) 
                                    & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [8U][0U] << 0x10U))) 
                                | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [6U][0U] << 0xcU) 
                                   & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [8U][0U] << 0x10U)));
    __Vtemp_he11f6c98__0[1U] = (__Vtemp_h818b2e10__0[1U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [6U][0U] >> 0x14U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [6U][1U] << 0xcU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [8U][0U] >> 0x10U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [8U][1U] << 0x10U))));
    __Vtemp_he11f6c98__0[2U] = (__Vtemp_h818b2e10__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [6U][1U] >> 0x14U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [6U][2U] << 0xcU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [8U][1U] >> 0x10U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [8U][2U] << 0x10U))));
    __Vtemp_he11f6c98__0[3U] = (__Vtemp_h818b2e10__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [6U][2U] >> 0x14U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [6U][3U] << 0xcU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [8U][2U] >> 0x10U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [8U][3U] << 0x10U))));
    tracep->fullWData(oldp+828,(__Vtemp_he11f6c98__0),128);
    __Vtemp_h544cee01__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [9U][0U] << 0x12U);
    __Vtemp_h544cee01__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [9U][0U] >> 0xeU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][1U] << 0x12U));
    __Vtemp_h544cee01__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [9U][1U] >> 0xeU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][2U] << 0x12U));
    __Vtemp_h544cee01__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [9U][2U] >> 0xeU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][3U] << 0x12U));
    tracep->fullWData(oldp+832,(__Vtemp_h544cee01__0),128);
    __Vtemp_h604618a7__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0xaU][0U] << 0x14U);
    __Vtemp_h604618a7__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xaU][0U] >> 0xcU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xaU][1U] << 0x14U));
    __Vtemp_h604618a7__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xaU][1U] >> 0xcU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xaU][2U] << 0x14U));
    __Vtemp_h604618a7__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xaU][2U] >> 0xcU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xaU][3U] << 0x14U));
    tracep->fullWData(oldp+836,(__Vtemp_h604618a7__0),128);
    __Vtemp_h0011670c__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0xbU][0U] << 0x16U);
    __Vtemp_h0011670c__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xbU][0U] >> 0xaU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xbU][1U] << 0x16U));
    __Vtemp_h0011670c__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xbU][1U] >> 0xaU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xbU][2U] << 0x16U));
    __Vtemp_h0011670c__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xbU][2U] >> 0xaU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xbU][3U] << 0x16U));
    tracep->fullWData(oldp+840,(__Vtemp_h0011670c__0),128);
    __Vtemp_h456941c4__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [9U][0U] << 0x12U) 
                                 ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xaU][0U] << 0x14U)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xbU][0U] << 0x16U));
    __Vtemp_h456941c4__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][0U] >> 0xeU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [9U][1U] << 0x12U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][0U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][1U] << 0x14U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xbU][0U] >> 0xaU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xbU][1U] << 0x16U)));
    __Vtemp_h456941c4__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][1U] >> 0xeU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [9U][2U] << 0x12U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][1U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][2U] << 0x14U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xbU][1U] >> 0xaU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xbU][2U] << 0x16U)));
    __Vtemp_h456941c4__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][2U] >> 0xeU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [9U][3U] << 0x12U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][2U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][3U] << 0x14U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xbU][2U] >> 0xaU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xbU][3U] << 0x16U)));
    tracep->fullWData(oldp+844,(__Vtemp_h456941c4__0),128);
    __Vtemp_he78eae4f__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_he78eae4f__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_he78eae4f__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_hea00f9ba__0[0U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][0U] << 0x12U) 
                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][0U] << 0x14U)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][0U] << 0x14U) 
                                    & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xbU][0U] << 0x16U))) 
                                | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [9U][0U] << 0x12U) 
                                   & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xbU][0U] << 0x16U)));
    __Vtemp_hea00f9ba__0[1U] = (__Vtemp_he78eae4f__0[1U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [9U][0U] >> 0xeU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [9U][1U] << 0x12U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xbU][0U] >> 0xaU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xbU][1U] 
                                         << 0x16U))));
    __Vtemp_hea00f9ba__0[2U] = (__Vtemp_he78eae4f__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [9U][1U] >> 0xeU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [9U][2U] << 0x12U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xbU][1U] >> 0xaU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xbU][2U] 
                                         << 0x16U))));
    __Vtemp_hea00f9ba__0[3U] = (__Vtemp_he78eae4f__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [9U][2U] >> 0xeU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [9U][3U] << 0x12U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xbU][2U] >> 0xaU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xbU][3U] 
                                         << 0x16U))));
    tracep->fullWData(oldp+848,(__Vtemp_hea00f9ba__0),128);
    __Vtemp_h3407a5e1__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0xcU][0U] << 0x18U);
    __Vtemp_h3407a5e1__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xcU][0U] >> 8U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][1U] << 0x18U));
    __Vtemp_h3407a5e1__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xcU][1U] >> 8U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][2U] << 0x18U));
    __Vtemp_h3407a5e1__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xcU][2U] >> 8U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][3U] << 0x18U));
    tracep->fullWData(oldp+852,(__Vtemp_h3407a5e1__0),128);
    __Vtemp_h8015b798__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0xdU][0U] << 0x1aU);
    __Vtemp_h8015b798__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xdU][0U] >> 6U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xdU][1U] << 0x1aU));
    __Vtemp_h8015b798__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xdU][1U] >> 6U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xdU][2U] << 0x1aU));
    __Vtemp_h8015b798__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xdU][2U] >> 6U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xdU][3U] << 0x1aU));
    tracep->fullWData(oldp+856,(__Vtemp_h8015b798__0),128);
    __Vtemp_hf57249c8__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0xeU][0U] << 0x1cU);
    __Vtemp_hf57249c8__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xeU][0U] >> 4U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xeU][1U] << 0x1cU));
    __Vtemp_hf57249c8__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xeU][1U] >> 4U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xeU][2U] << 0x1cU));
    __Vtemp_hf57249c8__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xeU][2U] >> 4U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xeU][3U] << 0x1cU));
    tracep->fullWData(oldp+860,(__Vtemp_hf57249c8__0),128);
    __Vtemp_hef724dde__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0xcU][0U] << 0x18U) 
                                 ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xdU][0U] << 0x1aU)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xeU][0U] << 0x1cU));
    __Vtemp_hef724dde__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][0U] >> 8U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xcU][1U] << 0x18U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][0U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xdU][1U] << 0x1aU))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xeU][0U] >> 4U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xeU][1U] << 0x1cU)));
    __Vtemp_hef724dde__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][1U] >> 8U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xcU][2U] << 0x18U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][1U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xdU][2U] << 0x1aU))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xeU][1U] >> 4U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xeU][2U] << 0x1cU)));
    __Vtemp_hef724dde__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][2U] >> 8U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xcU][3U] << 0x18U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][2U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xdU][3U] << 0x1aU))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xeU][2U] >> 4U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xeU][3U] << 0x1cU)));
    tracep->fullWData(oldp+864,(__Vtemp_hef724dde__0),128);
    __Vtemp_h1ab3a480__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_h1ab3a480__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_h1ab3a480__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_he7ec8c7e__0[0U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][0U] << 0x18U) 
                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][0U] << 0x1aU)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][0U] << 0x1aU) 
                                    & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xeU][0U] << 0x1cU))) 
                                | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xcU][0U] << 0x18U) 
                                   & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xeU][0U] << 0x1cU)));
    __Vtemp_he7ec8c7e__0[1U] = (__Vtemp_h1ab3a480__0[1U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xcU][0U] >> 8U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xcU][1U] << 0x18U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xeU][0U] >> 4U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xeU][1U] 
                                         << 0x1cU))));
    __Vtemp_he7ec8c7e__0[2U] = (__Vtemp_h1ab3a480__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xcU][1U] >> 8U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xcU][2U] << 0x18U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xeU][1U] >> 4U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xeU][2U] 
                                         << 0x1cU))));
    __Vtemp_he7ec8c7e__0[3U] = (__Vtemp_h1ab3a480__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xcU][2U] >> 8U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xcU][3U] << 0x18U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xeU][2U] >> 4U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xeU][3U] 
                                         << 0x1cU))));
    tracep->fullWData(oldp+868,(__Vtemp_he7ec8c7e__0),128);
    __Vtemp_h2629b991__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0xfU][0U] << 0x1eU);
    __Vtemp_h2629b991__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xfU][0U] >> 2U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xfU][1U] << 0x1eU));
    __Vtemp_h2629b991__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xfU][1U] >> 2U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xfU][2U] << 0x1eU));
    __Vtemp_h2629b991__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xfU][2U] >> 2U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xfU][3U] << 0x1eU));
    tracep->fullWData(oldp+872,(__Vtemp_h2629b991__0),128);
    __Vtemp_h3aac0a00__0[0U] = 0U;
    __Vtemp_h3aac0a00__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0x10U][0U];
    __Vtemp_h3aac0a00__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0x10U][1U];
    __Vtemp_h3aac0a00__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0x10U][2U];
    tracep->fullWData(oldp+876,(__Vtemp_h3aac0a00__0),128);
    __Vtemp_hb732e964__0[0U] = 0U;
    __Vtemp_hb732e964__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x11U][0U] << 2U);
    __Vtemp_hb732e964__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x11U][0U] >> 0x1eU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x11U][1U] << 2U));
    __Vtemp_hb732e964__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x11U][1U] >> 0x1eU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x11U][2U] << 2U));
    tracep->fullWData(oldp+880,(__Vtemp_hb732e964__0),128);
    __Vtemp_h046a7832__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0xfU][0U] << 0x1eU);
    __Vtemp_h046a7832__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xfU][0U] >> 2U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xfU][1U] << 0x1eU)) 
                                 ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x10U][0U]) ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                 [0x11U][0U] 
                                                 << 2U));
    __Vtemp_h046a7832__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xfU][1U] >> 2U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xfU][2U] << 0x1eU)) 
                                 ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x10U][1U]) ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                  [0x11U][0U] 
                                                  >> 0x1eU) 
                                                 | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                    [0x11U][1U] 
                                                    << 2U)));
    __Vtemp_h046a7832__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xfU][2U] >> 2U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xfU][3U] << 0x1eU)) 
                                 ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x10U][2U]) ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                  [0x11U][1U] 
                                                  >> 0x1eU) 
                                                 | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                    [0x11U][2U] 
                                                    << 2U)));
    tracep->fullWData(oldp+884,(__Vtemp_h046a7832__0),128);
    __Vtemp_h6d418be5__0[0U] = 0U;
    __Vtemp_h6d418be5__0[1U] = (((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xfU][0U] >> 2U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xfU][1U] << 0x1eU)) 
                                  & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x10U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                  [0x10U][0U] 
                                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                     [0x11U][0U] 
                                                     << 2U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xfU][0U] >> 2U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xfU][1U] << 0x1eU)) 
                                   & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x11U][0U] << 2U)));
    __Vtemp_h6d418be5__0[2U] = (((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_h6d418be5__0[3U] = (((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    tracep->fullWData(oldp+888,(__Vtemp_h6d418be5__0),128);
    __Vtemp_h0182840a__0[0U] = 0U;
    __Vtemp_h0182840a__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x12U][0U] << 4U);
    __Vtemp_h0182840a__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x12U][0U] >> 0x1cU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x12U][1U] << 4U));
    __Vtemp_h0182840a__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x12U][1U] >> 0x1cU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x12U][2U] << 4U));
    tracep->fullWData(oldp+892,(__Vtemp_h0182840a__0),128);
    __Vtemp_hb214662e__0[0U] = 0U;
    __Vtemp_hb214662e__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x13U][0U] << 6U);
    __Vtemp_hb214662e__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x13U][0U] >> 0x1aU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x13U][1U] << 6U));
    __Vtemp_hb214662e__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x13U][1U] >> 0x1aU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x13U][2U] << 6U));
    tracep->fullWData(oldp+896,(__Vtemp_hb214662e__0),128);
    __Vtemp_h5146fe53__0[0U] = 0U;
    __Vtemp_h5146fe53__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x14U][0U] << 8U);
    __Vtemp_h5146fe53__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x14U][0U] >> 0x18U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x14U][1U] << 8U));
    __Vtemp_h5146fe53__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x14U][1U] >> 0x18U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x14U][2U] << 8U));
    tracep->fullWData(oldp+900,(__Vtemp_h5146fe53__0),128);
    __Vtemp_h1cac1abb__0[0U] = 0U;
    __Vtemp_h1cac1abb__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x12U][0U] << 4U) 
                                 ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x13U][0U] << 6U)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x14U][0U] << 8U));
    __Vtemp_h1cac1abb__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x12U][0U] >> 0x1cU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x12U][1U] << 4U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x13U][0U] >> 0x1aU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x13U][1U] 
                                       << 6U))) ^ (
                                                   (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                    [0x14U][0U] 
                                                    >> 0x18U) 
                                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                      [0x14U][1U] 
                                                      << 8U)));
    __Vtemp_h1cac1abb__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x12U][1U] >> 0x1cU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x12U][2U] << 4U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x13U][1U] >> 0x1aU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x13U][2U] 
                                       << 6U))) ^ (
                                                   (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                    [0x14U][1U] 
                                                    >> 0x18U) 
                                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                      [0x14U][2U] 
                                                      << 8U)));
    tracep->fullWData(oldp+904,(__Vtemp_h1cac1abb__0),128);
    __Vtemp_h86d60f8f__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_h86d60f8f__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_h7f006057__0[0U] = 0U;
    __Vtemp_h7f006057__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x12U][0U] << 4U) 
                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x13U][0U] << 6U)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x13U][0U] << 6U) 
                                    & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x14U][0U] 
                                       << 8U))) | (
                                                   (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                    [0x12U][0U] 
                                                    << 4U) 
                                                   & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                      [0x14U][0U] 
                                                      << 8U)));
    __Vtemp_h7f006057__0[2U] = (__Vtemp_h86d60f8f__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x12U][0U] >> 0x1cU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x12U][1U] 
                                       << 4U)) & ((
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                   [0x14U][0U] 
                                                   >> 0x18U) 
                                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                     [0x14U][1U] 
                                                     << 8U))));
    __Vtemp_h7f006057__0[3U] = (__Vtemp_h86d60f8f__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x12U][1U] >> 0x1cU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x12U][2U] 
                                       << 4U)) & ((
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                   [0x14U][1U] 
                                                   >> 0x18U) 
                                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                     [0x14U][2U] 
                                                     << 8U))));
    tracep->fullWData(oldp+908,(__Vtemp_h7f006057__0),128);
    __Vtemp_h2e51ecc1__0[0U] = 0U;
    __Vtemp_h2e51ecc1__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x15U][0U] << 0xaU);
    __Vtemp_h2e51ecc1__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x15U][0U] >> 0x16U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x15U][1U] << 0xaU));
    __Vtemp_h2e51ecc1__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x15U][1U] >> 0x16U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x15U][2U] << 0xaU));
    tracep->fullWData(oldp+912,(__Vtemp_h2e51ecc1__0),128);
    __Vtemp_hc633255e__0[0U] = 0U;
    __Vtemp_hc633255e__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x16U][0U] << 0xcU);
    __Vtemp_hc633255e__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x16U][0U] >> 0x14U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x16U][1U] << 0xcU));
    __Vtemp_hc633255e__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x16U][1U] >> 0x14U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x16U][2U] << 0xcU));
    tracep->fullWData(oldp+916,(__Vtemp_hc633255e__0),128);
    __Vtemp_h5f7d747f__0[0U] = 0U;
    __Vtemp_h5f7d747f__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x17U][0U] << 0xeU);
    __Vtemp_h5f7d747f__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x17U][0U] >> 0x12U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x17U][1U] << 0xeU));
    __Vtemp_h5f7d747f__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x17U][1U] >> 0x12U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x17U][2U] << 0xeU));
    tracep->fullWData(oldp+920,(__Vtemp_h5f7d747f__0),128);
    __Vtemp_h7f9cc2a2__0[0U] = 0U;
    __Vtemp_h7f9cc2a2__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x15U][0U] << 0xaU) 
                                 ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x16U][0U] << 0xcU)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x17U][0U] << 0xeU));
    __Vtemp_h7f9cc2a2__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x15U][0U] >> 0x16U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x15U][1U] << 0xaU)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x16U][0U] >> 0x14U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x16U][1U] 
                                       << 0xcU))) ^ 
                                ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x17U][0U] >> 0x12U) 
                                 | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x17U][1U] << 0xeU)));
    __Vtemp_h7f9cc2a2__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x15U][1U] >> 0x16U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x15U][2U] << 0xaU)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x16U][1U] >> 0x14U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x16U][2U] 
                                       << 0xcU))) ^ 
                                ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x17U][1U] >> 0x12U) 
                                 | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x17U][2U] << 0xeU)));
    tracep->fullWData(oldp+924,(__Vtemp_h7f9cc2a2__0),128);
    __Vtemp_h2ecbf711__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_h2ecbf711__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_haf5dff14__0[0U] = 0U;
    __Vtemp_haf5dff14__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x15U][0U] << 0xaU) 
                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x16U][0U] << 0xcU)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x16U][0U] << 0xcU) 
                                    & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x17U][0U] 
                                       << 0xeU))) | 
                                ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x15U][0U] << 0xaU) 
                                 & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x17U][0U] << 0xeU)));
    __Vtemp_haf5dff14__0[2U] = (__Vtemp_h2ecbf711__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x15U][0U] >> 0x16U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x15U][1U] 
                                       << 0xaU)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x17U][0U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x17U][1U] 
                                       << 0xeU))));
    __Vtemp_haf5dff14__0[3U] = (__Vtemp_h2ecbf711__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x15U][1U] >> 0x16U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x15U][2U] 
                                       << 0xaU)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x17U][1U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x17U][2U] 
                                       << 0xeU))));
    tracep->fullWData(oldp+928,(__Vtemp_haf5dff14__0),128);
    __Vtemp_h9f8a9bcc__0[0U] = 0U;
    __Vtemp_h9f8a9bcc__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x18U][0U] << 0x10U);
    __Vtemp_h9f8a9bcc__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x18U][0U] >> 0x10U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x18U][1U] << 0x10U));
    __Vtemp_h9f8a9bcc__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x18U][1U] >> 0x10U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x18U][2U] << 0x10U));
    tracep->fullWData(oldp+932,(__Vtemp_h9f8a9bcc__0),128);
    __Vtemp_h65fcf2e9__0[0U] = 0U;
    __Vtemp_h65fcf2e9__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x19U][0U] << 0x12U);
    __Vtemp_h65fcf2e9__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x19U][0U] >> 0xeU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x19U][1U] << 0x12U));
    __Vtemp_h65fcf2e9__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x19U][1U] >> 0xeU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x19U][2U] << 0x12U));
    tracep->fullWData(oldp+936,(__Vtemp_h65fcf2e9__0),128);
    __Vtemp_h6b5a749e__0[0U] = 0U;
    __Vtemp_h6b5a749e__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x1aU][0U] << 0x14U);
    __Vtemp_h6b5a749e__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1aU][0U] >> 0xcU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1aU][1U] << 0x14U));
    __Vtemp_h6b5a749e__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1aU][1U] >> 0xcU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1aU][2U] << 0x14U));
    tracep->fullWData(oldp+940,(__Vtemp_h6b5a749e__0),128);
    __Vtemp_hbc51cd3a__0[0U] = 0U;
    __Vtemp_hbc51cd3a__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x18U][0U] << 0x10U) 
                                 ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x19U][0U] << 0x12U)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1aU][0U] << 0x14U));
    __Vtemp_hbc51cd3a__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x18U][0U] >> 0x10U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x18U][1U] << 0x10U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x19U][0U] >> 0xeU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x19U][1U] 
                                       << 0x12U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x1aU][0U] >> 0xcU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x1aU][1U] << 0x14U)));
    __Vtemp_hbc51cd3a__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x18U][1U] >> 0x10U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x18U][2U] << 0x10U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x19U][1U] >> 0xeU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x19U][2U] 
                                       << 0x12U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x1aU][1U] >> 0xcU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x1aU][2U] << 0x14U)));
    tracep->fullWData(oldp+944,(__Vtemp_hbc51cd3a__0),128);
    __Vtemp_hbe7230a4__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_hbe7230a4__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
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
    __Vtemp_h5e80b166__0[0U] = 0U;
    __Vtemp_h5e80b166__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x18U][0U] << 0x10U) 
                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x19U][0U] << 0x12U)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x19U][0U] << 0x12U) 
                                    & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1aU][0U] 
                                       << 0x14U))) 
                                | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x18U][0U] << 0x10U) 
                                   & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x1aU][0U] << 0x14U)));
    __Vtemp_h5e80b166__0[2U] = (__Vtemp_hbe7230a4__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x18U][0U] >> 0x10U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x18U][1U] 
                                       << 0x10U)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1aU][0U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1aU][1U] 
                                       << 0x14U))));
    __Vtemp_h5e80b166__0[3U] = (__Vtemp_hbe7230a4__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x18U][1U] >> 0x10U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x18U][2U] 
                                       << 0x10U)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1aU][1U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1aU][2U] 
                                       << 0x14U))));
    tracep->fullWData(oldp+948,(__Vtemp_h5e80b166__0),128);
    __Vtemp_hf17187cd__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0U][0U];
    __Vtemp_hf17187cd__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0U][1U];
    __Vtemp_hf17187cd__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0U][2U];
    __Vtemp_hf17187cd__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0U][3U];
    tracep->fullWData(oldp+952,(__Vtemp_hf17187cd__0),128);
    __Vtemp_hf1718a09__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [1U][0U];
    __Vtemp_hf1718a09__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [1U][1U];
    __Vtemp_hf1718a09__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [1U][2U];
    __Vtemp_hf1718a09__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [1U][3U];
    tracep->fullWData(oldp+956,(__Vtemp_hf1718a09__0),128);
    __Vtemp_hf1718856__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [2U][0U];
    __Vtemp_hf1718856__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [2U][1U];
    __Vtemp_hf1718856__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [2U][2U];
    __Vtemp_hf1718856__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [2U][3U];
    tracep->fullWData(oldp+960,(__Vtemp_hf1718856__0),128);
    __Vtemp_h92c348b0__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [0U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [1U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [2U][0U]);
    __Vtemp_h92c348b0__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [0U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [1U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [2U][1U]);
    __Vtemp_h92c348b0__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [0U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [1U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [2U][2U]);
    __Vtemp_h92c348b0__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [0U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [1U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [2U][3U]);
    tracep->fullWData(oldp+964,(__Vtemp_h92c348b0__0),128);
    __Vtemp_h173af8c6__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [1U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [1U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [2U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [2U][0U]));
    __Vtemp_h173af8c6__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [1U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [1U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [2U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [2U][1U]));
    __Vtemp_h173af8c6__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [1U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [1U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [2U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [2U][2U]));
    __Vtemp_h173af8c6__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [1U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [1U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [2U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [2U][3U]));
    tracep->fullWData(oldp+968,(__Vtemp_h173af8c6__0),128);
    __Vtemp_hf1718a91__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [3U][0U];
    __Vtemp_hf1718a91__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [3U][1U];
    __Vtemp_hf1718a91__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [3U][2U];
    __Vtemp_hf1718a91__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [3U][3U];
    tracep->fullWData(oldp+972,(__Vtemp_hf1718a91__0),128);
    __Vtemp_hf17188d4__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [4U][0U];
    __Vtemp_hf17188d4__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [4U][1U];
    __Vtemp_hf17188d4__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [4U][2U];
    __Vtemp_hf17188d4__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [4U][3U];
    tracep->fullWData(oldp+976,(__Vtemp_hf17188d4__0),128);
    __Vtemp_hf1718b12__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [5U][0U];
    __Vtemp_hf1718b12__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [5U][1U];
    __Vtemp_hf1718b12__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [5U][2U];
    __Vtemp_hf1718b12__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [5U][3U];
    tracep->fullWData(oldp+980,(__Vtemp_hf1718b12__0),128);
    __Vtemp_h7152695f__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [3U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [4U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [5U][0U]);
    __Vtemp_h7152695f__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [3U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [4U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [5U][1U]);
    __Vtemp_h7152695f__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [3U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [4U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [5U][2U]);
    __Vtemp_h7152695f__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [3U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [4U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [5U][3U]);
    tracep->fullWData(oldp+984,(__Vtemp_h7152695f__0),128);
    __Vtemp_h41363071__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [3U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [4U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [4U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [5U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [3U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [5U][0U]));
    __Vtemp_h41363071__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [3U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [4U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [4U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [5U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [3U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [5U][1U]));
    __Vtemp_h41363071__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [3U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [4U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [4U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [5U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [3U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [5U][2U]));
    __Vtemp_h41363071__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [3U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [4U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [4U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [5U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [3U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [5U][3U]));
    tracep->fullWData(oldp+988,(__Vtemp_h41363071__0),128);
    __Vtemp_hf17195a5__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [6U][0U];
    __Vtemp_hf17195a5__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [6U][1U];
    __Vtemp_hf17195a5__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [6U][2U];
    __Vtemp_hf17195a5__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [6U][3U];
    tracep->fullWData(oldp+992,(__Vtemp_hf17195a5__0),128);
    __Vtemp_hf1718b8a__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [7U][0U];
    __Vtemp_hf1718b8a__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [7U][1U];
    __Vtemp_hf1718b8a__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [7U][2U];
    __Vtemp_hf1718b8a__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [7U][3U];
    tracep->fullWData(oldp+996,(__Vtemp_hf1718b8a__0),128);
    __Vtemp_hf1718a27__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [8U][0U];
    __Vtemp_hf1718a27__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [8U][1U];
    __Vtemp_hf1718a27__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [8U][2U];
    __Vtemp_hf1718a27__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [8U][3U];
    tracep->fullWData(oldp+1000,(__Vtemp_hf1718a27__0),128);
    __Vtemp_hae126eed__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [6U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [7U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [8U][0U]);
    __Vtemp_hae126eed__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [6U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [7U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [8U][1U]);
    __Vtemp_hae126eed__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [6U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [7U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [8U][2U]);
    __Vtemp_hae126eed__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [6U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [7U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [8U][3U]);
    tracep->fullWData(oldp+1004,(__Vtemp_hae126eed__0),128);
    __Vtemp_hc13907b7__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [6U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [7U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [7U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [8U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [6U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [8U][0U]));
    __Vtemp_hc13907b7__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [6U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [7U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [7U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [8U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [6U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [8U][1U]));
    __Vtemp_hc13907b7__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [6U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [7U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [7U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [8U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [6U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [8U][2U]));
    __Vtemp_hc13907b7__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [6U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [7U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [7U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [8U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [6U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [8U][3U]));
    tracep->fullWData(oldp+1008,(__Vtemp_hc13907b7__0),128);
    __Vtemp_hf1719407__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [9U][0U];
    __Vtemp_hf1719407__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [9U][1U];
    __Vtemp_hf1719407__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [9U][2U];
    __Vtemp_hf1719407__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [9U][3U];
    tracep->fullWData(oldp+1012,(__Vtemp_hf1719407__0),128);
    __Vtemp_hf1718a4c__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0xaU][0U];
    __Vtemp_hf1718a4c__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0xaU][1U];
    __Vtemp_hf1718a4c__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0xaU][2U];
    __Vtemp_hf1718a4c__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0xaU][3U];
    tracep->fullWData(oldp+1016,(__Vtemp_hf1718a4c__0),128);
    __Vtemp_h07c4056d__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [0U][0U] << 1U);
    __Vtemp_h07c4056d__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [0U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [0U][1U] << 1U));
    __Vtemp_h07c4056d__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [0U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [0U][2U] << 1U));
    __Vtemp_h07c4056d__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [0U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [0U][3U] << 1U));
    tracep->fullWData(oldp+1020,(__Vtemp_h07c4056d__0),128);
    __Vtemp_hb0af998d__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [9U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [0xaU][0U]) ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [0U][0U] 
                                                << 1U));
    __Vtemp_hb0af998d__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [9U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [0xaU][1U]) ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                 [0U][0U] 
                                                 >> 0x1fU) 
                                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                   [0U][1U] 
                                                   << 1U)));
    __Vtemp_hb0af998d__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [9U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [0xaU][2U]) ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                 [0U][1U] 
                                                 >> 0x1fU) 
                                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                   [0U][2U] 
                                                   << 1U)));
    __Vtemp_hb0af998d__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [9U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [0xaU][3U]) ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                 [0U][2U] 
                                                 >> 0x1fU) 
                                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                   [0U][3U] 
                                                   << 1U)));
    tracep->fullWData(oldp+1024,(__Vtemp_hb0af998d__0),128);
    __Vtemp_hf5d7ba4d__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [9U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [0xaU][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                                 [0xaU][0U] 
                                                 & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                    [0U][0U] 
                                                    << 1U))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [9U][0U] & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                               [0U][0U] 
                                               << 1U)));
    __Vtemp_hf5d7ba4d__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [9U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [0xaU][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                                 [0xaU][1U] 
                                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                     [0U][0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                       [0U][1U] 
                                                       << 1U)))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [9U][1U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [0U][0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                  [0U][1U] 
                                                  << 1U))));
    __Vtemp_hf5d7ba4d__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [9U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [0xaU][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                                 [0xaU][2U] 
                                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                     [0U][1U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                       [0U][2U] 
                                                       << 1U)))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [9U][2U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [0U][1U] 
                                                >> 0x1fU) 
                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                  [0U][2U] 
                                                  << 1U))));
    __Vtemp_hf5d7ba4d__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [9U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [0xaU][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                                 [0xaU][3U] 
                                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                     [0U][2U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                       [0U][3U] 
                                                       << 1U)))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [9U][3U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [0U][2U] 
                                                >> 0x1fU) 
                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                  [0U][3U] 
                                                  << 1U))));
    tracep->fullWData(oldp+1028,(__Vtemp_hf5d7ba4d__0),128);
    __Vtemp_h00f21e9e__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [1U][0U] << 1U);
    __Vtemp_h00f21e9e__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [1U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][1U] << 1U));
    __Vtemp_h00f21e9e__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [1U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][2U] << 1U));
    __Vtemp_h00f21e9e__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [1U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][3U] << 1U));
    tracep->fullWData(oldp+1032,(__Vtemp_h00f21e9e__0),128);
    __Vtemp_h7ce663a5__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [2U][0U] << 1U);
    __Vtemp_h7ce663a5__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [2U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [2U][1U] << 1U));
    __Vtemp_h7ce663a5__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [2U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [2U][2U] << 1U));
    __Vtemp_h7ce663a5__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [2U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [2U][3U] << 1U));
    tracep->fullWData(oldp+1036,(__Vtemp_h7ce663a5__0),128);
    __Vtemp_hac2a4a9e__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [3U][0U] << 1U);
    __Vtemp_hac2a4a9e__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [3U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [3U][1U] << 1U));
    __Vtemp_hac2a4a9e__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [3U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [3U][2U] << 1U));
    __Vtemp_hac2a4a9e__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [3U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [3U][3U] << 1U));
    tracep->fullWData(oldp+1040,(__Vtemp_hac2a4a9e__0),128);
    __Vtemp_hfcaac4cd__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                  [1U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                  [2U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [3U][0U]) << 1U);
    __Vtemp_hfcaac4cd__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][0U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [1U][1U] << 1U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [2U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [2U][1U] << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [3U][0U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [3U][1U] << 1U)));
    __Vtemp_hfcaac4cd__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][1U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [1U][2U] << 1U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [2U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [2U][2U] << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [3U][1U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [3U][2U] << 1U)));
    __Vtemp_hfcaac4cd__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][2U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [1U][3U] << 1U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [2U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [2U][3U] << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [3U][2U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [3U][3U] << 1U)));
    tracep->fullWData(oldp+1044,(__Vtemp_hfcaac4cd__0),128);
    __Vtemp_h3c616819__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
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
    __Vtemp_h3c616819__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
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
    __Vtemp_h3c616819__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
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
    __Vtemp_hb6585417__0[0U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [2U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [2U][0U] 
                                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [3U][0U])) 
                                 | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [3U][0U])) << 1U);
    __Vtemp_hb6585417__0[1U] = (__Vtemp_h3c616819__0[1U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [1U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [1U][1U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [3U][0U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [3U][1U] << 1U))));
    __Vtemp_hb6585417__0[2U] = (__Vtemp_h3c616819__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [1U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [1U][2U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [3U][1U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [3U][2U] << 1U))));
    __Vtemp_hb6585417__0[3U] = (__Vtemp_h3c616819__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [1U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [1U][3U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [3U][2U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [3U][3U] << 1U))));
    tracep->fullWData(oldp+1048,(__Vtemp_hb6585417__0),128);
    __Vtemp_hf5531076__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [4U][0U] << 1U);
    __Vtemp_hf5531076__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [4U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][1U] << 1U));
    __Vtemp_hf5531076__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [4U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][2U] << 1U));
    __Vtemp_hf5531076__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [4U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][3U] << 1U));
    tracep->fullWData(oldp+1052,(__Vtemp_hf5531076__0),128);
    __Vtemp_h57954f3d__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [5U][0U] << 1U);
    __Vtemp_h57954f3d__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [5U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [5U][1U] << 1U));
    __Vtemp_h57954f3d__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [5U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [5U][2U] << 1U));
    __Vtemp_h57954f3d__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [5U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [5U][3U] << 1U));
    tracep->fullWData(oldp+1056,(__Vtemp_h57954f3d__0),128);
    __Vtemp_h7f281be0__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [6U][0U] << 1U);
    __Vtemp_h7f281be0__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [6U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [6U][1U] << 1U));
    __Vtemp_h7f281be0__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [6U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [6U][2U] << 1U));
    __Vtemp_h7f281be0__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [6U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [6U][3U] << 1U));
    tracep->fullWData(oldp+1060,(__Vtemp_h7f281be0__0),128);
    __Vtemp_h2e2ac58e__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                  [4U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                  [5U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [6U][0U]) << 1U);
    __Vtemp_h2e2ac58e__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][0U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [4U][1U] << 1U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [5U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [5U][1U] << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [6U][0U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [6U][1U] << 1U)));
    __Vtemp_h2e2ac58e__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][1U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [4U][2U] << 1U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [5U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [5U][2U] << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [6U][1U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [6U][2U] << 1U)));
    __Vtemp_h2e2ac58e__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][2U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [4U][3U] << 1U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [5U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [5U][3U] << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [6U][2U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [6U][3U] << 1U)));
    tracep->fullWData(oldp+1064,(__Vtemp_h2e2ac58e__0),128);
    __Vtemp_hd7c89330__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
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
    __Vtemp_hd7c89330__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
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
    __Vtemp_hd7c89330__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
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
    __Vtemp_h2e9ce97d__0[0U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [5U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [5U][0U] 
                                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [6U][0U])) 
                                 | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [4U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [6U][0U])) << 1U);
    __Vtemp_h2e9ce97d__0[1U] = (__Vtemp_hd7c89330__0[1U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [4U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [4U][1U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [6U][0U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [6U][1U] << 1U))));
    __Vtemp_h2e9ce97d__0[2U] = (__Vtemp_hd7c89330__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [4U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [4U][2U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [6U][1U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [6U][2U] << 1U))));
    __Vtemp_h2e9ce97d__0[3U] = (__Vtemp_hd7c89330__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [4U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [4U][3U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [6U][2U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [6U][3U] << 1U))));
    tracep->fullWData(oldp+1068,(__Vtemp_h2e9ce97d__0),128);
    __Vtemp_h1527ddb5__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [7U][0U] << 1U);
    __Vtemp_h1527ddb5__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [7U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][1U] << 1U));
    __Vtemp_h1527ddb5__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [7U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][2U] << 1U));
    __Vtemp_h1527ddb5__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [7U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][3U] << 1U));
    tracep->fullWData(oldp+1072,(__Vtemp_h1527ddb5__0),128);
    __Vtemp_h75d709c3__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [8U][0U] << 1U);
    __Vtemp_h75d709c3__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [8U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [8U][1U] << 1U));
    __Vtemp_h75d709c3__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [8U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [8U][2U] << 1U));
    __Vtemp_h75d709c3__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [8U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [8U][3U] << 1U));
    tracep->fullWData(oldp+1076,(__Vtemp_h75d709c3__0),128);
    __Vtemp_h779da789__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [9U][0U] << 1U);
    __Vtemp_h779da789__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [9U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [9U][1U] << 1U));
    __Vtemp_h779da789__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [9U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [9U][2U] << 1U));
    __Vtemp_h779da789__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [9U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [9U][3U] << 1U));
    tracep->fullWData(oldp+1080,(__Vtemp_h779da789__0),128);
    __Vtemp_h9354c33b__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                  [7U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                  [8U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [9U][0U]) << 1U);
    __Vtemp_h9354c33b__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][0U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [7U][1U] << 1U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [8U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [8U][1U] << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [9U][0U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [9U][1U] << 1U)));
    __Vtemp_h9354c33b__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][1U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [7U][2U] << 1U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [8U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [8U][2U] << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [9U][1U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [9U][2U] << 1U)));
    __Vtemp_h9354c33b__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][2U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [7U][3U] << 1U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [8U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [8U][3U] << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [9U][2U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [9U][3U] << 1U)));
    tracep->fullWData(oldp+1084,(__Vtemp_h9354c33b__0),128);
    __Vtemp_h4b9ad8a3__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
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
    __Vtemp_h4b9ad8a3__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
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
    __Vtemp_h4b9ad8a3__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
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
    __Vtemp_h631ff6d7__0[0U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [8U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [8U][0U] 
                                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [9U][0U])) 
                                 | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [7U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [9U][0U])) << 1U);
    __Vtemp_h631ff6d7__0[1U] = (__Vtemp_h4b9ad8a3__0[1U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [7U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [7U][1U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [9U][0U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [9U][1U] << 1U))));
    __Vtemp_h631ff6d7__0[2U] = (__Vtemp_h4b9ad8a3__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [7U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [7U][2U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [9U][1U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [9U][2U] << 1U))));
    __Vtemp_h631ff6d7__0[3U] = (__Vtemp_h4b9ad8a3__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [7U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [7U][3U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [9U][2U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [9U][3U] << 1U))));
    tracep->fullWData(oldp+1088,(__Vtemp_h631ff6d7__0),128);
    __Vtemp_hf43c4642__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [0U][0U];
    __Vtemp_hf43c4642__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [0U][1U];
    __Vtemp_hf43c4642__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [0U][2U];
    __Vtemp_hf43c4642__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [0U][3U];
    tracep->fullWData(oldp+1092,(__Vtemp_hf43c4642__0),128);
    __Vtemp_hf43c4783__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [1U][0U];
    __Vtemp_hf43c4783__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [1U][1U];
    __Vtemp_hf43c4783__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [1U][2U];
    __Vtemp_hf43c4783__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [1U][3U];
    tracep->fullWData(oldp+1096,(__Vtemp_hf43c4783__0),128);
    __Vtemp_hf43c46c8__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [2U][0U];
    __Vtemp_hf43c46c8__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [2U][1U];
    __Vtemp_hf43c46c8__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [2U][2U];
    __Vtemp_hf43c46c8__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [2U][3U];
    tracep->fullWData(oldp+1100,(__Vtemp_hf43c46c8__0),128);
    __Vtemp_hd011b6c0__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [0U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [1U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                [2U][0U]);
    __Vtemp_hd011b6c0__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [0U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [1U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                [2U][1U]);
    __Vtemp_hd011b6c0__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [0U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [1U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                [2U][2U]);
    __Vtemp_hd011b6c0__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [0U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [1U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                [2U][3U]);
    tracep->fullWData(oldp+1104,(__Vtemp_hd011b6c0__0),128);
    __Vtemp_h010b5776__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [1U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [1U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [2U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [2U][0U]));
    __Vtemp_h010b5776__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [1U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [1U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [2U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [2U][1U]));
    __Vtemp_h010b5776__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [1U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [1U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [2U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [2U][2U]));
    __Vtemp_h010b5776__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [1U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [1U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [2U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [2U][3U]));
    tracep->fullWData(oldp+1108,(__Vtemp_h010b5776__0),128);
    __Vtemp_hf43c43fb__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [3U][0U];
    __Vtemp_hf43c43fb__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [3U][1U];
    __Vtemp_hf43c43fb__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [3U][2U];
    __Vtemp_hf43c43fb__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [3U][3U];
    tracep->fullWData(oldp+1112,(__Vtemp_hf43c43fb__0),128);
    __Vtemp_hf43c473f__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [4U][0U];
    __Vtemp_hf43c473f__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [4U][1U];
    __Vtemp_hf43c473f__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [4U][2U];
    __Vtemp_hf43c473f__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [4U][3U];
    tracep->fullWData(oldp+1116,(__Vtemp_hf43c473f__0),128);
    __Vtemp_hf43c447e__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [5U][0U];
    __Vtemp_hf43c447e__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [5U][1U];
    __Vtemp_hf43c447e__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [5U][2U];
    __Vtemp_hf43c447e__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [5U][3U];
    tracep->fullWData(oldp+1120,(__Vtemp_hf43c447e__0),128);
    __Vtemp_h32f509e6__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [3U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [4U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                [5U][0U]);
    __Vtemp_h32f509e6__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [3U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [4U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                [5U][1U]);
    __Vtemp_h32f509e6__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [3U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [4U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                [5U][2U]);
    __Vtemp_h32f509e6__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [3U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [4U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                [5U][3U]);
    tracep->fullWData(oldp+1124,(__Vtemp_h32f509e6__0),128);
    __Vtemp_h3692e320__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [3U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [4U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [4U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [5U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [3U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [5U][0U]));
    __Vtemp_h3692e320__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [3U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [4U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [4U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [5U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [3U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [5U][1U]));
    __Vtemp_h3692e320__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [3U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [4U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [4U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [5U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [3U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [5U][2U]));
    __Vtemp_h3692e320__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [3U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [4U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [4U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [5U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [3U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [5U][3U]));
    tracep->fullWData(oldp+1128,(__Vtemp_h3692e320__0),128);
    __Vtemp_hf43c43bd__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [6U][0U];
    __Vtemp_hf43c43bd__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [6U][1U];
    __Vtemp_hf43c43bd__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [6U][2U];
    __Vtemp_hf43c43bd__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [6U][3U];
    tracep->fullWData(oldp+1132,(__Vtemp_hf43c43bd__0),128);
    __Vtemp_hdbcd2375__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [0xaU][0U] << 1U);
    __Vtemp_hdbcd2375__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [0xaU][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [0xaU][1U] << 1U));
    __Vtemp_hdbcd2375__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [0xaU][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [0xaU][2U] << 1U));
    __Vtemp_hdbcd2375__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [0xaU][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [0xaU][3U] << 1U));
    tracep->fullWData(oldp+1136,(__Vtemp_hdbcd2375__0),128);
    __Vtemp_he45c737d__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [0U][0U] << 1U);
    __Vtemp_he45c737d__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [0U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [0U][1U] << 1U));
    __Vtemp_he45c737d__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [0U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [0U][2U] << 1U));
    __Vtemp_he45c737d__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [0U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [0U][3U] << 1U));
    tracep->fullWData(oldp+1140,(__Vtemp_he45c737d__0),128);
    __Vtemp_h7097f915__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [6U][0U] ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                             [0xaU][0U] 
                                             << 1U)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [0U][0U] << 1U));
    __Vtemp_h7097f915__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [6U][1U] ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                              [0xaU][0U] 
                                              >> 0x1fU) 
                                             | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [0xaU][1U] 
                                                << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                    [0U][0U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                      [0U][1U] << 1U)));
    __Vtemp_h7097f915__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [6U][2U] ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                              [0xaU][1U] 
                                              >> 0x1fU) 
                                             | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [0xaU][2U] 
                                                << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                    [0U][1U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                      [0U][2U] << 1U)));
    __Vtemp_h7097f915__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [6U][3U] ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                              [0xaU][2U] 
                                              >> 0x1fU) 
                                             | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [0xaU][3U] 
                                                << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                    [0U][2U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                      [0U][3U] << 1U)));
    tracep->fullWData(oldp+1144,(__Vtemp_h7097f915__0),128);
    __Vtemp_h27c1727b__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [6U][0U] & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                              [0xaU][0U] 
                                              << 1U)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [0xaU][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                     [0U][0U]) << 1U)) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [6U][0U] & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [0U][0U] 
                                               << 1U)));
    __Vtemp_h27c1727b__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
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
    __Vtemp_h27c1727b__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
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
    __Vtemp_h27c1727b__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
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
    tracep->fullWData(oldp+1148,(__Vtemp_h27c1727b__0),128);
    __Vtemp_hb3ce6205__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [1U][0U];
    __Vtemp_hb3ce6205__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [1U][1U];
    __Vtemp_hb3ce6205__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [1U][2U];
    __Vtemp_hb3ce6205__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [1U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h4c5c1491__0, __Vtemp_hb3ce6205__0, 1U);
    tracep->fullWData(oldp+1152,(__Vtemp_h4c5c1491__0),128);
    __Vtemp_hb3ce6544__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [2U][0U];
    __Vtemp_hb3ce6544__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [2U][1U];
    __Vtemp_hb3ce6544__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [2U][2U];
    __Vtemp_hb3ce6544__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [2U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h062ec0c0__0, __Vtemp_hb3ce6544__0, 1U);
    tracep->fullWData(oldp+1156,(__Vtemp_h062ec0c0__0),128);
    __Vtemp_hb3ce647d__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [3U][0U];
    __Vtemp_hb3ce647d__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [3U][1U];
    __Vtemp_hb3ce647d__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [3U][2U];
    __Vtemp_hb3ce647d__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [3U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h434bb540__0, __Vtemp_hb3ce647d__0, 1U);
    tracep->fullWData(oldp+1160,(__Vtemp_h434bb540__0),128);
    __Vtemp_hc42eda11__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [1U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [2U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [3U][0U]);
    __Vtemp_hc42eda11__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [1U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [2U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [3U][1U]);
    __Vtemp_hc42eda11__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [1U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [2U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [3U][2U]);
    __Vtemp_hc42eda11__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [1U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [2U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [3U][3U]);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h69bc9e05__0, __Vtemp_hc42eda11__0, 1U);
    tracep->fullWData(oldp+1164,(__Vtemp_h69bc9e05__0),128);
    __Vtemp_had8bdbe8__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [2U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [2U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [3U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [3U][0U]));
    __Vtemp_had8bdbe8__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [1U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [2U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [2U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [3U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [1U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [3U][1U]));
    __Vtemp_had8bdbe8__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [1U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [2U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [2U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [3U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [1U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [3U][2U]));
    __Vtemp_had8bdbe8__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [1U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [2U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [2U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [3U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [1U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [3U][3U]));
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h2a7b3d93__0, __Vtemp_had8bdbe8__0, 1U);
    tracep->fullWData(oldp+1168,(__Vtemp_h2a7b3d93__0),128);
    __Vtemp_hb3ce61b9__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [4U][0U];
    __Vtemp_hb3ce61b9__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [4U][1U];
    __Vtemp_hb3ce61b9__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [4U][2U];
    __Vtemp_hb3ce61b9__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [4U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_ha582bfc5__0, __Vtemp_hb3ce61b9__0, 1U);
    tracep->fullWData(oldp+1172,(__Vtemp_ha582bfc5__0),128);
    __Vtemp_hb3ce64fa__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [5U][0U];
    __Vtemp_hb3ce64fa__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [5U][1U];
    __Vtemp_hb3ce64fa__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [5U][2U];
    __Vtemp_hb3ce64fa__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [5U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h97d19be7__0, __Vtemp_hb3ce64fa__0, 1U);
    tracep->fullWData(oldp+1176,(__Vtemp_h97d19be7__0),128);
    __Vtemp_hb3ce6447__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [6U][0U];
    __Vtemp_hb3ce6447__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [6U][1U];
    __Vtemp_hb3ce6447__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [6U][2U];
    __Vtemp_hb3ce6447__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [6U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h9782f714__0, __Vtemp_hb3ce6447__0, 1U);
    tracep->fullWData(oldp+1180,(__Vtemp_h9782f714__0),128);
    __Vtemp_h977c8557__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [4U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [5U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [6U][0U]);
    __Vtemp_h977c8557__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [4U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [5U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [6U][1U]);
    __Vtemp_h977c8557__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [4U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [5U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [6U][2U]);
    __Vtemp_h977c8557__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [4U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [5U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [6U][3U]);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h43107266__0, __Vtemp_h977c8557__0, 1U);
    tracep->fullWData(oldp+1184,(__Vtemp_h43107266__0),128);
    __Vtemp_h8816b1a8__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [4U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [5U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [5U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [6U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [4U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [6U][0U]));
    __Vtemp_h8816b1a8__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [4U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [5U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [5U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [6U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [4U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [6U][1U]));
    __Vtemp_h8816b1a8__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [4U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [5U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [5U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [6U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [4U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [6U][2U]));
    __Vtemp_h8816b1a8__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [4U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [5U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [5U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [6U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [4U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [6U][3U]));
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hc21668af__0, __Vtemp_h8816b1a8__0, 1U);
    tracep->fullWData(oldp+1188,(__Vtemp_hc21668af__0),128);
    __Vtemp_h7aa39406__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [0U][0U];
    __Vtemp_h7aa39406__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [0U][1U];
    __Vtemp_h7aa39406__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [0U][2U];
    __Vtemp_h7aa39406__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [0U][3U];
    tracep->fullWData(oldp+1192,(__Vtemp_h7aa39406__0),128);
    __Vtemp_h7aa38ec3__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [1U][0U];
    __Vtemp_h7aa38ec3__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [1U][1U];
    __Vtemp_h7aa38ec3__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [1U][2U];
    __Vtemp_h7aa38ec3__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [1U][3U];
    tracep->fullWData(oldp+1196,(__Vtemp_h7aa38ec3__0),128);
    __Vtemp_h7aa38f88__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [2U][0U];
    __Vtemp_h7aa38f88__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [2U][1U];
    __Vtemp_h7aa38f88__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [2U][2U];
    __Vtemp_h7aa38f88__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [2U][3U];
    tracep->fullWData(oldp+1200,(__Vtemp_h7aa38f88__0),128);
    __Vtemp_h8eaa5fe3__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [0U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [1U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                [2U][0U]);
    __Vtemp_h8eaa5fe3__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [0U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [1U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                [2U][1U]);
    __Vtemp_h8eaa5fe3__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [0U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [1U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                [2U][2U]);
    __Vtemp_h8eaa5fe3__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [0U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [1U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                [2U][3U]);
    tracep->fullWData(oldp+1204,(__Vtemp_h8eaa5fe3__0),128);
    __Vtemp_hed7aab57__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [1U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [1U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [2U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [2U][0U]));
    __Vtemp_hed7aab57__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [1U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [1U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [2U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [2U][1U]));
    __Vtemp_hed7aab57__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [1U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [1U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [2U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [2U][2U]));
    __Vtemp_hed7aab57__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [1U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [1U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [2U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [2U][3U]));
    tracep->fullWData(oldp+1208,(__Vtemp_hed7aab57__0),128);
    __Vtemp_h7aa38e4b__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [3U][0U];
    __Vtemp_h7aa38e4b__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [3U][1U];
    __Vtemp_h7aa38e4b__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [3U][2U];
    __Vtemp_h7aa38e4b__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [3U][3U];
    tracep->fullWData(oldp+1212,(__Vtemp_h7aa38e4b__0),128);
    __Vtemp_h7aa38f0f__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [4U][0U];
    __Vtemp_h7aa38f0f__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [4U][1U];
    __Vtemp_h7aa38f0f__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [4U][2U];
    __Vtemp_h7aa38f0f__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [4U][3U];
    tracep->fullWData(oldp+1216,(__Vtemp_h7aa38f0f__0),128);
    __Vtemp_h02d88ba1__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][0U];
    __Vtemp_h02d88ba1__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][1U];
    __Vtemp_h02d88ba1__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][2U];
    __Vtemp_h02d88ba1__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h17db7681__0, __Vtemp_h02d88ba1__0, 1U);
    tracep->fullWData(oldp+1220,(__Vtemp_h17db7681__0),128);
    __Vtemp_h02d88ba1__1[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][0U];
    __Vtemp_h02d88ba1__1[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][1U];
    __Vtemp_h02d88ba1__1[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][2U];
    __Vtemp_h02d88ba1__1[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hae07de05__0, __Vtemp_h02d88ba1__1, 1U);
    __Vtemp_h5868981e__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [3U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [4U][0U]) ^ __Vtemp_hae07de05__0[0U]);
    __Vtemp_h5868981e__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [3U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [4U][1U]) ^ __Vtemp_hae07de05__0[1U]);
    __Vtemp_h5868981e__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [3U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [4U][2U]) ^ __Vtemp_hae07de05__0[2U]);
    __Vtemp_h5868981e__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [3U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [4U][3U]) ^ __Vtemp_hae07de05__0[3U]);
    tracep->fullWData(oldp+1224,(__Vtemp_h5868981e__0),128);
    __Vtemp_h02d88ba1__2[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][0U];
    __Vtemp_h02d88ba1__2[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][1U];
    __Vtemp_h02d88ba1__2[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][2U];
    __Vtemp_h02d88ba1__2[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hf351dc3d__0, __Vtemp_h02d88ba1__2, 1U);
    __Vtemp_h02d88ba1__3[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][0U];
    __Vtemp_h02d88ba1__3[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][1U];
    __Vtemp_h02d88ba1__3[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][2U];
    __Vtemp_h02d88ba1__3[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h7de6b44b__0, __Vtemp_h02d88ba1__3, 1U);
    __Vtemp_hc9a0e09f__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [3U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [4U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [4U][0U] 
                                               & __Vtemp_hf351dc3d__0[0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [3U][0U] & __Vtemp_h7de6b44b__0[0U]));
    __Vtemp_hc9a0e09f__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [3U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [4U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [4U][1U] 
                                               & __Vtemp_hf351dc3d__0[1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [3U][1U] & __Vtemp_h7de6b44b__0[1U]));
    __Vtemp_hc9a0e09f__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [3U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [4U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [4U][2U] 
                                               & __Vtemp_hf351dc3d__0[2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [3U][2U] & __Vtemp_h7de6b44b__0[2U]));
    __Vtemp_hc9a0e09f__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [3U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [4U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [4U][3U] 
                                               & __Vtemp_hf351dc3d__0[3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [3U][3U] & __Vtemp_h7de6b44b__0[3U]));
    tracep->fullWData(oldp+1228,(__Vtemp_hc9a0e09f__0),128);
    __Vtemp_h02d889e4__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [1U][0U];
    __Vtemp_h02d889e4__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [1U][1U];
    __Vtemp_h02d889e4__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [1U][2U];
    __Vtemp_h02d889e4__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [1U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hf4d9a659__0, __Vtemp_h02d889e4__0, 1U);
    tracep->fullWData(oldp+1232,(__Vtemp_hf4d9a659__0),128);
    __Vtemp_h02d88d27__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [2U][0U];
    __Vtemp_h02d88d27__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [2U][1U];
    __Vtemp_h02d88d27__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [2U][2U];
    __Vtemp_h02d88d27__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [2U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h3baf7741__0, __Vtemp_h02d88d27__0, 1U);
    tracep->fullWData(oldp+1236,(__Vtemp_h3baf7741__0),128);
    __Vtemp_h02d88d5c__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [3U][0U];
    __Vtemp_h02d88d5c__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [3U][1U];
    __Vtemp_h02d88d5c__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [3U][2U];
    __Vtemp_h02d88d5c__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [3U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hbda4f3d7__0, __Vtemp_h02d88d5c__0, 1U);
    tracep->fullWData(oldp+1240,(__Vtemp_hbda4f3d7__0),128);
    __Vtemp_he90a56f4__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [1U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [2U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [3U][0U]);
    __Vtemp_he90a56f4__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [1U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [2U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [3U][1U]);
    __Vtemp_he90a56f4__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [1U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [2U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [3U][2U]);
    __Vtemp_he90a56f4__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [1U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [2U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [3U][3U]);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h105cd53d__0, __Vtemp_he90a56f4__0, 1U);
    tracep->fullWData(oldp+1244,(__Vtemp_h105cd53d__0),128);
    __Vtemp_h733eaa06__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [2U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [2U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [3U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [3U][0U]));
    __Vtemp_h733eaa06__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [1U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [2U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [2U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [3U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [1U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [3U][1U]));
    __Vtemp_h733eaa06__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [1U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [2U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [2U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [3U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [1U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [3U][2U]));
    __Vtemp_h733eaa06__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [1U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [2U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [2U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [3U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [1U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [3U][3U]));
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h1c934518__0, __Vtemp_h733eaa06__0, 1U);
    tracep->fullWData(oldp+1248,(__Vtemp_h1c934518__0),128);
    __Vtemp_h8a1cf969__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [0U][0U];
    __Vtemp_h8a1cf969__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [0U][1U];
    __Vtemp_h8a1cf969__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [0U][2U];
    __Vtemp_h8a1cf969__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [0U][3U];
    tracep->fullWData(oldp+1252,(__Vtemp_h8a1cf969__0),128);
    __Vtemp_h8a1cf635__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [1U][0U];
    __Vtemp_h8a1cf635__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [1U][1U];
    __Vtemp_h8a1cf635__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [1U][2U];
    __Vtemp_h8a1cf635__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [1U][3U];
    tracep->fullWData(oldp+1256,(__Vtemp_h8a1cf635__0),128);
    __Vtemp_h8a1cf8ec__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [2U][0U];
    __Vtemp_h8a1cf8ec__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [2U][1U];
    __Vtemp_h8a1cf8ec__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [2U][2U];
    __Vtemp_h8a1cf8ec__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [2U][3U];
    tracep->fullWData(oldp+1260,(__Vtemp_h8a1cf8ec__0),128);
    __Vtemp_h8bd31a77__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                 [0U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                 [1U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                [2U][0U]);
    __Vtemp_h8bd31a77__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                 [0U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                 [1U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                [2U][1U]);
    __Vtemp_h8bd31a77__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                 [0U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                 [1U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                [2U][2U]);
    __Vtemp_h8bd31a77__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                 [0U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                 [1U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                [2U][3U]);
    tracep->fullWData(oldp+1264,(__Vtemp_h8bd31a77__0),128);
    __Vtemp_h04764766__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                  [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                  [1U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                               [1U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                               [2U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                   [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                   [2U][0U]));
    __Vtemp_h04764766__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                  [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                  [1U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                               [1U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                               [2U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                   [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                   [2U][1U]));
    __Vtemp_h04764766__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                  [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                  [1U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                               [1U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                               [2U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                   [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                   [2U][2U]));
    __Vtemp_h04764766__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                  [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                  [1U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                               [1U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                               [2U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                   [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                   [2U][3U]));
    tracep->fullWData(oldp+1268,(__Vtemp_h04764766__0),128);
    __Vtemp_h389af2c0__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [0U][0U];
    __Vtemp_h389af2c0__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [0U][1U];
    __Vtemp_h389af2c0__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [0U][2U];
    __Vtemp_h389af2c0__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h27ad1993__0, __Vtemp_h389af2c0__0, 1U);
    tracep->fullWData(oldp+1272,(__Vtemp_h27ad1993__0),128);
    __Vtemp_h389ae07c__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [1U][0U];
    __Vtemp_h389ae07c__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [1U][1U];
    __Vtemp_h389ae07c__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [1U][2U];
    __Vtemp_h389ae07c__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [1U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h2fe70ba8__0, __Vtemp_h389ae07c__0, 1U);
    tracep->fullWData(oldp+1276,(__Vtemp_h2fe70ba8__0),128);
    __Vtemp_h389af339__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [2U][0U];
    __Vtemp_h389af339__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [2U][1U];
    __Vtemp_h389af339__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [2U][2U];
    __Vtemp_h389af339__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [2U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h2505e54d__0, __Vtemp_h389af339__0, 1U);
    tracep->fullWData(oldp+1280,(__Vtemp_h2505e54d__0),128);
    __Vtemp_hf4b4c777__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [0U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [1U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                [2U][0U]);
    __Vtemp_hf4b4c777__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [0U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [1U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                [2U][1U]);
    __Vtemp_hf4b4c777__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [0U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [1U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                [2U][2U]);
    __Vtemp_hf4b4c777__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [0U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [1U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                [2U][3U]);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hb4268308__0, __Vtemp_hf4b4c777__0, 1U);
    tracep->fullWData(oldp+1284,(__Vtemp_hb4268308__0),128);
    __Vtemp_hc256cb40__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [1U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [1U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [2U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [2U][0U]));
    __Vtemp_hc256cb40__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [1U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [1U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [2U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [2U][1U]));
    __Vtemp_hc256cb40__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [1U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [1U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [2U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [2U][2U]));
    __Vtemp_hc256cb40__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [1U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [1U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [2U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [2U][3U]));
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hfb626bf9__0, __Vtemp_hc256cb40__0, 1U);
    tracep->fullWData(oldp+1288,(__Vtemp_hfb626bf9__0),128);
    __Vtemp_hafce953c__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [0U][0U];
    __Vtemp_hafce953c__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [0U][1U];
    __Vtemp_hafce953c__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [0U][2U];
    __Vtemp_hafce953c__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [0U][3U];
    tracep->fullWData(oldp+1292,(__Vtemp_hafce953c__0),128);
    __Vtemp_hafce9280__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [1U][0U];
    __Vtemp_hafce9280__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [1U][1U];
    __Vtemp_hafce9280__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [1U][2U];
    __Vtemp_hafce9280__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [1U][3U];
    tracep->fullWData(oldp+1296,(__Vtemp_hafce9280__0),128);
    __Vtemp_h1f409a06__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][0U];
    __Vtemp_h1f409a06__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][1U];
    __Vtemp_h1f409a06__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][2U];
    __Vtemp_h1f409a06__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_he96a18d8__0, __Vtemp_h1f409a06__0, 1U);
    tracep->fullWData(oldp+1300,(__Vtemp_he96a18d8__0),128);
    __Vtemp_h1f409a06__1[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][0U];
    __Vtemp_h1f409a06__1[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][1U];
    __Vtemp_h1f409a06__1[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][2U];
    __Vtemp_h1f409a06__1[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hcf17f604__0, __Vtemp_h1f409a06__1, 1U);
    __Vtemp_h338341c3__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                 [0U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                 [1U][0U]) ^ __Vtemp_hcf17f604__0[0U]);
    __Vtemp_h338341c3__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                 [0U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                 [1U][1U]) ^ __Vtemp_hcf17f604__0[1U]);
    __Vtemp_h338341c3__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                 [0U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                 [1U][2U]) ^ __Vtemp_hcf17f604__0[2U]);
    __Vtemp_h338341c3__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                 [0U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                 [1U][3U]) ^ __Vtemp_hcf17f604__0[3U]);
    tracep->fullWData(oldp+1304,(__Vtemp_h338341c3__0),128);
    __Vtemp_h1f409a06__2[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][0U];
    __Vtemp_h1f409a06__2[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][1U];
    __Vtemp_h1f409a06__2[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][2U];
    __Vtemp_h1f409a06__2[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_he78ee9ec__0, __Vtemp_h1f409a06__2, 1U);
    __Vtemp_h1f409a06__3[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][0U];
    __Vtemp_h1f409a06__3[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][1U];
    __Vtemp_h1f409a06__3[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][2U];
    __Vtemp_h1f409a06__3[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h34003953__0, __Vtemp_h1f409a06__3, 1U);
    __Vtemp_hc0bfc1cd__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                  [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                  [1U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                               [1U][0U] 
                                               & __Vtemp_he78ee9ec__0[0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                   [0U][0U] & __Vtemp_h34003953__0[0U]));
    __Vtemp_hc0bfc1cd__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                  [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                  [1U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                               [1U][1U] 
                                               & __Vtemp_he78ee9ec__0[1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                   [0U][1U] & __Vtemp_h34003953__0[1U]));
    __Vtemp_hc0bfc1cd__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                  [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                  [1U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                               [1U][2U] 
                                               & __Vtemp_he78ee9ec__0[2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                   [0U][2U] & __Vtemp_h34003953__0[2U]));
    __Vtemp_hc0bfc1cd__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                  [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                  [1U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                               [1U][3U] 
                                               & __Vtemp_he78ee9ec__0[3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                   [0U][3U] & __Vtemp_h34003953__0[3U]));
    tracep->fullWData(oldp+1308,(__Vtemp_hc0bfc1cd__0),128);
    __Vtemp_hb135bb7f__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [0U][0U];
    __Vtemp_hb135bb7f__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [0U][1U];
    __Vtemp_hb135bb7f__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [0U][2U];
    __Vtemp_hb135bb7f__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [0U][3U];
    tracep->fullWData(oldp+1312,(__Vtemp_hb135bb7f__0),128);
    __Vtemp_hb135b9bb__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [1U][0U];
    __Vtemp_hb135b9bb__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [1U][1U];
    __Vtemp_hb135b9bb__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [1U][2U];
    __Vtemp_hb135b9bb__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [1U][3U];
    tracep->fullWData(oldp+1316,(__Vtemp_hb135b9bb__0),128);
    __Vtemp_h5a241080__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][0U];
    __Vtemp_h5a241080__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][1U];
    __Vtemp_h5a241080__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][2U];
    __Vtemp_h5a241080__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h2e2480e7__0, __Vtemp_h5a241080__0, 1U);
    tracep->fullWData(oldp+1320,(__Vtemp_h2e2480e7__0),128);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h1fdd8292__2, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c, 1U);
    tracep->fullWData(oldp+1324,(__Vtemp_h1fdd8292__2),128);
    __Vtemp_h5a241144__3[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][0U];
    __Vtemp_h5a241144__3[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][1U];
    __Vtemp_h5a241144__3[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][2U];
    __Vtemp_h5a241144__3[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h0866dee8__0, __Vtemp_h5a241144__3, 1U);
    tracep->fullWData(oldp+1328,(__Vtemp_h0866dee8__0),128);
    tracep->fullCData(oldp+1332,((7U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                        >> 8U))),3);
    tracep->fullBit(oldp+1333,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                      >> 6U))));
    tracep->fullQData(oldp+1334,(((0x20U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])
                                   ? vlSelf->ysyx_22040127_top__DOT__mem_final_rdata
                                   : (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U]))))),64);
    tracep->fullBit(oldp+1336,((0U == (7U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1337,((1U == (7U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1338,((2U == (7U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1339,((3U == (7U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1340,((4U == (7U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1341,((5U == (7U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1342,((6U == (7U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1343,((0U == (3U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1344,((1U == (3U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1345,((2U == (3U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1346,((3U == (3U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1347,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                      >> 7U))));
    tracep->fullCData(oldp+1348,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                           >> 0x15U))),5);
    tracep->fullQData(oldp+1349,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U])) 
                                   << 0x26U) | (((QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[6U])) 
                                                 << 6U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U])) 
                                                   >> 0x1aU)))),64);
    tracep->fullSData(oldp+1351,((0xfffU & ((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                             << 6U) 
                                            | (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U] 
                                               >> 0x1aU)))),12);
    tracep->fullCData(oldp+1352,((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])),5);
    tracep->fullIData(oldp+1353,(((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                   << 0x15U) | (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                >> 0xbU))),32);
    tracep->fullBit(oldp+1354,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xbU))));
    tracep->fullQData(oldp+1355,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U])))),64);
    tracep->fullQData(oldp+1357,(((0U == (3U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                >> 8U)))
                                   ? (((QData)((IData)(
                                                       (0xffU 
                                                        & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U]))) 
                                       << 0x38U) | 
                                      (((QData)((IData)(
                                                        (0xffU 
                                                         & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U]))) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
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
                                   : ((1U == (3U & 
                                              (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                               >> 8U)))
                                       ? (((QData)((IData)(
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
                                       : ((2U == (3U 
                                                  & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                     >> 8U)))
                                           ? (((QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U])))
                                           : (((QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U]))))))),64);
    tracep->fullBit(oldp+1359,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0x13U))));
    tracep->fullBit(oldp+1360,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0x12U))));
    tracep->fullBit(oldp+1361,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0x11U))));
    tracep->fullBit(oldp+1362,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0x10U))));
    tracep->fullBit(oldp+1363,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xfU))));
    tracep->fullBit(oldp+1364,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xeU))));
    tracep->fullBit(oldp+1365,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xdU))));
    tracep->fullBit(oldp+1366,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xcU))));
    tracep->fullBit(oldp+1367,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0x14U))));
    tracep->fullWData(oldp+1368,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg),262);
    tracep->fullQData(oldp+1377,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data),64);
    tracep->fullQData(oldp+1379,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata),64);
    tracep->fullCData(oldp+1381,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask),8);
    tracep->fullCData(oldp+1382,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask),8);
    tracep->fullCData(oldp+1383,((7U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])),3);
    tracep->fullSData(oldp+1384,((vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                  >> 0x14U)),12);
    tracep->fullQData(oldp+1385,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0U])))),64);
    tracep->fullCData(oldp+1387,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpp),2);
    tracep->fullBit(oldp+1388,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpie));
    tracep->fullBit(oldp+1389,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mie));
    tracep->fullBit(oldp+1390,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__wb_flush));
    tracep->fullCData(oldp+1391,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                           >> 0xfU))),5);
    tracep->fullBit(oldp+1392,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 0xcU))));
    tracep->fullBit(oldp+1393,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 0xbU))));
    tracep->fullBit(oldp+1394,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 0xaU))));
    tracep->fullBit(oldp+1395,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 9U))));
    tracep->fullBit(oldp+1396,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 8U))));
    tracep->fullBit(oldp+1397,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 7U))));
    tracep->fullBit(oldp+1398,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 6U))));
    tracep->fullQData(oldp+1399,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U])) 
                                   << 0x2cU) | (((QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[4U])) 
                                                 << 0xcU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U])) 
                                                   >> 0x14U)))),64);
    tracep->fullQData(oldp+1401,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[0]),64);
    tracep->fullQData(oldp+1403,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[1]),64);
    tracep->fullQData(oldp+1405,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[2]),64);
    tracep->fullQData(oldp+1407,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[3]),64);
    tracep->fullQData(oldp+1409,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[4]),64);
    tracep->fullQData(oldp+1411,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[5]),64);
    tracep->fullQData(oldp+1413,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[6]),64);
    tracep->fullQData(oldp+1415,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[7]),64);
    tracep->fullQData(oldp+1417,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[8]),64);
    tracep->fullQData(oldp+1419,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[9]),64);
    tracep->fullQData(oldp+1421,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[10]),64);
    tracep->fullQData(oldp+1423,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[11]),64);
    tracep->fullQData(oldp+1425,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[12]),64);
    tracep->fullQData(oldp+1427,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[13]),64);
    tracep->fullQData(oldp+1429,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[14]),64);
    tracep->fullQData(oldp+1431,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[15]),64);
    tracep->fullQData(oldp+1433,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[16]),64);
    tracep->fullQData(oldp+1435,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[17]),64);
    tracep->fullQData(oldp+1437,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[18]),64);
    tracep->fullQData(oldp+1439,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[19]),64);
    tracep->fullQData(oldp+1441,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[20]),64);
    tracep->fullQData(oldp+1443,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[21]),64);
    tracep->fullQData(oldp+1445,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[22]),64);
    tracep->fullQData(oldp+1447,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[23]),64);
    tracep->fullQData(oldp+1449,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[24]),64);
    tracep->fullQData(oldp+1451,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[25]),64);
    tracep->fullQData(oldp+1453,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[26]),64);
    tracep->fullQData(oldp+1455,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[27]),64);
    tracep->fullQData(oldp+1457,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[28]),64);
    tracep->fullQData(oldp+1459,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[29]),64);
    tracep->fullQData(oldp+1461,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[30]),64);
    tracep->fullQData(oldp+1463,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[31]),64);
    tracep->fullWData(oldp+1465,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg),192);
    tracep->fullBit(oldp+1471,((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]))));
    tracep->fullBit(oldp+1472,(vlSelf->clk));
    tracep->fullBit(oldp+1473,(vlSelf->rst));
    tracep->fullIData(oldp+1474,(vlSelf->if_pc),32);
    tracep->fullBit(oldp+1475,(vlSelf->wb_valid));
    tracep->fullIData(oldp+1476,(vlSelf->wb_pc),32);
    tracep->fullQData(oldp+1477,(vlSelf->mepc),64);
    tracep->fullQData(oldp+1479,(vlSelf->mtvec),64);
    tracep->fullQData(oldp+1481,(vlSelf->mstatus),64);
    tracep->fullQData(oldp+1483,(vlSelf->mcause),64);
    tracep->fullQData(oldp+1485,(vlSelf->mie),64);
    tracep->fullQData(oldp+1487,(vlSelf->mip),64);
    tracep->fullQData(oldp+1489,(vlSelf->mscratch),64);
    tracep->fullQData(oldp+1491,(vlSelf->mtval),64);
    tracep->fullQData(oldp+1493,((((QData)((IData)(
                                                   ((1U 
                                                     & (((IData)(vlSelf->ysyx_22040127_top__DOT__id_branch_taken) 
                                                         | (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                                            >> 0xdU)) 
                                                        | (0x7bU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_22040127_top__DOT__if_instruction))))
                                                     ? 0U
                                                     : vlSelf->ysyx_22040127_top__DOT__if_instruction))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->if_pc)))),64);
    tracep->fullQData(oldp+1495,(vlSelf->ysyx_22040127_top__DOT__reg_wdata),64);
    tracep->fullQData(oldp+1497,(vlSelf->ysyx_22040127_top__DOT__alu_output),64);
    tracep->fullBit(oldp+1499,(vlSelf->ysyx_22040127_top__DOT__id_jalr));
    tracep->fullBit(oldp+1500,(1U));
    tracep->fullCData(oldp+1501,(0U),3);
    tracep->fullCData(oldp+1502,(1U),3);
    tracep->fullCData(oldp+1503,(2U),3);
    tracep->fullCData(oldp+1504,(3U),3);
    tracep->fullCData(oldp+1505,(4U),3);
    tracep->fullCData(oldp+1506,(5U),3);
    tracep->fullCData(oldp+1507,(6U),3);
    tracep->fullIData(oldp+1508,(0xcU),32);
    tracep->fullIData(oldp+1509,(7U),32);
    tracep->fullIData(oldp+1510,(3U),32);
    __Vtemp_hdbbc8edc__0[0U] = 0x39e46b1dU;
    __Vtemp_hdbbc8edc__0[1U] = 0x8deddc67U;
    __Vtemp_hdbbc8edc__0[2U] = 0x60980633U;
    __Vtemp_hdbbc8edc__0[3U] = 0x2e5b93U;
    tracep->fullWData(oldp+1511,(__Vtemp_hdbbc8edc__0),120);
    tracep->fullIData(oldp+1515,(1U),32);
    tracep->fullIData(oldp+1516,(0xaU),32);
    tracep->fullIData(oldp+1517,(0xcU),32);
    tracep->fullCData(oldp+1518,(0U),6);
    tracep->fullCData(oldp+1519,(0x10U),6);
    tracep->fullCData(oldp+1520,(0x20U),6);
    tracep->fullCData(oldp+1521,(1U),6);
    tracep->fullCData(oldp+1522,(0xcU),6);
    tracep->fullCData(oldp+1523,(8U),6);
    tracep->fullCData(oldp+1524,(2U),6);
    tracep->fullCData(oldp+1525,(4U),6);
    tracep->fullCData(oldp+1526,(6U),6);
    tracep->fullCData(oldp+1527,(0xeU),6);
    tracep->fullCData(oldp+1528,(0x18U),6);
    tracep->fullCData(oldp+1529,(0x1aU),6);
    tracep->fullCData(oldp+1530,(0x1eU),6);
    tracep->fullCData(oldp+1531,(0x1cU),6);
    tracep->fullCData(oldp+1532,(0x21U),6);
    tracep->fullCData(oldp+1533,(0x11U),6);
    tracep->fullCData(oldp+1534,(3U),6);
    tracep->fullCData(oldp+1535,(0xaU),6);
    tracep->fullCData(oldp+1536,(0x2aU),6);
    tracep->fullCData(oldp+1537,(0x19U),6);
    tracep->fullCData(oldp+1538,(0xbU),6);
    tracep->fullCData(oldp+1539,(0x2bU),6);
    tracep->fullCData(oldp+1540,(0x1bU),6);
    tracep->fullCData(oldp+1541,(0x1dU),6);
    tracep->fullCData(oldp+1542,(0x1fU),6);
    tracep->fullCData(oldp+1543,(0x16U),6);
    tracep->fullCData(oldp+1544,(0x12U),6);
    tracep->fullCData(oldp+1545,(0x14U),6);
    tracep->fullCData(oldp+1546,(0x10U),5);
    tracep->fullCData(oldp+1547,(0x17U),5);
    tracep->fullCData(oldp+1548,(0x16U),5);
    tracep->fullCData(oldp+1549,(0x14U),5);
    tracep->fullCData(oldp+1550,(0x13U),5);
    tracep->fullCData(oldp+1551,(0x15U),5);
    tracep->fullCData(oldp+1552,(0x11U),5);
    tracep->fullCData(oldp+1553,(0x18U),5);
    tracep->fullCData(oldp+1554,(0x19U),5);
    tracep->fullCData(oldp+1555,(0x1dU),5);
    tracep->fullCData(oldp+1556,(0x12U),5);
    tracep->fullCData(oldp+1557,(0U),2);
    tracep->fullCData(oldp+1558,(1U),2);
    tracep->fullCData(oldp+1559,(3U),2);
    tracep->fullCData(oldp+1560,(2U),2);
    tracep->fullSData(oldp+1561,(0x305U),12);
    tracep->fullSData(oldp+1562,(0x342U),12);
    tracep->fullSData(oldp+1563,(0x300U),12);
    tracep->fullSData(oldp+1564,(0x341U),12);
    tracep->fullSData(oldp+1565,(0x304U),12);
    tracep->fullSData(oldp+1566,(0x344U),12);
    tracep->fullSData(oldp+1567,(0x340U),12);
    tracep->fullSData(oldp+1568,(0xf14U),12);
}
