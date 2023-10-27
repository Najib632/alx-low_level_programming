#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: parameter to be checked
 *
 * Return: if n is negative return n * -1
 * otherwise return n
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
