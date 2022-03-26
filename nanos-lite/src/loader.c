#include <proc.h>
#include <elf.h>
//#include <stdio.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Shdr Elf64_Shdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Shdr Elf32_Shdr
# define Elf_Phdr Elf32_Phdr
#endif
size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t get_ramdisk_size();

static uintptr_t loader(PCB *pcb, const char *filename) {
  size_t offset = 0;
  Elf_Ehdr  header;  //elf header
  Elf_Phdr* pheader; //program header
  Elf_Shdr* sheader; //section header
  ramdisk_read(&header, offset, sizeof(header));
  if(header.e_type == ET_EXEC && header.e_ident[1] == 'E' &&
     header.e_ident[2] == 'L' && header.e_ident[3] == 'F') {
    printf("ok\n");
  }
  pheader = malloc(sizeof(Elf_Phdr) * header.e_phnum);
  sheader = malloc(sizeof(Elf_Shdr) * header.e_shnum);
  ramdisk_read(pheader, header.e_phoff, sizeof(Elf_Phdr) * header.e_phnum);
  ramdisk_read(sheader, header.e_shoff, sizeof(Elf_Shdr) * header.e_shnum);
  uintptr_t ret = 0;
  for(int i = 0; i < header.e_phnum; i++){
    //Elf_Phdr tmp = pheader[i];
    if(pheader[i].p_type == PT_LOAD){
      ramdisk_read((char *)(pheader[i].p_vaddr), pheader[i].p_offset, pheader[i].p_filesz);
      printf("%lx\n",*(long unsigned int *)(pheader[i].p_vaddr));
      memset((char *)(pheader[i].p_vaddr + pheader[i].p_filesz), 0, 
      pheader[i].p_memsz - pheader[i].p_filesz);//bss
      //if(pheader[i].p_flags & PF_X)ret = pheader[i].p_vaddr;
    }
  }
  for(int i = 0; i < header.e_shnum; i++){
    if(sheader[i].sh_flags & PF_X){
      ret = sheader[i].sh_addr;
      printf("%lx %lx\n",ret, sheader[i].sh_flags);
    }
  }
  
  return ret;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

