#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - it free up the grid
 * @grid: the address of the grid
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
