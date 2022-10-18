#include"main.h"
/**
  * is_palindrome - evalua si un string es palindrome
  *
  * @s: string a evaluar.
  * Return: 1 palindrome, 0 no lo es.
  * @comienzo: s[0]..
  * @fin: posicion final del string.
  */
int auxiliar(char *s, int comienzo, int fin);
int length(char *s);
/**
  * length - determina el largo del string.
  * @s: string.
  * Return: string length.
  */

int length(char *s)
{
	int a = 0;

	if (*s)
	{
	a++;
	a += (length(s + 1));
	}
	return (a);
}
/**
* auxiliar- compara dos string.
* @s: string a comparar.
* @comienzo: s[0].
* is_palindrome - idem.
* @fin: posicion final del string.
* Return: 0 si no coinciden.
*/
int auxiliar(char *s, int comienzo, int fin)
{
	if (comienzo >= fin)
	{
		return (1);
	}
	if (s[comienzo] != s[fin])
	{
	return (0);
	}
	return (auxiliar(s, comienzo + 1, fin - 1));
}
/**
  * is_palindrome - idem.
  * @s: string.
  * Return: idem
  */
int is_palindrome(char *s)
{
	int a = 0;

	a = length(s) - 1;
	return (auxiliar(s, 0, a));
}
