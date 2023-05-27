// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBTN_Controllite__Syms.h"


void VBTN_Controllite::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VBTN_Controllite__Syms* __restrict vlSymsp = static_cast<VBTN_Controllite__Syms*>(userp);
    VBTN_Controllite* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VBTN_Controllite::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VBTN_Controllite__Syms* __restrict vlSymsp = static_cast<VBTN_Controllite__Syms*>(userp);
    VBTN_Controllite* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgBit(oldp+2,(vlTOPp->btn));
        tracep->chgCData(oldp+3,(vlTOPp->sel),3);
        tracep->chgCData(oldp+4,(vlTOPp->BTN_Control__DOT__counter),4);
        tracep->chgCData(oldp+5,(vlTOPp->BTN_Control__DOT__current_state),3);
        tracep->chgCData(oldp+6,(vlTOPp->BTN_Control__DOT__next_state),3);
    }
}

void VBTN_Controllite::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VBTN_Controllite__Syms* __restrict vlSymsp = static_cast<VBTN_Controllite__Syms*>(userp);
    VBTN_Controllite* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
