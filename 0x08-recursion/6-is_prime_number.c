#include "main.h"

/**
 * is_prime_number - checks if a number is a prime
 * @n: number to be verified
 *
 * Return: 1 success, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2 || n - 1 == 2)
		return (1);
	else
		return ((n % 2 != 0) ? 1 : is_prime_number(n - 1));
}
