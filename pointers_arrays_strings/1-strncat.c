#include "main.h"
/**
*_strncat - concatena string
*
* @dest: archivo donde se concatena
*
* @src: archivo a concatenar
*
* @n: limite.
* Return: archivo concatenado.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, b;

	i = 0;
	b = 0;

	for (; dest[i] != 0; i++)
	{
		b++;
	}
	for (i = 0; src[i] && i <= (n - 1); i++)
	{
		dest[b++] = src[i];
	}
	return (dest);
}
