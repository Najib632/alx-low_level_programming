#include "main.h"

#define MAX_BIT 64

/**
 * get_bit - Returns the value of a bit a given index.
 * @n: number to get bit from
 * @index: index of bit
 *
 * Return: Index (SUCCESSFUL), -1 (FAILURE)
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	for (i = 0; (int)index >= 0 && (int)index < MAX_BIT; n >>= 1, --index)
		i = n & 1;

	return (i);
}
