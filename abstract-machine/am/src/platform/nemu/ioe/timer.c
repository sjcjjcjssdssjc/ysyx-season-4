#include <am.h>
#include <nemu.h>

void __am_timer_init() {
}
void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  //struct timespec now;
  //clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
  //uint64_t us = now.tv_sec * 1000000 + now.tv_nsec / 1000;
  uptime->us ++;
  
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
