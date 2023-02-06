.globl  _start
_start:
  li s0, 0
  move sp, t3
  
  jal call_main
