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
	if (size == 0)
	{
		return (NULL);
	}
	else if (c == '\0')
	{
		return (NULL);
	}
	else
	{
		char *ptr_c = malloc(sizeof(char) * size);
		int i = 0;

		for (i = 0; ptr_c != NULL && i < size; i++)
		{
			ptr_c[i] = c;
			if (i == (size - 1))
				ptr_c[i] = '\0';
		}

		return (ptr_c);
	}
}
