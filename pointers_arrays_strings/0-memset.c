#include "main.h"
/**
  * _memset -mkk
  * @n: constante
  * @b: 
  * Return: un puntero a la zona de memoria s.
  */
char *_memset(char *s, char b, unsigned int n)
{
	char* p=s;
	for ( ; n > 0; n--)
	*p++ = (unsigned char)b;
	return s;
}
