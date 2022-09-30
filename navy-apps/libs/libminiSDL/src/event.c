#include <NDL.h>
#include <SDL.h>
#include <string.h>

#define keyname(k) #k,
static uint8_t keystate[100] = {0};

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *event) {
  char keys[100];
  char the_key[100];
  memset(keys,0,sizeof(keys));
  int ret = NDL_PollEvent(keys,sizeof(keys));
  if(ret == 0){
    return 0;
  }
  memcpy(the_key,keys+3,strlen(keys)-2);
  int now = 0,keycode = 0,siz = sizeof(keyname);
  for(int i = 0;i < 83; i++){

    //printf("i %d first %s second %s\n",i,keyname[i],the_key);
    if(strcmp(keyname[i],the_key) == 0){
      keycode = i;
      now = siz;
    }
    now += sizeof(keyname[i]);
  }
  //printf("%s %d\n",the_key,keycode);
  if(keys[0] == 'k' && keys[1] == 'd'){
    event->type = SDL_KEYDOWN;
    keystate[keycode] = 1;
  } else if(keys[0] == 'k' && keys[1] == 'u'){
    event->type = SDL_KEYUP;
    keystate[keycode] = 0;
  }
  event->key.keysym.sym = keycode;
  //printf("%d\n",event->key.keysym.sym);
  return 1;
}

int SDL_WaitEvent(SDL_Event *event) {
  //printf("wait %d\n",sizeof(keyname));
  char keys[100];
  char the_key[100];
  memset(keys,0,sizeof(keys));
  int ret = NDL_PollEvent(keys,sizeof(keys));
  while(ret == 0){
    ret = NDL_PollEvent(keys,sizeof(keys));
  }
  memcpy(the_key,keys+3,strlen(keys)-2);
  int now = 0,keycode = 0,siz = sizeof(keyname);
  for(int i = 0;i < 83; i++){

    //printf("i %d first %s second %s\n",i,keyname[i],the_key);
    if(strcmp(keyname[i],the_key) == 0){
      keycode = i;
      now = siz;
    }
    now += sizeof(keyname[i]);
  }
  //printf("%s %d\n",the_key,keycode);
  if(keys[0] == 'k' && keys[1] == 'd'){
    event->type = SDL_KEYDOWN;
    keystate[keycode] = 1;
  } else if(keys[0] == 'k' && keys[1] == 'u'){
    event->type = SDL_KEYUP;
    keystate[keycode] = 0;
  }
  event->key.keysym.sym = keycode;
  //printf("%d\n",event->key.keysym.sym);
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return keystate;
}
