#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)
#define N   32
void __am_gpu_init() {
  int i;
  int w = io_read(AM_GPU_CONFIG).width;   // TODO: get the correct width
  int h = io_read(AM_GPU_CONFIG).height;  // TODO: get the correct height
  printf("w is %d h is %d\n",w,h);
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;//frame_buffer
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = inw(VGACTL_ADDR + 2), .height = inw(VGACTL_ADDR),//need to change?
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
  else {
    int y = ctl -> x;
    int x = ctl -> y;
    int w = ctl -> w;
    int h = ctl -> h;
    int W = io_read(AM_GPU_CONFIG).width;//screen width
    //int H = io_read(AM_GPU_CONFIG).height;
    uint32_t * pixels = ctl -> pixels;
    uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;//frame_buffer
    printf("%d %d %d %d\n",x,y,w,h);
    
    for (int i = x * W + y; i < x * W + y + w * h; i++) {
      fb[i] = pixels[i - x * W - y];
      //printf("%d\n",i);
    }
    
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
