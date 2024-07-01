#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  kbd->keydown = 0;
  kbd->keycode = AM_KEY_NONE;
  uint32_t tmp = inl(KBD_ADDR);
  kbd->keydown = (tmp >> 15 == 1);
  if(!kbd->keydown)
    kbd->keycode = tmp;
  else
    kbd->keycode = tmp & ~KEYDOWN_MASK; 
}
