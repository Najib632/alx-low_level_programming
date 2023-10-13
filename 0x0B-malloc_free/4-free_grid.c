#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid to free
 * @height: number of rows
 *
 * Return: Nothing
 **/
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	if (grid == NULL || height <= 0)
		return;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
