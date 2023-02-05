#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

int main(int argc, char *argv[], char *envp[]);
extern char **environ;
void call_main(uintptr_t *args) {
  char *empty[] =  {NULL };
  int argc = args[0];
  int envc = 0;
  for(; envp && (char *)args[- 1 - envc] != NULL; envp++);
  char *argv[envp + 1];
  argv[envp] = 0;
  for(int i = 0; i < envc; i++) {
    envp[i] = (char *)args[- 1 - i];
    printf("envp %d %s\n", i, envp[i]);
  }
  
  char *argv[argc + 1];
  argv[argc] = NULL;
  for(int i = 0; i < argc; i++) {
    argv[i] = (char *)args[-envc - 1 - i];
    printf("argv %d %s\n", i, argv[i]);
  }
  environ = empty;
  exit(main(argc, argv, empty));
  assert(0);
}
