#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

size_t ramdisk_read(void *buf, size_t offset, size_t len);

static uintptr_t loader(PCB *pcb, const char *filename) {
  uint64_t phoff;
  ramdisk_read(&phoff, 32, 8);
  printf("phoff=%ld\n",phoff);

  uint16_t phentsize;
  ramdisk_read(&phentsize, 54, 2);
  printf("phentsize=%ld\n",phentsize);
  assert(phentsize==56);

  uint16_t phnum;
  ramdisk_read(&phnum, 56, 2);
  printf("phnum=%ld\n",phnum);

//  uint64_t p_type0;
//  ramdisk_read(&p_type0, phoff, 4);
//  printf("type=%ld\n",p_type0);
//  uint64_t p_type1;
//  ramdisk_read(&p_type1, phoff+phentsize, 4);
//  printf("type=%ld\n",p_type1);
//  uint64_t p_type2;
//  ramdisk_read(&p_type2, phoff+phentsize*2, 4);
//  printf("type=%ld\n",p_type2);
//  uint64_t p_type3;
//  ramdisk_read(&p_type3, phoff+phentsize*3, 4);
//  printf("type=%ld\n",p_type3);
  uint32_t p_type;
  for(int i=0; i<phnum; i++){
	  ramdisk_read(&p_type, phoff+phentsize*i, 4);
	  printf("p_type[%d]=%x\n",i,p_type);
  }







  panic();
  //TODO();
  return 0;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

