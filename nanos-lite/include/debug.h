#ifndef __DEBUG_H__
#define __DEBUG_H__

#include <common.h>

#define Log(format, ...) \
  printf(format "\n", \
      ## __VA_ARGS__)

#undef panic
#define panic(format, ...) \
  do { \
    Log("system panic: " format, ## __VA_ARGS__); \
    halt(1); \
  } while (0)

#ifdef assert
# undef assert
#endif

#define assert(cond) \
  do { \
    if (!(cond)) { \
      panic("Assertion failed: %s", #cond); \
    } \
  } while (0)

#define TODO() panic("please implement me")

#endif
