#include <proc.h>
#include <elf.h>
//#include <stdio.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif
size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t get_ramdisk_size();

static uintptr_t loader(PCB *pcb, const char *filename) {
  size_t offset = 0;
  Elf_Ehdr  header;  //elf header
  Elf_Phdr* pheader; //program header
  ramdisk_read(&header, offset, sizeof(header));
  if(header.e_type == ET_EXEC && header.e_ident[1] == 'E' &&
     header.e_ident[2] == 'L' && header.e_ident[3] == 'F') {
    printf("ok\n");
  }
  pheader = malloc(sizeof(Elf_Phdr) * header.e_phnum);
  ramdisk_read(pheader, header.e_phoff, sizeof(Elf_Phdr) * header.e_phnum);
  for(int i = 0; i < header.e_phnum; i++){
    //Elf_Phdr tmp = pheader[i];
    if(pheader[i].p_type == PT_LOAD){
      printf("%d\n",(unsigned int *)(pheader[i].p_vaddr));
      ramdisk_read((char *)(pheader[i].p_vaddr), pheader[i].p_offset, pheader[i].p_filesz);
      memset((char *)(pheader[i].p_vaddr + pheader[i].p_filesz), 0, pheader[i].p_memsz - pheader[i].p_filesz);//bss
      return pheader[i].p_vaddr;
    }
  }
  return 0;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

