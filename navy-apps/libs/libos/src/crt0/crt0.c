#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

int main(int argc, char *argv[], char *envp[]);
extern char **environ;
void call_main(uintptr_t *args) {
  char *empty[] =  {NULL };
  int argc = args[0];
  printf("%p %d\n", args, argc);
  char *argv[argc + 1];
  argv[argc] = NULL;
  for(int i = 0; i < argc; i++) {
    argv[i] = (char *)args[-1 - i];
    printf("argv %p %s\n", argv[i],argv[i]);
  }

  int envc = 0;
  for(; args[-argc - 2 - envc] != 0; envc++);
  //2 contains argc and NULL
  printf("%d\n",envc);
  char *envp[envc + 1];
  envp[envc] = NULL;
  for(int i = 0; i < envc; i++) {
    envp[i] = (char *)args[-argc - 2 - i];
    printf("envp %p %s\n", envp[i], envp[i]);
  }
  environ = envp;
  exit(main(argc, argv, envp));
  assert(0);
}
