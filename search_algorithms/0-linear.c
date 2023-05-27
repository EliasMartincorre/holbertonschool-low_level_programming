#include"search_algos.h"
/**
  * linear_search - Search linear
  * @array: point of the first elemento of the array.
  * @size: size of array.
  * @value: value to will be found.
  * Return: index of the element equal value. or -1.
  */
int linear_search(int *array, size_t size, int value)
{
size_t i;
int b = 0;

	for (i = 0; i < size; i++)
	{
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if  (value == array[i])
			{
			b = i;
			break;
			}
	}
	if (b == 0)
	{
		return (-1);
	}
	else
	{
return (b);
	}
}

