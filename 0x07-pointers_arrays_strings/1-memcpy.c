#include "main.h"

/**
 *_memcpy - a function that copies memory area.
 *@dest: content is to be copied
 *@src: Source of data to be copied
 *@n: bytes of the memory
 *
 *Return: Buffer with copied content
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
