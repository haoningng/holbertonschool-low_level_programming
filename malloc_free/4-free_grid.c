#include <stdlib.h>

/**
 * free_grid - free 2 dimensional grid previously created by alloc_grid
 * @grid: 2d grid previously created
 * @height: height of the grid
 *
 * Return: Nothing
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
