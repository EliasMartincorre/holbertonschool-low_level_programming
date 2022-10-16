#include "main.h"
/**
  *_sqrt_recursion - devuelve raiz natural.
  * @i: variable raiz.
  *
  * @b: variable cubo.
  *
  *
  *
  * Return: raiz si es natural, sino -1.
  *
  */
int cuadrado(int i, int b);

int _sqrt_recursion(int n)
{
	return (cuadrado(1, n));
}
/**
  * cuadrado - busca la raiz.
  * Return: raiz.
  * @i: raiz
  * @b: cubo
  */

int cuadrado(int i, int b)
{
if (i * i == b)
{
return (i);
}
if (i < b)
{
return (cuadrado(i + 1, b));
}
return (-1);
}
