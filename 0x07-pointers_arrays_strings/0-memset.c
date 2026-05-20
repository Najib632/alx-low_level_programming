#include "main.h"

/**
 *_memset - a function that fills memory with a constant byte.
 *@s: buffer memory
 *@b: constant byte character
 *@n: no. of memory bytes
 *
 *Return: Buffer filled with constant byte character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
