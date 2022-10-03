#include "main.h"
/**
 * times_table - tablas del 1 al 9
 *
 *
 */
void times_table(void)
{
	int num, mul, prod;

	for (num = 0; num <= 9; num++)
	{
	for (mul = 0; mul <= 9; mul++)
	{
	prod = num * mul;

	if ((prod / 10) == 0)
	{
	if (mul == 0)
	{
		_putchar(prod + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	_putchar(prod + '0');
	}
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar((prod / 10) + '0');
		_putchar((prod % 10) + '0');
	}
	}
	_putchar('\n');
	}
}
