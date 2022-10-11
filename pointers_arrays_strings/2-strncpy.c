#include "main.h"
/**
* _strncpy - copia hasta n
*
* @dest: copiar
*
* @src: copiar
*
* @n: limite.
*
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
              int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
    dest[i] = src[i];
    for ( ; i < n; i++)
    dest[i] = '\0';

    return dest;
           
}
