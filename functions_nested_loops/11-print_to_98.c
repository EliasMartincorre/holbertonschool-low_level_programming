#include "main.h"
#include <stdio.h>
/**
  * print_to_98 - numero reales hasta n.
  * @n:variable
  *
  */
void print_to_98(int n)
{
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n < 98)
		{
		printf("%d", n);
		printf(",");
		}
	if (n == 98)
	{
		printf("%d", n);
	}
}
	printf("\n");
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n > 98)
	{
	printf("%d", n);
	printf(", ");
	}
	if (n == 98)
	{
	printf("%d", n);
	}
	}
	printf("\n");
	}
}

