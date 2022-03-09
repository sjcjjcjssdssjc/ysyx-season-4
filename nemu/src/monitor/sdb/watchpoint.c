#include "sdb.h"

#define NR_WP 32
extern NEMUState nemu_state;
typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  char *expr;
  word_t val;//val of expr
} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

WP* new_wp(){
  WP *now;
  if(free_){
    now = free_;
    free_ = now -> next;
    if(!head){
      head = now;
      now -> next = NULL;
    }
    else{
      now -> next = head;
      head = now;
    }
    return now;
  } else{
    assert(0);
  }
  return 0;
}
void free_wp(WP *wp){
  WP * now;
  for(now = head; now != NULL; now = now -> next){
    if(now -> next == wp){
      now -> next = wp -> next;
      wp -> next = free_;
      free_ = wp;
      return;
    }
  }
}
void seek_changes(){
  WP * now;
  for(now = head; now != NULL; now = now -> next){
    bool sanity;
    //printf("watching %s...\n",now -> expr);
    word_t val = expr(now -> expr, &sanity);//expr has no ""
    if(!sanity){
      printf("the watchpoint is insane\n");
    }
    else if(val != now -> val){

      printf("watchpoint %s changed from %ld(0x%lx)to %ld(0x%lx)\n",now -> expr, 
      now -> val, now -> val, val, val);
      now -> val = val;
      nemu_state.state = NEMU_STOP;
    }
  }
}
void info_wp(){
  WP * now;
  for(now = head; now != NULL; now = now -> next){
    printf("value of watchpoint %s is %ld(0x%lx)\n",now -> expr, now -> val, now -> val);
  }
}