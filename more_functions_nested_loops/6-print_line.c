#include "main.h"
/**
* print_line - int
*
* @n: largo de linea
*/
void print_line(int n)
{
	int b;

if (n <= 0)
{
_putchar('\n');
}
for (b = 0; b <= n; b++)
{
	_putchar('_');

}
_putchar('\n');
}
