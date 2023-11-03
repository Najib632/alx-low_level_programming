#include "main.h"

/**
 * malloc_checked - Returns a pointer to the allocated memory
 * @b: number of bytes
 *
 * Return: pointer (SUCCESS), NULL (FAILURE)
 **/
void *malloc_checked(unsigned int b)
{
	void *check;

	check = malloc(b);
	if (check == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (check);
}
