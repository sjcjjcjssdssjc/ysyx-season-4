#include <am.h>
#include <nemu.h>

void __am_timer_init() {
}
int cnt=0;
void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  cnt++;
  if(cnt % 10000 == 0)uptime->us++;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
