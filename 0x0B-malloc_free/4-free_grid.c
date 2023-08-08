#include "main.h"
#include <stdlib.h>

/**
 *free_grid - frees 2D grid
 ***grid: size of grid
 *@height: size of grid
 *Return: pointer to grid
 */

void free_grid(int **grid, int height)
{
	int v;

	if (grid == NULL || height == 0)
		return;

	for (v = 0; v < height; v++)
		free(grid[v]);

	free(grid);
}
