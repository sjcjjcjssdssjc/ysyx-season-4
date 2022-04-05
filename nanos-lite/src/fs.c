#include <fs.h>
#include "loader.h"
typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);
size_t events_read(void *buf, size_t offset, size_t len);
size_t serial_write(const void *buf, size_t offset, size_t len);
size_t dispinfo_read(void *buf, size_t offset, size_t len);
size_t fb_write(const void *buf, size_t offset, size_t len);
typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t open_offset;//open_offset need to be incremented
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENTS, FD_FBCTL, FD_FB, FD_DISPINFO};
enum {EBADF, EINVAL, ENXIO};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

// size_t write_fbtcl(const void *buf, size_t offset, size_t len){
//   sscanf(buf, "%d %d", &draww, &drawh);
//   return len;
// }
// size_t read_fbtcl(void *buf, size_t offset, size_t len) {
//   len = sprintf(buf, "%d %d", drawrect_w, drawrect_h);
//   return len;
// }

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
  [FD_EVENTS] = {"/dev/events", 0, 0, events_read, invalid_write},//ok
  [FD_FBCTL]  = {"/dev/fbctl", 0, 0, invalid_read, serial_write},
  [FD_FB]     = {"/dev/fb", 0, 0, invalid_read, fb_write},
  [FD_DISPINFO] = {"/dev/dispinfo", 0, 0, dispinfo_read, invalid_write},//4:fbctl
#include "files.h"//total 20 + 3 = 23 files

};
char * fd2name(int fd){
  return file_table[fd].name;
}
int fs_open(const char *pathname, int flags, int mode){//ignore flags and mode
  int siz = sizeof(file_table) / sizeof(Finfo);
  int ret = -1;
  for(int i = 0; i < siz; i++) {
    //printf("%s %s\n",pathname,file_table[i].name);
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
  //if(file_table[fd].open_offset + len > file_table[fd].size)len = file_table[fd].size - file_table[fd].open_offset;
  if(fd == FD_EVENTS || fd == FD_DISPINFO){
    ret = file_table[fd].read(buf, file_table[fd].open_offset, len);
  }
  else ret = ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].open_offset, len);//read into buf
  file_table[fd].open_offset += ret;
  //printf("read %d\n",file_table[fd].open_offset);
  return ret;
}
size_t fs_write(int fd, const void *buf, size_t len){
  size_t ret = 0;
  //if(file_table[fd].open_offset + len > file_table[fd].size)len = file_table[fd].size - file_table[fd].open_offset;
  //if(fd == 4)printf("w fbctl %d %d %d\n",fd, FD_STDERR, len);
  if(fd <= FD_DISPINFO)ret = file_table[fd].write(buf, file_table[fd].open_offset, len);
  else ret = ramdisk_write(buf, file_table[fd].disk_offset + file_table[fd].open_offset, len);
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
  //assert(file_table[fd].open_offset > file_table[fd].size);
  return file_table[fd].open_offset;//error not implemented.
}
int fs_close(int fd){
  return 0;//make ARCH=riscv64-nemu update
}
void init_fs(){
  int w = io_read(AM_GPU_CONFIG).width;//tobe changed
  int h = io_read(AM_GPU_CONFIG).height;
  file_table[FD_FB].size = w*h;
  //file_table[filenum].disk_offset = file_table[filenum-1].disk_offset + file_table[filenum-1].size;
  // TODO: initialize the size of /dev/fb
}
