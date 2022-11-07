#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_grid - function to free memory
 * @grid: pointer to grid of int type
 * @heigth: int type
 * Return: clean up memory
 */

void free_grid(int **grid, int heigth)
{
	int y;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (y = 0; y < heigth; y++)
	{
		free(grid[y]);
	}
	free(grid);
}
