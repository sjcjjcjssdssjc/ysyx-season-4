#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";
int now = 0;
//  '/home/heisenberg/ysyx-workbench/nemu/tools/gen-expr/build/gen-expr' 1
void gen_num(){
  int x = rand() % 100;
  sprintf(buf + now, "%d", x);
  now += strlen(buf + now);
}
void gen(char s){
  sprintf(buf + now, "%c", s);
  now++;
}
void gen_rand_op(){
  int x = rand() % 4;
  if(x == 0)gen('+');
  else if(x == 1)gen('-');
  else if(x == 2)gen('*');
  else gen('/');
}
int choose(int x){
  return rand() % x;
}
static void gen_rand_expr() {
  switch (choose(3)) {
    case 0: gen_num(); break;
    case 1: gen('('); gen_rand_expr(); gen(')'); break;
    default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    int garb = fscanf(fp, "%d", &result);
    garb++;
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
