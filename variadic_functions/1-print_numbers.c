#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
  * print_numbers - print the n parameters.
  * @separator: separador de numeros.
  * @n:numero de parametros.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list lista;

va_start(lista, n);
for (i = 0; i < n; i++)
{
	printf("%d", va_arg(lista, int));
	printf(", ");

if (i == (n - 2))
{
	printf("%d", va_arg(lista, int));
	printf("\n");
}
}
if (separator == NULL)
	{
	printf(" ");
	}
	va_end(lista);
}
