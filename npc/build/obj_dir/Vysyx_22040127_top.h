// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VYSYX_22040127_TOP_H_
#define VERILATED_VYSYX_22040127_TOP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vysyx_22040127_top__Syms;
class Vysyx_22040127_top___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class Vysyx_22040127_top VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vysyx_22040127_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_OUT8(&wb_valid,0,0);
    VL_OUT8(&wb_memwrite,0,0);
    VL_IN8(&axi_aw_ready_i,0,0);
    VL_OUT8(&axi_aw_valid_o,0,0);
    VL_OUT8(&axi_aw_prot_o,2,0);
    VL_OUT8(&axi_aw_id_o,3,0);
    VL_OUT8(&axi_aw_user_o,0,0);
    VL_OUT8(&axi_aw_len_o,7,0);
    VL_OUT8(&axi_aw_size_o,2,0);
    VL_OUT8(&axi_aw_burst_o,1,0);
    VL_OUT8(&axi_aw_lock_o,0,0);
    VL_OUT8(&axi_aw_cache_o,3,0);
    VL_OUT8(&axi_aw_qos_o,3,0);
    VL_OUT8(&axi_aw_region_o,3,0);
    VL_IN8(&axi_w_ready_i,0,0);
    VL_OUT8(&axi_w_valid_o,0,0);
    VL_OUT8(&axi_w_strb_o,7,0);
    VL_OUT8(&axi_w_last_o,0,0);
    VL_OUT8(&axi_w_user_o,0,0);
    VL_OUT8(&axi_b_ready_o,0,0);
    VL_IN8(&axi_b_valid_i,0,0);
    VL_IN8(&axi_b_resp_i,1,0);
    VL_IN8(&axi_b_id_i,3,0);
    VL_IN8(&axi_b_user_i,0,0);
    VL_IN8(&axi_ar_ready_i,0,0);
    VL_OUT8(&axi_ar_valid_o,0,0);
    VL_OUT8(&axi_ar_prot_o,2,0);
    VL_OUT8(&axi_ar_id_o,3,0);
    VL_OUT8(&axi_ar_user_o,0,0);
    VL_OUT8(&axi_ar_len_o,7,0);
    VL_OUT8(&axi_ar_size_o,2,0);
    VL_OUT8(&axi_ar_burst_o,1,0);
    VL_OUT8(&axi_ar_lock_o,0,0);
    VL_OUT8(&axi_ar_cache_o,3,0);
    VL_OUT8(&axi_ar_qos_o,3,0);
    VL_OUT8(&axi_ar_region_o,3,0);
    VL_OUT8(&axi_r_ready_o,0,0);
    VL_IN8(&axi_r_valid_i,0,0);
    VL_IN8(&axi_r_resp_i,1,0);
    VL_IN8(&axi_r_last_i,0,0);
    VL_IN8(&axi_r_id_i,3,0);
    VL_IN8(&axi_r_user_i,0,0);
    VL_OUT(&if_pc,31,0);
    VL_OUT(&wb_pc,31,0);
    VL_OUT64(&mepc,63,0);
    VL_OUT64(&mtvec,63,0);
    VL_OUT64(&mstatus,63,0);
    VL_OUT64(&mcause,63,0);
    VL_OUT64(&mie,63,0);
    VL_OUT64(&mip,63,0);
    VL_OUT64(&mscratch,63,0);
    VL_OUT64(&mtval,63,0);
    VL_OUT64(&wb_diff_addr,63,0);
    VL_OUT64(&wb_diff_data,63,0);
    VL_OUT64(&axi_aw_addr_o,63,0);
    VL_OUT64(&axi_w_data_o,63,0);
    VL_OUT64(&axi_ar_addr_o,63,0);
    VL_IN64(&axi_r_data_i,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vysyx_22040127_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vysyx_22040127_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vysyx_22040127_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vysyx_22040127_top();
  private:
    VL_UNCOPYABLE(Vysyx_22040127_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
