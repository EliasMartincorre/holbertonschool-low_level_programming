#include <stdio.h>
#include "main.h"
/**
 * main- imprimir fix%3 ,buzz%5,fizzbuzz%15
 *
 *Return: 0
 */
int main(void)
{
	int numeros;

	for (numeros = 1; numeros <= 99; numeros++)
	{

		if (numeros % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (numeros % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (numeros % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", numeros);
		}
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
