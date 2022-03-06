#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S,
  TYPE_N, TYPE_J, TYPE_R,
  TYPE_B, // none
};

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)

static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immB(uint32_t i) { return SEXT(BITS(i, 31, 31), 1) << 12 | BITS(i, 30, 25) << 5 | BITS(i, 11, 8) << 1 | BITS(i, 7, 7) << 11; }//careful
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }
static word_t immJ(uint32_t i) { return (SEXT(BITS(i, 31, 31), 1) << 20) | BITS(i, 30, 21) << 1 | BITS(i, 20, 20) << 11 | BITS(i, 19, 12) << 12; }
static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  destR(rd);//dest register is always[11:7]
  switch (type) {
    case TYPE_I: src1R(rs1);     src2I(immI(i)); break;
    case TYPE_U: src1I(immU(i)); break;
    case TYPE_S: destI(immS(i)); src1R(rs1); src2R(rs2); break;
    case TYPE_J: src1I(immJ(i)); break;
    case TYPE_R: src1R(rs1); src2R(rs2); break;
    case TYPE_B: src1R(rs1); src2R(rs2); destR(immB(i)); break;
  }
}
static void jal_op(word_t dest, word_t src1, Decode *s){
  R(dest) = s->snpc; 
  //printf("%lu\n",src1);
  s->dnpc += src1 - 4;
}
static void jalr_op(word_t dest, word_t src1, word_t src2, Decode *s){
  word_t t = s->snpc; 
  s->dnpc = (src1 + src2) & (~1);
  R(dest) = t;
}
static void beq_op(word_t dest, word_t src1, word_t src2, Decode *s){
  if(src1 == src2) 
    s->dnpc += dest - 4;
}
static void bne_op(word_t dest, word_t src1, word_t src2, Decode *s){
  if(src1 != src2) 
    s->dnpc += dest - 4;
}
static word_t var_ext(word_t src1, word_t src2){
  word_t ret = src1 >> src2;
  if((src1 >> 63) & 1){
    for(int i = 63; i >= 0; i--){
      if((src1 >> i) & 1)break;
      else src1 |= (1 << i);
    }
  }
  return ret;
}
static int decode_exec(Decode *s) {
  word_t dest = 0, src1 = 0, src2 = 0;
  s->dnpc = s->snpc;//dynamic next pc <- static next pc

#define INSTPAT_INST(s) ((s)->isa.inst.val) // src/isa/riscv64/include/isa_def.h
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
  decode_operand(s, &dest, &src1, &src2, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  //                                                                      //R(rs1)
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = src1 + s->pc);
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = src1 + src2);
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = src1 - src2);
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = SEXT(src1 + src2, 32));
        // IMM[31:20]--- rs[19:15] rd[11:7] opcode[6:0]        dest(addr)
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + src2, 8));
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXT(Mr(src1 + src2, 4), 32));
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + src2);//(li/mv?)
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, jalr_op(dest, src1, src2, s));//(ret)
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = (src1 < src2));//(seqz)
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT(src1 + src2, 32));//(seqz)
  INSTPAT("??????? ????? ????? 101 ????? 00110 11", srai   , I, R(dest) = var_ext(src1, src2));//new

  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2));
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + dest, 4, src2 & 0xFFFF));//new(need RSC)
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, beq_op(dest, src1, src2, s));//beqz
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, bne_op(dest, src1, src2, s));//

  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, jal_op(dest, src1, s));
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
