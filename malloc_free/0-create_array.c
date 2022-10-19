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
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}
	buffer = (char *) malloc(size * sizeof(c));
	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;
		for (; position < size;)
		{
			*(buffer + position) = c;
			position++;
		}
		return (buffer);
		}
}
