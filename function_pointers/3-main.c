#include "3-calc.h"
#include<stdio.h>
#include<stdlib.h>
/**
  * main - calculadora, recibe los numeros del usuario.
  * @argc: cantidad de argumentos permitidos
  * @argv: string a ser convertidos en int. argv[2] operador.
  * Return: 0 en caso de exito. se imprime resultado en pantalla
  *
  */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*ptr)(int, int);

if (argc != 4)
{
printf("Error\n");
		exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
ptr = get_op_func(argv[2]);

if (!ptr)
{
	printf("Error\n");
	exit(99);
}
if (num1 == 0 || num2 == 0)
	{
	printf("Error\n");
	exit(100);
	}

printf("%d\n", ptr (num1, num2));
return (0);
}
