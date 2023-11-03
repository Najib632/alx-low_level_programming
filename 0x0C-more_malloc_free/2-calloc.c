#include "main.h"

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

		return (alloc);
}
