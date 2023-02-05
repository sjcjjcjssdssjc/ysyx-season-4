.globl  _start
_start:
  li s0, 0
  move sp, t3
  move a0, t4
  jal call_main
