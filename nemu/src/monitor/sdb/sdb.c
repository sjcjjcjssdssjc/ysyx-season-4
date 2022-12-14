#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <memory/paddr.h>
#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
void info_wp();
void free_wp(char *arg);
typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  char *expr;
  word_t val;//val of expr
} WP;
extern WP* new_wp();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}
static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}
static int cmd_d(char *args){
  char *arg = strtok(NULL, "\"");//first
  free_wp(arg);
  return 0;
}

static int cmd_q(char *args) {
  exit(0);
}

static int cmd_x(char * args){
  char *arg = strtok(NULL, " ");//first

  unsigned int len;
  vaddr_t base;
  
  len = atoi(arg);
  arg = strtok(NULL, " ");//first
  sscanf(arg,"%lx",&base);
  for(int i=0;i<len;i++){//long is 64bit
    word_t x = paddr_read(base + i*4, 4);
    printf("addr 0x%lx: 0x%lx\n",base + i*4, x);
  }
  return 0;
}

static int cmd_p(char * args){
  char *arg = strtok(NULL, "\"");//second (there is no "")
  bool success;
  word_t val = expr(arg, &success);
  printf("the value is %lu (0x%lx)\n", val, val);
  if(success)printf("valid.\n");
  else printf("invalid.\n");
  return success;
}

static int cmd_watch(char * args){
  char *arg = strtok(NULL, "\"");//second (there is no "")
  bool success;
  
  WP* wp = new_wp();
  if(wp == 0)assert(0);
  int l = strlen(arg);
  wp -> expr = (char *)malloc(l);
  memcpy(wp -> expr, arg, l);
  wp -> expr[l] = 0;
  wp -> val = expr(wp -> expr , &success);
  if(success == 0)assert(0);
  return success;
}

static int cmd_info(char *args) {
  char *arg = strtok(NULL, " ");
  if(arg[0] == 'r'){
    isa_reg_display();
  }
  else if(arg[0] == 'w'){//and delete,menuconfig
    info_wp();
  }else printf("unknown instruction\n");
  return 0;
}

static int cmd_si(char *args) {
  char *arg = strtok(NULL, " ");
  int x = atoi(arg);
  cpu_exec(x);
  return 0;
}

static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si","single step the program", cmd_si},
  { "info","print program status(regs/supervise node)", cmd_info},
  { "x","scan the memory", cmd_x},
  { "p", "Value of expression", cmd_p },
  { "watch", "watch variable and see when it changes", cmd_watch },
  { "d", "delete the watchpoint", cmd_d },
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;//to the start of next word
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
