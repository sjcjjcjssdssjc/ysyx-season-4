.globl  _start
_start:
  li s0, 0
  move sp, a1
  jal call_main
