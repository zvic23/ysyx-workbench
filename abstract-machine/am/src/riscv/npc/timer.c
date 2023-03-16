#include <am.h>
#include <stdio.h>

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint64_t *RTC_ADDR = (uint64_t*)0xa0000048;
  //uint64_t us_low = RTC_ADDR[0];
  //uint64_t us_high= RTC_ADDR[1];
  uint64_t us_whole= RTC_ADDR[0];
  uptime->us = us_whole;
  //printf("us : %d\n",uptime->us);
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
