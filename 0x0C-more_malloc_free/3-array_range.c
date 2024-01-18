#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: smallest value of the array
 * @max: maximum value of the array
 *
 * Return: pointer (SUCCESS), NULL (FAILURE)
 **/
int *array_range(int min, int max)
{
	int *array;
	int i;
	int j;

	if (min > max)
		return (NULL);

	array = malloc((1 + (max - min)) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0, j = min; i <= (max - min); i++)
		array[i] = j++;

	return (array);
}
