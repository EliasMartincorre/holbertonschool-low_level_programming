#include "main.h"
/**
  * _strchr -cambia un string
  * @s: string
  * @c: contador
  * Return: puntero a s
  */
char *_strchr(char *s, char c)
{
	for (; *s != (char)c; )
	if (!*s++)
	return (0);
	return ((char *)s);
}
