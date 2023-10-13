#include "main.h"
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: Always int (Success), else NULL (Fail)
 **/
int **alloc_grid(int width, int height)
{
	int **alloc;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	alloc = malloc(sizeof(int *) * height);
	for (i = 0; alloc != NULL && i < height; i++)
	{
		alloc[i] = malloc(sizeof(int) * width);
		if (alloc[i] == NULL)
		{
			while (i >= 0)
			{
				free(alloc[i]);
				i--;
			}
			free(alloc);
			return (NULL);
		}
		else
		{
			for (j = 0; j < width; j++)
				alloc[i][j] = 0;
		}
	}

	return (alloc);
}
