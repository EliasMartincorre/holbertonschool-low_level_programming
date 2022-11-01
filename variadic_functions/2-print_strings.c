#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
  * print_strings - print the n parameters.
  * @separator: separador de numeros.
  * @n:numero de parametros.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list lista;

	va_start(lista, n);

for (i = 0; i < n; i++)
{
str = va_arg(lista, char *);

	if (!str)
	{
	str = ("nil");
	}
if (!separator)
{
printf("%s", str);
}
else if (i != 0)
	{
	printf("%s%s", separator, str);
	}
else
	{
	printf("%s", str);
	}
	}
	printf("\n");
	va_end(lista);
}
