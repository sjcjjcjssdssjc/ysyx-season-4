
#ifndef __ITRACE_H__
#define __ITRACE_H__
#include <stdint.h>
#define IRINGBUF_SIZE 8 //must be >= 3
char iringbuf[IRINGBUF_SIZE][100];
char logbuf[100];
int iring_tail = 0;
int first_inst = 1;
#endif