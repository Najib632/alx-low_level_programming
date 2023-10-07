#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid (number of columns)
 * @height: height of the grid (number of  rows)
 *
 * Return: pointer
 **/
int **alloc_grid(int width, int height)
{
	int **alloc;
	int *grid;

	if (width == 0 || height == 0)
		return (NULL);
	alloc = malloc(sizeof(grid) * height);
	grid = malloc(sizeof(int) * (height * width));
	if (alloc != NULL && grid != NULL)
	{
		int i;

		for (i = 0; i < height; i++)
		{
			alloc[i] = grid;
			grid += width;
		}
		return (alloc);
	}
	else
	{
		return (NULL);
	}
}
