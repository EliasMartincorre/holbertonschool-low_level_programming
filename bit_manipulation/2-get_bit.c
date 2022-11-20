#include "main.h"

/**
 * get_bit - bit a given index
 * @n: valor in base 10.
 * @index: index to return..
 *
 * Return: value of the bit index, -1 fail.
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

