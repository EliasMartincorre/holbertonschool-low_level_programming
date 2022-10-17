#include "main.h"
/**
  * is_prime_number - devuelve raiz natural.
  *
  * @n variable ingresada.
  * @a: variable.
  * @b: variable.
  * Return: 1 is prime otherwise return 0.
  *
  */
int prime(int a, int b);

int is_prime_number(int n)
{
return (prime(2, n));
}

/**
  * prime - busca numero primos
  * @a: variable de comparacion.
  *
  * @b: variable a determinar.
  * Return: 1 si es primo, 0 de otra manera.
  */

int prime(int a, int b)
{
if (b <= 1)
	return (0);
if (a >= b)
	return (1);
else if ((b % a) == 0)
	return (0);
else

	return (prime(a + 1, b));
}
