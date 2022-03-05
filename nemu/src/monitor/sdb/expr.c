#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <string.h>

enum {
  TK_NOTYPE = 256, TK_EQ,
  TK_DNUMBER,//decimal
  TK_QUOTE,
  /* TODO: Add more token types */

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
  {"[0-9]+", TK_DNUMBER}, 
  {"==", TK_EQ},        // equal
};

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

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;
int tot = 0;
static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;
  int sum = 0;
  while (e[position] != '\0') {
    if(e[position] == '(')sum++;
    else if(e[position] == ')')sum--;
    if(sum < 0){
      printf("false parent\n");
      return -1;     
    }
    position++;
  }
  if(sum != 0){
    printf("false parent\n");
    return -1;
  }
  position = 0;
  while (e[position] != '\0') {
    //printf("pos %d\n",position);
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);


        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          case(TK_NOTYPE): break;
          default: 
          if(substr_len >= 32){
            printf("too long\n");
            return -1;
          }
          tokens[tot].type = rules[i].token_type;
          for(int j = 0; j < substr_len; j++){
            //printf("%c\n",e[position + j]);
            tokens[tot].str[j] = e[position + j];
          }
          printf("%d %s\n",tokens[tot].type,tokens[tot].str);
          tot++;
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
  printf("true\n");
  return true;
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  TODO();

  return 0;
}
