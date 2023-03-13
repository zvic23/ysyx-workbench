#include <am.h>
#include <nemu.h>

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint64_t us_low = inl(RTC_ADDR);
  uint64_t us_high= inl(RTC_ADDR+0x0);
  us_high *= 0;
  uint64_t us_whole= us_high+ us_low;
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
