#include"function_pointers.h"
#include <stdlib.h>
/**
  * array_iterator- itera un array aplicando una funcion an each elemnt.
  * @array: array input.
  * @size: tamaño del array tipo long unsigned.
  * @action: puntero a funcion.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int b = 0;

	if (array == NULL)
	{
	return;
	}
	if (action == NULL)
	{
		return;
	}
	for (b = 0; b < size; b++)
	{
	action(array[b]);
	}
}
