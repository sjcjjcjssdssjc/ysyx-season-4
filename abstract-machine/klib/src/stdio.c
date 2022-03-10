#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  char *now;
  for(now = out;*fmt != 0;fmt++){
    if(*fmt != '%'){
      *now = *fmt;
      now++;
    }
    else{
      fmt++;
      if(*fmt == 'd'){
        int num = va_arg(ap, int);
        int rev = 0,len = 0;
        while(num){
          rev *= 10;
          rev += num % 10;
          num /= 10;
          len++;
        }
        while(len--){
          *now++ = rev % 10 + '0';
          rev /= 10;
        }
      }
      else if(*fmt == 's'){//s
        char *tmp = va_arg(ap, char *);
        int l = strlen(tmp);
        while(l--)*now++ = *tmp++;
      }
    }
  }
  *now = 0;
  return now - out;//return the length of the string
}

int sprintf(char *out, const char *fmt, ...) {
  int ret;
  va_list ap;
  va_start(ap, fmt);
  ret = vsprintf(out, fmt, ap);
  va_end(ap);
  return ret;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
