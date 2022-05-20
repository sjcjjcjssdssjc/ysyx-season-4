#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>
#include <stdlib.h>
#include <NDL.h>
/*
struct timeval {
  time_t      tv_sec;     // seconds
  suseconds_t tv_usec;    // microseconds
};
and gives the number of seconds and microseconds since the  Epoch  (see
time(2)).
The tz argument is a struct timezone:
struct timezone {
  int tz_minuteswest;     // minutes west of Greenwich 
  int tz_dsttime;         // type of DST correction 
};
*/
int main() {
  time_t now = 0;
  struct timeval  tv;
  struct timezone tz;
  NDL_Init(0);
  while(1){
    gettimeofday(&tv, &tz);
    //printf("after %ld\n",tv->tv_usec);
    if(tv.tv_usec / 500000 - now > 1){
      now++;
      printf("now %ldus %lds count:%ld 0.5 sec has passed\n",tv.tv_usec,tv.tv_sec,now);
      printf("the time now: %dms\n",NDL_GetTicks());
    }
  }
  return 0;
}
