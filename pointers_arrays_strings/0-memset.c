#include "main.h"
/**
  * -memset -llena los primeros n bytes del área de memoria apuntada por s con el byte const n
  * @n: constante
  * @b: 
  * Return: un puntero a la zona de memoria s.
  */
char *_memset(char *s, char b, unsigned int n)
{
	char* p=s;
	while(n--)
	*p++ = (unsigned char)b;
	return s;
}
