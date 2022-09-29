#include <stdio.h>
/**
*  main - Escribir el alfabeto en minuscula
*
*Return: return 0
*/
int main(void)
{
char a = 'a';
char b = 'A';
for (a = 'a' ; a <= 'z' ; a++)
{putchar(a); }
for (b = 'A' ; b <= 'Z' ; b++)
putchar(b);
putchar('\n');
return (0);
}
