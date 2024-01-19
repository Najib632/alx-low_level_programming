#include <stdlib.h>
#include <string.h>

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
	void *newptr = malloc(new_size);
	unsigned int copy_size = old_size < new_size ? old_size : new_size;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (newptr == NULL)
		return (NULL);


	if (copy_size)
		memcpy(newptr, ptr, copy_size);

	if (old_size > new_size)
		free(ptr);
	else
		free(ptr);

	return (newptr);
}
