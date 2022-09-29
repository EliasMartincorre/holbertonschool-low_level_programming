#include <stdio.h>
/**
*  main - Escribir el alfabeto en minuscula
*
*Return: return 0
*/
int main(void)
{
char a = 'a';
char A = 'A';
for (a = 'a' ; a <= 'z' ; a++)
{putchar(a); }
for (A = 'A' ; a <= 'Z' ; a++)
putchar(A);
putchar('\n');
return (0);
}
