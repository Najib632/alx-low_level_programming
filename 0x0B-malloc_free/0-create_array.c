#include "main.h"

/**
 * create_array - Returns a pointer to an array of chars
 * @size: size of dynamic alloc array
 * @c: char to initialize the block addr
 *
 * Return: pointer
 **/
char *create_array(unsigned int size, char c)
{
	char *ptr_c;
	unsigned int i;

	if (size == 0)
		return (NULL);
	else if (c == '\0')
		return (NULL);
	else
		ptr_c = malloc(sizeof(char) * size);

	for (i = 0; ptr_c != NULL && i < size; i++)
	{
		ptr_c[i] = c;
	}

	return (ptr_c);
}
