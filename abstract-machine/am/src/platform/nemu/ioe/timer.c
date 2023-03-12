#include <am.h>
#include <nemu.h>
#include <stdio.h>

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint64_t us_low = inl(RTC_ADDR);
  uint64_t us_high= inl(RTC_ADDR);
  uint64_t us_whole= (us_high<<32) + us_low;
  printf("111:%d  %d\n",us_low,us_whole);
  uptime->us = us_whole;
  //uptime->us = 0;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
