#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
char out[5000];//to be changed
int printf(const char *fmt, ...) {
  
  int ret;
  va_list ap;
  va_start(ap, fmt);
  ret = vsprintf(out, fmt, ap);
  va_end(ap);
  for(int i = 0; i < ret; i++)
    putch(out[i]);
  return ret;
  
 return 0;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  char *now;
  int widthflag = 0;//,width = 0;
  for(now = out;*fmt != 0;fmt++){
    if(*fmt != '%' && !widthflag){
      *now = *fmt;
      now++;
    }
    else{
      if(!widthflag)fmt++;
      if(*fmt == 'd'){
        int num = va_arg(ap, int);
        int rev = 0,len = 0;
        while(num){
          rev *= 10;
          rev += num % 10;
          num /= 10;
          len++;
        }
        //if(widthflag)len = width;
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
      else if(*fmt == 'c'){
        int tmp = va_arg(ap, int);
        *now++ = tmp;
      }
      else if(*fmt++ == '0'){
        widthflag = 1;
        //width = *fmt - '0';
        
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
