#include "main.h"

/**
 * free_grid - frees the allocated memory
 * @grid: Pointer to the allocated memory
 * @height: The number of columns
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
}
