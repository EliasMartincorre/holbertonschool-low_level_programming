#include "main.h"
/**
  * _strcmp - compara string
  *
  * @s1: string a ser comparado
  * @s2:
  *
  * Return: diferencia.
  */
int _strcmp(char *s1, char *s2)
{
	for ( ; *s1 != '\0' && *s2 != '\0' && *s1 == *s2; )
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

