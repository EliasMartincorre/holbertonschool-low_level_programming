#include "main.h"
/**
* print_diagonal - diagonal
*
* @n: variable
*/
void print_diagonal(int n)
{
	int baja, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	if (n >= 0)
	{
		for (baja = 1; baja <= n; baja++)
		{
		for (c = 2; c <= baja; c++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
