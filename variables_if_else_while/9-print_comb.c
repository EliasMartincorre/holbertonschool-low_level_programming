#include <stdio.h>
/**
* main - Numeros base diez .
*
*Return: return 0
*/
int main(void)
{
int a = '0';
for (a = '0'; a <= '9'; a++)
	
if (a != '9')
{
	putchar(a);
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
