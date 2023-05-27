// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBTN_Control.h for the primary calling header

#include "VBTN_Control.h"
#include "VBTN_Control__Syms.h"

//==========
CData/*2:0*/ VBTN_Control::__Vtable1_BTN_Control__DOT__next_state[128];
CData/*2:0*/ VBTN_Control::__Vtable2_sel[8];

VL_CTOR_IMP(VBTN_Control) {
    VBTN_Control__Syms* __restrict vlSymsp = __VlSymsp = new VBTN_Control__Syms(this, name());
    VBTN_Control* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VBTN_Control::__Vconfigure(VBTN_Control__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VBTN_Control::~VBTN_Control() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VBTN_Control::_settle__TOP__3(VBTN_Control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTN_Control::_settle__TOP__3\n"); );
    VBTN_Control* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx2 = vlTOPp->BTN_Control__DOT__current_state;
    vlTOPp->sel = vlTOPp->__Vtable2_sel[vlTOPp->__Vtableidx2];
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->BTN_Control__DOT__counter) 
                             << 3U) | (IData)(vlTOPp->BTN_Control__DOT__current_state));
    if (vlTOPp->__Vtablechg1[vlTOPp->__Vtableidx1]) {
        vlTOPp->BTN_Control__DOT__next_state = vlTOPp->__Vtable1_BTN_Control__DOT__next_state
            [vlTOPp->__Vtableidx1];
    }
}

