#include "main.h"
/**
  * puts2 - el primero y la segunda mitad
  *
  * @str: string a tomar
  */
void puts2(char *str)
{
	int imprime = 0;
	if (str[0] != 0)
	_putchar(str[0]);
	for (; str[imprime] != '\0'; )
	{
		imprime++;
	if ((imprime % 2) == 0)

	_putchar(str[imprime]);

	}
	_putchar('\n');
}
