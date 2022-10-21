#include"main.h"
#include<stdlib.h>
/**
  * free_grid- funcion que libera la memoria dinamica array[a][b].
  *@grid: funcion que devuelve matriz 2d.
  *@height: cantidad de punteros de la matriz.
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
