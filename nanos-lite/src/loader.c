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
extern uint8_t ramdisk_start;

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
	  printf("p_type[%d]=%lx\n",i,p_type);
	  if(p_type == 1){
		  uint64_t p_offset,p_vaddr,p_filesz,p_memsz;
		  ramdisk_read(&p_offset, phoff+phentsize*i+8, 8);
		  ramdisk_read(&p_vaddr, phoff+phentsize*i+16, 8);
		  ramdisk_read(&p_filesz, phoff+phentsize*i+32, 8);
		  ramdisk_read(&p_memsz, phoff+phentsize*i+40, 8);
		  uint64_t *addr = (uint64_t*)p_vaddr;
		  printf("off=%lx  vaddr=%lx  filesz=%lx  memsz=%lx  addr=%lx\n",p_offset,p_vaddr,p_filesz,p_memsz,addr);
		  uint8_t buf[4];
		  ramdisk_read(buf,p_offset,4);
		  for(int j=0;j<4;j++)printf("%x ",buf[j]);
		  printf("\n");

  //uint32_t aa=0x7f454c46;
		  memcpy(addr, &ramdisk_start+p_offset, p_filesz);
		  //memcpy(addr, &aa, 4);
		  memset(addr+p_filesz, 0, p_memsz-p_filesz);
		  printf("%d load over\n",i);
	  }
  }

  return 0x83000000;




  //TODO();
  //return 0;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

