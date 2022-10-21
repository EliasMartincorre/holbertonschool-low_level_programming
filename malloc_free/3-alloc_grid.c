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
	int i;
	int **prueba;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	prueba = (int **) malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
	prueba[i] = (int *) malloc(width * sizeof(int));
	}
	if (prueba == NULL)
	{
	return (NULL);
	}
	return (prueba);
}
