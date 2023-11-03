#include "main.h"

/**
 * _memset -   fills memory with a constant byte
 * @s: pointer block of memory to fill
 * @b: value to set
 * @n: bytes of the memory
 *
 * Return: dest
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 *           and returns a pointer to the allocated memory.
 * @nmemb: number of memory bytes
 * @size: size of data
 *
 * Return: pointer (SUCCESS), NULL (FAILURE)
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
		void *alloc;

		if (nmemb == 0 || size == 0)
			return (NULL);

		alloc = malloc(nmemb * size);
		if (alloc == NULL)
			return (NULL);

		_memset(alloc, 0, nmemb * size);
		return (alloc);
}
