#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
void isa_reg_display() {
  for(int i = 0;i < 32; i++){
    printf("%s: %lx\n",regs[i],cpu.gpr[i]);
  }
}

// word_t isa_reg_str2val(const char *s, bool *success) {
//   if (!make_token(s)) {
//     *success = false;
//     return 0;
//   }
//   /* TODO: Implement code to evaluate the expression. */

//   for (i = 0; i < nr_token; i++) {
//     if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == ')' || tokens[i - 1].type == TK_DNUMBER 
//     || tokens[i - 1].type == TK_EQ) ) {
//       tokens[i].type = DEREF;
//     }
//   }
//   return eval(0, nr_token - 1);

// }
