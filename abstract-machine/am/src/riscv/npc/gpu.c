#include <am.h>
#include "npc.h"
#include <stdio.h>


#define SYNC_ADDR (VGACTL_ADDR + 4)
#define N   32
void __am_gpu_init() {
  //outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = inw(VGACTL_ADDR + 2), .height = inw(VGACTL_ADDR),
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {

  int x = ctl -> x;
  int y = ctl -> y;
  int w = ctl -> w;
  int h = ctl -> h;
  int W = io_read(AM_GPU_CONFIG).width;//screen width
  //int H = io_read(AM_GPU_CONFIG).height;
  uint32_t * pixels = ctl -> pixels;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;//frame_buffer
  //printf("%d %d %d %d\n",x,y,w,h);
  
  for(int i = 0; i < w; i++)
    for(int j = 0; j < h; j++){
      int X = x + i,Y = y + j;
      fb[Y * W + X] = pixels[j * w + i];
    }
  
  if (ctl->sync) {
    printf("check\n");
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
