#include "main.h"

/**
 * free_grid - This function frees a 2 dimensional grid
 * previously created by alloc_grid function
 * @grid: Parameter 1
 * @height: Parameter 2
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
		free(grid[c]);
	}
	free(grid);
}