void VBTN_Control::_eval_initial(VBTN_Control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTN_Control::_eval_initial\n"); );
    VBTN_Control* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__btn = vlTOPp->btn;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VBTN_Control::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTN_Control::final\n"); );
    // Variables
    VBTN_Control__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBTN_Control* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBTN_Control::_eval_settle(VBTN_Control__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTN_Control::_eval_settle\n"); );
    VBTN_Control* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void VBTN_Control::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTN_Control::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    btn = VL_RAND_RESET_I(1);
    sel = VL_RAND_RESET_I(3);
    BTN_Control__DOT__counter = VL_RAND_RESET_I(4);
    BTN_Control__DOT__current_state = VL_RAND_RESET_I(3);
    BTN_Control__DOT__next_state = VL_RAND_RESET_I(3);
    __Vtableidx1 = 0;
    __Vtablechg1[0] = 0U;
    __Vtablechg1[1] = 0U;
    __Vtablechg1[2] = 0U;
    __Vtablechg1[3] = 0U;
    __Vtablechg1[4] = 0U;
    __Vtablechg1[5] = 0U;
    __Vtablechg1[6] = 0U;
    __Vtablechg1[7] = 1U;
    __Vtablechg1[8] = 1U;
    __Vtablechg1[9] = 0U;
    __Vtablechg1[10] = 0U;
    __Vtablechg1[11] = 0U;
    __Vtablechg1[12] = 0U;
    __Vtablechg1[13] = 0U;
    __Vtablechg1[14] = 0U;
    __Vtablechg1[15] = 1U;
    __Vtablechg1[16] = 1U;
    __Vtablechg1[17] = 1U;
    __Vtablechg1[18] = 0U;
    __Vtablechg1[19] = 0U;
    __Vtablechg1[20] = 0U;
    __Vtablechg1[21] = 0U;
    __Vtablechg1[22] = 0U;
    __Vtablechg1[23] = 1U;
    __Vtablechg1[24] = 0U;
    __Vtablechg1[25] = 0U;
    __Vtablechg1[26] = 1U;
    __Vtablechg1[27] = 0U;
    __Vtablechg1[28] = 0U;
    __Vtablechg1[29] = 0U;
    __Vtablechg1[30] = 0U;
    __Vtablechg1[31] = 1U;
    __Vtablechg1[32] = 0U;
    __Vtablechg1[33] = 0U;
    __Vtablechg1[34] = 0U;
    __Vtablechg1[35] = 1U;
    __Vtablechg1[36] = 0U;
    __Vtablechg1[37] = 0U;
    __Vtablechg1[38] = 0U;
    __Vtablechg1[39] = 1U;
    __Vtablechg1[40] = 0U;
    __Vtablechg1[41] = 0U;
    __Vtablechg1[42] = 0U;
    __Vtablechg1[43] = 0U;
    __Vtablechg1[44] = 1U;
    __Vtablechg1[45] = 0U;
    __Vtablechg1[46] = 0U;
    __Vtablechg1[47] = 1U;
    __Vtablechg1[48] = 0U;
    __Vtablechg1[49] = 0U;
    __Vtablechg1[50] = 0U;
    __Vtablechg1[51] = 0U;
    __Vtablechg1[52] = 0U;
    __Vtablechg1[53] = 1U;
    __Vtablechg1[54] = 0U;
    __Vtablechg1[55] = 1U;
    __Vtablechg1[56] = 0U;
    __Vtablechg1[57] = 0U;
    __Vtablechg1[58] = 0U;
    __Vtablechg1[59] = 0U;
    __Vtablechg1[60] = 0U;
    __Vtablechg1[61] = 0U;
    __Vtablechg1[62] = 1U;
    __Vtablechg1[63] = 1U;
    __Vtablechg1[64] = 0U;
    __Vtablechg1[65] = 0U;
    __Vtablechg1[66] = 0U;
    __Vtablechg1[67] = 0U;
    __Vtablechg1[68] = 0U;
    __Vtablechg1[69] = 0U;
    __Vtablechg1[70] = 0U;
    __Vtablechg1[71] = 1U;
    __Vtablechg1[72] = 0U;
    __Vtablechg1[73] = 0U;
    __Vtablechg1[74] = 0U;
    __Vtablechg1[75] = 0U;
    __Vtablechg1[76] = 0U;
    __Vtablechg1[77] = 0U;
    __Vtablechg1[78] = 0U;
    __Vtablechg1[79] = 1U;
    __Vtablechg1[80] = 0U;
    __Vtablechg1[81] = 0U;
    __Vtablechg1[82] = 0U;
    __Vtablechg1[83] = 0U;
    __Vtablechg1[84] = 0U;
    __Vtablechg1[85] = 0U;
    __Vtablechg1[86] = 0U;
    __Vtablechg1[87] = 1U;
    __Vtablechg1[88] = 0U;
    __Vtablechg1[89] = 0U;
    __Vtablechg1[90] = 0U;
    __Vtablechg1[91] = 0U;
    __Vtablechg1[92] = 0U;
    __Vtablechg1[93] = 0U;
    __Vtablechg1[94] = 0U;
    __Vtablechg1[95] = 1U;
    __Vtablechg1[96] = 0U;
    __Vtablechg1[97] = 0U;
    __Vtablechg1[98] = 0U;
    __Vtablechg1[99] = 0U;
    __Vtablechg1[100] = 0U;
    __Vtablechg1[101] = 0U;
    __Vtablechg1[102] = 0U;
    __Vtablechg1[103] = 1U;
    __Vtablechg1[104] = 0U;
    __Vtablechg1[105] = 0U;
    __Vtablechg1[106] = 0U;
    __Vtablechg1[107] = 0U;
    __Vtablechg1[108] = 0U;
    __Vtablechg1[109] = 0U;
    __Vtablechg1[110] = 0U;
    __Vtablechg1[111] = 1U;
    __Vtablechg1[112] = 0U;
    __Vtablechg1[113] = 0U;
    __Vtablechg1[114] = 0U;
    __Vtablechg1[115] = 0U;
    __Vtablechg1[116] = 0U;
    __Vtablechg1[117] = 0U;
    __Vtablechg1[118] = 0U;
    __Vtablechg1[119] = 1U;
    __Vtablechg1[120] = 0U;
    __Vtablechg1[121] = 0U;
    __Vtablechg1[122] = 0U;
    __Vtablechg1[123] = 0U;
    __Vtablechg1[124] = 0U;
    __Vtablechg1[125] = 0U;
    __Vtablechg1[126] = 0U;
    __Vtablechg1[127] = 1U;
    __Vtable1_BTN_Control__DOT__next_state[0] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[1] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[2] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[3] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[4] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[5] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[6] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[7] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[8] = 1U;
    __Vtable1_BTN_Control__DOT__next_state[9] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[10] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[11] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[12] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[13] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[14] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[15] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[16] = 2U;
    __Vtable1_BTN_Control__DOT__next_state[17] = 2U;
    __Vtable1_BTN_Control__DOT__next_state[18] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[19] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[20] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[21] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[22] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[23] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[24] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[25] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[26] = 3U;
    __Vtable1_BTN_Control__DOT__next_state[27] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[28] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[29] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[30] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[31] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[32] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[33] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[34] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[35] = 4U;
    __Vtable1_BTN_Control__DOT__next_state[36] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[37] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[38] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[39] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[40] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[41] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[42] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[43] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[44] = 5U;
    __Vtable1_BTN_Control__DOT__next_state[45] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[46] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[47] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[48] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[49] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[50] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[51] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[52] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[53] = 6U;
    __Vtable1_BTN_Control__DOT__next_state[54] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[55] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[56] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[57] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[58] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[59] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[60] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[61] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[62] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[63] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[64] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[65] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[66] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[67] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[68] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[69] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[70] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[71] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[72] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[73] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[74] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[75] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[76] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[77] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[78] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[79] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[80] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[81] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[82] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[83] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[84] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[85] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[86] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[87] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[88] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[89] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[90] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[91] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[92] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[93] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[94] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[95] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[96] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[97] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[98] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[99] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[100] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[101] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[102] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[103] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[104] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[105] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[106] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[107] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[108] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[109] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[110] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[111] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[112] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[113] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[114] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[115] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[116] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[117] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[118] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[119] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[120] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[121] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[122] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[123] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[124] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[125] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[126] = 0U;
    __Vtable1_BTN_Control__DOT__next_state[127] = 0U;
    __Vtableidx2 = 0;
    __Vtable2_sel[0] = 0U;
    __Vtable2_sel[1] = 1U;
    __Vtable2_sel[2] = 2U;
    __Vtable2_sel[3] = 3U;
    __Vtable2_sel[4] = 4U;
    __Vtable2_sel[5] = 5U;
    __Vtable2_sel[6] = 6U;
    __Vtable2_sel[7] = 7U;
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
