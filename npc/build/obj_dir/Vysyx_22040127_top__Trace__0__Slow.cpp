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
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declBus(c+1632,"if_pc", false,-1, 31,0);
    tracep->declBit(c+1633,"wb_valid", false,-1);
    tracep->declBus(c+1634,"wb_pc", false,-1, 31,0);
    tracep->declQuad(c+1635,"mepc", false,-1, 63,0);
    tracep->declQuad(c+1637,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+1639,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+1641,"mcause", false,-1, 63,0);
    tracep->declQuad(c+1643,"mie", false,-1, 63,0);
    tracep->declQuad(c+1645,"mip", false,-1, 63,0);
    tracep->declQuad(c+1647,"mscratch", false,-1, 63,0);
    tracep->declQuad(c+1649,"mtval", false,-1, 63,0);
    tracep->declBit(c+1651,"wb_memwrite", false,-1);
    tracep->declQuad(c+1652,"wb_diff_addr", false,-1, 63,0);
    tracep->declQuad(c+1654,"wb_diff_data", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040127_top ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declBus(c+1632,"if_pc", false,-1, 31,0);
    tracep->declBit(c+1633,"wb_valid", false,-1);
    tracep->declBus(c+1634,"wb_pc", false,-1, 31,0);
    tracep->declQuad(c+1635,"mepc", false,-1, 63,0);
    tracep->declQuad(c+1637,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+1639,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+1641,"mcause", false,-1, 63,0);
    tracep->declQuad(c+1643,"mie", false,-1, 63,0);
    tracep->declQuad(c+1645,"mip", false,-1, 63,0);
    tracep->declQuad(c+1647,"mscratch", false,-1, 63,0);
    tracep->declQuad(c+1649,"mtval", false,-1, 63,0);
    tracep->declBit(c+1651,"wb_memwrite", false,-1);
    tracep->declQuad(c+1652,"wb_diff_addr", false,-1, 63,0);
    tracep->declQuad(c+1654,"wb_diff_data", false,-1, 63,0);
    tracep->declQuad(c+37,"mhartid", false,-1, 63,0);
    tracep->declQuad(c+1656,"if_pcdata", false,-1, 63,0);
    tracep->declBus(c+39,"if_instruction", false,-1, 31,0);
    tracep->declBit(c+40,"if_ebreak", false,-1);
    tracep->declBit(c+41,"if_uart", false,-1);
    tracep->declBit(c+42,"if_flush", false,-1);
    tracep->declBit(c+43,"if_valid", false,-1);
    tracep->declBit(c+1658,"if_ready_go", false,-1);
    tracep->declBit(c+44,"if_allowin", false,-1);
    tracep->declBit(c+43,"if_to_id_valid", false,-1);
    tracep->declQuad(c+1659,"reg_wdata", false,-1, 63,0);
    tracep->declBus(c+45,"id_branch_result", false,-1, 31,0);
    tracep->declBit(c+46,"id_branch_taken", false,-1);
    tracep->declBus(c+47,"id_rs1", false,-1, 4,0);
    tracep->declBus(c+48,"id_rs2", false,-1, 4,0);
    tracep->declBit(c+1661,"id_jalr", false,-1);
    tracep->declBit(c+49,"id_flush", false,-1);
    tracep->declBit(c+50,"id_allowin", false,-1);
    tracep->declQuad(c+51,"id_regdata1", false,-1, 63,0);
    tracep->declQuad(c+53,"id_regdata2", false,-1, 63,0);
    tracep->declBit(c+55,"id_to_ex_valid", false,-1);
    tracep->declBus(c+56,"ex_pc", false,-1, 31,0);
    tracep->declBus(c+57,"ex_memop", false,-1, 2,0);
    tracep->declBus(c+58,"ex_wmask", false,-1, 7,0);
    tracep->declBit(c+59,"ex_flush", false,-1);
    tracep->declBit(c+60,"ex_allowin", false,-1);
    tracep->declBit(c+61,"ex_ready_go", false,-1);
    tracep->declBit(c+62,"ex_to_mem_valid", false,-1);
    tracep->declBit(c+63,"dcache_pipelinehit", false,-1);
    tracep->declBit(c+1658,"mem_allowin", false,-1);
    tracep->declBit(c+64,"mem_to_wb_valid", false,-1);
    tracep->declBit(c+65,"mem_flush", false,-1);
    tracep->declQuad(c+66,"mem_alu_output", false,-1, 63,0);
    tracep->declBit(c+68,"mem_memread", false,-1);
    tracep->declQuad(c+69,"mem_final_rdata", false,-1, 63,0);
    tracep->declQuad(c+71,"mem_doubly_aligned_data", false,-1, 63,0);
    tracep->declQuad(c+73,"mem_diff_addr", false,-1, 63,0);
    tracep->declQuad(c+75,"mem_diff_data", false,-1, 63,0);
    tracep->declArray(c+77,"if_to_id_bus", false,-1, 64,0);
    tracep->declArray(c+80,"id_to_ex_bus", false,-1, 275,0);
    tracep->declArray(c+89,"ex_to_mem_bus", false,-1, 262,0);
    tracep->declArray(c+98,"mem_to_wb_bus", false,-1, 321,0);
    tracep->declBit(c+1658,"wb_allowin", false,-1);
    tracep->declQuad(c+109,"wb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+111,"wb_csrwdata", false,-1, 63,0);
    tracep->declQuad(c+113,"wb_csrrdata", false,-1, 63,0);
    tracep->declBit(c+42,"wb_mret", false,-1);
    tracep->declBit(c+115,"wb_csr_we", false,-1);
    tracep->declBus(c+116,"wb_rd", false,-1, 4,0);
    tracep->declBit(c+117,"wb_reg_wen", false,-1);
    tracep->declBit(c+118,"wb_ebreak", false,-1);
    tracep->declBus(c+119,"dcache_state", false,-1, 2,0);
    tracep->declBus(c+120,"icache_state", false,-1, 2,0);
    tracep->declBus(c+121,"next_pc", false,-1, 31,0);
    tracep->declBus(c+122,"next_pc_delayed", false,-1, 31,0);
    tracep->declBit(c+123,"icache_pipieline_hit", false,-1);
    tracep->declBus(c+121,"icache_addr", false,-1, 31,0);
    tracep->declBit(c+124,"icache_valid", false,-1);
    tracep->declBit(c+125,"preif_valid", false,-1);
    tracep->declBit(c+126,"preif_ready_go_delayed", false,-1);
    tracep->declBit(c+127,"preif_ready_go", false,-1);
    tracep->declBit(c+128,"preif_allowin", false,-1);
    tracep->declQuad(c+129,"icache_data", false,-1, 63,0);
    tracep->declBus(c+131,"if_instruction_reg", false,-1, 31,0);
    tracep->declBit(c+132,"if_instruction_blocked", false,-1);
    tracep->declBus(c+1662,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+1663,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+1664,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+1665,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+1666,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+1667,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+1668,"TYPE_N", false,-1, 2,0);
    tracep->pushNamePrefix("dcache ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declQuad(c+133,"input_addr", false,-1, 63,0);
    tracep->declQuad(c+135,"input_wdata", false,-1, 63,0);
    tracep->declBit(c+137,"input_memwrite", false,-1);
    tracep->declBit(c+138,"input_memread", false,-1);
    tracep->declBit(c+139,"input_valid", false,-1);
    tracep->declBus(c+140,"input_size", false,-1, 1,0);
    tracep->declBus(c+58,"input_strb", false,-1, 7,0);
    tracep->declQuad(c+71,"output_data", false,-1, 63,0);
    tracep->declBit(c+63,"cache_pipelinehit", false,-1);
    tracep->declBus(c+119,"cache_state", false,-1, 2,0);
    tracep->declQuad(c+75,"diff_data", false,-1, 63,0);
    tracep->declQuad(c+73,"diff_addr", false,-1, 63,0);
    tracep->declBus(c+141,"input_size_reg", false,-1, 1,0);
    tracep->declBus(c+142,"input_offset_reg", false,-1, 3,0);
    tracep->declBit(c+143,"cache_way0hit_reg", false,-1);
    tracep->declBit(c+144,"cache_way1hit_reg", false,-1);
    tracep->declBus(c+1669,"mem_addr", false,-1, 31,0);
    tracep->declArray(c+145,"axi_req_data", false,-1, 127,0);
    tracep->declBit(c+1670,"mem_wen", false,-1);
    tracep->declBus(c+1671,"mem_strb", false,-1, 7,0);
    tracep->declBit(c+149,"axi_res_valid", false,-1);
    tracep->declBit(c+150,"axi_req_wen", false,-1);
    tracep->declBus(c+151,"axi_req_strb", false,-1, 7,0);
    tracep->declBit(c+152,"axi_req_valid", false,-1);
    tracep->declQuad(c+153,"axi_req_addr", false,-1, 63,0);
    tracep->declArray(c+155,"axi_mrdata", false,-1, 127,0);
    tracep->declBus(c+1662,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1663,"LOOKUP", false,-1, 2,0);
    tracep->declBus(c+1664,"MISS", false,-1, 2,0);
    tracep->declBus(c+1665,"REPLACE", false,-1, 2,0);
    tracep->declBus(c+1666,"REFILL", false,-1, 2,0);
    tracep->declBus(c+1667,"MISS_STALL", false,-1, 2,0);
    tracep->declBus(c+1668,"REFILL_STALL", false,-1, 2,0);
    tracep->declBus(c+1672,"DUNJIAO", false,-1, 2,0);
    tracep->declBus(c+1673,"SETS", false,-1, 31,0);
    tracep->declBus(c+159,"input_tag", false,-1, 20,0);
    tracep->declBus(c+160,"input_index", false,-1, 6,0);
    tracep->declBus(c+161,"input_offset", false,-1, 3,0);
    tracep->declBus(c+162,"cache_index_reg", false,-1, 6,0);
    tracep->declBus(c+163,"cache_offset_reg", false,-1, 3,0);
    tracep->declArray(c+164,"cache_strb", false,-1, 127,0);
    tracep->declBit(c+168,"cache_wen_way0", false,-1);
    tracep->declBit(c+169,"cache_wen_way1", false,-1);
    tracep->declArray(c+170,"cache_wdata", false,-1, 127,0);
    tracep->declBit(c+174,"cache_miss", false,-1);
    tracep->declBit(c+175,"cache_wen_way0_reg", false,-1);
    tracep->declBit(c+176,"cache_wen_way1_reg", false,-1);
    tracep->declQuad(c+177,"ex_cache_strb", false,-1, 63,0);
    tracep->declArray(c+179,"cache_rdata_way0", false,-1, 127,0);
    tracep->declArray(c+183,"cache_rdata_way1", false,-1, 127,0);
    tracep->declBit(c+187,"cache_way0hit", false,-1);
    tracep->declBit(c+188,"cache_way1hit", false,-1);
    tracep->declBit(c+189,"cache_way0dirty", false,-1);
    tracep->declBit(c+190,"cache_way1dirty", false,-1);
    tracep->declBit(c+191,"cache_way0valid", false,-1);
    tracep->declBit(c+192,"cache_way1valid", false,-1);
    tracep->declQuad(c+193,"output_data_way0", false,-1, 63,0);
    tracep->declQuad(c+195,"output_data_way1", false,-1, 63,0);
    tracep->declQuad(c+197,"ex_cache_wdata", false,-1, 63,0);
    tracep->declBit(c+199,"cache_raw_way0", false,-1);
    tracep->declBit(c+200,"cache_raw_way1", false,-1);
    tracep->declBit(c+201,"cache_raw", false,-1);
    tracep->declBit(c+202,"cnt", false,-1);
    tracep->pushNamePrefix("dcache_way1 ");
    tracep->declBus(c+1673,"Bits", false,-1, 31,0);
    tracep->declBus(c+1673,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+1674,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+1673,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+179,"Q", false,-1, 127,0);
    tracep->declBit(c+1630,"CLK", false,-1);
    tracep->declBit(c+203,"CEN", false,-1);
    tracep->declBit(c+168,"WEN", false,-1);
    tracep->declArray(c+164,"BWEN", false,-1, 127,0);
    tracep->declBus(c+160,"A", false,-1, 6,0);
    tracep->declArray(c+170,"D", false,-1, 127,0);
    tracep->declBit(c+203,"cen", false,-1);
    tracep->declBit(c+168,"wen", false,-1);
    tracep->declArray(c+164,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache_way2 ");
    tracep->declBus(c+1673,"Bits", false,-1, 31,0);
    tracep->declBus(c+1673,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+1674,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+1673,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+183,"Q", false,-1, 127,0);
    tracep->declBit(c+1630,"CLK", false,-1);
    tracep->declBit(c+203,"CEN", false,-1);
    tracep->declBit(c+169,"WEN", false,-1);
    tracep->declArray(c+164,"BWEN", false,-1, 127,0);
    tracep->declBus(c+160,"A", false,-1, 6,0);
    tracep->declArray(c+170,"D", false,-1, 127,0);
    tracep->declBit(c+203,"cen", false,-1);
    tracep->declBit(c+169,"wen", false,-1);
    tracep->declArray(c+164,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+204,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dec ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declBit(c+50,"id_allowin", false,-1);
    tracep->declBit(c+60,"ex_allowin", false,-1);
    tracep->declBit(c+43,"if_to_id_valid", false,-1);
    tracep->declBit(c+55,"id_to_ex_valid", false,-1);
    tracep->declArray(c+80,"id_to_ex_bus", false,-1, 275,0);
    tracep->declArray(c+77,"if_to_id_bus", false,-1, 64,0);
    tracep->declBus(c+47,"id_rs1", false,-1, 4,0);
    tracep->declBus(c+48,"id_rs2", false,-1, 4,0);
    tracep->declQuad(c+51,"id_regdata1_tmp", false,-1, 63,0);
    tracep->declQuad(c+53,"id_regdata2_tmp", false,-1, 63,0);
    tracep->declBus(c+45,"id_branch_result", false,-1, 31,0);
    tracep->declBit(c+46,"id_branch_taken", false,-1);
    tracep->declBus(c+205,"ex_rd", false,-1, 4,0);
    tracep->declBus(c+206,"mem_rd", false,-1, 4,0);
    tracep->declBus(c+116,"wb_rd", false,-1, 4,0);
    tracep->declQuad(c+133,"ex_alu_output", false,-1, 63,0);
    tracep->declQuad(c+66,"mem_alu_output", false,-1, 63,0);
    tracep->declQuad(c+109,"wb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+138,"ex_memread", false,-1);
    tracep->declBit(c+68,"mem_memread", false,-1);
    tracep->declQuad(c+69,"mem_final_rdata", false,-1, 63,0);
    tracep->declBit(c+207,"ex_reg_wen", false,-1);
    tracep->declBit(c+208,"mem_reg_wen", false,-1);
    tracep->declBit(c+117,"wb_reg_wen", false,-1);
    tracep->declBit(c+209,"mem_mret", false,-1);
    tracep->declBit(c+210,"ex_csr_we", false,-1);
    tracep->declBit(c+211,"mem_csr_we", false,-1);
    tracep->declBit(c+115,"wb_csr_we", false,-1);
    tracep->declBus(c+56,"ex_pc", false,-1, 31,0);
    tracep->declBit(c+42,"if_flush", false,-1);
    tracep->declBus(c+131,"if_instruction_reg", false,-1, 31,0);
    tracep->declBit(c+132,"if_instruction_blocked", false,-1);
    tracep->declBit(c+49,"id_flush", false,-1);
    tracep->declBus(c+1662,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+1663,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+1664,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+1665,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+1666,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+1667,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+1668,"TYPE_N", false,-1, 2,0);
    tracep->declBit(c+212,"beq", false,-1);
    tracep->declBit(c+213,"bne", false,-1);
    tracep->declBit(c+214,"blt", false,-1);
    tracep->declBit(c+215,"bltu", false,-1);
    tracep->declBit(c+216,"bge", false,-1);
    tracep->declBit(c+217,"bgeu", false,-1);
    tracep->declBit(c+218,"btype_taken", false,-1);
    tracep->declBit(c+219,"imm_src1", false,-1);
    tracep->declBit(c+220,"imm_src2", false,-1);
    tracep->declBus(c+221,"id_aluop", false,-1, 5,0);
    tracep->declBus(c+222,"id_memop", false,-1, 2,0);
    tracep->declBus(c+223,"id_rd", false,-1, 4,0);
    tracep->declBit(c+224,"id_reg_wen", false,-1);
    tracep->declBit(c+225,"id_memwrite", false,-1);
    tracep->declBit(c+226,"id_memread", false,-1);
    tracep->declBus(c+227,"id_inst_type", false,-1, 2,0);
    tracep->declQuad(c+228,"id_imm", false,-1, 63,0);
    tracep->declBit(c+230,"id_jalr", false,-1);
    tracep->declQuad(c+231,"id_alu_input1", false,-1, 63,0);
    tracep->declQuad(c+233,"id_alu_input2", false,-1, 63,0);
    tracep->declQuad(c+235,"id_regdata1_final", false,-1, 63,0);
    tracep->declQuad(c+237,"id_regdata2_final", false,-1, 63,0);
    tracep->declQuad(c+237,"id_mem_wdata", false,-1, 63,0);
    tracep->declBit(c+239,"id_ebreak", false,-1);
    tracep->declBit(c+240,"exid_raw_hazard1", false,-1);
    tracep->declBit(c+241,"exid_raw_hazard2", false,-1);
    tracep->declBit(c+242,"memid_raw_hazard1", false,-1);
    tracep->declBit(c+243,"memid_raw_hazard2", false,-1);
    tracep->declBit(c+244,"wbid_raw_hazard1", false,-1);
    tracep->declBit(c+245,"wbid_raw_hazard2", false,-1);
    tracep->declBit(c+246,"load_use_hazard1", false,-1);
    tracep->declBit(c+247,"load_use_hazard2", false,-1);
    tracep->declBit(c+248,"mem_load_use_hazard1_tmp", false,-1);
    tracep->declBit(c+249,"mem_load_use_hazard2_tmp", false,-1);
    tracep->declBit(c+250,"mem_load_use_hazard1", false,-1);
    tracep->declBit(c+251,"mem_load_use_hazard2", false,-1);
    tracep->declBit(c+252,"wb_load_use_hazard1_tmp", false,-1);
    tracep->declBit(c+253,"wb_load_use_hazard2_tmp", false,-1);
    tracep->declBit(c+252,"wb_load_use_hazard1", false,-1);
    tracep->declBit(c+253,"wb_load_use_hazard2", false,-1);
    tracep->declBit(c+254,"id_ready_go", false,-1);
    tracep->declBit(c+255,"id_valid", false,-1);
    tracep->declArray(c+256,"if_to_id_bus_reg", false,-1, 64,0);
    tracep->declBus(c+259,"id_pc", false,-1, 31,0);
    tracep->declBus(c+260,"id_instruction", false,-1, 31,0);
    tracep->declBit(c+261,"id_mret", false,-1);
    tracep->declBit(c+262,"id_ecall", false,-1);
    tracep->declBit(c+263,"id_csrrw", false,-1);
    tracep->declBit(c+264,"id_csrrs", false,-1);
    tracep->declBit(c+265,"id_csrrc", false,-1);
    tracep->declBit(c+266,"id_csrrwi", false,-1);
    tracep->declBit(c+267,"id_csrrsi", false,-1);
    tracep->declBit(c+268,"id_csrrci", false,-1);
    tracep->pushNamePrefix("inst_mux ");
    tracep->declBus(c+1675,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1674,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1676,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+227,"out", false,-1, 2,0);
    tracep->declBus(c+269,"key", false,-1, 6,0);
    tracep->declBus(c+1662,"default_out", false,-1, 2,0);
    tracep->declArray(c+1677,"lut", false,-1, 119,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1675,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1674,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1676,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1681,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+227,"out", false,-1, 2,0);
    tracep->declBus(c+269,"key", false,-1, 6,0);
    tracep->declBus(c+1662,"default_out", false,-1, 2,0);
    tracep->declArray(c+1677,"lut", false,-1, 119,0);
    tracep->declBus(c+1682,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+13+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+25+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+270,"lut_out", false,-1, 2,0);
    tracep->declBit(c+271,"hit", false,-1);
    tracep->declBus(c+1683,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("exe ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declBit(c+60,"ex_allowin", false,-1);
    tracep->declBit(c+1658,"mem_allowin", false,-1);
    tracep->declBit(c+55,"id_to_ex_valid", false,-1);
    tracep->declBit(c+62,"ex_to_mem_valid", false,-1);
    tracep->declArray(c+80,"id_to_ex_bus", false,-1, 275,0);
    tracep->declArray(c+89,"ex_to_mem_bus", false,-1, 262,0);
    tracep->declBit(c+209,"mem_mret", false,-1);
    tracep->declBit(c+49,"id_flush", false,-1);
    tracep->declBit(c+63,"cache_pipelinehit", false,-1);
    tracep->declBus(c+119,"cache_state", false,-1, 2,0);
    tracep->declBit(c+59,"ex_flush", false,-1);
    tracep->declBus(c+56,"ex_pc", false,-1, 31,0);
    tracep->declBit(c+61,"ex_ready_go", false,-1);
    tracep->declQuad(c+272,"rtype_calc_result", false,-1, 63,0);
    tracep->declQuad(c+274,"itype_calc_result", false,-1, 63,0);
    tracep->declQuad(c+276,"rtype_alu_op", false,-1, 63,0);
    tracep->declBus(c+278,"itype_alu_op", false,-1, 31,0);
    tracep->declQuad(c+279,"sub", false,-1, 63,0);
    tracep->declBus(c+281,"addw_result", false,-1, 31,0);
    tracep->declBus(c+282,"subw_result", false,-1, 31,0);
    tracep->declBus(c+283,"mulw_result", false,-1, 31,0);
    tracep->declBus(c+284,"divw_result", false,-1, 31,0);
    tracep->declBus(c+284,"divuw_result", false,-1, 31,0);
    tracep->declBus(c+285,"remw_result", false,-1, 31,0);
    tracep->declBus(c+285,"remuw_result", false,-1, 31,0);
    tracep->declQuad(c+286,"sext_addw_result", false,-1, 63,0);
    tracep->declQuad(c+288,"sext_subw_result", false,-1, 63,0);
    tracep->declQuad(c+290,"sext_mulw_result", false,-1, 63,0);
    tracep->declQuad(c+292,"sext_divw_result", false,-1, 63,0);
    tracep->declQuad(c+292,"sext_divuw_result", false,-1, 63,0);
    tracep->declQuad(c+294,"sext_remw_result", false,-1, 63,0);
    tracep->declQuad(c+294,"sext_remuw_result", false,-1, 63,0);
    tracep->declBus(c+296,"src1_sllw", false,-1, 31,0);
    tracep->declBus(c+297,"src1_srlw", false,-1, 31,0);
    tracep->declBus(c+298,"sft_input2", false,-1, 5,0);
    tracep->declQuad(c+299,"sra_mask_32", false,-1, 63,0);
    tracep->declQuad(c+301,"sra_mask_64", false,-1, 63,0);
    tracep->declQuad(c+303,"sext_src1_sraw", false,-1, 63,0);
    tracep->declQuad(c+305,"sext_src1_sllw", false,-1, 63,0);
    tracep->declQuad(c+307,"sext_src1_srlw", false,-1, 63,0);
    tracep->declQuad(c+309,"ex_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+311,"ex_aluop", false,-1, 5,0);
    tracep->declBus(c+312,"ex_memop", false,-1, 2,0);
    tracep->declBit(c+313,"ex_memwrite", false,-1);
    tracep->declBit(c+314,"ex_memread", false,-1);
    tracep->declBus(c+315,"ex_rd", false,-1, 4,0);
    tracep->declBus(c+316,"ex_inst_type", false,-1, 2,0);
    tracep->declBit(c+317,"ex_jalr", false,-1);
    tracep->declQuad(c+318,"ex_alu_input1", false,-1, 63,0);
    tracep->declQuad(c+320,"ex_alu_input2", false,-1, 63,0);
    tracep->declBus(c+322,"ex_rs1", false,-1, 4,0);
    tracep->declBus(c+323,"ex_rs2", false,-1, 4,0);
    tracep->declBit(c+324,"ex_reg_wen", false,-1);
    tracep->declBit(c+325,"mul_type", false,-1);
    tracep->declBit(c+326,"div_type", false,-1);
    tracep->declBit(c+327,"div_sign", false,-1);
    tracep->declBit(c+328,"mul_stage2", false,-1);
    tracep->declBit(c+329,"mul_ok", false,-1);
    tracep->declBit(c+330,"sign1", false,-1);
    tracep->declBit(c+331,"sign2", false,-1);
    tracep->declQuad(c+332,"mul_res_high", false,-1, 63,0);
    tracep->declQuad(c+334,"mul_res_low", false,-1, 63,0);
    tracep->declBit(c+336,"ex_valid", false,-1);
    tracep->declArray(c+337,"id_to_ex_bus_reg", false,-1, 275,0);
    tracep->declQuad(c+346,"ex_alu_output", false,-1, 63,0);
    tracep->declBit(c+348,"div_ready", false,-1);
    tracep->declBus(c+349,"div_state", false,-1, 1,0);
    tracep->declQuad(c+350,"quo", false,-1, 63,0);
    tracep->declQuad(c+352,"rem", false,-1, 63,0);
    tracep->declBit(c+354,"ex_mret", false,-1);
    tracep->declBit(c+355,"ex_ecall", false,-1);
    tracep->declBit(c+356,"ex_csrrw", false,-1);
    tracep->declBit(c+357,"ex_csrrs", false,-1);
    tracep->declBit(c+358,"ex_csrrc", false,-1);
    tracep->declBit(c+359,"ex_csrrwi", false,-1);
    tracep->declBit(c+360,"ex_csrrsi", false,-1);
    tracep->declBit(c+361,"ex_csrrci", false,-1);
    tracep->declBit(c+362,"ex_csr_we", false,-1);
    tracep->declBus(c+363,"ex_des_csr", false,-1, 11,0);
    tracep->declBit(c+364,"ex_ebreak", false,-1);
    tracep->declBit(c+365,"cache_readygo", false,-1);
    tracep->declBus(c+1684,"op_add", false,-1, 5,0);
    tracep->declBus(c+1685,"op_mul", false,-1, 5,0);
    tracep->declBus(c+1686,"op_sub", false,-1, 5,0);
    tracep->declBus(c+1687,"op_addw", false,-1, 5,0);
    tracep->declBus(c+1688,"op_or", false,-1, 5,0);
    tracep->declBus(c+1689,"op_xor", false,-1, 5,0);
    tracep->declBus(c+1690,"op_sll", false,-1, 5,0);
    tracep->declBus(c+1691,"op_slt", false,-1, 5,0);
    tracep->declBus(c+1692,"op_sltu", false,-1, 5,0);
    tracep->declBus(c+1693,"op_and", false,-1, 5,0);
    tracep->declBus(c+1694,"op_div", false,-1, 5,0);
    tracep->declBus(c+1695,"op_divu", false,-1, 5,0);
    tracep->declBus(c+1696,"op_remu", false,-1, 5,0);
    tracep->declBus(c+1697,"op_rem", false,-1, 5,0);
    tracep->declBus(c+1698,"op_subw", false,-1, 5,0);
    tracep->declBus(c+1699,"op_mulw", false,-1, 5,0);
    tracep->declBus(c+1700,"op_sllw", false,-1, 5,0);
    tracep->declBus(c+1701,"op_srl", false,-1, 5,0);
    tracep->declBus(c+1702,"op_sra", false,-1, 5,0);
    tracep->declBus(c+1703,"op_divw", false,-1, 5,0);
    tracep->declBus(c+1704,"op_srlw", false,-1, 5,0);
    tracep->declBus(c+1705,"op_sraw", false,-1, 5,0);
    tracep->declBus(c+1706,"op_divuw", false,-1, 5,0);
    tracep->declBus(c+1707,"op_remw", false,-1, 5,0);
    tracep->declBus(c+1708,"op_remuw", false,-1, 5,0);
    tracep->declBus(c+1709,"op_mulhu", false,-1, 5,0);
    tracep->declBus(c+1710,"op_mulh", false,-1, 5,0);
    tracep->declBus(c+1711,"op_mulhsu", false,-1, 5,0);
    tracep->declBus(c+1712,"op_addi", false,-1, 4,0);
    tracep->declBus(c+1713,"op_andi", false,-1, 4,0);
    tracep->declBus(c+1714,"op_ori", false,-1, 4,0);
    tracep->declBus(c+1715,"op_xori", false,-1, 4,0);
    tracep->declBus(c+1716,"op_sltiu", false,-1, 4,0);
    tracep->declBus(c+1717,"op_sri", false,-1, 4,0);
    tracep->declBus(c+1718,"op_slli", false,-1, 4,0);
    tracep->declBus(c+1719,"op_addiw", false,-1, 4,0);
    tracep->declBus(c+1720,"op_slliw", false,-1, 4,0);
    tracep->declBus(c+1721,"op_sriw", false,-1, 4,0);
    tracep->declBus(c+1722,"op_slti", false,-1, 4,0);
    tracep->declQuad(c+366,"res_sra", false,-1, 63,0);
    tracep->declQuad(c+368,"res_srl", false,-1, 63,0);
    tracep->declQuad(c+370,"res_sll", false,-1, 63,0);
    tracep->declBus(c+1662,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+1663,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+1664,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+1665,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+1666,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+1667,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+1668,"TYPE_N", false,-1, 2,0);
    tracep->pushNamePrefix("dec_itype ");
    tracep->declBus(c+372,"in", false,-1, 4,0);
    tracep->declBus(c+278,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec_rtype ");
    tracep->declBus(c+373,"in", false,-1, 5,0);
    tracep->declQuad(c+276,"out", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declQuad(c+374,"x", false,-1, 63,0);
    tracep->declQuad(c+376,"y", false,-1, 63,0);
    tracep->declBit(c+327,"s", false,-1);
    tracep->declBit(c+326,"is_div", false,-1);
    tracep->declBit(c+348,"ready", false,-1);
    tracep->declBus(c+349,"state", false,-1, 1,0);
    tracep->declQuad(c+350,"quo", false,-1, 63,0);
    tracep->declQuad(c+352,"rem", false,-1, 63,0);
    tracep->declBus(c+1723,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1724,"DIV_ON", false,-1, 1,0);
    tracep->declBus(c+1725,"DIV_ZERO", false,-1, 1,0);
    tracep->declBus(c+1726,"DIV_END", false,-1, 1,0);
    tracep->declBus(c+378,"cnt", false,-1, 6,0);
    tracep->declArray(c+379,"dividend", false,-1, 128,0);
    tracep->declQuad(c+384,"divisor", false,-1, 63,0);
    tracep->declArray(c+386,"subres", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declQuad(c+318,"x", false,-1, 63,0);
    tracep->declQuad(c+320,"y", false,-1, 63,0);
    tracep->declBit(c+330,"xs", false,-1);
    tracep->declBit(c+331,"ys", false,-1);
    tracep->declQuad(c+332,"high", false,-1, 63,0);
    tracep->declQuad(c+334,"low", false,-1, 63,0);
    tracep->declBit(c+325,"mul_type", false,-1);
    tracep->declBit(c+328,"mul_stage2", false,-1);
    tracep->declBit(c+329,"mul_ok", false,-1);
    tracep->declArray(c+389,"x_ext", false,-1, 64,0);
    tracep->declArray(c+392,"y_ext", false,-1, 66,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declArray(c+395+i*4,"l1s", true,(i+0), 127,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declArray(c+439+i*4,"l1c", true,(i+0), 127,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declArray(c+483+i*4,"l2s", true,(i+0), 127,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declArray(c+511+i*4,"l2c", true,(i+0), 127,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+539+i*4,"l3s", true,(i+0), 127,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+559+i*4,"l3c", true,(i+0), 127,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+579+i*4,"l4s", true,(i+0), 127,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+591+i*4,"l4c", true,(i+0), 127,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+603+i*4,"l5s", true,(i+0), 127,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+615+i*4,"l5c", true,(i+0), 127,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+627+i*4,"l6s", true,(i+0), 127,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+635+i*4,"l6c", true,(i+0), 127,0);
    }
    tracep->declArray(c+643,"l7s", false,-1, 127,0);
    tracep->declArray(c+647,"l7c", false,-1, 127,0);
    tracep->declArray(c+651,"l8s", false,-1, 127,0);
    tracep->declArray(c+655,"l8c", false,-1, 127,0);
    tracep->declArray(c+659,"res", false,-1, 127,0);
    tracep->pushNamePrefix("b0 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+663,"y", false,-1, 2,0);
    tracep->declArray(c+664,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b1 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+671,"y", false,-1, 2,0);
    tracep->declArray(c+672,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b10 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+676,"y", false,-1, 2,0);
    tracep->declArray(c+677,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b11 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+681,"y", false,-1, 2,0);
    tracep->declArray(c+682,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b12 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+686,"y", false,-1, 2,0);
    tracep->declArray(c+687,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b13 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+691,"y", false,-1, 2,0);
    tracep->declArray(c+692,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b14 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+696,"y", false,-1, 2,0);
    tracep->declArray(c+697,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b15 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+701,"y", false,-1, 2,0);
    tracep->declArray(c+702,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b16 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+706,"y", false,-1, 2,0);
    tracep->declArray(c+707,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b17 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+711,"y", false,-1, 2,0);
    tracep->declArray(c+712,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b18 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+716,"y", false,-1, 2,0);
    tracep->declArray(c+717,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b19 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+721,"y", false,-1, 2,0);
    tracep->declArray(c+722,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b2 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+726,"y", false,-1, 2,0);
    tracep->declArray(c+727,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b20 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+731,"y", false,-1, 2,0);
    tracep->declArray(c+732,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b21 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+736,"y", false,-1, 2,0);
    tracep->declArray(c+737,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b22 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+741,"y", false,-1, 2,0);
    tracep->declArray(c+742,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b23 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+746,"y", false,-1, 2,0);
    tracep->declArray(c+747,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b24 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+751,"y", false,-1, 2,0);
    tracep->declArray(c+752,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b25 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+756,"y", false,-1, 2,0);
    tracep->declArray(c+757,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b26 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+761,"y", false,-1, 2,0);
    tracep->declArray(c+762,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b27 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+766,"y", false,-1, 2,0);
    tracep->declArray(c+767,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b28 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+771,"y", false,-1, 2,0);
    tracep->declArray(c+772,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b29 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+776,"y", false,-1, 2,0);
    tracep->declArray(c+777,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b3 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+781,"y", false,-1, 2,0);
    tracep->declArray(c+782,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b30 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+786,"y", false,-1, 2,0);
    tracep->declArray(c+787,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b31 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+791,"y", false,-1, 2,0);
    tracep->declArray(c+792,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b32 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+796,"y", false,-1, 2,0);
    tracep->declArray(c+797,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b4 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+801,"y", false,-1, 2,0);
    tracep->declArray(c+802,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b5 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+806,"y", false,-1, 2,0);
    tracep->declArray(c+807,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b6 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+811,"y", false,-1, 2,0);
    tracep->declArray(c+812,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b7 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+816,"y", false,-1, 2,0);
    tracep->declArray(c+817,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b8 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+821,"y", false,-1, 2,0);
    tracep->declArray(c+822,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b9 ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declArray(c+389,"x", false,-1, 64,0);
    tracep->declBus(c+826,"y", false,-1, 2,0);
    tracep->declArray(c+827,"z", false,-1, 127,0);
    tracep->declArray(c+668,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_1 ");
    tracep->declArray(c+831,"x", false,-1, 127,0);
    tracep->declArray(c+835,"y", false,-1, 127,0);
    tracep->declArray(c+839,"z", false,-1, 127,0);
    tracep->declArray(c+843,"s", false,-1, 127,0);
    tracep->declArray(c+847,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_10 ");
    tracep->declArray(c+851,"x", false,-1, 127,0);
    tracep->declArray(c+855,"y", false,-1, 127,0);
    tracep->declArray(c+859,"z", false,-1, 127,0);
    tracep->declArray(c+863,"s", false,-1, 127,0);
    tracep->declArray(c+867,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_11 ");
    tracep->declArray(c+871,"x", false,-1, 127,0);
    tracep->declArray(c+875,"y", false,-1, 127,0);
    tracep->declArray(c+879,"z", false,-1, 127,0);
    tracep->declArray(c+883,"s", false,-1, 127,0);
    tracep->declArray(c+887,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_2 ");
    tracep->declArray(c+891,"x", false,-1, 127,0);
    tracep->declArray(c+895,"y", false,-1, 127,0);
    tracep->declArray(c+899,"z", false,-1, 127,0);
    tracep->declArray(c+903,"s", false,-1, 127,0);
    tracep->declArray(c+907,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_3 ");
    tracep->declArray(c+911,"x", false,-1, 127,0);
    tracep->declArray(c+915,"y", false,-1, 127,0);
    tracep->declArray(c+919,"z", false,-1, 127,0);
    tracep->declArray(c+923,"s", false,-1, 127,0);
    tracep->declArray(c+927,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_4 ");
    tracep->declArray(c+931,"x", false,-1, 127,0);
    tracep->declArray(c+935,"y", false,-1, 127,0);
    tracep->declArray(c+939,"z", false,-1, 127,0);
    tracep->declArray(c+943,"s", false,-1, 127,0);
    tracep->declArray(c+947,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_5 ");
    tracep->declArray(c+951,"x", false,-1, 127,0);
    tracep->declArray(c+955,"y", false,-1, 127,0);
    tracep->declArray(c+959,"z", false,-1, 127,0);
    tracep->declArray(c+963,"s", false,-1, 127,0);
    tracep->declArray(c+967,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_6 ");
    tracep->declArray(c+971,"x", false,-1, 127,0);
    tracep->declArray(c+975,"y", false,-1, 127,0);
    tracep->declArray(c+979,"z", false,-1, 127,0);
    tracep->declArray(c+983,"s", false,-1, 127,0);
    tracep->declArray(c+987,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_7 ");
    tracep->declArray(c+991,"x", false,-1, 127,0);
    tracep->declArray(c+995,"y", false,-1, 127,0);
    tracep->declArray(c+999,"z", false,-1, 127,0);
    tracep->declArray(c+1003,"s", false,-1, 127,0);
    tracep->declArray(c+1007,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_8 ");
    tracep->declArray(c+1011,"x", false,-1, 127,0);
    tracep->declArray(c+1015,"y", false,-1, 127,0);
    tracep->declArray(c+1019,"z", false,-1, 127,0);
    tracep->declArray(c+1023,"s", false,-1, 127,0);
    tracep->declArray(c+1027,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_9 ");
    tracep->declArray(c+1031,"x", false,-1, 127,0);
    tracep->declArray(c+1035,"y", false,-1, 127,0);
    tracep->declArray(c+1039,"z", false,-1, 127,0);
    tracep->declArray(c+1043,"s", false,-1, 127,0);
    tracep->declArray(c+1047,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_1 ");
    tracep->declArray(c+1051,"x", false,-1, 127,0);
    tracep->declArray(c+1055,"y", false,-1, 127,0);
    tracep->declArray(c+1059,"z", false,-1, 127,0);
    tracep->declArray(c+1063,"s", false,-1, 127,0);
    tracep->declArray(c+1067,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_2 ");
    tracep->declArray(c+1071,"x", false,-1, 127,0);
    tracep->declArray(c+1075,"y", false,-1, 127,0);
    tracep->declArray(c+1079,"z", false,-1, 127,0);
    tracep->declArray(c+1083,"s", false,-1, 127,0);
    tracep->declArray(c+1087,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_3 ");
    tracep->declArray(c+1091,"x", false,-1, 127,0);
    tracep->declArray(c+1095,"y", false,-1, 127,0);
    tracep->declArray(c+1099,"z", false,-1, 127,0);
    tracep->declArray(c+1103,"s", false,-1, 127,0);
    tracep->declArray(c+1107,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_4 ");
    tracep->declArray(c+1111,"x", false,-1, 127,0);
    tracep->declArray(c+1115,"y", false,-1, 127,0);
    tracep->declArray(c+1119,"z", false,-1, 127,0);
    tracep->declArray(c+1123,"s", false,-1, 127,0);
    tracep->declArray(c+1127,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_5 ");
    tracep->declArray(c+1131,"x", false,-1, 127,0);
    tracep->declArray(c+1135,"y", false,-1, 127,0);
    tracep->declArray(c+1139,"z", false,-1, 127,0);
    tracep->declArray(c+1143,"s", false,-1, 127,0);
    tracep->declArray(c+1147,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_6 ");
    tracep->declArray(c+1151,"x", false,-1, 127,0);
    tracep->declArray(c+1155,"y", false,-1, 127,0);
    tracep->declArray(c+1159,"z", false,-1, 127,0);
    tracep->declArray(c+1163,"s", false,-1, 127,0);
    tracep->declArray(c+1167,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_7 ");
    tracep->declArray(c+1171,"x", false,-1, 127,0);
    tracep->declArray(c+1175,"y", false,-1, 127,0);
    tracep->declArray(c+1179,"z", false,-1, 127,0);
    tracep->declArray(c+1183,"s", false,-1, 127,0);
    tracep->declArray(c+1187,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l3_1 ");
    tracep->declArray(c+1191,"x", false,-1, 127,0);
    tracep->declArray(c+1195,"y", false,-1, 127,0);
    tracep->declArray(c+1199,"z", false,-1, 127,0);
    tracep->declArray(c+1203,"s", false,-1, 127,0);
    tracep->declArray(c+1207,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l3_2 ");
    tracep->declArray(c+1211,"x", false,-1, 127,0);
    tracep->declArray(c+1215,"y", false,-1, 127,0);
    tracep->declArray(c+1219,"z", false,-1, 127,0);
    tracep->declArray(c+1223,"s", false,-1, 127,0);
    tracep->declArray(c+1227,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l3_3 ");
    tracep->declArray(c+1231,"x", false,-1, 127,0);
    tracep->declArray(c+1235,"y", false,-1, 127,0);
    tracep->declArray(c+1239,"z", false,-1, 127,0);
    tracep->declArray(c+1243,"s", false,-1, 127,0);
    tracep->declArray(c+1247,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l3_4 ");
    tracep->declArray(c+1251,"x", false,-1, 127,0);
    tracep->declArray(c+1255,"y", false,-1, 127,0);
    tracep->declArray(c+1259,"z", false,-1, 127,0);
    tracep->declArray(c+1263,"s", false,-1, 127,0);
    tracep->declArray(c+1267,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l3_5 ");
    tracep->declArray(c+1271,"x", false,-1, 127,0);
    tracep->declArray(c+1275,"y", false,-1, 127,0);
    tracep->declArray(c+1279,"z", false,-1, 127,0);
    tracep->declArray(c+1283,"s", false,-1, 127,0);
    tracep->declArray(c+1287,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l4_1 ");
    tracep->declArray(c+1291,"x", false,-1, 127,0);
    tracep->declArray(c+1295,"y", false,-1, 127,0);
    tracep->declArray(c+1299,"z", false,-1, 127,0);
    tracep->declArray(c+1303,"s", false,-1, 127,0);
    tracep->declArray(c+1307,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l4_2 ");
    tracep->declArray(c+1311,"x", false,-1, 127,0);
    tracep->declArray(c+1315,"y", false,-1, 127,0);
    tracep->declArray(c+1319,"z", false,-1, 127,0);
    tracep->declArray(c+1323,"s", false,-1, 127,0);
    tracep->declArray(c+1327,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l4_3 ");
    tracep->declArray(c+1331,"x", false,-1, 127,0);
    tracep->declArray(c+1335,"y", false,-1, 127,0);
    tracep->declArray(c+1339,"z", false,-1, 127,0);
    tracep->declArray(c+1343,"s", false,-1, 127,0);
    tracep->declArray(c+1347,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l5_1 ");
    tracep->declArray(c+1351,"x", false,-1, 127,0);
    tracep->declArray(c+1355,"y", false,-1, 127,0);
    tracep->declArray(c+1359,"z", false,-1, 127,0);
    tracep->declArray(c+1363,"s", false,-1, 127,0);
    tracep->declArray(c+1367,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l5_2 ");
    tracep->declArray(c+1371,"x", false,-1, 127,0);
    tracep->declArray(c+1375,"y", false,-1, 127,0);
    tracep->declArray(c+1379,"z", false,-1, 127,0);
    tracep->declArray(c+1383,"s", false,-1, 127,0);
    tracep->declArray(c+1387,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l6_1 ");
    tracep->declArray(c+1391,"x", false,-1, 127,0);
    tracep->declArray(c+1395,"y", false,-1, 127,0);
    tracep->declArray(c+1399,"z", false,-1, 127,0);
    tracep->declArray(c+1403,"s", false,-1, 127,0);
    tracep->declArray(c+1407,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l7_1 ");
    tracep->declArray(c+1411,"x", false,-1, 127,0);
    tracep->declArray(c+1415,"y", false,-1, 127,0);
    tracep->declArray(c+1419,"z", false,-1, 127,0);
    tracep->declArray(c+643,"s", false,-1, 127,0);
    tracep->declArray(c+647,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l8_1 ");
    tracep->declArray(c+643,"x", false,-1, 127,0);
    tracep->declArray(c+1423,"y", false,-1, 127,0);
    tracep->declArray(c+1427,"z", false,-1, 127,0);
    tracep->declArray(c+651,"s", false,-1, 127,0);
    tracep->declArray(c+655,"c", false,-1, 127,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("icache ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declQuad(c+1431,"input_addr", false,-1, 63,0);
    tracep->declQuad(c+1727,"input_wdata", false,-1, 63,0);
    tracep->declBit(c+1729,"input_memwrite", false,-1);
    tracep->declBit(c+1658,"input_memread", false,-1);
    tracep->declBit(c+124,"input_valid", false,-1);
    tracep->declQuad(c+129,"output_data", false,-1, 63,0);
    tracep->declBit(c+123,"cache_pipelinehit", false,-1);
    tracep->declBus(c+120,"cache_state", false,-1, 2,0);
    tracep->declBus(c+1433,"input_offset_reg", false,-1, 3,0);
    tracep->declBit(c+1434,"cache_way0hit_reg", false,-1);
    tracep->declBit(c+1435,"cache_way1hit_reg", false,-1);
    tracep->declBus(c+1730,"mem_addr", false,-1, 31,0);
    tracep->declArray(c+1731,"axi_req_data", false,-1, 127,0);
    tracep->declBit(c+1735,"mem_wen", false,-1);
    tracep->declBus(c+1736,"mem_strb", false,-1, 7,0);
    tracep->declBit(c+1436,"axi_res_valid", false,-1);
    tracep->declBus(c+1737,"axi_req_strb", false,-1, 7,0);
    tracep->declBit(c+1437,"axi_req_valid", false,-1);
    tracep->declQuad(c+1438,"axi_req_addr", false,-1, 63,0);
    tracep->declArray(c+1440,"axi_mrdata", false,-1, 127,0);
    tracep->declBus(c+1662,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1663,"LOOKUP", false,-1, 2,0);
    tracep->declBus(c+1664,"MISS", false,-1, 2,0);
    tracep->declBus(c+1665,"REPLACE", false,-1, 2,0);
    tracep->declBus(c+1666,"REFILL", false,-1, 2,0);
    tracep->declBus(c+1667,"MISS_STALL", false,-1, 2,0);
    tracep->declBus(c+1668,"REFILL_STALL", false,-1, 2,0);
    tracep->declBus(c+1672,"DUNJIAO", false,-1, 2,0);
    tracep->declBus(c+1673,"SETS", false,-1, 31,0);
    tracep->declBus(c+1444,"input_tag", false,-1, 20,0);
    tracep->declBus(c+1445,"input_index", false,-1, 6,0);
    tracep->declBus(c+1446,"input_offset", false,-1, 3,0);
    tracep->declBus(c+1738,"cache_index_reg", false,-1, 6,0);
    tracep->declBus(c+1447,"cache_offset_reg", false,-1, 3,0);
    tracep->declBit(c+1448,"cache_wen_way0", false,-1);
    tracep->declBit(c+1449,"cache_wen_way1", false,-1);
    tracep->declBit(c+1450,"cache_miss", false,-1);
    tracep->declArray(c+1451,"cache_strb", false,-1, 127,0);
    tracep->declArray(c+1455,"cache_wdata", false,-1, 127,0);
    tracep->declArray(c+1459,"cache_rdata_way0", false,-1, 127,0);
    tracep->declArray(c+1463,"cache_rdata_way1", false,-1, 127,0);
    tracep->declBit(c+1467,"cache_way0hit", false,-1);
    tracep->declBit(c+1468,"cache_way1hit", false,-1);
    tracep->declBit(c+1469,"cache_way0valid", false,-1);
    tracep->declBit(c+1470,"cache_way1valid", false,-1);
    tracep->declQuad(c+1471,"output_data_way0", false,-1, 63,0);
    tracep->declQuad(c+1473,"output_data_way1", false,-1, 63,0);
    tracep->declQuad(c+1739,"ex_cache_wdata", false,-1, 63,0);
    tracep->declBit(c+1475,"cnt", false,-1);
    tracep->pushNamePrefix("dcache_way1 ");
    tracep->declBus(c+1673,"Bits", false,-1, 31,0);
    tracep->declBus(c+1673,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+1674,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+1673,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+1459,"Q", false,-1, 127,0);
    tracep->declBit(c+1630,"CLK", false,-1);
    tracep->declBit(c+1658,"CEN", false,-1);
    tracep->declBit(c+1448,"WEN", false,-1);
    tracep->declArray(c+1451,"BWEN", false,-1, 127,0);
    tracep->declBus(c+1445,"A", false,-1, 6,0);
    tracep->declArray(c+1455,"D", false,-1, 127,0);
    tracep->declBit(c+1658,"cen", false,-1);
    tracep->declBit(c+1448,"wen", false,-1);
    tracep->declArray(c+1451,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache_way2 ");
    tracep->declBus(c+1673,"Bits", false,-1, 31,0);
    tracep->declBus(c+1673,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+1674,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+1673,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+1463,"Q", false,-1, 127,0);
    tracep->declBit(c+1630,"CLK", false,-1);
    tracep->declBit(c+1658,"CEN", false,-1);
    tracep->declBit(c+1449,"WEN", false,-1);
    tracep->declArray(c+1451,"BWEN", false,-1, 127,0);
    tracep->declBus(c+1445,"A", false,-1, 6,0);
    tracep->declArray(c+1455,"D", false,-1, 127,0);
    tracep->declBit(c+1658,"cen", false,-1);
    tracep->declBit(c+1449,"wen", false,-1);
    tracep->declArray(c+1451,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1476,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declBit(c+1658,"mem_allowin", false,-1);
    tracep->declBit(c+1658,"wb_allowin", false,-1);
    tracep->declBit(c+62,"ex_to_mem_valid", false,-1);
    tracep->declBit(c+64,"mem_to_wb_valid", false,-1);
    tracep->declArray(c+89,"ex_to_mem_bus", false,-1, 262,0);
    tracep->declArray(c+98,"mem_to_wb_bus", false,-1, 321,0);
    tracep->declQuad(c+66,"mem_alu_output", false,-1, 63,0);
    tracep->declQuad(c+69,"mem_final_rdata", false,-1, 63,0);
    tracep->declBit(c+68,"mem_memread", false,-1);
    tracep->declBit(c+59,"ex_flush", false,-1);
    tracep->declBit(c+61,"ex_ready_go", false,-1);
    tracep->declBus(c+57,"ex_memop", false,-1, 2,0);
    tracep->declBus(c+58,"ex_wmask", false,-1, 7,0);
    tracep->declBit(c+65,"mem_flush", false,-1);
    tracep->declQuad(c+71,"mem_doubly_aligned_data", false,-1, 63,0);
    tracep->declQuad(c+73,"mem_diff_addr", false,-1, 63,0);
    tracep->declQuad(c+75,"mem_diff_data", false,-1, 63,0);
    tracep->declBus(c+119,"cache_state", false,-1, 2,0);
    tracep->declBit(c+1477,"mem_memwrite", false,-1);
    tracep->declBus(c+1478,"mem_memop", false,-1, 2,0);
    tracep->declQuad(c+1479,"mem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+1481,"lb", false,-1);
    tracep->declBit(c+1482,"lh", false,-1);
    tracep->declBit(c+1483,"lw", false,-1);
    tracep->declBit(c+1484,"ld", false,-1);
    tracep->declBit(c+1485,"lbu", false,-1);
    tracep->declBit(c+1486,"lhu", false,-1);
    tracep->declBit(c+1487,"lwu", false,-1);
    tracep->declBit(c+1488,"sb", false,-1);
    tracep->declBit(c+1489,"sh", false,-1);
    tracep->declBit(c+1490,"sw", false,-1);
    tracep->declBit(c+1491,"sd", false,-1);
    tracep->declBit(c+1658,"mem_ready_go", false,-1);
    tracep->declBit(c+1492,"mem_reg_wen", false,-1);
    tracep->declBus(c+1493,"mem_rs1", false,-1, 4,0);
    tracep->declQuad(c+1494,"mem_alu_input1", false,-1, 63,0);
    tracep->declBus(c+1496,"mem_des_csr", false,-1, 11,0);
    tracep->declBus(c+1497,"mem_rd", false,-1, 4,0);
    tracep->declBus(c+1498,"mem_pc", false,-1, 31,0);
    tracep->declBit(c+1499,"mem_jalr", false,-1);
    tracep->declQuad(c+1500,"mem_wdata_tmp", false,-1, 63,0);
    tracep->declQuad(c+1741,"mem_wdata", false,-1, 63,0);
    tracep->declBit(c+64,"mem_valid", false,-1);
    tracep->declBit(c+1502,"mem_mret", false,-1);
    tracep->declBit(c+1503,"mem_ecall", false,-1);
    tracep->declBit(c+1504,"mem_csrrw", false,-1);
    tracep->declBit(c+1505,"mem_csrrs", false,-1);
    tracep->declBit(c+1506,"mem_csrrc", false,-1);
    tracep->declBit(c+1507,"mem_csrrwi", false,-1);
    tracep->declBit(c+1508,"mem_csrrsi", false,-1);
    tracep->declBit(c+1509,"mem_csrrci", false,-1);
    tracep->declBit(c+1510,"mem_csr_we", false,-1);
    tracep->declBit(c+1511,"mem_ebreak", false,-1);
    tracep->declBit(c+1512,"ex_lb", false,-1);
    tracep->declBit(c+1513,"ex_lh", false,-1);
    tracep->declBit(c+1514,"ex_lw", false,-1);
    tracep->declBit(c+1515,"ex_ld", false,-1);
    tracep->declBit(c+1516,"ex_lbu", false,-1);
    tracep->declBit(c+1517,"ex_lhu", false,-1);
    tracep->declBit(c+1518,"ex_lwu", false,-1);
    tracep->declBit(c+1519,"ex_sb", false,-1);
    tracep->declBit(c+1520,"ex_sh", false,-1);
    tracep->declBit(c+1521,"ex_sw", false,-1);
    tracep->declBit(c+1522,"ex_sd", false,-1);
    tracep->declArray(c+1523,"ex_to_mem_bus_reg", false,-1, 262,0);
    tracep->declQuad(c+1532,"rawdata", false,-1, 63,0);
    tracep->declBus(c+1534,"ex_addr_lowmask", false,-1, 7,0);
    tracep->declBus(c+1535,"mem_addr_lowmask", false,-1, 7,0);
    tracep->declBus(c+1743,"ex_size", false,-1, 1,0);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+1536,"in", false,-1, 2,0);
    tracep->declBus(c+1534,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb ");
    tracep->declBit(c+1630,"clk", false,-1);
    tracep->declBit(c+1631,"rst", false,-1);
    tracep->declBit(c+1658,"wb_allowin", false,-1);
    tracep->declBit(c+64,"mem_to_wb_valid", false,-1);
    tracep->declArray(c+98,"mem_to_wb_bus", false,-1, 321,0);
    tracep->declBus(c+47,"raddr1", false,-1, 4,0);
    tracep->declBus(c+48,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+51,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+53,"rdata2", false,-1, 63,0);
    tracep->declBus(c+116,"wb_rd", false,-1, 4,0);
    tracep->declQuad(c+109,"wb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+1633,"wb_valid", false,-1);
    tracep->declBus(c+1634,"wb_pc", false,-1, 31,0);
    tracep->declBit(c+117,"wb_reg_wen", false,-1);
    tracep->declQuad(c+111,"wb_csrwdata", false,-1, 63,0);
    tracep->declQuad(c+113,"wb_csrrdata", false,-1, 63,0);
    tracep->declBit(c+42,"wb_mret", false,-1);
    tracep->declBit(c+115,"wb_csr_we", false,-1);
    tracep->declQuad(c+1635,"csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+1637,"csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+1639,"csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+1641,"csr_mcause", false,-1, 63,0);
    tracep->declQuad(c+1643,"csr_mie", false,-1, 63,0);
    tracep->declQuad(c+1645,"csr_mip", false,-1, 63,0);
    tracep->declQuad(c+1647,"csr_mscratch", false,-1, 63,0);
    tracep->declQuad(c+37,"csr_mhartid", false,-1, 63,0);
    tracep->declBit(c+1651,"wb_memwrite", false,-1);
    tracep->declQuad(c+1654,"wb_diff_data", false,-1, 63,0);
    tracep->declQuad(c+1652,"wb_diff_addr", false,-1, 63,0);
    tracep->declBit(c+118,"wb_ebreak", false,-1);
    tracep->declBit(c+65,"mem_flush", false,-1);
    tracep->declBus(c+1744,"MTVEC", false,-1, 11,0);
    tracep->declBus(c+1745,"MCAUSE", false,-1, 11,0);
    tracep->declBus(c+1746,"MSTATUS", false,-1, 11,0);
    tracep->declBus(c+1747,"MEPC", false,-1, 11,0);
    tracep->declBus(c+1748,"MIE", false,-1, 11,0);
    tracep->declBus(c+1749,"MIP", false,-1, 11,0);
    tracep->declBus(c+1750,"MSCRATCH", false,-1, 11,0);
    tracep->declBus(c+1751,"MHARTID", false,-1, 11,0);
    tracep->declBus(c+1537,"wb_des_csr", false,-1, 11,0);
    tracep->declQuad(c+1538,"wb_reg_wdata_tmp", false,-1, 63,0);
    tracep->declBus(c+1540,"mstatus_mpp", false,-1, 1,0);
    tracep->declBit(c+1541,"mstatus_mpie", false,-1);
    tracep->declBit(c+1542,"mstatus_mie", false,-1);
    tracep->declBit(c+1543,"wb_flush", false,-1);
    tracep->declBus(c+1544,"wb_rs1", false,-1, 4,0);
    tracep->declBit(c+1545,"wb_ecall", false,-1);
    tracep->declBit(c+1546,"wb_csrrw", false,-1);
    tracep->declBit(c+1547,"wb_csrrs", false,-1);
    tracep->declBit(c+1548,"wb_csrrc", false,-1);
    tracep->declBit(c+1549,"wb_csrrwi", false,-1);
    tracep->declBit(c+1550,"wb_csrrsi", false,-1);
    tracep->declBit(c+1551,"wb_csrrci", false,-1);
    tracep->declQuad(c+1552,"wb_alu_input1", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1554+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declArray(c+1618,"mem_to_wb_bus_reg", false,-1, 321,0);
    tracep->declBit(c+1629,"non_zerow", false,-1);
    tracep->declBit(c+1658,"wb_ready_go", false,-1);
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
    VlWide<9>/*287:0*/ __Vtemp_h9bc57e54__0;
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
    tracep->fullIData(oldp+39,(vlSelf->ysyx_22040127_top__DOT__if_instruction),32);
    tracep->fullBit(oldp+40,(((IData)((0x100073U == 
                                       (0x10007fU & vlSelf->ysyx_22040127_top__DOT__if_instruction))) 
                              & (~ (IData)((0U != (0xffefff80U 
                                                   & vlSelf->ysyx_22040127_top__DOT__if_instruction)))))));
    tracep->fullBit(oldp+41,((0x7bU == (0x7fU & vlSelf->ysyx_22040127_top__DOT__if_instruction))));
    tracep->fullBit(oldp+42,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                    >> 0xdU))));
    tracep->fullBit(oldp+43,(vlSelf->ysyx_22040127_top__DOT__if_valid));
    tracep->fullBit(oldp+44,(vlSelf->ysyx_22040127_top__DOT__if_allowin));
    tracep->fullIData(oldp+45,(((((- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken))) 
                                  & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U] 
                                     + (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm))) 
                                 | (0xfffffffeU & (
                                                   (- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr))) 
                                                   & ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final) 
                                                      + 
                                                      (((- (IData)(
                                                                   (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                          >> 0x14U)))))) 
                                | ((- (IData)((3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))) 
                                   & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U] 
                                      + (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1))))),32);
    tracep->fullBit(oldp+46,(vlSelf->ysyx_22040127_top__DOT__id_branch_taken));
    tracep->fullCData(oldp+47,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+48,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                         >> 0x14U))),5);
    tracep->fullBit(oldp+49,(vlSelf->ysyx_22040127_top__DOT__id_flush));
    tracep->fullBit(oldp+50,(vlSelf->ysyx_22040127_top__DOT__id_allowin));
    tracep->fullQData(oldp+51,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf
                               [(0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                          >> 0xfU))]),64);
    tracep->fullQData(oldp+53,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf
                               [(0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                          >> 0x14U))]),64);
    tracep->fullBit(oldp+55,(vlSelf->ysyx_22040127_top__DOT__id_to_ex_valid));
    tracep->fullIData(oldp+56,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                 << 1U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                           >> 0x1fU))),32);
    tracep->fullCData(oldp+57,((7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                      >> 8U))),3);
    tracep->fullCData(oldp+58,(vlSelf->ysyx_22040127_top__DOT__ex_wmask),8);
    tracep->fullBit(oldp+59,(vlSelf->ysyx_22040127_top__DOT__ex_flush));
    tracep->fullBit(oldp+60,(vlSelf->ysyx_22040127_top__DOT__ex_allowin));
    tracep->fullBit(oldp+61,(vlSelf->ysyx_22040127_top__DOT__ex_ready_go));
    tracep->fullBit(oldp+62,(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_valid));
    tracep->fullBit(oldp+63,((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                               & ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                                  | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit))) 
                              | ((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                 & ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw)) 
                                    & ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                                       | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit)))))));
    tracep->fullBit(oldp+64,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_valid));
    tracep->fullBit(oldp+65,(vlSelf->ysyx_22040127_top__DOT__mem_flush));
    tracep->fullQData(oldp+66,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])))),64);
    tracep->fullBit(oldp+68,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                    >> 5U))));
    tracep->fullQData(oldp+69,(vlSelf->ysyx_22040127_top__DOT__mem_final_rdata),64);
    tracep->fullQData(oldp+71,(vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data),64);
    tracep->fullQData(oldp+73,(vlSelf->ysyx_22040127_top__DOT__mem_diff_addr),64);
    tracep->fullQData(oldp+75,(vlSelf->ysyx_22040127_top__DOT__mem_diff_data),64);
    tracep->fullWData(oldp+77,(vlSelf->ysyx_22040127_top__DOT__if_to_id_bus),65);
    __Vtemp_h9bc57e54__0[0U] = (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final);
    __Vtemp_h9bc57e54__0[1U] = (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final 
                                        >> 0x20U));
    __Vtemp_h9bc57e54__0[2U] = (IData)((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                         | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                         ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                         : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final));
    __Vtemp_h9bc57e54__0[3U] = (IData)(((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                          | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                          ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                          : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final) 
                                        >> 0x20U));
    __Vtemp_h9bc57e54__0[4U] = (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1);
    __Vtemp_h9bc57e54__0[5U] = (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1 
                                        >> 0x20U));
    __Vtemp_h9bc57e54__0[6U] = (((IData)((((QData)((IData)(
                                                           (1U 
                                                            & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[2U]))) 
                                           << 0x3fU) 
                                          | (((QData)((IData)(
                                                              (0xfffU 
                                                               & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm)))) 
                                              << 0x33U) 
                                             | (((QData)((IData)(
                                                                 ((0x604000U 
                                                                   == 
                                                                   (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                    >> 7U)) 
                                                                  & (6U 
                                                                     == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 7U)))) 
                                                                     & (6U 
                                                                        == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(
                                                                       ((0x1000U 
                                                                         == 
                                                                         (0x7000U 
                                                                          & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                        & (6U 
                                                                           == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          ((0x2000U 
                                                                            == 
                                                                            (0x7000U 
                                                                             & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                           & (6U 
                                                                              == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(
                                                                             ((0x3000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                              & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                ((0x5000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                << 0x2dU) 
                                                               | (((QData)((IData)(
                                                                                ((0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(
                                                                                ((0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                      << 0x2bU) 
                                                                     | (((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U])) 
                                                                         << 0xbU) 
                                                                        | (QData)((IData)(
                                                                                (((0x400U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x10U)) 
                                                                                | (0x1e0U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                << 2U)))) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((2U 
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
                                                                                << 1U)) 
                                                                                | (2U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))))))))))))))))) 
                                 << 0x14U) | (((IData)(
                                                       (3U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U]))) 
                                               << 0x13U) 
                                              | ((0x7c000U 
                                                  & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                     << 7U)) 
                                                 | ((0x3e00U 
                                                     & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                        >> 6U)) 
                                                    | ((0x1f0U 
                                                        & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                           >> 0x10U)) 
                                                       | (((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr)))))));
    __Vtemp_h9bc57e54__0[7U] = (((IData)((((QData)((IData)(
                                                           (1U 
                                                            & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[2U]))) 
                                           << 0x3fU) 
                                          | (((QData)((IData)(
                                                              (0xfffU 
                                                               & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm)))) 
                                              << 0x33U) 
                                             | (((QData)((IData)(
                                                                 ((0x604000U 
                                                                   == 
                                                                   (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                    >> 7U)) 
                                                                  & (6U 
                                                                     == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 7U)))) 
                                                                     & (6U 
                                                                        == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(
                                                                       ((0x1000U 
                                                                         == 
                                                                         (0x7000U 
                                                                          & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                        & (6U 
                                                                           == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          ((0x2000U 
                                                                            == 
                                                                            (0x7000U 
                                                                             & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                           & (6U 
                                                                              == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(
                                                                             ((0x3000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                              & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                ((0x5000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                << 0x2dU) 
                                                               | (((QData)((IData)(
                                                                                ((0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(
                                                                                ((0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                      << 0x2bU) 
                                                                     | (((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U])) 
                                                                         << 0xbU) 
                                                                        | (QData)((IData)(
                                                                                (((0x400U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x10U)) 
                                                                                | (0x1e0U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                << 2U)))) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((2U 
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
                                                                                << 1U)) 
                                                                                | (2U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))))))))))))))))) 
                                 >> 0xcU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        (1U 
                                                                         & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[2U]))) 
                                                        << 0x3fU) 
                                                       | (((QData)((IData)(
                                                                           (0xfffU 
                                                                            & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm)))) 
                                                           << 0x33U) 
                                                          | (((QData)((IData)(
                                                                              ((0x604000U 
                                                                                == 
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 7U)) 
                                                                               & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                              << 0x32U) 
                                                             | (((QData)((IData)(
                                                                                ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 7U)))) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                 << 0x31U) 
                                                                | (((QData)((IData)(
                                                                                ((0x1000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                    << 0x30U) 
                                                                   | (((QData)((IData)(
                                                                                ((0x2000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                       << 0x2fU) 
                                                                      | (((QData)((IData)(
                                                                                ((0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                          << 0x2eU) 
                                                                         | (((QData)((IData)(
                                                                                ((0x5000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                             << 0x2dU) 
                                                                            | (((QData)((IData)(
                                                                                ((0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                                << 0x2cU) 
                                                                               | (((QData)((IData)(
                                                                                ((0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U])) 
                                                                                << 0xbU) 
                                                                                | (QData)((IData)(
                                                                                (((0x400U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x10U)) 
                                                                                | (0x1e0U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                << 2U)))) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((2U 
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
                                                                                << 1U)) 
                                                                                | (2U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))))))))))))))))) 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h9bc57e54__0[8U] = ((IData)(((((QData)((IData)(
                                                           (1U 
                                                            & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[2U]))) 
                                           << 0x3fU) 
                                          | (((QData)((IData)(
                                                              (0xfffU 
                                                               & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm)))) 
                                              << 0x33U) 
                                             | (((QData)((IData)(
                                                                 ((0x604000U 
                                                                   == 
                                                                   (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                    >> 7U)) 
                                                                  & (6U 
                                                                     == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 7U)))) 
                                                                     & (6U 
                                                                        == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(
                                                                       ((0x1000U 
                                                                         == 
                                                                         (0x7000U 
                                                                          & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                        & (6U 
                                                                           == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          ((0x2000U 
                                                                            == 
                                                                            (0x7000U 
                                                                             & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                           & (6U 
                                                                              == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(
                                                                             ((0x3000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                              & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                ((0x5000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                << 0x2dU) 
                                                               | (((QData)((IData)(
                                                                                ((0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(
                                                                                ((0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                      << 0x2bU) 
                                                                     | (((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U])) 
                                                                         << 0xbU) 
                                                                        | (QData)((IData)(
                                                                                (((0x400U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x10U)) 
                                                                                | (0x1e0U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                << 2U)))) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((2U 
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
                                                                                << 1U)) 
                                                                                | (2U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))))))))))))))))) 
                                         >> 0x20U)) 
                                >> 0xcU);
    tracep->fullWData(oldp+80,(__Vtemp_h9bc57e54__0),276);
    tracep->fullWData(oldp+89,(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus),263);
    tracep->fullWData(oldp+98,(vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus),322);
    tracep->fullQData(oldp+109,(vlSelf->ysyx_22040127_top__DOT__wb_reg_wdata),64);
    tracep->fullQData(oldp+111,(vlSelf->ysyx_22040127_top__DOT__wb_csrwdata),64);
    tracep->fullQData(oldp+113,(vlSelf->ysyx_22040127_top__DOT__wb_csrrdata),64);
    tracep->fullBit(oldp+115,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                     >> 0xeU))));
    tracep->fullCData(oldp+116,((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])),5);
    tracep->fullBit(oldp+117,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                     >> 5U))));
    tracep->fullBit(oldp+118,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                     >> 1U))));
    tracep->fullCData(oldp+119,(vlSelf->ysyx_22040127_top__DOT__dcache_state),3);
    tracep->fullCData(oldp+120,(vlSelf->ysyx_22040127_top__DOT__icache_state),3);
    tracep->fullIData(oldp+121,(vlSelf->ysyx_22040127_top__DOT__next_pc),32);
    tracep->fullIData(oldp+122,(vlSelf->ysyx_22040127_top__DOT__next_pc_delayed),32);
    tracep->fullBit(oldp+123,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state)) 
                               & ((IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit) 
                                  | (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit)))));
    tracep->fullBit(oldp+124,(vlSelf->ysyx_22040127_top__DOT__icache_valid));
    tracep->fullBit(oldp+125,(vlSelf->ysyx_22040127_top__DOT__preif_valid));
    tracep->fullBit(oldp+126,(vlSelf->ysyx_22040127_top__DOT__preif_ready_go_delayed));
    tracep->fullBit(oldp+127,(vlSelf->ysyx_22040127_top__DOT__preif_ready_go));
    tracep->fullBit(oldp+128,((1U & ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__preif_valid)) 
                                     | ((IData)(vlSelf->ysyx_22040127_top__DOT__preif_ready_go) 
                                        & (IData)(vlSelf->ysyx_22040127_top__DOT__if_allowin))))));
    tracep->fullQData(oldp+129,(vlSelf->ysyx_22040127_top__DOT__icache_data),64);
    tracep->fullIData(oldp+131,(vlSelf->ysyx_22040127_top__DOT__if_instruction_reg),32);
    tracep->fullBit(oldp+132,(vlSelf->ysyx_22040127_top__DOT__if_instruction_blocked));
    tracep->fullQData(oldp+133,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])))),64);
    tracep->fullQData(oldp+135,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U])))),64);
    tracep->fullBit(oldp+137,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                     >> 6U))));
    tracep->fullBit(oldp+138,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                     >> 5U))));
    tracep->fullBit(oldp+139,(vlSelf->ysyx_22040127_top__DOT____Vcellinp__dcache__input_valid));
    tracep->fullCData(oldp+140,((3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                       >> 8U))),2);
    tracep->fullCData(oldp+141,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_size_reg),2);
    tracep->fullCData(oldp+142,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_offset_reg),4);
    tracep->fullBit(oldp+143,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit_reg));
    tracep->fullBit(oldp+144,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit_reg));
    tracep->fullWData(oldp+145,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_req_data),128);
    tracep->fullBit(oldp+149,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_res_valid));
    tracep->fullBit(oldp+150,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_req_wen));
    tracep->fullCData(oldp+151,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_req_strb),8);
    tracep->fullBit(oldp+152,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_req_valid));
    tracep->fullQData(oldp+153,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_req_addr),64);
    tracep->fullWData(oldp+155,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__axi_mrdata),128);
    tracep->fullIData(oldp+159,((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                 >> 0xbU)),21);
    tracep->fullCData(oldp+160,((0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                          >> 4U))),7);
    tracep->fullCData(oldp+161,((0xfU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])),4);
    tracep->fullCData(oldp+162,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_index_reg),7);
    tracep->fullCData(oldp+163,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_offset_reg),4);
    tracep->fullWData(oldp+164,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_strb),128);
    tracep->fullBit(oldp+168,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way0));
    tracep->fullBit(oldp+169,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way1));
    tracep->fullWData(oldp+170,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wdata),128);
    tracep->fullBit(oldp+174,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_miss));
    tracep->fullBit(oldp+175,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way0_reg));
    tracep->fullBit(oldp+176,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way1_reg));
    tracep->fullQData(oldp+177,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_strb),64);
    tracep->fullWData(oldp+179,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0),128);
    tracep->fullWData(oldp+183,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1),128);
    tracep->fullBit(oldp+187,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit));
    tracep->fullBit(oldp+188,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit));
    tracep->fullBit(oldp+189,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0dirty));
    tracep->fullBit(oldp+190,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1dirty));
    tracep->fullBit(oldp+191,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0valid));
    tracep->fullBit(oldp+192,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1valid));
    tracep->fullQData(oldp+193,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_offset_reg))
                                  ? (((QData)((IData)(
                                                      vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[2U])))
                                  : (((QData)((IData)(
                                                      vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[0U]))))),64);
    tracep->fullQData(oldp+195,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_offset_reg))
                                  ? (((QData)((IData)(
                                                      vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[2U])))
                                  : (((QData)((IData)(
                                                      vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[0U]))))),64);
    tracep->fullQData(oldp+197,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_wdata),64);
    tracep->fullBit(oldp+199,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way0));
    tracep->fullBit(oldp+200,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way1));
    tracep->fullBit(oldp+201,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw));
    tracep->fullBit(oldp+202,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cnt));
    tracep->fullBit(oldp+203,((1U & ((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                      >> 5U) | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_miss)))));
    tracep->fullIData(oldp+204,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__unnamedblk1__DOT__i),32);
    tracep->fullCData(oldp+205,((0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U])),5);
    tracep->fullCData(oldp+206,((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U])),5);
    tracep->fullBit(oldp+207,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                     >> 7U))));
    tracep->fullBit(oldp+208,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U] 
                                     >> 5U))));
    tracep->fullBit(oldp+209,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[3U] 
                                     >> 0xdU))));
    tracep->fullBit(oldp+210,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[5U] 
                                     >> 0x14U))));
    tracep->fullBit(oldp+211,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[3U] 
                                     >> 0xeU))));
    tracep->fullBit(oldp+212,((1U & (~ (IData)((0U 
                                                != 
                                                (7U 
                                                 & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                    >> 0xcU))))))));
    tracep->fullBit(oldp+213,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                     >> 0xdU))))) 
                                     & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                        >> 0xcU)))));
    tracep->fullBit(oldp+214,((4U == (7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+215,((6U == (7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+216,((5U == (7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+217,((7U == (7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+218,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken));
    tracep->fullBit(oldp+219,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                               | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
    tracep->fullBit(oldp+220,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                               | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
    tracep->fullCData(oldp+221,(((0x20U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                           >> 0x19U)) 
                                 | ((0x10U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                              >> 0x15U)) 
                                    | (0xfU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                               >> 3U))))),6);
    tracep->fullCData(oldp+222,((7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+223,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                          >> 7U))),5);
    tracep->fullBit(oldp+224,((1U & (((((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))) 
                                        | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                       | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                      | (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                     | (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+225,((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))));
    tracep->fullBit(oldp+226,((IData)((3U == (0x7fU 
                                              & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])))));
    tracep->fullCData(oldp+227,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type),3);
    tracep->fullQData(oldp+228,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm),64);
    tracep->fullBit(oldp+230,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr));
    tracep->fullQData(oldp+231,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1),64);
    tracep->fullQData(oldp+233,((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                  | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                  ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                  : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final)),64);
    tracep->fullQData(oldp+235,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final),64);
    tracep->fullQData(oldp+237,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final),64);
    tracep->fullBit(oldp+239,((1U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[2U])));
    tracep->fullBit(oldp+240,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard1));
    tracep->fullBit(oldp+241,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard2));
    tracep->fullBit(oldp+242,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard1));
    tracep->fullBit(oldp+243,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard2));
    tracep->fullBit(oldp+244,((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                                & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                                   == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                >> 0xfU)))) 
                               & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                  >> 5U))));
    tracep->fullBit(oldp+245,((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                                & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                                   == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                >> 0x14U)))) 
                               & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                  >> 5U))));
    tracep->fullBit(oldp+246,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard1));
    tracep->fullBit(oldp+247,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard2));
    tracep->fullBit(oldp+248,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1_tmp));
    tracep->fullBit(oldp+249,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2_tmp));
    tracep->fullBit(oldp+250,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1));
    tracep->fullBit(oldp+251,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2));
    tracep->fullBit(oldp+252,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard1_tmp));
    tracep->fullBit(oldp+253,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard2_tmp));
    tracep->fullBit(oldp+254,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_ready_go));
    tracep->fullBit(oldp+255,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_valid));
    tracep->fullWData(oldp+256,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg),65);
    tracep->fullIData(oldp+259,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U]),32);
    tracep->fullIData(oldp+260,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U]),32);
    tracep->fullBit(oldp+261,(((0x604000U == (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                              >> 7U)) 
                               & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
    tracep->fullBit(oldp+262,(((~ (IData)((0U != (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                  >> 7U)))) 
                               & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
    tracep->fullBit(oldp+263,((IData)(((0x1000U == 
                                        (0x7000U & 
                                         vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+264,((IData)(((0x2000U == 
                                        (0x7000U & 
                                         vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+265,((IData)(((0x3000U == 
                                        (0x7000U & 
                                         vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+266,((IData)(((0x5000U == 
                                        (0x7000U & 
                                         vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+267,((IData)(((0x6000U == 
                                        (0x7000U & 
                                         vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+268,((IData)(((0x7000U == 
                                        (0x7000U & 
                                         vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullCData(oldp+269,((0x7fU & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])),7);
    tracep->fullCData(oldp+270,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out),3);
    tracep->fullBit(oldp+271,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit));
    tracep->fullQData(oldp+272,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_calc_result),64);
    tracep->fullQData(oldp+274,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_calc_result),64);
    tracep->fullQData(oldp+276,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op),64);
    tracep->fullIData(oldp+278,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op),32);
    tracep->fullQData(oldp+279,(((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                 - (((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))))),64);
    tracep->fullIData(oldp+281,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__addw_result),32);
    tracep->fullIData(oldp+282,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result),32);
    tracep->fullIData(oldp+283,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U]),32);
    tracep->fullIData(oldp+284,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U]),32);
    tracep->fullIData(oldp+285,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                  << 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                               >> 1U))),32);
    tracep->fullQData(oldp+286,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_addw_result),64);
    tracep->fullQData(oldp+288,((((QData)((IData)((- (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result)))),64);
    tracep->fullQData(oldp+290,((((QData)((IData)((- (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U] 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U])))),64);
    tracep->fullQData(oldp+292,((((QData)((IData)((- (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U] 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U])))),64);
    tracep->fullQData(oldp+294,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U]))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                                                << 0x1fU) 
                                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                                                  >> 1U)))))),64);
    tracep->fullIData(oldp+296,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_sllw),32);
    tracep->fullIData(oldp+297,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_srlw),32);
    tracep->fullCData(oldp+298,((0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])),6);
    tracep->fullQData(oldp+299,((0xffffffff00000000ULL 
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
    tracep->fullQData(oldp+301,((~ (0xffffffffffffffffULL 
                                    >> (0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))),64);
    tracep->fullQData(oldp+303,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sraw),64);
    tracep->fullQData(oldp+305,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sllw),64);
    tracep->fullQData(oldp+307,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_srlw),64);
    tracep->fullQData(oldp+309,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[0U])))),64);
    tracep->fullCData(oldp+311,((0x3fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 0x19U))),6);
    tracep->fullCData(oldp+312,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                       >> 0x16U))),3);
    tracep->fullBit(oldp+313,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 0x14U))));
    tracep->fullBit(oldp+314,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 0x13U))));
    tracep->fullCData(oldp+315,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 0xeU))),5);
    tracep->fullCData(oldp+316,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                       >> 1U))),3);
    tracep->fullBit(oldp+317,((1U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])));
    tracep->fullQData(oldp+318,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])))),64);
    tracep->fullQData(oldp+320,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))),64);
    tracep->fullCData(oldp+322,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 9U))),5);
    tracep->fullCData(oldp+323,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 4U))),5);
    tracep->fullBit(oldp+324,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 0x15U))));
    tracep->fullBit(oldp+325,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_type));
    tracep->fullBit(oldp+326,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_type));
    tracep->fullBit(oldp+327,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_sign));
    tracep->fullBit(oldp+328,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_stage2));
    tracep->fullBit(oldp+329,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_ok));
    tracep->fullBit(oldp+330,((1U & (~ (IData)((0xc00000U 
                                                == 
                                                (0xc00000U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])))))));
    tracep->fullBit(oldp+331,((1U & (~ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                        >> 0x17U)))));
    tracep->fullQData(oldp+332,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[2U])))),64);
    tracep->fullQData(oldp+334,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U])))),64);
    tracep->fullBit(oldp+336,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__ex_valid));
    tracep->fullWData(oldp+337,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg),276);
    tracep->fullQData(oldp+346,(((8U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
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
    tracep->fullBit(oldp+348,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_ready));
    tracep->fullCData(oldp+349,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_state),2);
    tracep->fullQData(oldp+350,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U])))),64);
    tracep->fullQData(oldp+352,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[4U])) 
                                  << 0x3fU) | (((QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U])) 
                                                << 0x1fU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U])) 
                                                  >> 1U)))),64);
    tracep->fullBit(oldp+354,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 6U))));
    tracep->fullBit(oldp+355,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 5U))));
    tracep->fullBit(oldp+356,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 4U))));
    tracep->fullBit(oldp+357,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 3U))));
    tracep->fullBit(oldp+358,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 2U))));
    tracep->fullBit(oldp+359,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 1U))));
    tracep->fullBit(oldp+360,((1U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])));
    tracep->fullBit(oldp+361,((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                               >> 0x1fU)));
    tracep->fullBit(oldp+362,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                >> 0x1fU) | (0U != 
                                             (0x7fU 
                                              & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])))));
    tracep->fullSData(oldp+363,((0xfffU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                           >> 7U))),12);
    tracep->fullBit(oldp+364,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 0x13U))));
    tracep->fullBit(oldp+365,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__cache_readygo));
    tracep->fullQData(oldp+366,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sra),64);
    tracep->fullQData(oldp+368,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_srl),64);
    tracep->fullQData(oldp+370,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sll),64);
    tracep->fullCData(oldp+372,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 0x16U))),5);
    tracep->fullCData(oldp+373,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in),6);
    tracep->fullQData(oldp+374,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber3),64);
    tracep->fullQData(oldp+376,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber4),64);
    tracep->fullCData(oldp+378,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__cnt),7);
    tracep->fullWData(oldp+379,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend),129);
    tracep->fullQData(oldp+384,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__divisor),64);
    tracep->fullWData(oldp+386,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__subres),65);
    tracep->fullWData(oldp+389,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__x_ext),65);
    tracep->fullWData(oldp+392,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext),67);
    tracep->fullWData(oldp+395,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[0]),128);
    tracep->fullWData(oldp+399,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[1]),128);
    tracep->fullWData(oldp+403,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[2]),128);
    tracep->fullWData(oldp+407,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[3]),128);
    tracep->fullWData(oldp+411,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[4]),128);
    tracep->fullWData(oldp+415,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[5]),128);
    tracep->fullWData(oldp+419,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[6]),128);
    tracep->fullWData(oldp+423,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[7]),128);
    tracep->fullWData(oldp+427,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[8]),128);
    tracep->fullWData(oldp+431,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[9]),128);
    tracep->fullWData(oldp+435,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[10]),128);
    tracep->fullWData(oldp+439,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[0]),128);
    tracep->fullWData(oldp+443,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[1]),128);
    tracep->fullWData(oldp+447,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[2]),128);
    tracep->fullWData(oldp+451,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[3]),128);
    tracep->fullWData(oldp+455,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[4]),128);
    tracep->fullWData(oldp+459,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[5]),128);
    tracep->fullWData(oldp+463,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[6]),128);
    tracep->fullWData(oldp+467,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[7]),128);
    tracep->fullWData(oldp+471,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[8]),128);
    tracep->fullWData(oldp+475,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[9]),128);
    tracep->fullWData(oldp+479,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[10]),128);
    tracep->fullWData(oldp+483,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[0]),128);
    tracep->fullWData(oldp+487,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[1]),128);
    tracep->fullWData(oldp+491,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[2]),128);
    tracep->fullWData(oldp+495,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[3]),128);
    tracep->fullWData(oldp+499,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[4]),128);
    tracep->fullWData(oldp+503,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[5]),128);
    tracep->fullWData(oldp+507,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[6]),128);
    tracep->fullWData(oldp+511,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[0]),128);
    tracep->fullWData(oldp+515,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[1]),128);
    tracep->fullWData(oldp+519,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[2]),128);
    tracep->fullWData(oldp+523,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[3]),128);
    tracep->fullWData(oldp+527,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[4]),128);
    tracep->fullWData(oldp+531,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[5]),128);
    tracep->fullWData(oldp+535,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[6]),128);
    tracep->fullWData(oldp+539,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[0]),128);
    tracep->fullWData(oldp+543,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[1]),128);
    tracep->fullWData(oldp+547,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[2]),128);
    tracep->fullWData(oldp+551,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[3]),128);
    tracep->fullWData(oldp+555,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[4]),128);
    tracep->fullWData(oldp+559,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[0]),128);
    tracep->fullWData(oldp+563,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[1]),128);
    tracep->fullWData(oldp+567,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[2]),128);
    tracep->fullWData(oldp+571,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[3]),128);
    tracep->fullWData(oldp+575,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[4]),128);
    tracep->fullWData(oldp+579,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[0]),128);
    tracep->fullWData(oldp+583,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[1]),128);
    tracep->fullWData(oldp+587,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[2]),128);
    tracep->fullWData(oldp+591,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[0]),128);
    tracep->fullWData(oldp+595,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[1]),128);
    tracep->fullWData(oldp+599,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[2]),128);
    tracep->fullWData(oldp+603,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s[0]),128);
    tracep->fullWData(oldp+607,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s[1]),128);
    tracep->fullWData(oldp+611,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s[2]),128);
    tracep->fullWData(oldp+615,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c[0]),128);
    tracep->fullWData(oldp+619,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c[1]),128);
    tracep->fullWData(oldp+623,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c[2]),128);
    tracep->fullWData(oldp+627,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s[0]),128);
    tracep->fullWData(oldp+631,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s[1]),128);
    tracep->fullWData(oldp+635,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c[0]),128);
    tracep->fullWData(oldp+639,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c[1]),128);
    tracep->fullWData(oldp+643,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s),128);
    tracep->fullWData(oldp+647,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c),128);
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
    tracep->fullWData(oldp+651,(__Vtemp_hc42eddb7__0),128);
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
    tracep->fullWData(oldp+655,(__Vtemp_h21d0374a__0),128);
    tracep->fullWData(oldp+659,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res),128);
    tracep->fullCData(oldp+663,((6U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       << 1U))),3);
    tracep->fullWData(oldp+664,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b0____pinNumber5),128);
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
    tracep->fullWData(oldp+668,(__Vtemp_h9fb190ff__0),65);
    tracep->fullCData(oldp+671,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 1U))),3);
    tracep->fullWData(oldp+672,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b1____pinNumber5),128);
    tracep->fullCData(oldp+676,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0x13U))),3);
    tracep->fullWData(oldp+677,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b10____pinNumber5),128);
    tracep->fullCData(oldp+681,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0x15U))),3);
    tracep->fullWData(oldp+682,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b11____pinNumber5),128);
    tracep->fullCData(oldp+686,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0x17U))),3);
    tracep->fullWData(oldp+687,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b12____pinNumber5),128);
    tracep->fullCData(oldp+691,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0x19U))),3);
    tracep->fullWData(oldp+692,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b13____pinNumber5),128);
    tracep->fullCData(oldp+696,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0x1bU))),3);
    tracep->fullWData(oldp+697,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b14____pinNumber5),128);
    tracep->fullCData(oldp+701,((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                 >> 0x1dU)),3);
    tracep->fullWData(oldp+702,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b15____pinNumber5),128);
    tracep->fullCData(oldp+706,((7U & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                        << 1U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                                  >> 0x1fU)))),3);
    tracep->fullWData(oldp+707,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b16____pinNumber5),128);
    tracep->fullCData(oldp+711,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 1U))),3);
    tracep->fullWData(oldp+712,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b17____pinNumber5),128);
    tracep->fullCData(oldp+716,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 3U))),3);
    tracep->fullWData(oldp+717,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b18____pinNumber5),128);
    tracep->fullCData(oldp+721,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 5U))),3);
    tracep->fullWData(oldp+722,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b19____pinNumber5),128);
    tracep->fullCData(oldp+726,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 3U))),3);
    tracep->fullWData(oldp+727,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b2____pinNumber5),128);
    tracep->fullCData(oldp+731,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 7U))),3);
    tracep->fullWData(oldp+732,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b20____pinNumber5),128);
    tracep->fullCData(oldp+736,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 9U))),3);
    tracep->fullWData(oldp+737,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b21____pinNumber5),128);
    tracep->fullCData(oldp+741,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0xbU))),3);
    tracep->fullWData(oldp+742,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b22____pinNumber5),128);
    tracep->fullCData(oldp+746,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0xdU))),3);
    tracep->fullWData(oldp+747,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b23____pinNumber5),128);
    tracep->fullCData(oldp+751,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0xfU))),3);
    tracep->fullWData(oldp+752,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b24____pinNumber5),128);
    tracep->fullCData(oldp+756,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0x11U))),3);
    tracep->fullWData(oldp+757,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b25____pinNumber5),128);
    tracep->fullCData(oldp+761,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0x13U))),3);
    tracep->fullWData(oldp+762,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b26____pinNumber5),128);
    tracep->fullCData(oldp+766,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0x15U))),3);
    tracep->fullWData(oldp+767,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b27____pinNumber5),128);
    tracep->fullCData(oldp+771,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0x17U))),3);
    tracep->fullWData(oldp+772,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b28____pinNumber5),128);
    tracep->fullCData(oldp+776,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0x19U))),3);
    tracep->fullWData(oldp+777,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b29____pinNumber5),128);
    tracep->fullCData(oldp+781,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 5U))),3);
    tracep->fullWData(oldp+782,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b3____pinNumber5),128);
    tracep->fullCData(oldp+786,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0x1bU))),3);
    tracep->fullWData(oldp+787,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b30____pinNumber5),128);
    tracep->fullCData(oldp+791,((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                 >> 0x1dU)),3);
    tracep->fullWData(oldp+792,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b31____pinNumber5),128);
    tracep->fullCData(oldp+796,((7U & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[2U] 
                                        << 1U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                                  >> 0x1fU)))),3);
    tracep->fullWData(oldp+797,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b32____pinNumber5),128);
    tracep->fullCData(oldp+801,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 7U))),3);
    tracep->fullWData(oldp+802,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b4____pinNumber5),128);
    tracep->fullCData(oldp+806,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 9U))),3);
    tracep->fullWData(oldp+807,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b5____pinNumber5),128);
    tracep->fullCData(oldp+811,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0xbU))),3);
    tracep->fullWData(oldp+812,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b6____pinNumber5),128);
    tracep->fullCData(oldp+816,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0xdU))),3);
    tracep->fullWData(oldp+817,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b7____pinNumber5),128);
    tracep->fullCData(oldp+821,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0xfU))),3);
    tracep->fullWData(oldp+822,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b8____pinNumber5),128);
    tracep->fullCData(oldp+826,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0x11U))),3);
    tracep->fullWData(oldp+827,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b9____pinNumber5),128);
    __Vtemp_ha2f4aa87__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0U][0U];
    __Vtemp_ha2f4aa87__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0U][1U];
    __Vtemp_ha2f4aa87__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0U][2U];
    __Vtemp_ha2f4aa87__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0U][3U];
    tracep->fullWData(oldp+831,(__Vtemp_ha2f4aa87__0),128);
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
    tracep->fullWData(oldp+835,(__Vtemp_h84c11fea__0),128);
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
    tracep->fullWData(oldp+839,(__Vtemp_ha13feb02__0),128);
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
    tracep->fullWData(oldp+843,(__Vtemp_h05f44798__0),128);
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
    tracep->fullWData(oldp+847,(__Vtemp_he62c9636__0),128);
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
    tracep->fullWData(oldp+851,(__Vtemp_hcbf1bc4f__0),128);
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
    tracep->fullWData(oldp+855,(__Vtemp_he15e0589__0),128);
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
    tracep->fullWData(oldp+859,(__Vtemp_h56daa6d4__0),128);
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
    tracep->fullWData(oldp+863,(__Vtemp_h4595720e__0),128);
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
    tracep->fullWData(oldp+867,(__Vtemp_h59366efe__0),128);
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
    tracep->fullWData(oldp+871,(__Vtemp_he7eaeb27__0),128);
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
    tracep->fullWData(oldp+875,(__Vtemp_h04be3098__0),128);
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
    tracep->fullWData(oldp+879,(__Vtemp_h2ad69785__0),128);
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
    tracep->fullWData(oldp+883,(__Vtemp_h0254ffe9__0),128);
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
    tracep->fullWData(oldp+887,(__Vtemp_h2e174758__0),128);
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
    tracep->fullWData(oldp+891,(__Vtemp_h69355225__0),128);
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
    tracep->fullWData(oldp+895,(__Vtemp_hc43fb470__0),128);
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
    tracep->fullWData(oldp+899,(__Vtemp_h30ce69e9__0),128);
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
    tracep->fullWData(oldp+903,(__Vtemp_h6208bde2__0),128);
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
    tracep->fullWData(oldp+907,(__Vtemp_had93eb43__0),128);
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
    tracep->fullWData(oldp+911,(__Vtemp_h3c043eb5__0),128);
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
    tracep->fullWData(oldp+915,(__Vtemp_ha924c5a8__0),128);
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
    tracep->fullWData(oldp+919,(__Vtemp_h6241e666__0),128);
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
    tracep->fullWData(oldp+923,(__Vtemp_hc7598cf0__0),128);
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
    tracep->fullWData(oldp+927,(__Vtemp_he11f6c98__0),128);
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
    tracep->fullWData(oldp+931,(__Vtemp_h544cee01__0),128);
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
    tracep->fullWData(oldp+935,(__Vtemp_h604618a7__0),128);
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
    tracep->fullWData(oldp+939,(__Vtemp_h0011670c__0),128);
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
    tracep->fullWData(oldp+943,(__Vtemp_h456941c4__0),128);
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
    tracep->fullWData(oldp+947,(__Vtemp_hea00f9ba__0),128);
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
    tracep->fullWData(oldp+951,(__Vtemp_h3407a5e1__0),128);
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
    tracep->fullWData(oldp+955,(__Vtemp_h8015b798__0),128);
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
    tracep->fullWData(oldp+959,(__Vtemp_hf57249c8__0),128);
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
    tracep->fullWData(oldp+963,(__Vtemp_hef724dde__0),128);
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
    tracep->fullWData(oldp+967,(__Vtemp_he7ec8c7e__0),128);
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
    tracep->fullWData(oldp+971,(__Vtemp_h2629b991__0),128);
    __Vtemp_h3aac0a00__0[0U] = 0U;
    __Vtemp_h3aac0a00__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0x10U][0U];
    __Vtemp_h3aac0a00__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0x10U][1U];
    __Vtemp_h3aac0a00__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0x10U][2U];
    tracep->fullWData(oldp+975,(__Vtemp_h3aac0a00__0),128);
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
    tracep->fullWData(oldp+979,(__Vtemp_hb732e964__0),128);
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
    tracep->fullWData(oldp+983,(__Vtemp_h046a7832__0),128);
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
    tracep->fullWData(oldp+987,(__Vtemp_h6d418be5__0),128);
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
    tracep->fullWData(oldp+991,(__Vtemp_h0182840a__0),128);
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
    tracep->fullWData(oldp+995,(__Vtemp_hb214662e__0),128);
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
    tracep->fullWData(oldp+999,(__Vtemp_h5146fe53__0),128);
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
    tracep->fullWData(oldp+1003,(__Vtemp_h1cac1abb__0),128);
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
    tracep->fullWData(oldp+1007,(__Vtemp_h7f006057__0),128);
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
    tracep->fullWData(oldp+1011,(__Vtemp_h2e51ecc1__0),128);
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
    tracep->fullWData(oldp+1015,(__Vtemp_hc633255e__0),128);
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
    tracep->fullWData(oldp+1019,(__Vtemp_h5f7d747f__0),128);
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
    tracep->fullWData(oldp+1023,(__Vtemp_h7f9cc2a2__0),128);
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
    tracep->fullWData(oldp+1027,(__Vtemp_haf5dff14__0),128);
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
    tracep->fullWData(oldp+1031,(__Vtemp_h9f8a9bcc__0),128);
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
    tracep->fullWData(oldp+1035,(__Vtemp_h65fcf2e9__0),128);
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
    tracep->fullWData(oldp+1039,(__Vtemp_h6b5a749e__0),128);
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
    tracep->fullWData(oldp+1043,(__Vtemp_hbc51cd3a__0),128);
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
    tracep->fullWData(oldp+1047,(__Vtemp_h5e80b166__0),128);
    __Vtemp_hf17187cd__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0U][0U];
    __Vtemp_hf17187cd__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0U][1U];
    __Vtemp_hf17187cd__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0U][2U];
    __Vtemp_hf17187cd__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0U][3U];
    tracep->fullWData(oldp+1051,(__Vtemp_hf17187cd__0),128);
    __Vtemp_hf1718a09__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [1U][0U];
    __Vtemp_hf1718a09__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [1U][1U];
    __Vtemp_hf1718a09__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [1U][2U];
    __Vtemp_hf1718a09__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [1U][3U];
    tracep->fullWData(oldp+1055,(__Vtemp_hf1718a09__0),128);
    __Vtemp_hf1718856__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [2U][0U];
    __Vtemp_hf1718856__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [2U][1U];
    __Vtemp_hf1718856__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [2U][2U];
    __Vtemp_hf1718856__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [2U][3U];
    tracep->fullWData(oldp+1059,(__Vtemp_hf1718856__0),128);
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
    tracep->fullWData(oldp+1063,(__Vtemp_h92c348b0__0),128);
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
    tracep->fullWData(oldp+1067,(__Vtemp_h173af8c6__0),128);
    __Vtemp_hf1718a91__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [3U][0U];
    __Vtemp_hf1718a91__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [3U][1U];
    __Vtemp_hf1718a91__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [3U][2U];
    __Vtemp_hf1718a91__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [3U][3U];
    tracep->fullWData(oldp+1071,(__Vtemp_hf1718a91__0),128);
    __Vtemp_hf17188d4__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [4U][0U];
    __Vtemp_hf17188d4__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [4U][1U];
    __Vtemp_hf17188d4__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [4U][2U];
    __Vtemp_hf17188d4__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [4U][3U];
    tracep->fullWData(oldp+1075,(__Vtemp_hf17188d4__0),128);
    __Vtemp_hf1718b12__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [5U][0U];
    __Vtemp_hf1718b12__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [5U][1U];
    __Vtemp_hf1718b12__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [5U][2U];
    __Vtemp_hf1718b12__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [5U][3U];
    tracep->fullWData(oldp+1079,(__Vtemp_hf1718b12__0),128);
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
    tracep->fullWData(oldp+1083,(__Vtemp_h7152695f__0),128);
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
    tracep->fullWData(oldp+1087,(__Vtemp_h41363071__0),128);
    __Vtemp_hf17195a5__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [6U][0U];
    __Vtemp_hf17195a5__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [6U][1U];
    __Vtemp_hf17195a5__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [6U][2U];
    __Vtemp_hf17195a5__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [6U][3U];
    tracep->fullWData(oldp+1091,(__Vtemp_hf17195a5__0),128);
    __Vtemp_hf1718b8a__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [7U][0U];
    __Vtemp_hf1718b8a__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [7U][1U];
    __Vtemp_hf1718b8a__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [7U][2U];
    __Vtemp_hf1718b8a__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [7U][3U];
    tracep->fullWData(oldp+1095,(__Vtemp_hf1718b8a__0),128);
    __Vtemp_hf1718a27__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [8U][0U];
    __Vtemp_hf1718a27__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [8U][1U];
    __Vtemp_hf1718a27__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [8U][2U];
    __Vtemp_hf1718a27__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [8U][3U];
    tracep->fullWData(oldp+1099,(__Vtemp_hf1718a27__0),128);
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
    tracep->fullWData(oldp+1103,(__Vtemp_hae126eed__0),128);
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
    tracep->fullWData(oldp+1107,(__Vtemp_hc13907b7__0),128);
    __Vtemp_hf1719407__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [9U][0U];
    __Vtemp_hf1719407__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [9U][1U];
    __Vtemp_hf1719407__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [9U][2U];
    __Vtemp_hf1719407__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [9U][3U];
    tracep->fullWData(oldp+1111,(__Vtemp_hf1719407__0),128);
    __Vtemp_hf1718a4c__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0xaU][0U];
    __Vtemp_hf1718a4c__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0xaU][1U];
    __Vtemp_hf1718a4c__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0xaU][2U];
    __Vtemp_hf1718a4c__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0xaU][3U];
    tracep->fullWData(oldp+1115,(__Vtemp_hf1718a4c__0),128);
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
    tracep->fullWData(oldp+1119,(__Vtemp_h07c4056d__0),128);
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
    tracep->fullWData(oldp+1123,(__Vtemp_hb0af998d__0),128);
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
    tracep->fullWData(oldp+1127,(__Vtemp_hf5d7ba4d__0),128);
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
    tracep->fullWData(oldp+1131,(__Vtemp_h00f21e9e__0),128);
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
    tracep->fullWData(oldp+1135,(__Vtemp_h7ce663a5__0),128);
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
    tracep->fullWData(oldp+1139,(__Vtemp_hac2a4a9e__0),128);
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
    tracep->fullWData(oldp+1143,(__Vtemp_hfcaac4cd__0),128);
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
    tracep->fullWData(oldp+1147,(__Vtemp_hb6585417__0),128);
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
    tracep->fullWData(oldp+1151,(__Vtemp_hf5531076__0),128);
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
    tracep->fullWData(oldp+1155,(__Vtemp_h57954f3d__0),128);
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
    tracep->fullWData(oldp+1159,(__Vtemp_h7f281be0__0),128);
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
    tracep->fullWData(oldp+1163,(__Vtemp_h2e2ac58e__0),128);
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
    tracep->fullWData(oldp+1167,(__Vtemp_h2e9ce97d__0),128);
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
    tracep->fullWData(oldp+1171,(__Vtemp_h1527ddb5__0),128);
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
    tracep->fullWData(oldp+1175,(__Vtemp_h75d709c3__0),128);
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
    tracep->fullWData(oldp+1179,(__Vtemp_h779da789__0),128);
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
    tracep->fullWData(oldp+1183,(__Vtemp_h9354c33b__0),128);
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
    tracep->fullWData(oldp+1187,(__Vtemp_h631ff6d7__0),128);
    __Vtemp_hf43c4642__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [0U][0U];
    __Vtemp_hf43c4642__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [0U][1U];
    __Vtemp_hf43c4642__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [0U][2U];
    __Vtemp_hf43c4642__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [0U][3U];
    tracep->fullWData(oldp+1191,(__Vtemp_hf43c4642__0),128);
    __Vtemp_hf43c4783__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [1U][0U];
    __Vtemp_hf43c4783__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [1U][1U];
    __Vtemp_hf43c4783__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [1U][2U];
    __Vtemp_hf43c4783__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [1U][3U];
    tracep->fullWData(oldp+1195,(__Vtemp_hf43c4783__0),128);
    __Vtemp_hf43c46c8__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [2U][0U];
    __Vtemp_hf43c46c8__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [2U][1U];
    __Vtemp_hf43c46c8__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [2U][2U];
    __Vtemp_hf43c46c8__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [2U][3U];
    tracep->fullWData(oldp+1199,(__Vtemp_hf43c46c8__0),128);
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
    tracep->fullWData(oldp+1203,(__Vtemp_hd011b6c0__0),128);
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
    tracep->fullWData(oldp+1207,(__Vtemp_h010b5776__0),128);
    __Vtemp_hf43c43fb__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [3U][0U];
    __Vtemp_hf43c43fb__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [3U][1U];
    __Vtemp_hf43c43fb__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [3U][2U];
    __Vtemp_hf43c43fb__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [3U][3U];
    tracep->fullWData(oldp+1211,(__Vtemp_hf43c43fb__0),128);
    __Vtemp_hf43c473f__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [4U][0U];
    __Vtemp_hf43c473f__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [4U][1U];
    __Vtemp_hf43c473f__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [4U][2U];
    __Vtemp_hf43c473f__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [4U][3U];
    tracep->fullWData(oldp+1215,(__Vtemp_hf43c473f__0),128);
    __Vtemp_hf43c447e__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [5U][0U];
    __Vtemp_hf43c447e__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [5U][1U];
    __Vtemp_hf43c447e__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [5U][2U];
    __Vtemp_hf43c447e__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [5U][3U];
    tracep->fullWData(oldp+1219,(__Vtemp_hf43c447e__0),128);
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
    tracep->fullWData(oldp+1223,(__Vtemp_h32f509e6__0),128);
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
    tracep->fullWData(oldp+1227,(__Vtemp_h3692e320__0),128);
    __Vtemp_hf43c43bd__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [6U][0U];
    __Vtemp_hf43c43bd__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [6U][1U];
    __Vtemp_hf43c43bd__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [6U][2U];
    __Vtemp_hf43c43bd__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [6U][3U];
    tracep->fullWData(oldp+1231,(__Vtemp_hf43c43bd__0),128);
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
    tracep->fullWData(oldp+1235,(__Vtemp_hdbcd2375__0),128);
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
    tracep->fullWData(oldp+1239,(__Vtemp_he45c737d__0),128);
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
    tracep->fullWData(oldp+1243,(__Vtemp_h7097f915__0),128);
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
    tracep->fullWData(oldp+1247,(__Vtemp_h27c1727b__0),128);
    __Vtemp_hb3ce6205__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [1U][0U];
    __Vtemp_hb3ce6205__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [1U][1U];
    __Vtemp_hb3ce6205__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [1U][2U];
    __Vtemp_hb3ce6205__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [1U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h4c5c1491__0, __Vtemp_hb3ce6205__0, 1U);
    tracep->fullWData(oldp+1251,(__Vtemp_h4c5c1491__0),128);
    __Vtemp_hb3ce6544__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [2U][0U];
    __Vtemp_hb3ce6544__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [2U][1U];
    __Vtemp_hb3ce6544__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [2U][2U];
    __Vtemp_hb3ce6544__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [2U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h062ec0c0__0, __Vtemp_hb3ce6544__0, 1U);
    tracep->fullWData(oldp+1255,(__Vtemp_h062ec0c0__0),128);
    __Vtemp_hb3ce647d__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [3U][0U];
    __Vtemp_hb3ce647d__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [3U][1U];
    __Vtemp_hb3ce647d__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [3U][2U];
    __Vtemp_hb3ce647d__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [3U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h434bb540__0, __Vtemp_hb3ce647d__0, 1U);
    tracep->fullWData(oldp+1259,(__Vtemp_h434bb540__0),128);
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
    tracep->fullWData(oldp+1263,(__Vtemp_h69bc9e05__0),128);
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
    tracep->fullWData(oldp+1267,(__Vtemp_h2a7b3d93__0),128);
    __Vtemp_hb3ce61b9__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [4U][0U];
    __Vtemp_hb3ce61b9__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [4U][1U];
    __Vtemp_hb3ce61b9__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [4U][2U];
    __Vtemp_hb3ce61b9__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [4U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_ha582bfc5__0, __Vtemp_hb3ce61b9__0, 1U);
    tracep->fullWData(oldp+1271,(__Vtemp_ha582bfc5__0),128);
    __Vtemp_hb3ce64fa__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [5U][0U];
    __Vtemp_hb3ce64fa__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [5U][1U];
    __Vtemp_hb3ce64fa__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [5U][2U];
    __Vtemp_hb3ce64fa__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [5U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h97d19be7__0, __Vtemp_hb3ce64fa__0, 1U);
    tracep->fullWData(oldp+1275,(__Vtemp_h97d19be7__0),128);
    __Vtemp_hb3ce6447__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [6U][0U];
    __Vtemp_hb3ce6447__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [6U][1U];
    __Vtemp_hb3ce6447__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [6U][2U];
    __Vtemp_hb3ce6447__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [6U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h9782f714__0, __Vtemp_hb3ce6447__0, 1U);
    tracep->fullWData(oldp+1279,(__Vtemp_h9782f714__0),128);
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
    tracep->fullWData(oldp+1283,(__Vtemp_h43107266__0),128);
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
    tracep->fullWData(oldp+1287,(__Vtemp_hc21668af__0),128);
    __Vtemp_h7aa39406__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [0U][0U];
    __Vtemp_h7aa39406__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [0U][1U];
    __Vtemp_h7aa39406__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [0U][2U];
    __Vtemp_h7aa39406__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [0U][3U];
    tracep->fullWData(oldp+1291,(__Vtemp_h7aa39406__0),128);
    __Vtemp_h7aa38ec3__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [1U][0U];
    __Vtemp_h7aa38ec3__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [1U][1U];
    __Vtemp_h7aa38ec3__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [1U][2U];
    __Vtemp_h7aa38ec3__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [1U][3U];
    tracep->fullWData(oldp+1295,(__Vtemp_h7aa38ec3__0),128);
    __Vtemp_h7aa38f88__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [2U][0U];
    __Vtemp_h7aa38f88__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [2U][1U];
    __Vtemp_h7aa38f88__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [2U][2U];
    __Vtemp_h7aa38f88__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [2U][3U];
    tracep->fullWData(oldp+1299,(__Vtemp_h7aa38f88__0),128);
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
    tracep->fullWData(oldp+1303,(__Vtemp_h8eaa5fe3__0),128);
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
    tracep->fullWData(oldp+1307,(__Vtemp_hed7aab57__0),128);
    __Vtemp_h7aa38e4b__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [3U][0U];
    __Vtemp_h7aa38e4b__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [3U][1U];
    __Vtemp_h7aa38e4b__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [3U][2U];
    __Vtemp_h7aa38e4b__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [3U][3U];
    tracep->fullWData(oldp+1311,(__Vtemp_h7aa38e4b__0),128);
    __Vtemp_h7aa38f0f__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [4U][0U];
    __Vtemp_h7aa38f0f__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [4U][1U];
    __Vtemp_h7aa38f0f__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [4U][2U];
    __Vtemp_h7aa38f0f__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [4U][3U];
    tracep->fullWData(oldp+1315,(__Vtemp_h7aa38f0f__0),128);
    __Vtemp_h02d88ba1__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][0U];
    __Vtemp_h02d88ba1__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][1U];
    __Vtemp_h02d88ba1__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][2U];
    __Vtemp_h02d88ba1__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h17db7681__0, __Vtemp_h02d88ba1__0, 1U);
    tracep->fullWData(oldp+1319,(__Vtemp_h17db7681__0),128);
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
    tracep->fullWData(oldp+1323,(__Vtemp_h5868981e__0),128);
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
    tracep->fullWData(oldp+1327,(__Vtemp_hc9a0e09f__0),128);
    __Vtemp_h02d889e4__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [1U][0U];
    __Vtemp_h02d889e4__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [1U][1U];
    __Vtemp_h02d889e4__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [1U][2U];
    __Vtemp_h02d889e4__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [1U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hf4d9a659__0, __Vtemp_h02d889e4__0, 1U);
    tracep->fullWData(oldp+1331,(__Vtemp_hf4d9a659__0),128);
    __Vtemp_h02d88d27__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [2U][0U];
    __Vtemp_h02d88d27__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [2U][1U];
    __Vtemp_h02d88d27__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [2U][2U];
    __Vtemp_h02d88d27__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [2U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h3baf7741__0, __Vtemp_h02d88d27__0, 1U);
    tracep->fullWData(oldp+1335,(__Vtemp_h3baf7741__0),128);
    __Vtemp_h02d88d5c__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [3U][0U];
    __Vtemp_h02d88d5c__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [3U][1U];
    __Vtemp_h02d88d5c__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [3U][2U];
    __Vtemp_h02d88d5c__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [3U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hbda4f3d7__0, __Vtemp_h02d88d5c__0, 1U);
    tracep->fullWData(oldp+1339,(__Vtemp_hbda4f3d7__0),128);
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
    tracep->fullWData(oldp+1343,(__Vtemp_h105cd53d__0),128);
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
    tracep->fullWData(oldp+1347,(__Vtemp_h1c934518__0),128);
    __Vtemp_h8a1cf969__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [0U][0U];
    __Vtemp_h8a1cf969__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [0U][1U];
    __Vtemp_h8a1cf969__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [0U][2U];
    __Vtemp_h8a1cf969__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [0U][3U];
    tracep->fullWData(oldp+1351,(__Vtemp_h8a1cf969__0),128);
    __Vtemp_h8a1cf635__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [1U][0U];
    __Vtemp_h8a1cf635__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [1U][1U];
    __Vtemp_h8a1cf635__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [1U][2U];
    __Vtemp_h8a1cf635__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [1U][3U];
    tracep->fullWData(oldp+1355,(__Vtemp_h8a1cf635__0),128);
    __Vtemp_h8a1cf8ec__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [2U][0U];
    __Vtemp_h8a1cf8ec__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [2U][1U];
    __Vtemp_h8a1cf8ec__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [2U][2U];
    __Vtemp_h8a1cf8ec__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [2U][3U];
    tracep->fullWData(oldp+1359,(__Vtemp_h8a1cf8ec__0),128);
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
    tracep->fullWData(oldp+1363,(__Vtemp_h8bd31a77__0),128);
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
    tracep->fullWData(oldp+1367,(__Vtemp_h04764766__0),128);
    __Vtemp_h389af2c0__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [0U][0U];
    __Vtemp_h389af2c0__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [0U][1U];
    __Vtemp_h389af2c0__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [0U][2U];
    __Vtemp_h389af2c0__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h27ad1993__0, __Vtemp_h389af2c0__0, 1U);
    tracep->fullWData(oldp+1371,(__Vtemp_h27ad1993__0),128);
    __Vtemp_h389ae07c__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [1U][0U];
    __Vtemp_h389ae07c__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [1U][1U];
    __Vtemp_h389ae07c__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [1U][2U];
    __Vtemp_h389ae07c__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [1U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h2fe70ba8__0, __Vtemp_h389ae07c__0, 1U);
    tracep->fullWData(oldp+1375,(__Vtemp_h2fe70ba8__0),128);
    __Vtemp_h389af339__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [2U][0U];
    __Vtemp_h389af339__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [2U][1U];
    __Vtemp_h389af339__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [2U][2U];
    __Vtemp_h389af339__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [2U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h2505e54d__0, __Vtemp_h389af339__0, 1U);
    tracep->fullWData(oldp+1379,(__Vtemp_h2505e54d__0),128);
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
    tracep->fullWData(oldp+1383,(__Vtemp_hb4268308__0),128);
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
    tracep->fullWData(oldp+1387,(__Vtemp_hfb626bf9__0),128);
    __Vtemp_hafce953c__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [0U][0U];
    __Vtemp_hafce953c__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [0U][1U];
    __Vtemp_hafce953c__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [0U][2U];
    __Vtemp_hafce953c__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [0U][3U];
    tracep->fullWData(oldp+1391,(__Vtemp_hafce953c__0),128);
    __Vtemp_hafce9280__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [1U][0U];
    __Vtemp_hafce9280__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [1U][1U];
    __Vtemp_hafce9280__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [1U][2U];
    __Vtemp_hafce9280__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [1U][3U];
    tracep->fullWData(oldp+1395,(__Vtemp_hafce9280__0),128);
    __Vtemp_h1f409a06__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][0U];
    __Vtemp_h1f409a06__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][1U];
    __Vtemp_h1f409a06__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][2U];
    __Vtemp_h1f409a06__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_he96a18d8__0, __Vtemp_h1f409a06__0, 1U);
    tracep->fullWData(oldp+1399,(__Vtemp_he96a18d8__0),128);
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
    tracep->fullWData(oldp+1403,(__Vtemp_h338341c3__0),128);
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
    tracep->fullWData(oldp+1407,(__Vtemp_hc0bfc1cd__0),128);
    __Vtemp_hb135bb7f__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [0U][0U];
    __Vtemp_hb135bb7f__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [0U][1U];
    __Vtemp_hb135bb7f__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [0U][2U];
    __Vtemp_hb135bb7f__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [0U][3U];
    tracep->fullWData(oldp+1411,(__Vtemp_hb135bb7f__0),128);
    __Vtemp_hb135b9bb__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [1U][0U];
    __Vtemp_hb135b9bb__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [1U][1U];
    __Vtemp_hb135b9bb__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [1U][2U];
    __Vtemp_hb135b9bb__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [1U][3U];
    tracep->fullWData(oldp+1415,(__Vtemp_hb135b9bb__0),128);
    __Vtemp_h5a241080__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][0U];
    __Vtemp_h5a241080__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][1U];
    __Vtemp_h5a241080__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][2U];
    __Vtemp_h5a241080__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h2e2480e7__0, __Vtemp_h5a241080__0, 1U);
    tracep->fullWData(oldp+1419,(__Vtemp_h2e2480e7__0),128);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h1fdd8292__2, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c, 1U);
    tracep->fullWData(oldp+1423,(__Vtemp_h1fdd8292__2),128);
    __Vtemp_h5a241144__3[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][0U];
    __Vtemp_h5a241144__3[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][1U];
    __Vtemp_h5a241144__3[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][2U];
    __Vtemp_h5a241144__3[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h0866dee8__0, __Vtemp_h5a241144__3, 1U);
    tracep->fullWData(oldp+1427,(__Vtemp_h0866dee8__0),128);
    tracep->fullQData(oldp+1431,((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc))),64);
    tracep->fullCData(oldp+1433,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__input_offset_reg),4);
    tracep->fullBit(oldp+1434,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit_reg));
    tracep->fullBit(oldp+1435,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit_reg));
    tracep->fullBit(oldp+1436,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__axi_res_valid));
    tracep->fullBit(oldp+1437,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__axi_req_valid));
    tracep->fullQData(oldp+1438,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__axi_req_addr),64);
    tracep->fullWData(oldp+1440,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__axi_mrdata),128);
    tracep->fullIData(oldp+1444,((0x1fffffU & (IData)(
                                                      ((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc)) 
                                                       >> 0xbU)))),21);
    tracep->fullCData(oldp+1445,((0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc)) 
                                                   >> 4U)))),7);
    tracep->fullCData(oldp+1446,((0xfU & (IData)((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc))))),4);
    tracep->fullCData(oldp+1447,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_offset_reg),4);
    tracep->fullBit(oldp+1448,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wen_way0));
    tracep->fullBit(oldp+1449,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wen_way1));
    tracep->fullBit(oldp+1450,((((IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0valid) 
                                 & (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1valid)) 
                                & ((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state)) 
                                   & (~ ((IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit) 
                                         | (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit)))))));
    tracep->fullWData(oldp+1451,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_strb),128);
    tracep->fullWData(oldp+1455,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wdata),128);
    tracep->fullWData(oldp+1459,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0),128);
    tracep->fullWData(oldp+1463,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1),128);
    tracep->fullBit(oldp+1467,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit));
    tracep->fullBit(oldp+1468,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit));
    tracep->fullBit(oldp+1469,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0valid));
    tracep->fullBit(oldp+1470,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1valid));
    tracep->fullQData(oldp+1471,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__input_offset_reg))
                                   ? (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[2U])))
                                   : (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[0U]))))),64);
    tracep->fullQData(oldp+1473,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__input_offset_reg))
                                   ? (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[2U])))
                                   : (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[0U]))))),64);
    tracep->fullBit(oldp+1475,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cnt));
    tracep->fullIData(oldp+1476,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__unnamedblk1__DOT__i),32);
    tracep->fullBit(oldp+1477,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                      >> 6U))));
    tracep->fullCData(oldp+1478,((7U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                        >> 8U))),3);
    tracep->fullQData(oldp+1479,(((0x20U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])
                                   ? vlSelf->ysyx_22040127_top__DOT__mem_final_rdata
                                   : (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U]))))),64);
    tracep->fullBit(oldp+1481,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lb));
    tracep->fullBit(oldp+1482,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lh));
    tracep->fullBit(oldp+1483,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lw));
    tracep->fullBit(oldp+1484,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ld));
    tracep->fullBit(oldp+1485,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lbu));
    tracep->fullBit(oldp+1486,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lhu));
    tracep->fullBit(oldp+1487,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lwu));
    tracep->fullBit(oldp+1488,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__sb));
    tracep->fullBit(oldp+1489,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__sh));
    tracep->fullBit(oldp+1490,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__sw));
    tracep->fullBit(oldp+1491,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__sd));
    tracep->fullBit(oldp+1492,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                      >> 7U))));
    tracep->fullCData(oldp+1493,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                           >> 0x15U))),5);
    tracep->fullQData(oldp+1494,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U])) 
                                   << 0x26U) | (((QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[6U])) 
                                                 << 6U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U])) 
                                                   >> 0x1aU)))),64);
    tracep->fullSData(oldp+1496,((0xfffU & ((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                             << 6U) 
                                            | (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U] 
                                               >> 0x1aU)))),12);
    tracep->fullCData(oldp+1497,((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])),5);
    tracep->fullIData(oldp+1498,(((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                   << 0x15U) | (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                >> 0xbU))),32);
    tracep->fullBit(oldp+1499,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xbU))));
    tracep->fullQData(oldp+1500,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U])))),64);
    tracep->fullBit(oldp+1502,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0x13U))));
    tracep->fullBit(oldp+1503,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0x12U))));
    tracep->fullBit(oldp+1504,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0x11U))));
    tracep->fullBit(oldp+1505,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0x10U))));
    tracep->fullBit(oldp+1506,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xfU))));
    tracep->fullBit(oldp+1507,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xeU))));
    tracep->fullBit(oldp+1508,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xdU))));
    tracep->fullBit(oldp+1509,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xcU))));
    tracep->fullBit(oldp+1510,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0x14U))));
    tracep->fullBit(oldp+1511,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                      >> 6U))));
    tracep->fullBit(oldp+1512,((0U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1513,((1U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1514,((2U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1515,((3U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1516,((4U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1517,((5U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1518,((6U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1519,((0U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1520,((1U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1521,((2U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1522,((3U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullWData(oldp+1523,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg),263);
    tracep->fullQData(oldp+1532,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata),64);
    tracep->fullCData(oldp+1534,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask),8);
    tracep->fullCData(oldp+1535,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask),8);
    tracep->fullCData(oldp+1536,((7U & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])),3);
    tracep->fullSData(oldp+1537,((vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                  >> 0x14U)),12);
    tracep->fullQData(oldp+1538,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0U])))),64);
    tracep->fullCData(oldp+1540,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpp),2);
    tracep->fullBit(oldp+1541,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpie));
    tracep->fullBit(oldp+1542,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mie));
    tracep->fullBit(oldp+1543,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__wb_flush));
    tracep->fullCData(oldp+1544,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                           >> 0xfU))),5);
    tracep->fullBit(oldp+1545,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 0xcU))));
    tracep->fullBit(oldp+1546,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 0xbU))));
    tracep->fullBit(oldp+1547,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 0xaU))));
    tracep->fullBit(oldp+1548,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 9U))));
    tracep->fullBit(oldp+1549,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 8U))));
    tracep->fullBit(oldp+1550,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 7U))));
    tracep->fullBit(oldp+1551,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 6U))));
    tracep->fullQData(oldp+1552,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U])) 
                                   << 0x2cU) | (((QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[4U])) 
                                                 << 0xcU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U])) 
                                                   >> 0x14U)))),64);
    tracep->fullQData(oldp+1554,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[0]),64);
    tracep->fullQData(oldp+1556,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[1]),64);
    tracep->fullQData(oldp+1558,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[2]),64);
    tracep->fullQData(oldp+1560,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[3]),64);
    tracep->fullQData(oldp+1562,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[4]),64);
    tracep->fullQData(oldp+1564,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[5]),64);
    tracep->fullQData(oldp+1566,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[6]),64);
    tracep->fullQData(oldp+1568,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[7]),64);
    tracep->fullQData(oldp+1570,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[8]),64);
    tracep->fullQData(oldp+1572,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[9]),64);
    tracep->fullQData(oldp+1574,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[10]),64);
    tracep->fullQData(oldp+1576,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[11]),64);
    tracep->fullQData(oldp+1578,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[12]),64);
    tracep->fullQData(oldp+1580,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[13]),64);
    tracep->fullQData(oldp+1582,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[14]),64);
    tracep->fullQData(oldp+1584,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[15]),64);
    tracep->fullQData(oldp+1586,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[16]),64);
    tracep->fullQData(oldp+1588,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[17]),64);
    tracep->fullQData(oldp+1590,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[18]),64);
    tracep->fullQData(oldp+1592,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[19]),64);
    tracep->fullQData(oldp+1594,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[20]),64);
    tracep->fullQData(oldp+1596,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[21]),64);
    tracep->fullQData(oldp+1598,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[22]),64);
    tracep->fullQData(oldp+1600,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[23]),64);
    tracep->fullQData(oldp+1602,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[24]),64);
    tracep->fullQData(oldp+1604,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[25]),64);
    tracep->fullQData(oldp+1606,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[26]),64);
    tracep->fullQData(oldp+1608,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[27]),64);
    tracep->fullQData(oldp+1610,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[28]),64);
    tracep->fullQData(oldp+1612,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[29]),64);
    tracep->fullQData(oldp+1614,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[30]),64);
    tracep->fullQData(oldp+1616,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[31]),64);
    tracep->fullWData(oldp+1618,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg),322);
    tracep->fullBit(oldp+1629,((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]))));
    tracep->fullBit(oldp+1630,(vlSelf->clk));
    tracep->fullBit(oldp+1631,(vlSelf->rst));
    tracep->fullIData(oldp+1632,(vlSelf->if_pc),32);
    tracep->fullBit(oldp+1633,(vlSelf->wb_valid));
    tracep->fullIData(oldp+1634,(vlSelf->wb_pc),32);
    tracep->fullQData(oldp+1635,(vlSelf->mepc),64);
    tracep->fullQData(oldp+1637,(vlSelf->mtvec),64);
    tracep->fullQData(oldp+1639,(vlSelf->mstatus),64);
    tracep->fullQData(oldp+1641,(vlSelf->mcause),64);
    tracep->fullQData(oldp+1643,(vlSelf->mie),64);
    tracep->fullQData(oldp+1645,(vlSelf->mip),64);
    tracep->fullQData(oldp+1647,(vlSelf->mscratch),64);
    tracep->fullQData(oldp+1649,(vlSelf->mtval),64);
    tracep->fullBit(oldp+1651,(vlSelf->wb_memwrite));
    tracep->fullQData(oldp+1652,(vlSelf->wb_diff_addr),64);
    tracep->fullQData(oldp+1654,(vlSelf->wb_diff_data),64);
    tracep->fullQData(oldp+1656,(vlSelf->ysyx_22040127_top__DOT__if_pcdata),64);
    tracep->fullBit(oldp+1658,(1U));
    tracep->fullQData(oldp+1659,(vlSelf->ysyx_22040127_top__DOT__reg_wdata),64);
    tracep->fullBit(oldp+1661,(vlSelf->ysyx_22040127_top__DOT__id_jalr));
    tracep->fullCData(oldp+1662,(0U),3);
    tracep->fullCData(oldp+1663,(1U),3);
    tracep->fullCData(oldp+1664,(2U),3);
    tracep->fullCData(oldp+1665,(3U),3);
    tracep->fullCData(oldp+1666,(4U),3);
    tracep->fullCData(oldp+1667,(5U),3);
    tracep->fullCData(oldp+1668,(6U),3);
    tracep->fullIData(oldp+1669,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mem_addr),32);
    tracep->fullBit(oldp+1670,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mem_wen));
    tracep->fullCData(oldp+1671,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mem_strb),8);
    tracep->fullCData(oldp+1672,(7U),3);
    tracep->fullIData(oldp+1673,(0x80U),32);
    tracep->fullIData(oldp+1674,(7U),32);
    tracep->fullIData(oldp+1675,(0xcU),32);
    tracep->fullIData(oldp+1676,(3U),32);
    __Vtemp_hdbbc8edc__0[0U] = 0x39e46b1dU;
    __Vtemp_hdbbc8edc__0[1U] = 0x8deddc67U;
    __Vtemp_hdbbc8edc__0[2U] = 0x60980633U;
    __Vtemp_hdbbc8edc__0[3U] = 0x2e5b93U;
    tracep->fullWData(oldp+1677,(__Vtemp_hdbbc8edc__0),120);
    tracep->fullIData(oldp+1681,(1U),32);
    tracep->fullIData(oldp+1682,(0xaU),32);
    tracep->fullIData(oldp+1683,(0xcU),32);
    tracep->fullCData(oldp+1684,(0U),6);
    tracep->fullCData(oldp+1685,(0x10U),6);
    tracep->fullCData(oldp+1686,(0x20U),6);
    tracep->fullCData(oldp+1687,(1U),6);
    tracep->fullCData(oldp+1688,(0xcU),6);
    tracep->fullCData(oldp+1689,(8U),6);
    tracep->fullCData(oldp+1690,(2U),6);
    tracep->fullCData(oldp+1691,(4U),6);
    tracep->fullCData(oldp+1692,(6U),6);
    tracep->fullCData(oldp+1693,(0xeU),6);
    tracep->fullCData(oldp+1694,(0x18U),6);
    tracep->fullCData(oldp+1695,(0x1aU),6);
    tracep->fullCData(oldp+1696,(0x1eU),6);
    tracep->fullCData(oldp+1697,(0x1cU),6);
    tracep->fullCData(oldp+1698,(0x21U),6);
    tracep->fullCData(oldp+1699,(0x11U),6);
    tracep->fullCData(oldp+1700,(3U),6);
    tracep->fullCData(oldp+1701,(0xaU),6);
    tracep->fullCData(oldp+1702,(0x2aU),6);
    tracep->fullCData(oldp+1703,(0x19U),6);
    tracep->fullCData(oldp+1704,(0xbU),6);
    tracep->fullCData(oldp+1705,(0x2bU),6);
    tracep->fullCData(oldp+1706,(0x1bU),6);
    tracep->fullCData(oldp+1707,(0x1dU),6);
    tracep->fullCData(oldp+1708,(0x1fU),6);
    tracep->fullCData(oldp+1709,(0x16U),6);
    tracep->fullCData(oldp+1710,(0x12U),6);
    tracep->fullCData(oldp+1711,(0x14U),6);
    tracep->fullCData(oldp+1712,(0x10U),5);
    tracep->fullCData(oldp+1713,(0x17U),5);
    tracep->fullCData(oldp+1714,(0x16U),5);
    tracep->fullCData(oldp+1715,(0x14U),5);
    tracep->fullCData(oldp+1716,(0x13U),5);
    tracep->fullCData(oldp+1717,(0x15U),5);
    tracep->fullCData(oldp+1718,(0x11U),5);
    tracep->fullCData(oldp+1719,(0x18U),5);
    tracep->fullCData(oldp+1720,(0x19U),5);
    tracep->fullCData(oldp+1721,(0x1dU),5);
    tracep->fullCData(oldp+1722,(0x12U),5);
    tracep->fullCData(oldp+1723,(0U),2);
    tracep->fullCData(oldp+1724,(1U),2);
    tracep->fullCData(oldp+1725,(3U),2);
    tracep->fullCData(oldp+1726,(2U),2);
    tracep->fullQData(oldp+1727,(0ULL),64);
    tracep->fullBit(oldp+1729,(0U));
    tracep->fullIData(oldp+1730,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__mem_addr),32);
    tracep->fullWData(oldp+1731,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__axi_req_data),128);
    tracep->fullBit(oldp+1735,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__mem_wen));
    tracep->fullCData(oldp+1736,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__mem_strb),8);
    tracep->fullCData(oldp+1737,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__axi_req_strb),8);
    tracep->fullCData(oldp+1738,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_index_reg),7);
    tracep->fullQData(oldp+1739,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__ex_cache_wdata),64);
    tracep->fullQData(oldp+1741,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_wdata),64);
    tracep->fullCData(oldp+1743,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_size),2);
    tracep->fullSData(oldp+1744,(0x305U),12);
    tracep->fullSData(oldp+1745,(0x342U),12);
    tracep->fullSData(oldp+1746,(0x300U),12);
    tracep->fullSData(oldp+1747,(0x341U),12);
    tracep->fullSData(oldp+1748,(0x304U),12);
    tracep->fullSData(oldp+1749,(0x344U),12);
    tracep->fullSData(oldp+1750,(0x340U),12);
    tracep->fullSData(oldp+1751,(0xf14U),12);
}
