#include "main.h"
#include <stdio.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing
 **/
void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}

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

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 **/
int main(void)
{
	int **grid;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, 6, 4);
	printf("\n");
	grid[0][3] = 98;
	grid[3][4] = 402;
	print_grid(grid, 6, 4);
	return (0);
}
