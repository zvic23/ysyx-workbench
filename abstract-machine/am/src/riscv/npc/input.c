#include <am.h>
#include <stdio.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  //uint16_t keyvalue = inw(KBD_ADDR);
  uint16_t *KBD_ADDR = (uint16_t*)0xa0000050;
  uint16_t keyvalue = KBD_ADDR[0];
//printf("am key:%x\n",keyvalue);
  if( (keyvalue & KEYDOWN_MASK) == 0x8000) kbd->keydown = 1;
  else kbd->keydown = 0;
  kbd->keycode = keyvalue & ~KEYDOWN_MASK;
  if(keyvalue)printf("am key:%x\n",keyvalue);

//  kbd->keydown = 0;
//  kbd->keycode = AM_KEY_NONE;
}
