#include "main.h"

/**
 * get_bit - Returns the value of a bit a given index.
 * @n: number to get bit from
 * @index: index of bit
 *
 * Return: Index (SUCCESSFUL), -1 (FAILURE)
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	int i = -1;

	if (index >= MAX_BIT)
		return (i);

	i = (n >> index) & 1;
	return (i);
}
