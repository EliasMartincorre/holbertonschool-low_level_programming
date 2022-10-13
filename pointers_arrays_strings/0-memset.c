#include "main.h"
/**
  * _memset - funcion que copia n baytes en s , devuelve puntero a s
  * @n: constante
  * @b: espacio de memoria a sumar
  * @s: puntero a un espacio de memoria
  * Return: un puntero a la zona de memoria s.
  */
char *_memset(char *s, char b, unsigned int n)
{
	char  *p = s;

	for ( ; n > 0; n--)
	*p++ = (unsigned char)b;
	return (s);
}
