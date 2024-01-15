#include "main.h"

/**
 * free_grid - frees allocated memory to a 2D array grid
 * @grid: pointer to 2D array to be freed
 * @height: number of rows
 *
 * Return: Nothing
 **/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
