#include <stdio.h>
/**
*  main - Escribir el alfabeto en minuscula
*
*Return: return 0
*/
int main(void)
{
char a, e, q;

a = 'a';
e = 'e';
q = 'q';
for (a = 'a' ; a <= 'z' ; a++)
{
if (a != q && a != e)
putchar(a);
}
putchar('\n');
return (0);
}
