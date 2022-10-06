#include "main.h"
/**
 * print_square - cuadrado
 *
 * @size: bbg
 */
void print_square(int size)
{
	int baja, rep;

	if (size <= 0)
		_putchar('\n');

	for (baja = 1; baja <= size; baja++)
	{
	for (rep = 1; rep <= size; rep++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
}
