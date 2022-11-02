#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
/**
  * print_all - imprime anything
  * @format: formato recivido.
  *
  */
void print_all(const char * const format, ...)
{
int i = 0;
char *separador = ", ";
char *str;

va_list lista;
va_start(lista, format);
if (format)
{
while (format[i])
	{
switch (format[i])
	{
	case 'c':
		printf("%s%c", separador, va_arg(lista, int));
		break;
	case 'i':
		printf("%s%d", separador, va_arg(lista, int));
		break;
	case 'f':
		printf("%s%d", separador, va_arg(lista, int));
		break;
	case 's':
		str = va_arg(lista, char*);
		if (str)
		{
		printf("%s%s", separador, str);
		break;
		}
	printf("(nil)");
	}
	i++;
	}
}
	printf("\n");
va_end(lista);
}
