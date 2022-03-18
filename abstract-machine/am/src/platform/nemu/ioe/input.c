#include <am.h>
#include <nemu.h>
#include <stdio.h>
#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t am_scancode = inl(KBD_ADDR);
  //if(am_scancode)printf("%d\n",am_scancode);
  kbd->keydown = (am_scancode & KEYDOWN_MASK);
  kbd->keycode = (am_scancode ^ KEYDOWN_MASK) >> 16;//AM_KEY_NONE;
}
