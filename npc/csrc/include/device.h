#ifndef __DEVICE_H__
#define __DEVICE_H__

#include <cstdint>
#include <cstdio>
#include <cstring>
#include <cinttypes>
#include <cassert>


void init_vga();
void vga_update_screen();

//void init_i8042();
//void send_key(uint8_t scancode, bool is_keydown);

void device_update();
void init_device();
#endif
