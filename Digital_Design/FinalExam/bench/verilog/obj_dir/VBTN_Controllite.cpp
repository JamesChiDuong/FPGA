// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBTN_Controllite.h for the primary calling header

#include "VBTN_Controllite.h"
#include "VBTN_Controllite__Syms.h"

//==========

void VBTN_Controllite::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBTN_Controllite::eval\n"); );
    VBTN_Controllite__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VBTN_Controllite* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("BTN_Control.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VBTN_Controllite::_eval_initial_loop(VBTN_Controllite__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("BTN_Control.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VBTN_Controllite::_sequent__TOP__1(VBTN_Controllite__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTN_Controllite::_sequent__TOP__1\n"); );
    VBTN_Controllite* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BTN_Control__DOT__counter = ((IData)(vlTOPp->reset)
                                          ? 0U : (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->BTN_Control__DOT__counter))));
}

VL_INLINE_OPT void VBTN_Controllite::_sequent__TOP__2(VBTN_Controllite__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTN_Controllite::_sequent__TOP__2\n"); );
    VBTN_Controllite* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BTN_Control__DOT__current_state = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (IData)(vlTOPp->BTN_Control__DOT__next_state));
    vlTOPp->__Vtableidx2 = vlTOPp->BTN_Control__DOT__current_state;
    vlTOPp->sel = vlTOPp->__Vtable2_sel[vlTOPp->__Vtableidx2];
}

VL_INLINE_OPT void VBTN_Controllite::_multiclk__TOP__4(VBTN_Controllite__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTN_Controllite::_multiclk__TOP__4\n"); );
    VBTN_Controllite* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->BTN_Control__DOT__counter) 
                             << 3U) | (IData)(vlTOPp->BTN_Control__DOT__current_state));
    if (vlTOPp->__Vtablechg1[vlTOPp->__Vtableidx1]) {
        vlTOPp->BTN_Control__DOT__next_state = vlTOPp->__Vtable1_BTN_Control__DOT__next_state
            [vlTOPp->__Vtableidx1];
    }
}

void VBTN_Controllite::_eval(VBTN_Controllite__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTN_Controllite::_eval\n"); );
    VBTN_Controllite* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->btn) & (~ (IData)(vlTOPp->__Vclklast__TOP__btn)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->btn) & (~ (IData)(vlTOPp->__Vclklast__TOP__btn))) 
         | ((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))))) {
        vlTOPp->_multiclk__TOP__4(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__btn = vlTOPp->btn;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VBTN_Controllite::_change_request(VBTN_Controllite__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTN_Controllite::_change_request\n"); );
    VBTN_Controllite* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VBTN_Controllite::_change_request_1(VBTN_Controllite__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTN_Controllite::_change_request_1\n"); );
    VBTN_Controllite* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VBTN_Controllite::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTN_Controllite::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((btn & 0xfeU))) {
        Verilated::overWidthError("btn");}
}
#endif  // VL_DEBUG
