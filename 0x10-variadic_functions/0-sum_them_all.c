#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: total count of numbers to be summed
 *
 * Return: sum
 **/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += (int)va_arg(args, const unsigned int);

	va_end(args);

	return (sum);
}
