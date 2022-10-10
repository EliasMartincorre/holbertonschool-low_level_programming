#include "main.h"
/**
  *
  *
  *
  */
void puts2(char *str)
{
	int imprime = 0;

	for (; str[imprime] != '\0'; )
	{
		imprime++;
	}
	_putchar(str[0]);
	_putchar(str[2]);
	_putchar(str[4]);
	_putchar(str[6]);
	_putchar(str[8]);
	_putchar('\n');
}
