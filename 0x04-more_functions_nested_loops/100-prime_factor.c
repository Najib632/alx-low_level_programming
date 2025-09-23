#include <stdio.h>
#include <math.h>

/**
 * main - Finds the largest prime number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long i, n = 612852475143;

	for (i = 1; i < sqrt(n); i++)
	{
		if (n % i == 0)
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
