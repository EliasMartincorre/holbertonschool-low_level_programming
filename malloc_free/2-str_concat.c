#include"main.h"
#include<stdlib.h>
/**
  *str_concat- concatena string. en memoria dinamica.
  * @s1: string1.
  * @s2: string2.
  *
  * Return: Retorna un puntero al primer caracter del concatenado.
  */
char *str_concat(char *s1, char *s2)
{
	int i, lstr1 = 0, lstr2 = 0;
	char *concatenado;

	if (s1 == NULL && s2 != NULL)
	{
		return (NULL);
		return (s2);
	}
	if (s2 == NULL && s1 != NULL)
	{
		return (NULL);
		return (s1);
	}
	for (i = 0; s1[i]; i++)
	{
	lstr1++;
	}
	for (i = 0; s2[i]; i++)
	{
		lstr2++;
	}
	concatenado = (char *) malloc((lstr1 + lstr2 + 1) * sizeof(char));
	if (concatenado == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= lstr1; i++)
	{
		concatenado[i] = s1[i];
	}
	for (i = 0; i <= lstr2; i++)
	{
		concatenado[lstr1 + i] = s2[i];
		concatenado[lstr1 + lstr2 + 1] = '\0';
	}
	return (concatenado);
	free(concatenado);
	return (0);
}
