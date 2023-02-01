#include <common.h>
#include <unistd.h>
#include <stdio.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};
extern int draww,drawh;
size_t serial_write(const void *buf, size_t offset, size_t len) {
  //printf("sw %ld\n",len);
  yield();
  for(int i = 0; i < len; i++){
    putch(((char *)buf)[i]);
  }
  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {//offset is wusuowei
  yield();
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  if (ev.keycode == AM_KEY_NONE) return 0;
  size_t ret = snprintf(buf, len, "k%c %s", ev.keydown ? 'd' : 'u',keyname[ev.keycode]);
  return ret;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  int screen_w = io_read(AM_GPU_CONFIG).width;
  int screen_h = io_read(AM_GPU_CONFIG).height;
  int ret = snprintf(buf, len, "%d %d", screen_w, screen_h);
  return ret;
}

size_t fb_write(const void *buf, size_t offset, size_t mask) {
  yield();
  int screen_w = io_read(AM_GPU_CONFIG).width;
  int y = offset / screen_w;
  int x = offset % screen_w;
  io_write(AM_GPU_FBDRAW, x, y, (char *)buf, mask >> 16, mask & 0xFFFF, true);
  printf("%ld %ld %ld\n",mask >> 16 , mask & 0xFFFF, (mask >> 16)* (mask & 0xFFFF));
  return (mask >> 16)* (mask & 0xFFFF);//len = drawrect_w*drawrect_h
}

void init_device() {
  Log("Initializing devices...");
  //for(int i=0;i<25;i++)printf("%s\n",keyname[i]);
  ioe_init();
}
