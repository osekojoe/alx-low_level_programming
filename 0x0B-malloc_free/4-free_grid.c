#include "holberton.h"
#include <stdlib.h>

/**
* free_grid - frees a 2d grid created by the alloc_grid function.
* @grid: pointer to the grid to be freed
* @height: height of grid
*
* Return: void
*/
void free_grid(int **grid, int height)
{
	if (grid == 0 || height <= 0)
		return;
	while (height--)
		if (grid[height])
			free(grid[height]);
	free(grid);
}
