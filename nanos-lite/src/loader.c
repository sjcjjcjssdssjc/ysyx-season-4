#include <proc.h>
#include <elf.h>
//#include <stdio.h>

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
    //printf("ok\n");
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
      //printf("%lx\n",*(long unsigned int *)(pheader[i].p_vaddr));
      memset((char *)(pheader[i].p_vaddr + pheader[i].p_filesz), 0, 
      pheader[i].p_memsz - pheader[i].p_filesz);//bss
      //if(pheader[i].p_flags & PF_X)ret = pheader[i].p_vaddr;
    }
  }
  char* symstrtab = 0;
  char* secstrtab = (char *)malloc(sheader[header.e_shstrndx].sh_size);//section name string table
  ramdisk_read(secstrtab, sheader[header.e_shstrndx].sh_offset, sheader[header.e_shstrndx].sh_size);
  
  for(int i = 0; i < header.e_shnum; i++){
    char *now = secstrtab + sheader[i].sh_name;
    if(strcmp(now,".strtab") == 0){
      symstrtab = malloc(sheader[i].sh_size);
      ramdisk_read(symstrtab, sheader[i].sh_offset, sheader[i].sh_size);
    }
  }
  for(int i = 0; i < header.e_shnum; i++){
    char *now = secstrtab + sheader[i].sh_name;
    if(strcmp(now,".symtab") == 0){
      Elf_Sym *symtab = malloc(sheader[i].sh_size);
      ramdisk_read(symtab, sheader[i].sh_offset, sheader[i].sh_size);
      int symtab_len = sheader[i].sh_size / sizeof(Elf_Sym);
      for(int j = 0;j < symtab_len; j++){
        printf("%lx:%s\n",symtab[j].st_value, symstrtab + symtab[j].st_name);
      }
    }
  }
  
  return ret;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

