#include<stdio.h>
#include<stdlib.h>
/**
 * main - imprime array
 * @argc: Cantidad de argumentos
 * @argv: argumentos.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int resultado = 0, n1, n2;

	if (argc < 3)
	{
	printf("%s\n", "Error");
	return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	resultado = num1 * num2;

	printf("%d\n", resultado);

	return (0);
}
