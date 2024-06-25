#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int my_itoa(int num, char *str, int base, bool leading_zeros, bool padding, int width) {
  char *digits = "0123456789ABCDEF";
  int ilen = 0;
  bool is_negative = false;

  if (num < 0) {
    is_negative = true;
    num = -num;
  }

  do {
    str[ilen++] = digits[num % base];
    num /= base;
  } while (num > 0);

  if (is_negative) {
    str[ilen++] = '-';
  }

  // Handle leading zeros
  if (leading_zeros) {
    int zeros = width - ilen;
    while (zeros-- > 0) {
      str[ilen++] = '0';
    }
  }

  // Pad with spaces
  if (padding) {
    int spaces = width - ilen;
    while (spaces-- > 0) {
      str[ilen++] = ' ';
    }
  }

  // str[i] = '\0';

  // Reverse the string
  for (int j = 0; j < ilen / 2; j++) {
    char temp = str[j];
    str[j] = str[ilen - j - 1];
    str[ilen - j - 1] = temp;
  }

  return ilen;
}

int printf(const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  char *outstr = malloc(64);
  int ret =  vsprintf(outstr, fmt, args);
  putstr(outstr);
  free(outstr);
  va_end(args);
  return ret;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  int d;
  int length = 0;
  int delta_length;
  int nested_num;
  char *s;
  while (*fmt)
  {
          if(*fmt == '%')
          {
            fmt++;
            switch (*fmt)
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
                      d = va_arg(ap, int);
                      delta_length = my_itoa(d, out, 10, false, false, 0);
                      out = out + delta_length;
                      length += delta_length;
                      break;
              case 'x':
                      d = va_arg(ap, int);
                      delta_length = my_itoa(d, out, 16, false, false, 0);
                      out = out + delta_length;
                      length += delta_length;
                      break;
              case '0':
                fmt++;
                switch(*fmt)
                {
                  case '1':
                  case '2':
                  case '3':
                  case '4':
                  case '5':
                  case '6':
                  case '7':
                  case '8':
                    nested_num = atoi((char *)fmt);
                    fmt++;
                    switch(*fmt)
                    {
                      case 'd':
                              d = va_arg(ap, int);
                              delta_length = my_itoa(d, out, 10, true, false, nested_num);
                              out = out + delta_length;
                              length += delta_length;
                              break;
                      
                      case 'x':
                              d = va_arg(ap, int);
                              delta_length = my_itoa(d, out, 16, true, false, nested_num);
                              out = out + delta_length;
                              length += delta_length;
                              break;                      
                    }
                    break;
                }            
            }
            fmt++;
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
  return length;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  int d;
  int length = 0;
  int delta_length;
  int nested_num;
  char *s;
  va_start(ap, fmt);
  while (*fmt)
  {
          if(*fmt == '%')
          {
            fmt++;
            switch (*fmt)
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
                      d = va_arg(ap, int);
                      delta_length = my_itoa(d, out, 10, false, false, 0);
                      out = out + delta_length;
                      length += delta_length;
                      break;
              case 'x':
                      d = va_arg(ap, int);
                      delta_length = my_itoa(d, out, 16, false, false, 0);
                      out = out + delta_length;
                      length += delta_length;
                      break;
              case '0':
                fmt++;
                switch(*fmt)
                {
                  case '1':
                  case '2':
                  case '3':
                  case '4':
                  case '5':
                  case '6':
                  case '7':
                  case '8':
                    nested_num = atoi((char *)fmt);
                    fmt++;
                    switch(*fmt)
                    {
                      case 'd':
                              d = va_arg(ap, int);
                              delta_length = my_itoa(d, out, 10, true, false, nested_num);
                              out = out + delta_length;
                              length += delta_length;
                              break;
                      
                      case 'x':
                              d = va_arg(ap, int);
                              delta_length = my_itoa(d, out, 16, true, false, nested_num);
                              out = out + delta_length;
                              length += delta_length;
                              break;                      
                    }
                    break;
                }                                 
            }
            fmt++;
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
