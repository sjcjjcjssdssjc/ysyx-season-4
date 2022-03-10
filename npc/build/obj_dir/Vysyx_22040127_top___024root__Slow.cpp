// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040127_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040127_top__Syms.h"
#include "Vysyx_22040127_top___024root.h"

void Vysyx_22040127_top___024root___ctor_var_reset(Vysyx_22040127_top___024root* vlSelf);

Vysyx_22040127_top___024root::Vysyx_22040127_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040127_top___024root___ctor_var_reset(this);
}

void Vysyx_22040127_top___024root::__Vconfigure(Vysyx_22040127_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040127_top___024root::~Vysyx_22040127_top___024root() {
}
