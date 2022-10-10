#include "main.h"
/**
 * _strcat - concatena string
 *
 * @dest: archivo donde se concatena
 *
 * @src: archivo a concatenar
 *
 * Return: archivo concatenado.
 */
char *_strcat(char *dest, char *src)
{
	int i, b;

	i = 0;
	b = 0;

	for (; dest[i] != 0; i++)
	{
		b++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[b++] = src[i];
	}
		return (dest);

}
