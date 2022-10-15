#include "main.h"
/**
  * factorial- factorial de un numero .
  *
  * @n: valor a calcularle el factorial.
  * Return: factorial. o -1.
  */
int factorial(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
