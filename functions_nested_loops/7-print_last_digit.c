#include "main.h"
/**
* print_last_digit - ESta funcion imprimira el ultimo digito
* @n: Valor de la variable.
* Return: last_digit
*/
int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 10)
	_putchar(lastdigit);
	return (0);
}
