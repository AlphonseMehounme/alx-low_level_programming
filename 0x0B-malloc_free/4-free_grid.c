#include <stdlib.h>

/**
 * free_grid - Function that frees a 2 dimensial grid
 * @grid: Two dimensila grid
 * @height: height
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
