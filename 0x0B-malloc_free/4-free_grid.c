#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free array
 * @grid: array to be freed
 * @height: height of array
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
