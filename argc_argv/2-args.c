#include<stdio.h>
/**
 * main - imprime array
 * @argc: Cantidad de argumentos
 * @argv: argumentos.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i = 0;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
