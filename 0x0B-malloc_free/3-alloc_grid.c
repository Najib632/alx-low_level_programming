#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: now of columns
 * @height: now of rows
 *
 * Return: pointer (SUCCESS), NULL (FAILURE)
 **/
int **alloc_grid(int width, int height)
{
	int **alloc;
	int *grid;

	if (width == 0 || height == 0)
		return (NULL);

	alloc = malloc(height * sizeof(grid));
	if (alloc == NULL)
		return (NULL);

	for ()
		;
	return (alloc);
}
