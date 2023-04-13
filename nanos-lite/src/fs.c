#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
}

int fs_open(const char *pathname, int flags, int mode){
	int table_length = sizeof(file_table)/sizeof(file_table[0]);
	int i=0;
	for(i=0;i<table_length;i++){
		if(strcmp(pathname, file_table[i].name)==0)return i;
	}
	assert(i!=table_length);
	return -1;
}

static uint64_t position[1000];
size_t fs_lseek(int fd, size_t offset, int whence){
	size_t f_size = file_table[fd].size;
	//size_t f_offset = file_table[fd].disk_offset;
	if(whence == SEEK_SET){
		position[fd] = 0 + offset;
	}else if(whence == SEEK_CUR){
		position[fd] = position[fd] + offset;
	}else if(whence == SEEK_END){
		position[fd] = f_size + offset;
		//position[fd] = f_size + f_offset + offset;
	}else assert(0);
	if(position[fd] > f_size){
		printf("file system:out of bound\n");
		assert(0);
	}
	return position[fd];
}

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t fs_read(int fd, void *buf, size_t len){
	size_t f_offset = file_table[fd].disk_offset;
	size_t f_size = file_table[fd].size;
	if(position[fd] + len >= f_size){
		printf("file system:out of bound\n");
		assert(0);
	}
	ramdisk_read(buf, f_offset+position[fd], len);
	position[fd] += len;
	return len;
}

size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t fs_write(int fd, const void *buf, size_t len){
	size_t f_offset = file_table[fd].disk_offset;
	size_t f_size = file_table[fd].size;
	if(position[fd] + len >= f_size){
		printf("file system:out of bound\n");
		assert(0);
	}
	ramdisk_write(buf, f_offset+position[fd], len);
	position[fd] += len;
	return len;
}

int fs_close(int fd){
	position[fd]=0;
	return 0;
}
