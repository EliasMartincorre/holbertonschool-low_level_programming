#include"main.h"
#include <stdlib.h>
/**
  *alloc_grid- Puntero a matriz de dos dimensiones.
  *@width: ancho.
  *@height: alto.
  *Return: puntero al inicio del array.
  */
int **alloc_grid(int width, int height)
{
	int i, b;
	int **ptr;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	ptr = (int **) malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	ptr[i] = (int *) malloc(width * sizeof(int));
	if (ptr[i] == NULL)
	{
		for (b = 0; b < i; b++)
		{
			free(ptr[i]);
		}
		free(ptr);
		return (NULL);
	}
	for (b = 0; b < width; b++)
	{
		ptr[i][b] = 0;
	}
	}
	return (ptr);
}
