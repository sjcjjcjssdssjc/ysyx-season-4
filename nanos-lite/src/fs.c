#include <fs.h>
#include "loader.h"
typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);
extern uint8_t ramdisk_start;
typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t open_offset;//open_offset need to be incremented
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};
enum {EBADF, EINVAL, ENXIO};

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
#include "files.h"//total 20 + 3 = 23 files
};
char * fd2name(int fd){
  return file_table[fd].name;
}
int fs_open(const char *pathname, int flags, int mode){//ignore flags and mode
  int siz = sizeof(file_table) / sizeof(Finfo);
  int ret = -1;
  for(int i = 0; i < siz; i++) {
    if(strcmp(pathname, file_table[i].name) == 0){
      ret = i;
      break;
    }
  }
  assert(ret != -1);
  //printf("fopen %s fd:%d\n",pathname,ret);
  return ret;
}
size_t fs_read(int fd, void *buf, size_t len){
  size_t ret = 0;
  if(file_table[fd].open_offset + len > file_table[fd].size)len = file_table[fd].size - file_table[fd].open_offset;
  ret = ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].open_offset, len);//read into buf
  file_table[fd].open_offset += ret;
  //printf("read %d\n",file_table[fd].open_offset);
  return ret;
}
size_t fs_write(int fd, const void *buf, size_t len){
  size_t ret = 0;
  if(file_table[fd].open_offset + len > file_table[fd].size)len = file_table[fd].size - file_table[fd].open_offset;
  ret = ramdisk_write(buf, file_table[fd].disk_offset + file_table[fd].open_offset, len);
  file_table[fd].open_offset += ret;
  //printf("write %d\n",file_table[fd].open_offset);
  return ret;
}
size_t fs_lseek(int fd, size_t offset, int whence){
  //if(fd >= sizeof(file_table) / sizeof(Finfo))return -1;
  if(whence == SEEK_SET){
    file_table[fd].open_offset = offset;
    //printf("set");
  } else if(whence == SEEK_CUR){
    file_table[fd].open_offset += offset;
    //printf("cur");
  } else if(whence == SEEK_END){
    file_table[fd].open_offset = file_table[fd].size + offset;
    //printf("end");
  } 
  //printf("%ld %d\n",offset, file_table[fd].open_offset);
  assert(file_table[fd].open_offset <= file_table[fd].size);
  return file_table[fd].open_offset;//error not implemented.
}
int fs_close(int fd){
  return 0;//make ARCH=riscv64-nemu update
}
void init_fs(){
  // TODO: initialize the size of /dev/fb
}
