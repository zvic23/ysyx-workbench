// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbcd7seg__Syms.h"


void Vbcd7seg___024root__traceChgSub0(Vbcd7seg___024root* vlSelf, VerilatedVcd* tracep);

void Vbcd7seg___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vbcd7seg___024root* const __restrict vlSelf = static_cast<Vbcd7seg___024root*>(voidSelf);
    Vbcd7seg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vbcd7seg___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vbcd7seg___024root__traceChgSub0(Vbcd7seg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbcd7seg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlSelf->b),4);
        tracep->chgCData(oldp+1,(vlSelf->h),7);
    }
}

void Vbcd7seg___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vbcd7seg___024root* const __restrict vlSelf = static_cast<Vbcd7seg___024root*>(voidSelf);
    Vbcd7seg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
