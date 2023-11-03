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

	if (b <= 0)
		return (NULL);

	check = malloc(b);
	if (check == NULL)
		return (NULL);

	return (check);
}
