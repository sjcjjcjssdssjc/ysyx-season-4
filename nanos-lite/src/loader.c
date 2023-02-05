#include <proc.h>
#include <elf.h>
#include <memory.h>
#include "fs.h"
#include "loader.h"
#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Shdr Elf64_Shdr
# define Elf_Phdr Elf64_Phdr
# define Elf_Sym  Elf64_Sym
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Shdr Elf32_Shdr
# define Elf_Phdr Elf32_Phdr
# define Elf_Sym  Elf32_Sym
#endif
char *buff;
static uintptr_t loader(PCB *pcb, const char *filename) {
  int fd = fs_open(filename,0,0);
  uintptr_t ret = 0;
  size_t offset = 0;
  size_t fsize  = 0;
  fsize  = fs_lseek(fd, offset, SEEK_END);
  buff = malloc(fsize);
  fs_lseek(fd, offset, SEEK_SET);//set to 0 again
  fs_read(fd, (void *)buff, fsize);
  fs_close(fd);
  Elf_Ehdr  header;  //elf header
  Elf_Phdr* pheader; //program header
  Elf_Shdr* sheader; //section header
  memcpy(&header, (void *)buff, sizeof(header));
  offset += sizeof(header);
  if(header.e_type == ET_EXEC && header.e_ident[1] == 'E' &&
     header.e_ident[2] == 'L' && header.e_ident[3] == 'F');
  else printf("not a elf\n");
  //filesize and memsize
  //https://stackoverflow.com/questions/27958743/difference-between-p-filesz-and-p-memsz-of-elf32-phdr
  pheader = malloc(sizeof(Elf_Phdr) * header.e_phnum);
  sheader = malloc(sizeof(Elf_Shdr) * header.e_shnum);
  memcpy(pheader, buff + header.e_phoff, sizeof(Elf_Phdr) * header.e_phnum);
  memcpy(sheader, buff + header.e_shoff, sizeof(Elf_Shdr) * header.e_shnum);
  for(int i = 0; i < header.e_phnum; i++){
    if(pheader[i].p_type == PT_LOAD){
      //printf("ksksks %lx %lx\n",(long unsigned int *)(pheader[i].p_vaddr),(long unsigned int *)(pheader[i].p_paddr));
      memcpy((char *)(pheader[i].p_vaddr), buff + pheader[i].p_offset, pheader[i].p_filesz);
      memset((char *)(pheader[i].p_vaddr + pheader[i].p_filesz), 0, 
      pheader[i].p_memsz - pheader[i].p_filesz);//bss
    }
  }
  char* symstrtab = 0;
  char* secstrtab = (char *)malloc(sheader[header.e_shstrndx].sh_size);//section name string table
  memcpy(secstrtab, buff + sheader[header.e_shstrndx].sh_offset, sheader[header.e_shstrndx].sh_size);
  
  for(int i = 0; i < header.e_shnum; i++){
    char *now = secstrtab + sheader[i].sh_name;
    if(strcmp(now,".strtab") == 0){
      symstrtab = malloc(sheader[i].sh_size);
      memcpy(symstrtab, buff + sheader[i].sh_offset, sheader[i].sh_size);
      break;
    }
  }
  printf("header ok\n");
  for(int i = 0; i < header.e_shnum; i++){
    char *now = secstrtab + sheader[i].sh_name;
    if(strcmp(now,".symtab") == 0){
      Elf_Sym *symtab = malloc(sheader[i].sh_size);
      memcpy(symtab, buff + sheader[i].sh_offset, sheader[i].sh_size);
      int symtab_len = sheader[i].sh_size / sizeof(Elf_Sym);
      for(int j = 0;j < symtab_len; j++){
        if(strcmp(symstrtab + symtab[j].st_name,"_start") == 0)ret = symtab[j].st_value;
      } 
      free(symtab);
    }
  }
  free(symstrtab);
  free(secstrtab);
  //printf("load ret %p\n",ret);
  asm volatile("fence.i");
  return ret;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}
Context* ucontext(AddrSpace *as, Area kstack, void *entry);
void context_uload(PCB *pcb, const char *filename, char *const argv[], char *const envp[]) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  pcb->cp = ucontext(NULL, (pcb->as).area, (void *)entry);
  pcb->cp->mcause = 0;
  pcb->cp->mstatus = 0xa00001800;
  pcb->cp->mepc = (uintptr_t)entry;
  for(int i = 0; i < 32; i++) {
    pcb->cp->gpr[i] = 0;
  }
  pcb->cp->gpr[28] = (uintptr_t)(heap.end);//sp(does not recover in trap.S)

  char** ptr = (char **)(&(pcb->cp->pdir));
  int envc = 0;
  for(; envp && envp[envc] != NULL; envc++);
  for(int i = 0; i < envc; i++) {
    ptr[envc - i] = envp[i];
  }
  ptr[0] = NULL;

  ptr = (char **)(&(pcb->cp->pdir) + envc + 1);
  int argc = 0;
  for(; argv && argv[argc] != NULL; argc++);
  for(int i = 0; i < argc; i++) {
    ptr[argc - 1 - i] = argv[i];
  }
  int* ptr_int = (int *)(ptr + argc);
  *ptr_int = argc;
  pcb->cp->gpr[29] = (uintptr_t)ptr_int;

}

