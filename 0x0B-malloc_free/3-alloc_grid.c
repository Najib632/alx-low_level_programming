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
	int i;

	if (width == 0 || height == 0)
		return (NULL);

	alloc = malloc(height * sizeof(alloc));
	if (alloc == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		alloc[i] = malloc(width * sizeof(i));
		if (alloc[i] == NULL)
		{
			for (; i >= 0; i--)
				free(alloc[i]);
			free(alloc);
			return (NULL);
		}
	}

	return (alloc);
}
