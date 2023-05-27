// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBTN_Controllite__Syms.h"


//======================

void VBTN_Controllite::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VBTN_Controllite::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBTN_Controllite__Syms* __restrict vlSymsp = static_cast<VBTN_Controllite__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VBTN_Controllite::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VBTN_Controllite::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VBTN_Controllite__Syms* __restrict vlSymsp = static_cast<VBTN_Controllite__Syms*>(userp);
    VBTN_Controllite* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VBTN_Controllite::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VBTN_Controllite__Syms* __restrict vlSymsp = static_cast<VBTN_Controllite__Syms*>(userp);
    VBTN_Controllite* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBit(c+3,"btn", false,-1);
        tracep->declBus(c+4,"sel", false,-1, 2,0);
        tracep->declBit(c+1,"BTN_Control clk", false,-1);
        tracep->declBit(c+2,"BTN_Control reset", false,-1);
        tracep->declBit(c+3,"BTN_Control btn", false,-1);
        tracep->declBus(c+4,"BTN_Control sel", false,-1, 2,0);
        tracep->declBus(c+5,"BTN_Control counter", false,-1, 3,0);
        tracep->declBus(c+8,"BTN_Control ADD", false,-1, 2,0);
        tracep->declBus(c+9,"BTN_Control SUB", false,-1, 2,0);
        tracep->declBus(c+10,"BTN_Control AND", false,-1, 2,0);
        tracep->declBus(c+11,"BTN_Control XOR", false,-1, 2,0);
        tracep->declBus(c+12,"BTN_Control LEFTSH_1", false,-1, 2,0);
        tracep->declBus(c+13,"BTN_Control RIGHSH_1", false,-1, 2,0);
        tracep->declBus(c+14,"BTN_Control LEFTSH_2", false,-1, 2,0);
        tracep->declBus(c+15,"BTN_Control RIGHSH_2", false,-1, 2,0);
        tracep->declBus(c+6,"BTN_Control current_state", false,-1, 2,0);
        tracep->declBus(c+7,"BTN_Control next_state", false,-1, 2,0);
    }
}

void VBTN_Controllite::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VBTN_Controllite::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VBTN_Controllite__Syms* __restrict vlSymsp = static_cast<VBTN_Controllite__Syms*>(userp);
    VBTN_Controllite* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VBTN_Controllite::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VBTN_Controllite__Syms* __restrict vlSymsp = static_cast<VBTN_Controllite__Syms*>(userp);
    VBTN_Controllite* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullBit(oldp+3,(vlTOPp->btn));
        tracep->fullCData(oldp+4,(vlTOPp->sel),3);
        tracep->fullCData(oldp+5,(vlTOPp->BTN_Control__DOT__counter),4);
        tracep->fullCData(oldp+6,(vlTOPp->BTN_Control__DOT__current_state),3);
        tracep->fullCData(oldp+7,(vlTOPp->BTN_Control__DOT__next_state),3);
        tracep->fullCData(oldp+8,(0U),3);
        tracep->fullCData(oldp+9,(1U),3);
        tracep->fullCData(oldp+10,(2U),3);
        tracep->fullCData(oldp+11,(3U),3);
        tracep->fullCData(oldp+12,(4U),3);
        tracep->fullCData(oldp+13,(5U),3);
        tracep->fullCData(oldp+14,(6U),3);
        tracep->fullCData(oldp+15,(7U),3);
    }
}
