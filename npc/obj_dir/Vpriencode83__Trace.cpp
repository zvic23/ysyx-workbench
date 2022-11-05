// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpriencode83__Syms.h"


void Vpriencode83___024root__traceChgSub0(Vpriencode83___024root* vlSelf, VerilatedVcd* tracep);

void Vpriencode83___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vpriencode83___024root* const __restrict vlSelf = static_cast<Vpriencode83___024root*>(voidSelf);
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vpriencode83___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vpriencode83___024root__traceChgSub0(Vpriencode83___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlSelf->x),8);
        tracep->chgBit(oldp+1,(vlSelf->en));
        tracep->chgBit(oldp+2,(vlSelf->z));
        tracep->chgCData(oldp+3,(vlSelf->y),3);
        tracep->chgIData(oldp+4,(vlSelf->priencode83__DOT__i),32);
    }
}

void Vpriencode83___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vpriencode83___024root* const __restrict vlSelf = static_cast<Vpriencode83___024root*>(voidSelf);
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
