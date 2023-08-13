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

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: radical
 *
 * Return: Natural square root of a number, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_radicand(n, 1));
	}
}
