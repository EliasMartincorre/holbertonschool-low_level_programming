#include"main.h"
/**
  * _pow_recursion- a la potencia y.
  * @x: potencia.
  * @y: potenciado:
  *Return: cuadrado
  *
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
