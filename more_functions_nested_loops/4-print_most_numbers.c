#include "main.h"
/**
* print_most_numbers - exluidos 4 y 2
*
*/
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
	if (a != 52 && a != 50)
	{
		_putchar(a);
	}
	}
	_putchar('\n');
}

