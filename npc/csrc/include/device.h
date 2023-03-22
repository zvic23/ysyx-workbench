#ifndef __DEVICE_H__
#define __DEVICE_H__

#include <cstdint>
#include <cstdio>
#include <cstring>
#include <cinttypes>
#include <cassert>


void init_vga();
void vga_update_screen();

void device_update();
#endif
