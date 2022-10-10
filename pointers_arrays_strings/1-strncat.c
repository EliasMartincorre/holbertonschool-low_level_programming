#include "main.h"
/**
*_strcat - concatena string
*
* @dest: archivo donde se concatena
*
* @src: archivo a concatenar
*
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
    for (i = 0; src[i] <= src[n - 1]; i++)
    {
         dest[b++] = src[i == n];
    }
    return (dest);
}
