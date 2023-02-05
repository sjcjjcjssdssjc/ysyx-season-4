#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

int main(int argc, char *argv[], char *envp[]);
extern char **environ;
void call_main(uintptr_t *args) {
  char *empty[] =  {NULL };
  int argc = args[0];
  printf("argc %d\n",argc);
  char *argv[argc + 1];
  argv[argc] = NULL;
  for(int i = 0; i < argc; i++) {
    argv[i] = (char *)args[argc - i];
    printf("argv %d %s\n", i, argv[i]);
  }
  environ = empty;
  exit(main(argc, argv, empty));
  assert(0);
}
