#include"function_pointers.h"
#include<stdio.h>
/**
  * int_index - search intergers on array.
  * @array: pointer to array.
  * @size: size of array.
  * @cmp: function to search intergers.
  * Return: index wich cmp found intergers.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	 int i;

if (array == NULL)
{
	return (0);
}
if (size <= 0)
{
	return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
	return (i);
}
}
return (i);
}
