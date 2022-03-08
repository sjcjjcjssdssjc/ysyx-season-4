#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <string.h>
#include <memory/paddr.h>
extern const char *regs[];
enum {
  TK_NOTYPE = 256, TK_EQ,
  TK_DNUMBER,//decimal
  TK_QUOTE,
  TK_DEREF,
  TK_REG,
  TK_HEX,

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"\\-", '-'},         // minus
  {"\\*", '*'},         // mult
  {"\\/", '/'},         // divide
  {"\\(", '('},         
  {"\\)", ')'}, 
  {"[0][x][0-9]+", TK_HEX}, 
  {"[0-9]+", TK_DNUMBER}, 
  {"==", TK_EQ},        // equal
  {"\\$[0]", TK_REG},
  {"[a-z][a-z]", TK_REG},
  {"[a-z][0-9]+", TK_REG},
};
#define TOKEN_NUM 3200
#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[TOKEN_NUM] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

int is_bad(int p,int q){
  int sum = 0;
  for(int i = p; i <= q; i++) {
    if(tokens[i].type == '(')sum++;
    else if(tokens[i].type == ')')sum--;
    if(sum < 0){
      printf("false parent\n");
      return 1;     
    }
  }
  if(sum != 0){
    printf("false parent\n");
    return 1;
  }
  return 0;
}

int check_parentheses(int p,int q){
  if(!is_bad(p + 1, q - 1) && p <= q 
  && tokens[p].type == '(' && tokens[q].type == ')')return 1;
  else return 0;
}
int level(int c){
  if(c == '+' || c == '-')return 0;//low
  else if(c == '*' || c == '/')return 1;
  else if(c == TK_DEREF)return 2;
  else return 3;//high
}
word_t eval(int p, int q,bool *fail) {
  if (p > q) {
    *fail = 1;
    return 0;
  }
  else if (p == q || (q == p + 1 && tokens[p].type == TK_DEREF)) {
    // if((q == p + 1 && tokens[p].type == TK_DEREF))
    //   printf("deref");
    if(tokens[p].type == TK_DEREF){
      return paddr_read(eval(q, q, fail), 8);
    }else if(tokens[p].type != TK_DNUMBER && tokens[p].type != TK_HEX && tokens[p].type != TK_REG){
      *fail = 1;
      return 0;
    }
    
    word_t val = 0;
    if(tokens[p].type == TK_DNUMBER){
      int l = strlen(tokens[p].str);
      for(int i = 0; i < l; i++){
        val *= 10;
        val += tokens[p].str[i] - '0';
      }
      return val;
    }
    else if(tokens[p].type == TK_REG){
      for(int i = 0; i < 32; i++){
        if(strcmp(regs[i], tokens[p].str) == 0){
          return cpu.gpr[i];
        }
      }
    } else{
      sscanf(tokens[p].str,"%lx",&val);
      return val;
    }
  }
  else if (check_parentheses(p, q) == true) {
    return eval(p + 1, q - 1, fail);
  }
  else { 
    int op = -1,sum = 0;
    int nowlev = 2;
    for(int i = p; i <= q; i++){
      if(tokens[i].type == '(')sum++;
      else if(tokens[i].type == ')')sum--;
      //printf("%d %c\n",i,(char)tokens[i].type);
      if(sum == 0 && level(tokens[i].type) <= nowlev){
        nowlev = level(tokens[i].type);
        op = i;
      }
    }
    if(op == -1){
      *fail = 1;
      return 0;
    } else{
      word_t val1 = 0;
      if((tokens[op].type != '-' && tokens[op].type != TK_DEREF) || p <= op - 1)//str[0] need to be changed
        val1 = eval(p, op - 1, fail);
      word_t val2 = eval(op + 1, q, fail);
      switch (tokens[op].type) {
        case '+': return val1 + val2;
        case '-': return val1 - val2;
        case '*': return val1 * val2;
        case '/': return val1 / val2;
        case TK_DEREF: return paddr_read(val2, 8);
        default: assert(0);
      }
    }
    
  }
  return -1;
}



static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;
  while (e[position] != '\0') {
    //printf("pos %d\n",position);
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        //char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        //Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //   i, rules[i].regex, position, substr_len, substr_len, substr_start);


        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          case(TK_NOTYPE): break;
          default: 
          if(substr_len >= TOKEN_NUM){
            printf("too long\n");
            return false;
          }
          tokens[nr_token].type = rules[i].token_type;
          //printf("tp %d\n",tokens[nr_token].type);
          for(int j = 0; j < substr_len; j++){
            //printf("%c\n",e[position + j]);
            tokens[nr_token].str[j] = e[position + j];
          }
          tokens[nr_token].str[substr_len] = 0;
          //printf("%s\n",tokens[tot].str);
          nr_token++;
        }
        position += substr_len;
        //printf("aft: %d",position);
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  return true;
}


word_t expr(char *e, bool *success) {
  nr_token = 0;
  if (!make_token(e)) {
    *success = false;
    return 0;
  }


  if(is_bad(0,nr_token - 1)){
    *success = 0;
    return 0;
  }
  for (int i = 0; i < nr_token; i++) {
    if (tokens[i].type == '*' && (i == 0 || (tokens[i - 1].type != ')'
    && tokens[i - 1].type != TK_DNUMBER && tokens[i - 1].type != TK_HEX
    && tokens[i - 1].type != TK_REG)) ) {
      //printf("%d set to deref\n",i);
      tokens[i].type = TK_DEREF;
    }
  }
  bool fail = 0;
  word_t ret = eval(0, nr_token - 1, &fail);
  *success = !fail;
  //printf("%deee\n",*success);
  return ret;
}
// p "2*3"
// p "2*(t0)"
// c
// p "2*(*t0)"
// p "(0x5+*t0)"
// p "*(t1+0x80000000)"
// p "*(t1+0x80000000) + 1"