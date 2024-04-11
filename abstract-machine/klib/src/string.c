#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t tmp = 0;
  while(*s)
  {
    s++;
    tmp++;
  }
  return tmp;
}

char *strcpy(char *dst, const char *src) {
        while(*src)
        {
          *dst = *src;
          dst++;
          src++;
        }
        *dst = 0;
        return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  for(int i = 0; i < n; i++)
  {
    if(i >= strlen(src))
      *(dst+i) = 0;
    else
      *(dst+i) = *(src+i);
  }
  return dst;
}

char *strcat(char *dst, const char *src) {
  char* head = dst + strlen(dst);
  while(*src)
  {
    *head = *src;
    src++;
    head++;
  }
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  int ret = 0;
  while(!(ret=*(unsigned char*)s1 - *(unsigned char*)s2) && *s1)
  {
    s1++;
    s2++;
  }
  if(ret < 0)
          return -1;
  else if(ret > 0)
          return 1;
  else
          return 0;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
        unsigned char uc = c;
        unsigned char *su;
        for(su = s; n > 0; n--, su++)
        {
          *su = uc;
        }

        return s;

}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  int ret = 0;
  while(n && !(ret = (*(unsigned char *)s1) - (*(unsigned char *)s2)))
  {
    s1++;
    s2++;
    n--;
  }
  return ret;
}

#endif
