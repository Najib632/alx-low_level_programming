#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: number to be checked
 *
 * Return: 1 (Success), 0 (Fail)
 **/
int is_prime_number(int n)
{
	if (n == 1)
		return (1);
	else if (n % 2 == 0)
		return (0);
	else
		return (is_prime_number(n - 1));
}
