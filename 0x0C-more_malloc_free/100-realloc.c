#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: memory address
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_mem = NULL;
	unsigned int i;

	new_mem = malloc(new_size);
	if (new_mem == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		return (new_mem);
	}
	if (new_size < old_size)
	{
		free(ptr);
		return (new_mem);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < old_size; ++i)
	{
		((char *)new_mem)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new_mem);
}
