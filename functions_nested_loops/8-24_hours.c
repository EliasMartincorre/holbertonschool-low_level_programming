#include "main.h"
/**
  * jack_bauer - minutos en un día.
  *
  * Return : (0).
  */
void jack_bauer(void)
{
	int horas,  minutos;

	for (horas = 0; horas <= 23; horas++)
	{
	for (minutos = 0; minutos <= 59; minutos++)
	{
	_putchar((horas / 10) + '0');
	_putchar((horas % 10) + '0');
	_putchar(':');
	_putchar((minutos / 10) + '0');
	_putchar((minutos % 10) + '0');
	_putchar('\n');
	}
	}
}

