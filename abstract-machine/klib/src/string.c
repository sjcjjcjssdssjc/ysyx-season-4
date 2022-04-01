#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  const char *now = s;
  while(*now != 0)now++;
	return now - s;
}

char *strcpy(char *dst, const char *src) {
  char *tmp = dst;
  int l = strlen(src);
  for(int i = 0; i <= l ;i++){
    tmp[i] = src[i];
  }

  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  char *tmp = dst;
  int l = strlen(src);
  for(int i = 0;i < n && i < l;i++){
    *tmp = *src;
    tmp++;
    src++;
  }
  dst[n] = 0;
  return dst;
}

char *strcat(char *dst, const char *src) {
  char *tmp = dst;
	while (*dst)dst++;
	while ((*dst = *src)){
    dst++;
    src++;
  }
  *dst = 0;
  return tmp;
}

int strcmp(const char *s1, const char *s2) {
  unsigned char c1 = *s1, c2 = *s2;
  while (c1 == c2 && c1) {
	c1 = *++s1;
	c2 = *++s2;
  }
  if (c1 != c2)
    return c1 < c2 ? -1 : 1;
  return 0;
}

int strncmp(const char *s1, const char *s2, size_t n) {
	unsigned char c1 = *s1, c2 = *s2;
	while (n-- && c1 == c2 && c1) {
		c1 = *++s1;
		c2 = *++s2;
	}
	if (c1 != c2)
		return c1 < c2 ? -1 : 1;
	return 0;
}

void *memset(void *s, int c, size_t n) {
	char *now = s;
	while (n--)
		*now++ = c;
	return s;
}

void *memmove(void *dest, const void *src, size_t n) {//overlap?
  char *tmp;
  const char *s;
  tmp = dest;
  s = src;
  for(size_t i = 0; i < n; i++){
	tmp[i] = s[i];
  }
  tmp[n] = 0;
  return dest;
}

void *memcpy(void *dest, const void *src, size_t n) {
  char *d = dest;
	const char *s = src;
	while (n--)
	  *d++ = *s++;
	*d = 0;
	return dest;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  const char *dst = s1, *src = s2;
	int res = 0;
	while(n--){
		if ((*dst - *src))
			break;
    dst++;
    src++;
	}
	return res;
}

#endif
