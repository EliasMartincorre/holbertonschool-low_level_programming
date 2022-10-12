#include "main.h"
/**
  * _memcpy - copy first n bytes, de *src al buffer *dest
  * @dest: puntero al primer buffer
  * @src: posiciones a copiar
  * @n: constante
  * Return: Puntero a dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)

{
char *dp = dest;
const char *sp = src;
for (; n != 0; n--)
*dp++ = *sp++;
return (dest);
}
