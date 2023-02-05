#include <proc.h>
#include <memory.h>

#define MAX_NR_PROC 4

static PCB pcb[MAX_NR_PROC] __attribute__((used)) = {};
static PCB pcb_boot = {};
PCB *current = NULL;
void context_uload(PCB *pcb, const char *filename,char *const argv[], char *const envp[]);//loader.c
Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  kstack.start = malloc(8 * PGSIZE);
  kstack.end = (char *)(kstack.start) + 8 * PGSIZE;
  return (Context *)(kstack.start);
}
void context_kload(PCB *pcb, void (*entry)(void *), void *arg){
  pcb->cp = kcontext((pcb->as).area, entry, arg);
  pcb->cp->mcause = 0;
  pcb->cp->mstatus = 0xa00001800;
  pcb->cp->mepc = (uintptr_t)entry;
  for(int i = 0;i < 32;i++){
    pcb->cp->gpr[i] = 0;
  }
  pcb->cp->gpr[10] = (uintptr_t)arg;
}

void switch_boot_pcb() {
  current = &pcb_boot;
}

void hello_fun(void *arg) {
  int j = 1;
  while (1) {
    Log("Hello World from Nanos-lite with arg '%p' for the %dth time!", (uintptr_t)arg, j);
    j ++;
    yield();
  }
}

void init_proc() {
  context_kload(&pcb[0], hello_fun, NULL);
  switch_boot_pcb();

  Log("Initializing processes...");
  char *args[3] = {"skip", "you", NULL};
  char *envp[2] = {"a", NULL};
  // load program here
  context_uload(&pcb[1], "/bin/pal", args, envp);
  //APPS = pal nslider nterm bird
  //TESTSOK = dummy hello timer-test file-test bmp-test
}

Context* schedule(Context *prev) {
  // save the context pointer(prev stack top)
  current->cp = prev;

  // always select pcb[0] as the new process
  current = (current == &pcb[0] ? &pcb[1] : &pcb[0]);

  // then return the new context
  return current->cp;

}
