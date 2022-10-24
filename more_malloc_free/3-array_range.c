#include"main.h"
#include<stdlib.h>
/**
  * array_range- diferencia entre maximum and minimum.
  *	@min: value minimum inside of array.
  * @max: value maximum inside array.
  * Return: pointer to new array.
  */
int *array_range(int min, int max)
{	int i = 0, a = 0;
	int *ptr;

if (min > max)
{
return (NULL);
}
ptr = malloc(((max - min) + 1) * sizeof(int));
if (ptr == NULL)
{
return (NULL);
}
a = ((max - min) + 1);
for (i = 0; i <= a; i++, min++)
{
	ptr[i] = min;
}
return (ptr);
}
