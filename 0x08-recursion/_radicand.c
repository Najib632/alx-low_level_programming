#include "main.h"

/**
 * _radicand - returns the square root of a radical
 * @n: Radicand
 * @i: index
 *
 * Return: square root of a number
 */
int _radicand(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i < n)
		return (_radicand(n, i + 1));
	else
		return (i);
}
