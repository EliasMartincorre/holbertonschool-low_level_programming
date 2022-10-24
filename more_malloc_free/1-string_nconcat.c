#include "main.h"
#include <stdlib.h>
/**
  * string_nconcat- Concatenate two string n bytes of s2.
  * @s1: string one.
  * @s2: string to concatenate n byt or all if n mayor s2.
  * @n: numero de bytes a concatenar del segundo string.
  * Return: puntero al string concatenado otherwise exit(0).
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, ls1, ls2;
	char *ptrconcatenado;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	ls1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
	ls2++;
	}
	if (n > ls2)
	{
		n = ls2;
	}
	ptrconcatenado = malloc((ls1 + n + 1) * sizeof(*ptrconcatenado));
	if (ptrconcatenado == NULL)
	{
	exit(0);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	ptrconcatenado[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptrconcatenado[i + j] = s2[j];
	}
	ptrconcatenado[j + i + 1] = '\0';
return (ptrconcatenado);
}
