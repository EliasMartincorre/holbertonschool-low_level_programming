#include<stdio.h>
#include<stdlib.h>
/**
  *main - numero de monedas.
  *
  * @argc: dimension del array.
  *
  * @argv: importe ingresado.
  * Return: 0.
  */
int main(int argc, char **argv)
{
	int resultado = 0, a, b;
	int monedas[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("0\n");
		return (0);
	}
	for  (b = 0; b <= 5 && a >= 0; b++)
	{
		for  (; a >= monedas[b]; )
		{
			a -= monedas[b];
	resultado++;
		}
	}
	printf("%d\n", resultado);
	return (0);
}
