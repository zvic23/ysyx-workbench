// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050612_npc.h for the primary calling header

#ifndef VERILATED_VYSYX_22050612_NPC___024UNIT_H_
#define VERILATED_VYSYX_22050612_NPC___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050612_npc__Syms;
class Vysyx_22050612_npc_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22050612_npc___024unit) {
  public:

    // INTERNAL VARIABLES
    Vysyx_22050612_npc__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050612_npc___024unit);  ///< Copying not allowed
  public:
    Vysyx_22050612_npc___024unit(const char* name);
    ~Vysyx_22050612_npc___024unit();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050612_npc__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
