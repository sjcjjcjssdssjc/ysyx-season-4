// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_22040127_top.h"
#include "Vysyx_22040127_top__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vysyx_22040127_top::Vysyx_22040127_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vysyx_22040127_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , wb_valid{vlSymsp->TOP.wb_valid}
    , wb_memwrite{vlSymsp->TOP.wb_memwrite}
    , cmt_skip{vlSymsp->TOP.cmt_skip}
    , axi_aw_ready_i{vlSymsp->TOP.axi_aw_ready_i}
    , axi_aw_valid_o{vlSymsp->TOP.axi_aw_valid_o}
    , axi_aw_prot_o{vlSymsp->TOP.axi_aw_prot_o}
    , axi_aw_id_o{vlSymsp->TOP.axi_aw_id_o}
    , axi_aw_user_o{vlSymsp->TOP.axi_aw_user_o}
    , axi_aw_len_o{vlSymsp->TOP.axi_aw_len_o}
    , axi_aw_size_o{vlSymsp->TOP.axi_aw_size_o}
    , axi_aw_burst_o{vlSymsp->TOP.axi_aw_burst_o}
    , axi_aw_lock_o{vlSymsp->TOP.axi_aw_lock_o}
    , axi_aw_cache_o{vlSymsp->TOP.axi_aw_cache_o}
    , axi_aw_qos_o{vlSymsp->TOP.axi_aw_qos_o}
    , axi_aw_region_o{vlSymsp->TOP.axi_aw_region_o}
    , axi_w_ready_i{vlSymsp->TOP.axi_w_ready_i}
    , axi_w_valid_o{vlSymsp->TOP.axi_w_valid_o}
    , axi_w_strb_o{vlSymsp->TOP.axi_w_strb_o}
    , axi_w_last_o{vlSymsp->TOP.axi_w_last_o}
    , axi_w_user_o{vlSymsp->TOP.axi_w_user_o}
    , axi_b_ready_o{vlSymsp->TOP.axi_b_ready_o}
    , axi_b_valid_i{vlSymsp->TOP.axi_b_valid_i}
    , axi_b_resp_i{vlSymsp->TOP.axi_b_resp_i}
    , axi_b_id_i{vlSymsp->TOP.axi_b_id_i}
    , axi_b_user_i{vlSymsp->TOP.axi_b_user_i}
    , axi_ar_ready_i{vlSymsp->TOP.axi_ar_ready_i}
    , axi_ar_valid_o{vlSymsp->TOP.axi_ar_valid_o}
    , axi_ar_prot_o{vlSymsp->TOP.axi_ar_prot_o}
    , axi_ar_id_o{vlSymsp->TOP.axi_ar_id_o}
    , axi_ar_user_o{vlSymsp->TOP.axi_ar_user_o}
    , axi_ar_len_o{vlSymsp->TOP.axi_ar_len_o}
    , axi_ar_size_o{vlSymsp->TOP.axi_ar_size_o}
    , axi_ar_burst_o{vlSymsp->TOP.axi_ar_burst_o}
    , axi_ar_lock_o{vlSymsp->TOP.axi_ar_lock_o}
    , axi_ar_cache_o{vlSymsp->TOP.axi_ar_cache_o}
    , axi_ar_qos_o{vlSymsp->TOP.axi_ar_qos_o}
    , axi_ar_region_o{vlSymsp->TOP.axi_ar_region_o}
    , axi_r_ready_o{vlSymsp->TOP.axi_r_ready_o}
    , axi_r_valid_i{vlSymsp->TOP.axi_r_valid_i}
    , axi_r_resp_i{vlSymsp->TOP.axi_r_resp_i}
    , axi_r_last_i{vlSymsp->TOP.axi_r_last_i}
    , axi_r_id_i{vlSymsp->TOP.axi_r_id_i}
    , axi_r_user_i{vlSymsp->TOP.axi_r_user_i}
    , if_pc{vlSymsp->TOP.if_pc}
    , wb_pc{vlSymsp->TOP.wb_pc}
    , wb_instruction{vlSymsp->TOP.wb_instruction}
    , mepc{vlSymsp->TOP.mepc}
    , mtvec{vlSymsp->TOP.mtvec}
    , mstatus{vlSymsp->TOP.mstatus}
    , mcause{vlSymsp->TOP.mcause}
    , mie{vlSymsp->TOP.mie}
    , mip{vlSymsp->TOP.mip}
    , mscratch{vlSymsp->TOP.mscratch}
    , mtval{vlSymsp->TOP.mtval}
    , wb_diff_addr{vlSymsp->TOP.wb_diff_addr}
    , wb_diff_data{vlSymsp->TOP.wb_diff_data}
    , axi_aw_addr_o{vlSymsp->TOP.axi_aw_addr_o}
    , axi_w_data_o{vlSymsp->TOP.axi_w_data_o}
    , axi_ar_addr_o{vlSymsp->TOP.axi_ar_addr_o}
    , axi_r_data_i{vlSymsp->TOP.axi_r_data_i}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vysyx_22040127_top::Vysyx_22040127_top(const char* _vcname__)
    : Vysyx_22040127_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vysyx_22040127_top::~Vysyx_22040127_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vysyx_22040127_top___024root___eval_initial(Vysyx_22040127_top___024root* vlSelf);
void Vysyx_22040127_top___024root___eval_settle(Vysyx_22040127_top___024root* vlSelf);
void Vysyx_22040127_top___024root___eval(Vysyx_22040127_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vysyx_22040127_top___024root___eval_debug_assertions(Vysyx_22040127_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_22040127_top___024root___final(Vysyx_22040127_top___024root* vlSelf);

static void _eval_initial_loop(Vysyx_22040127_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vysyx_22040127_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vysyx_22040127_top___024root___eval_settle(&(vlSymsp->TOP));
        Vysyx_22040127_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vysyx_22040127_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_22040127_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_22040127_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vysyx_22040127_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vysyx_22040127_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vysyx_22040127_top::final() {
    Vysyx_22040127_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vysyx_22040127_top::hierName() const { return vlSymsp->name(); }
const char* Vysyx_22040127_top::modelName() const { return "Vysyx_22040127_top"; }
unsigned Vysyx_22040127_top::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vysyx_22040127_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vysyx_22040127_top___024root__trace_init_top(Vysyx_22040127_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vysyx_22040127_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040127_top___024root*>(voidSelf);
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vysyx_22040127_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_register(Vysyx_22040127_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vysyx_22040127_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vysyx_22040127_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
