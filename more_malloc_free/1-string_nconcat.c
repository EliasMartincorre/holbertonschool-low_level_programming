#include "main.h"
#include <stdlib.h>
#include<string.h>
/**
  * string_nconcat- Concatenate two string n bytes of s2.
  * @s1: string one.
  * @s2: string to concatenate n byt or all if n mayor s2.
  * @n: numero de bytes a concatenar del segundo string.
  * Return: puntero al string concatenado otherwise exit(0).
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, ls2, n1;
	char *ptrconcatenado;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	ls2 = strlen(s2);
	n1 = n;
	if (n1 >= ls2)
	{
		n = ls2;
	}
	ptrconcatenado = malloc((strlen(s1) + n + 1) * sizeof(*ptrconcatenado));
	if (ptrconcatenado == NULL)
	{
	return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	ptrconcatenado[i] = s1[i];
	}
	for (j = 0; j < n1; j++)
	{
		ptrconcatenado[i + j] = s2[j];
	}
	ptrconcatenado[j + i] = '\0';
return (ptrconcatenado);
}
