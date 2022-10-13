#include "main.h"
/**
  * _strspn- calcula la longitud del segmento inicial.
  * @s: puntero a s.
  * @accept: puntero que marca los bytes a contar.
  * Return: variable int cantidad de bytes.
  */
unsigned int _strspn(char *s, char *accept)
{
	char *_strchr(char *s, char c);

	unsigned int ret = 0;

	while (*s && _strchr(accept, *s++))
	ret++;
	return (ret);
}
