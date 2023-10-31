#include "main.h"

/**
 * create_array - creates an array of chars,
 *                and initializes it with a specific char
 * @size: number of memory bytes
 * @c: char to intialize array with
 *
 * Return: Pointer (SUCCESS), NULL (FAILURE)
 **/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size != 0)
		array = malloc(sizeof(char) * size);
	else
		return (NULL);

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		if (i ==  size)
			array[i] = '\0';
		else
			array[i] = c;

	return (0);
}
