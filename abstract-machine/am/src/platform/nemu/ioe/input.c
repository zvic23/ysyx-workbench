#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint64_t keyvalue = inw(KBD_ADDR);
  //if(keyvalue !=0)
  //printf("keyvalue:%d\n",keyvalue);
  kbd->keydown = keyvalue & KEYDOWN_MASK;
  kbd->keycode = keyvalue & ~KEYDOWN_MASK;
  if(keyvalue == 0)kbd->keycode = AM_KEY_NONE;
  //kbd->keydown = 0;
  //kbd->keycode = AM_KEY_NONE;
}
