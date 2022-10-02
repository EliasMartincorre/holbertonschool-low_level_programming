#include "main.h"
/**
*print_alphabet_x10 - Print the alphabet
*Return: 0
*/
void print_alphabet_x10(void)
{
	char letras = 'a';
	int repeat = '0';

	for (repeat = '0'; repeat <= '9'; repeat++)
			{
	for (letras = 'a'; letras <= 'z'; letras++)
	{_putchar(letras); }
	_putchar('\n');
			}
}
