#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  char *outstr = malloc(64);
  int ret =  sprintf(outstr, fmt);
  putstr(outstr);
  return ret;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  int d;
  int d_cpy;
  int bit;
  int length = 0;
  char *s ;
  va_start(ap, fmt);
  while (*fmt)
  {
          if(*fmt == '%')
          {
            fmt++;
            switch (*(fmt++))
            {
              case 's':
                      s = va_arg(ap, char *);
                      while(*s)
                      {
                              *out = *s;
                              //putch(*out);
                              out++;
                              s++;
                              length++;
                      }
                      //*out = 0;
                      break;
              case 'd':
                      bit = 0;
                      d = va_arg(ap, int);
                      d_cpy = d;
                      do
                      {
                              d = d/10;
                              bit += 1;
                      }while(d);
                      
                      for(int i = bit-1; i >= 0; i--)
                      {
                              *(out+i) = (d_cpy % 10 + 48);
                              //putch(*(out+i));
                              d_cpy = d_cpy/10;
                              length++;
                      }
                      out = out + bit;
                      break;
            }
          }
          else
          {
                  *out = *fmt;
                  //putch(*out);
                  fmt++;
                  out++;
                  length++;
          }
            
  }
  *out = 0;
  va_end(ap);
  return length;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
