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
    
    int i;
    int x = io_read(AM_GPU_FBDRAW).x;//ctl -> x;
    int y = io_read(AM_GPU_FBDRAW).y;
    int w = io_read(AM_GPU_FBDRAW).w;//ctl -> w;
    int h = io_read(AM_GPU_FBDRAW).h;//ctl -> h;
    uint32_t * pixels = io_read(AM_GPU_FBDRAW).pixels;
    //printf("w is %d h is %d\n",w,h);
    uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;//frame_buffer
    printf("%d %d %d %d\n",x,y,w,h);
    for (i = x * w + y; i < x * w + y + w*h; i ++) {
      fb[i] = pixels[i - x * w - y];
    }
    
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
