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
    char *ret = dst;
    while((*dst++ = *src++) != '\0');
    return ret;
}

char *strncpy(char *dst, const char *src, size_t n) {
    panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  char *tmp = dst;

  while(*dst)
          dst++;
  while((*dst++ = *src++) != '\0');
  return tmp;
}

int strcmp(const char *s1, const char *s2) {
  int ret = 0;
  while(!(ret=*(unsigned char*)s1 - *(unsigned char*)s2) && *s1)
  {
    s1++;
    s2++;
  }
  
  return ret;
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
