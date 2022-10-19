#include<stdio.h>
#include<stdlib.h>
/**
  * create_array- crea array
  * Return: 0.
  * @size:tamaño
  * @c:array.
  */
char *create_array(unsigned int size, char c)
{
	char *ptr;

ptr = malloc(size * sizeof(char));
ptr = &c;
	if (ptr == NULL)
{
	return (NULL);
}
if else(size = 0)
{
		return (NULL);
}
return (ptr);
free(ptr);
return (0);
}
