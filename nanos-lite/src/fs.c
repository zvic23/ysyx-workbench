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

size_t serial_write(const void *buf, size_t offset, size_t len);
size_t events_read(void *buf, size_t offset, size_t len) ;
size_t dispinfo_read(void *buf, size_t offset, size_t len) ;
size_t fb_write(const void *buf, size_t offset, size_t len) ;
/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
  {"/dev/events", 0, 0, events_read, invalid_write},
  {"/proc/dispinfo", 0, 0, dispinfo_read, invalid_write},
  {"/dev/fb", 0, 0, invalid_read, fb_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
	int table_length = sizeof(file_table)/sizeof(file_table[0]);
	int i=0;
	for(i=0;i<table_length;i++){
		if(strcmp("/dev/fb", file_table[i].name)==0)break;
	}  
	int w = io_read(AM_GPU_CONFIG).width;
        int h = io_read(AM_GPU_CONFIG).height; 
	file_table[i].size = w*h*4;
}

int fs_open(const char *pathname, int flags, int mode){
	int table_length = sizeof(file_table)/sizeof(file_table[0]);
	int i=0;
	for(i=0;i<table_length;i++){
		if(strcmp(pathname, file_table[i].name)==0)return i;
	}
	printf("nanos-lite(fs_open): this file doesn't exit in ramdisk");
	assert(i!=table_length);
	return -1;
}

static uint64_t position[1000];
size_t fs_lseek(int fd, size_t offset, int whence){
	size_t f_size = file_table[fd].size;
	if(whence == SEEK_SET){
		position[fd] = 0 + offset;
	}else if(whence == SEEK_CUR){
		position[fd] = position[fd] + offset;
	}else if(whence == SEEK_END){
		position[fd] = f_size + offset;
	}else assert(0);
	return position[fd];
}

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t fs_read(int fd, void *buf, size_t len){
	if(file_table[fd].read != NULL) return file_table[fd].read(buf, 0, len);
	else {
		size_t f_offset = file_table[fd].disk_offset;
		size_t f_size = file_table[fd].size;
		size_t len_fix = 0;
		if(len+position[fd] > f_size) len_fix = f_size - position[fd];
		else len_fix = len;
		ramdisk_read(buf, f_offset+position[fd], len_fix);
		//printf("read   fd: %d  position: %d  offset:%d   len: %d  len_fix: %d\n",fd,position[fd],f_offset,len,len_fix);
		position[fd] += len_fix;
		return len_fix;
	}
	return len;
}

size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t fs_write(int fd, const void *buf, size_t len){
	if(file_table[fd].write != NULL) return file_table[fd].write(buf, position[fd], len);
	else{
		size_t f_offset = file_table[fd].disk_offset;
		size_t f_size = file_table[fd].size;
		size_t len_fix = 0;
		if(len+position[fd] > f_size) len_fix = f_size - position[fd];
		else len_fix = len;
		ramdisk_write(buf, f_offset+position[fd], len_fix);
		//printf("write  fd: %d  position: %d  offset:%d   len: %d  len_fix: %d\n",fd,position[fd],f_offset,len,len_fix);
		position[fd] += len_fix;
		return len_fix;
	}
	return len;
}

int fs_close(int fd){
	position[fd]=0;
	return 0;
}
