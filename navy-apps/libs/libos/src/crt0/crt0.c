#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

int main(int argc, char *argv[], char *envp[]);
extern char **environ;
void call_main(uintptr_t *args) {
  char *empty[] =  {NULL };
  int argc = args[0];

  char *argv[argc + 1];
  argv[argc] = NULL;
  for(int i = 0; i < argc; i++) {
    argv[i] = (char *)args[-1 - i];
    //printf("argv %d %s\n", i, argv[i]);
  }

  int envc = 0;
  for(; args[-argc - 1 - envc] != 0; envc++);
  char *envp[envc + 1];
  envp[envc] = 0;
  for(int i = 0; i < envc; i++) {
    envp[i] = (char *)args[-argc - 1 - i];
    //printf("envp %d %s\n", i, envp[i]);
  }
  environ = empty;
  exit(main(argc, argv, empty));
  assert(0);
}
