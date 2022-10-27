#include"main.h"
#include <stdlib.h>
/**
  *alloc_grid- Puntero a matriz de dos dimensiones.
  *@width: ancho.
  *@height: alto.
  *Return: puntero al inicio del array.
  */
void free_grid(int **grid, int height);

int **alloc_grid(int width, int height)
{
	int i, b;
	int **ptr;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	ptr = calloc(height, sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = calloc(width, sizeof(int));
		if (ptr[i] == NULL)
		{
			for (b = 0; b < i; b++)
			{
				free(ptr[b]);
			}
			free(ptr);
			return (NULL);
		}
	}
	return (ptr);
}
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
