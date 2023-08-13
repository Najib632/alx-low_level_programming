#include "main.h"

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
