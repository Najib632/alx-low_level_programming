#include "main.h"

/**
 * radical_expr - solves the radical expression
 * @n: radicand
 * @i: index
 *
 * Return: root of a number
 **/
int radical_expr(int n, int i)
{
	int sqr = i * i;

	if (sqr == n)
		return (i);
	else if (sqr > n)
		return (-1);
	else
		return (radical_expr(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: radicand
 *
 * Return: root of a number
 **/
int _sqrt_recursion(int n)
{
	int index = 1;

	return (radical_expr(n, index));
}
