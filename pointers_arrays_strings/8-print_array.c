#include "main.h"
/**
  * print_array - imprime array
  *
  * @a: array
  * @n: dimension del array.
  */
void print_array(int *a, int n)
{
	int contador = 0;
if (n > 0)
	{
	for (; contador < n; contador++)
		{
	if (contador != (n - 1))
		{
	printf("%d, ", a[contador]);
		}

	else if (contador == (n - 1))
		{
	printf("%d", a[contador]);
	printf("\n");
		}
		}
	}
	printf("\n");
}
