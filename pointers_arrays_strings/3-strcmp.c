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
	int i = 0;
	int c = 0;
	int valor_total_s1 = 0;
	int valor_total_s2 = 0;

	for (; s1[i] != '\0'; )
	{
		i++;
	valor_total_s1 += s1[i];
	}
	for ( ; s2[c] != '\0'; )
	{
		c++;
		valor_total_s2 += s2[c];
	}
	return (valor_total_s1 - valor_total_s2);
}
