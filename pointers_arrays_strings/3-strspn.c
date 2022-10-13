#include "main.h"
/**
  * _strspn- calcula la longitud del segmento inicial.
  * @s: puntero a s.
  * @accept: puntero que marca los bytes a contar.
  * Return: variable int cantidad de bytes.
  */
unsigned int _strspn(char *s, char *accept)
{	int i;
	int a;
	int cont = 0;
for (a = 0; accept[a] != '\0'; a++)
{
	for (i = 0; s[i] != 32 && s[i] != '\0'; i++)
	{
	if (s[i] == accept[a])
	{
	cont++;
	}
	}
	}
	return (cont);
}
