#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
char out[5000];//to be changed
int snpflag = 0;
size_t snn = 0;
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
  int widthflag = 0,width = 0,base = 10;
  for(now = out;*fmt != 0 && (!snpflag || now - out < snn);fmt++){//insert 4 for snprintf
    if(*fmt != '%' && !widthflag){
      *now = *fmt;
      now++;
    }
    else{
      if(!widthflag)fmt++;
      if(*fmt == 'd' || *fmt == 'x'){
        int hex = (*fmt == 'x');
        if(hex)base=16;
        int num = va_arg(ap, int);
        int rev = 0,len = 0;
        while(num){
          rev *= base;
          rev += num % base;
          num /= base;
          len++;
        }
        if(widthflag)len = width;
        if(len == 0)*now++ = '0';
        while(len-- && (!snpflag || now - out < snn)){
          if(rev % base <10){
            *now++ = rev % base + '0';
          }else *now++ = rev % base - 10 + 'A';
          rev /= base;
        }
      }//x is not implemented
      else if(*fmt == 'l' || *fmt == 'p'){
        int hex = (*fmt == 'p') || (*(fmt + 1) == 'x');
        if(*fmt != 'p')fmt++;
        if(hex)base=16;
        uint64_t num = va_arg(ap, uint64_t);
        uint64_t rev = 0,len = 0;
        while(num){
          rev *= base;
          rev += num % base;
          num /= base;
          len++;
        }
        if(widthflag)len = width;
        if(len == 0)*now++ = '0';
        while(len-- && (!snpflag || now - out < snn)){
          if(rev % base <10){
            *now++ = rev % base + '0';
          }else *now++ = rev % base - 10 + 'A';
          rev /= base;
        }
        base = 10;
      }
      else if(*fmt == 's'){//s
        char *tmp = va_arg(ap, char *);
        int l = strlen(tmp);
        while(l-- && (!snpflag || now - out < snn))*now++ = *tmp++;
      }
      else if(*fmt == 'c'){
        int tmp = va_arg(ap, int);
        *now++ = tmp;
      }
      else if(*fmt++ == '0'){
        widthflag = 1;
        width = *fmt - '0';
        
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
  snpflag = 1;
  snn = n;
  int ret;
  va_list ap;
  va_start(ap, fmt);
  ret = vsprintf(out, fmt, ap);
  va_end(ap);
  snpflag = 0;
  return ret;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
