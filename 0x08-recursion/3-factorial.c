#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number that will have its factorial returned
 *
 * Return: Factorial of a number
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
