#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

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