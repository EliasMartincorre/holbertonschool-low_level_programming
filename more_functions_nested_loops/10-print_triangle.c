#include "main.h"
/**
 * print_triangle ..imprime triangulo en pantalla
 * @size: tamaño
 *
 */
void print_triangle(int size)
{
	int espacio, caracter, baja;

	if (size <= 0)
	{
	_putchar('\n');
	}
	for (baja = 1; baja <= size; baja++)
	{
	for (espacio = size - baja; espacio >= 1; espacio--)
	{
	_putchar(' ');
	}
	for (caracter = 1; caracter <= baja; caracter++)
	{
	_putchar('#');
	}
	_putchar('\n');
}
}
