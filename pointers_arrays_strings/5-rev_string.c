#include "main.h"
/**
  * rev_string - REvierte un string
  * @s: string que se ingresa
  *
  */
void rev_string(char *s)
{
	int rev = 0;
	int prueba = 0;
	char temporal;

	for (; s[prueba] != '\0';)
	{
		prueba++;
	}
	for (rev = 0; rev < (prueba / 2) ; rev++)
	{

	temporal = s[rev];
	s[rev] = s[prueba - rev - 1];
	s[prueba - rev - 1] = temporal;
	}
}
