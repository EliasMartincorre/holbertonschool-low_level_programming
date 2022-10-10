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

	for (; contador < n; contador++)
		{
	if (contador != (n - 1))
		{
	printf("%d, ", a[contador]);
		}

	else if (contador == (n - 1))
		{
	printf("%d\n", a[contador]);
		}
	else if ((n - 1) < 0)
		{
	printf("  \n");
		}
		}
}
