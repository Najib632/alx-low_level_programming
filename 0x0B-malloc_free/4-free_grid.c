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
	if (grid != NULL && height == 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
