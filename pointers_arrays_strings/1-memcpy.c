#include "main.h"
/**
  *
  *
  *
  *
  */
char *_memcpy(char *dest, char *src, unsigned int n)

{
char *dp = dest;
const char *sp = src;
for (;n != 0; n--)
*dp++ = *sp++;
return dest;
}

