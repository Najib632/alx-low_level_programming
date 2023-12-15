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

	*n &= ~(1UL << index);
	return (1);
}

/**
 * flip_bits - Returns the number of bits you need
 *             to flip to get from one number to another
 * @n: number from
 * @m: number to
 *
 * Return: number of bits
 **/
int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits = 0, index;

	for (index = 0; (1UL << index) <= n; ++index)
	{
		if (get_bit(m, index) == 1 && get_bit(n, index) == 0)
		{
			set_bit(&n, index);
			bits++;
		}
		else if (get_bit(m, index) == 0 && get_bit(n, index) == 1)
		{
			clear_bit(&n, index);
			bits++;
		}
	}

	return (bits);
}
