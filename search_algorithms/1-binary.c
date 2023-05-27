#include "search_algos.h"

/**
 * binary_search - Performs a binary search on a given array
 *
 * @array: The array to perform the search on
 * @size: Size of the array we're searching
 * @value: Value we're searching for
 *
 * Return: Index where value was found
*/
int binary_search(int *array, size_t size, int value)
{
int superior = size - 1, low = 0, medio = 0, i = 0;
if (!array)
{
	return (-1);
}
while (array[low] <= array[superior])
{
	medio = (low + superior) / 2;
	printf("Searching in array: ");
	for (i = low; i <= superior; i++)
		{
		if (i < superior)
		{
			printf("%d, ", array[i]);
		}
		else
		{
			printf("%d", array[i]);
		}
	}
	printf("\n");
	if (value > array[medio])
	{
		low = medio + 1;
	}
	if (value < array[medio])
	{
		superior = medio - 1;
	}
	if (value == array[medio])
	{
		return (medio);
	}
}
return (-1);
}
