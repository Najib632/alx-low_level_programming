#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: pointer to number.
 * @index: position to set bit.
 *
 * Return: 1 (SUCCESS), -1 (FAILURE)
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= MAX_BIT)
		return (-1);

	*n |= (1 << index);

	return (1);
}
