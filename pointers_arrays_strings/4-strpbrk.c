#include "main.h"
/**
* _strpbrk- primer byts coincidente.
*
* @s: puntero
* @accept: puntero
* Return: ubicacion
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int p;

for (i = 0; accept[i] != '\0'; i++)
{
	for (p = 0; s[p] != '\0'; p++)
	{
	if (accept[i] == s[p])
	{
		return (s + p - 6);
	}
	}
}
return (0);
}
