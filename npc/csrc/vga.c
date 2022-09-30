#ifndef CONFIG_TARGET_AM
#include <SDL2/SDL.h>
#endif
#include<time.h>
uint32_t vgactl_port_base[2];
uint32_t screen_width  = 400;
uint32_t screen_height = 300;
uint32_t* vmem;
extern void wrap_up_trace();

static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

static void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "riscv64-NPC");
  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(
      screen_width*2 ,
      screen_height*2 ,
      0, &window, &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, screen_width, screen_height);
}

static inline void update_screen() {//this
  SDL_UpdateTexture(texture, NULL, vmem, screen_width * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}

static uint32_t screen_size() {
  return screen_width * screen_height * sizeof(uint32_t);
}

void vga_update_screen(){
  int sync = vgactl_port_base[1];
  if(sync){
    update_screen();
    vgactl_port_base[1] = 0;
  }
}

void device_update() {
  static uint64_t last = 0;
  struct timespec nowspec;
  clock_gettime(CLOCK_MONOTONIC_COARSE, &nowspec);
  uint64_t now = nowspec.tv_sec * 1000000 + nowspec.tv_nsec / 1000;
  if (now - last < 1000000) {
    return;
  }
  printf("update screen\n");
  last = now;
  vga_update_screen();

  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_QUIT:
        wrap_up_trace();
        exit(0);

        break;
      default: break;
    }
  }
}

void sdl_clear_event_queue() {
  SDL_Event event;
  while (SDL_PollEvent(&event));
}

void init_vga() {
  vmem = (uint32_t *)malloc(screen_height * screen_width * sizeof(uint32_t));
  init_screen();
  vgactl_port_base[0] = (screen_width << 16) | screen_height;
  vgactl_port_base[1] = 0;
  printf("init vga complete\n");
}
