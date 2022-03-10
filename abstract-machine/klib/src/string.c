#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  const char *now;
	for (now = s; *now != '\0'; now++);
	return now - s;
}

char *strcpy(char *dest, const char *src) {
  char *tmp = dest;
	while ((*dest++ = *src++) != '\0');
	return tmp;
}

char *strncpy(char *dest, const char *src, size_t n) {
  char *tmp = dest;
	while (n) {
		if ((*tmp = *src) != 0)
			src++;
		tmp++;
		n--;
	}
	return dest;
}

char *strcat(char *dest, const char *src) {
  char *tmp = dest;
	while (*dest++);
  dest--;
	while ((*dest++ = *src++) != '\0');
	return tmp;
}

int strcmp(const char *s1, const char *s2) {
  unsigned char c1, c2;
	while (1) {
		c1 = *s1++;
		c2 = *s2++;
		if (c1 != c2)
			return c1 < c2 ? -1 : 1;
		else if (!c1)break;
	}
	return 0;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  unsigned char c1, c2;
	while (n--) {
		c1 = *s1++;
		c2 = *s2++;
		if (c1 != c2)
			return c1 < c2 ? -1 : 1;
		else if (!c1)break;
	}
	return 0;
}

void *memset(void *s, int c, size_t n) {
  char *now = s;
	while (n--)
		*now++ = c;
	return s;
}

void *memmove(void *dest, const void *src, size_t n) {
  char *tmp;
	const char *s;
	if (dest <= src) {
		tmp = dest;
		s = src;
		while (n--)
			*tmp++ = *s++;
	} else {
		tmp = dest;
		tmp += n;
		s = src;
		s += n;
		while (n--)
			*--tmp = *--s;
	}
	return dest;
}

void *memcpy(void *dest, const void *src, size_t n) {
  char *d = dest;
	const char *s = src;
	while (n--)
		*d++ = *s++;
	return dest;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  const unsigned char *su1, *su2;
	int res = 0;
	for (su1 = s1, su2 = s2; 0 < n; ++su1, ++su2, n--)
		if ((res = *su1 - *su2) != 0)
			break;
	return res;
}

#endif
