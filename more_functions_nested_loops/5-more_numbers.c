#include "main.h"
/**
* more_numbers -  10 times table
*
*
*/
void more_numbers(void)
{
	int den, mult;

	for (den = 0; den <= 9; den++)
	{
	for (mult = 0; mult <= 14; mult++)
	{
	if (mult > 9)
	_putchar((mult / 10) + '0');
	_putchar((mult % 10) + '0');

	}
	_putchar('\n');
	}
}
