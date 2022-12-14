#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <assert.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;

size_t events_read(void *buf, size_t offset, size_t len);//device.c
uint32_t NDL_GetTicks() {
  struct timeval  tv;
  struct timezone tz;
  gettimeofday(&tv, &tz);
  return tv.tv_usec / 1000;
}

int NDL_PollEvent(char *buf, int len) {
  int fd = open("/dev/events", O_RDONLY);
  size_t siz = 0;
  siz = read(fd, buf, len); 
  close(fd);
  return siz > 0;
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  } else {
    //printf("width %d height %d\n",*w,*h);//nwm is 0
    char buf[64];
    int dispinfo = 6;
    read(dispinfo, buf, 64);
    sscanf(buf, "%d %d", &screen_w, &screen_h);
    //printf("width %d height %d\n",screen_w, screen_h);
  }
  
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  int fbdev = 5;
  lseek(fbdev, y * screen_w + x, SEEK_SET);
  write(fbdev, pixels, w << 16 | h);
  
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit() {
}
