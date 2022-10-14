#include "main.h"
/**
  * puts_half - imprime la segunda mitad del string.
  *
  * @str: string.
  */
void puts_half(char *str)
{
	int imprime = 0;
	int mitad;

	for (; str[imprime] != '\0';)
	{
		imprime++;
	}
		if ((imprime % 2) == 0)
			{
			mitad = (imprime / 2);
			for (; str[mitad] != '\0'; mitad++)

			_putchar(str[mitad]);
			}
		else
			{
				mitad = (imprime - 1) / 2;
				for (; str[mitad - 1] != '\0'; ++mitad)
					_putchar(str[mitad]);
			}
		_putchar('\n');
}
