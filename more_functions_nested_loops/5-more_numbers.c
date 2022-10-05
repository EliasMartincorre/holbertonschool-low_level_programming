#include "main.h"
/**
* more_numbers -  10 times table
*
*
*/
void more_numbers(void)
{
	int den, mult, in;

	for (den = 0; den <= 9; den++)
	{
	for (mult = 48; mult <= 57; mult++)
	{
	_putchar(mult);
	}
	for (in = 10; in <= 14; in++)
	
	{
	_putchar((in / 10) + '0');
	_putchar((in % 10) + '0');		
	}
	_putchar('\n');
	}
}
