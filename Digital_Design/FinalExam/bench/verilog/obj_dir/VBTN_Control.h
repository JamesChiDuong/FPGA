// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VBTN_CONTROL_H_
#define _VBTN_CONTROL_H_  // guard

#include "verilated.h"

//==========

class VBTN_Control__Syms;
class VBTN_Control_VerilatedVcd;


//----------

VL_MODULE(VBTN_Control) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(btn,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(sel,2,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*3:0*/ BTN_Control__DOT__counter;
    CData/*2:0*/ BTN_Control__DOT__current_state;
    CData/*2:0*/ BTN_Control__DOT__next_state;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*6:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx2;
    CData/*0:0*/ __Vclklast__TOP__btn;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vtablechg1[128];
    CData/*0:0*/ __Vm_traceActivity[1];
    static CData/*2:0*/ __Vtable1_BTN_Control__DOT__next_state[128];
    static CData/*2:0*/ __Vtable2_sel[8];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VBTN_Control__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VBTN_Control);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VBTN_Control(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VBTN_Control();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
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
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VBTN_Control__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VBTN_Control__Syms* symsp, bool first);
  private:
    static QData _change_request(VBTN_Control__Syms* __restrict vlSymsp);
    static QData _change_request_1(VBTN_Control__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VBTN_Control__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VBTN_Control__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VBTN_Control__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__4(VBTN_Control__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VBTN_Control__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VBTN_Control__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VBTN_Control__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
