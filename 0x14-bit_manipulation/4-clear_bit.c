#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: pointer to a value
 * @index: position of a bit
 *
 * Return: 1 (SUCCESS), -1 (FAILURE)
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= MAX_BIT)
		return (-1);

	if (*n != 0)
		*n ^= (1 << index);
	return (1);
}
