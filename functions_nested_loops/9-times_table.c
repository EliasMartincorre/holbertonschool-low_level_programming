#include "main.h"
/**
  * times_table - tablas del 1 al 9
  *
  *
 */
void times_table(void)
{int  tabla, multiplicador, resultado;

	for (tabla = 0; tabla <= 9; tabla++)
	{
	for (multiplicador = 0; multiplicador <= 9; multiplicador++)
	{
	if (multiplicador != 9)
	resultado = (tabla *= multiplicador)
	_putchar(resultado);
	_putchar(',');
	_putchar(' ');
	if else(multiplicador == 9)
	resultado = (tabla *= multiplicador);
	_putchar(resultado);
	}
	_putchar('\n');
	}
}
