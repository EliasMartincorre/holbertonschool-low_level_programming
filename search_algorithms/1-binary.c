#include"search_algos.h"
/**
  * binary_search - binary search.
  * @array: array location.
  * @size: size of array.
  * @value: valor buscado
  * Return: index or -1.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, middle = size / 2;
	int index = -1;
	
	if (array == NULL)
	{
		return (index);
	}

print_array(array, size, i);
	for ( ; i < size;)
	{
		if (array[middle] > value)
		{
		size = middle - 1;
		middle = ((size + i) / 2);
		print_array(array, size, i);
		}
		else if (array[middle] < value)
		{
			i = middle + 1;
			middle = ((size + i) / 2);
			print_array(array, size, i);
		}
		else if (array[middle] == value)
		{
			i++;
			print_array(array, size, i);
			index = middle;
			break;
		}
	}
		return (index);
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 * @i: kkkk.
 */
void print_array(const int *array, size_t size, size_t i)
{
	if (size == i)
	{
		i--;
	}
	printf("Searching in array: ");
while (array && i < size)
{
if (i < size - 1)
{
printf("%d, ", array[i]);
}
else
{
printf("%d", array[i]);
}
++i;
}
printf("\n");
}
