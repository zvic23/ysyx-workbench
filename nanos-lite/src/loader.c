#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV
#else
#error Unsupported ISA
#endif


size_t ramdisk_read(void *buf, size_t offset, size_t len);
extern uint8_t ramdisk_start;

int fs_open(const char *pathname, int flags, int mode);
size_t fs_lseek(int fd, size_t offset, int whence);
size_t fs_read(int fd, void *buf, size_t len);
int fs_close(int fd);
enum {SEEK_SET, SEEK_CUR, SEEK_END};

static uintptr_t loader(PCB *pcb, const char *filename) {
  int fd = fs_open("/bin/hello",0,0);

  uint16_t machine;
  fs_lseek(fd, 18, SEEK_SET);
  fs_read(fd, &machine, 2);
  //ramdisk_read(&machine, 18, 2);
  printf("machine=%d\n",machine);
  assert(machine == EXPECT_TYPE);

  uint8_t ident[16];
  fs_lseek(fd, 0, SEEK_SET);
  fs_read(fd, ident, 16);
  //ramdisk_read(ident, 0, 16);
  printf("ident:");
  for(int k=0;k<16;k++)printf("%x ",ident[k]);
  printf("\n");
  assert(*(uint64_t *)ident == 0x00010102464c457f && *(uint64_t *)&ident[8] == 0x0);

  uint64_t entry;
  fs_lseek(fd, 24, SEEK_SET);
  fs_read(fd, &entry, 8);
  //ramdisk_read(&entry, 24, 8);
  printf("entry=%lx\n",entry);

  uint64_t phoff;
  fs_lseek(fd, 32, SEEK_SET);
  fs_read(fd, &phoff, 8);
  //ramdisk_read(&phoff, 32, 8);
  printf("phoff=%ld\n",phoff);


  uint16_t phentsize;
  fs_lseek(fd, 54, SEEK_SET);
  fs_read(fd, &phentsize, 2);
  //ramdisk_read(&phentsize, 54, 2);
  printf("phentsize=%ld\n",phentsize);
  assert(phentsize==56);

  uint16_t phnum;
  fs_lseek(fd, 56, SEEK_SET);
  fs_read(fd, &phnum, 2);
  //ramdisk_read(&phnum, 56, 2);
  printf("phnum=%ld\n",phnum);

  uint32_t p_type;
  for(int i=0; i<phnum; i++){
  	  fs_lseek(fd, phoff+phentsize*i, SEEK_SET);
  	  fs_read(fd, &p_type, 4);
	  //ramdisk_read(&p_type, phoff+phentsize*i, 4);
	  printf("p_type[%d]=%lx\n",i,p_type);
	  if(p_type == 1){
		  uint64_t p_offset,p_vaddr,p_filesz,p_memsz;
		  ramdisk_read(&p_offset, phoff+phentsize*i+8, 8);
		  ramdisk_read(&p_vaddr, phoff+phentsize*i+16, 8);
		  ramdisk_read(&p_filesz, phoff+phentsize*i+32, 8);
		  ramdisk_read(&p_memsz, phoff+phentsize*i+40, 8);
		  uint64_t *addr = (uint64_t*)p_vaddr;
		  //printf("off=%lx  vaddr=%lx  filesz=%lx  memsz=%lx  addr=%lx\n",p_offset,p_vaddr,p_filesz,p_memsz,addr);

		  memcpy(addr, &ramdisk_start+p_offset, p_filesz);
		  memset(addr+p_filesz, 0, p_memsz-p_filesz);
		  printf("%d load over\n",i);
	  }
  }

  return entry;


//  uint16_t machine;
//  ramdisk_read(&machine, 18, 2);
//  printf("machine=%d\n",machine);
//  assert(machine == EXPECT_TYPE);
//
//  uint8_t ident[16];
//  ramdisk_read(ident, 0, 16);
//  printf("ident:");
//  for(int k=0;k<16;k++)printf("%x ",ident[k]);
//  printf("\n");
//  assert(*(uint64_t *)ident == 0x00010102464c457f && *(uint64_t *)&ident[8] == 0x0);
//
//  uint64_t entry;
//  ramdisk_read(&entry, 24, 8);
//  printf("entry=%lx\n",entry);
//
//  uint64_t phoff;
//  ramdisk_read(&phoff, 32, 8);
//  printf("phoff=%ld\n",phoff);
//
//
//  uint16_t phentsize;
//  ramdisk_read(&phentsize, 54, 2);
//  printf("phentsize=%ld\n",phentsize);
//  assert(phentsize==56);
//
//  uint16_t phnum;
//  ramdisk_read(&phnum, 56, 2);
//  printf("phnum=%ld\n",phnum);
//
//  uint32_t p_type;
//  for(int i=0; i<phnum; i++){
//	  ramdisk_read(&p_type, phoff+phentsize*i, 4);
//	  printf("p_type[%d]=%lx\n",i,p_type);
//	  if(p_type == 1){
//		  uint64_t p_offset,p_vaddr,p_filesz,p_memsz;
//		  ramdisk_read(&p_offset, phoff+phentsize*i+8, 8);
//		  ramdisk_read(&p_vaddr, phoff+phentsize*i+16, 8);
//		  ramdisk_read(&p_filesz, phoff+phentsize*i+32, 8);
//		  ramdisk_read(&p_memsz, phoff+phentsize*i+40, 8);
//		  uint64_t *addr = (uint64_t*)p_vaddr;
//		  //printf("off=%lx  vaddr=%lx  filesz=%lx  memsz=%lx  addr=%lx\n",p_offset,p_vaddr,p_filesz,p_memsz,addr);
//
//		  memcpy(addr, &ramdisk_start+p_offset, p_filesz);
//		  memset(addr+p_filesz, 0, p_memsz-p_filesz);
//		  printf("%d load over\n",i);
//	  }
//  }
//
//  return entry;
  //TODO();
  //return 0;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

