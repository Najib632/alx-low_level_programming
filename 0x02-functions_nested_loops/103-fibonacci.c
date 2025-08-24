#include <stdio.h>

/**
 * main - A program that finds and prints the sum of the
 *        even-valued terms, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int fib, next, sum;

	next = 1;
	fib = 0;
	sum = 0;
	while (fib < 4000000)
	{
		fib = fib + next;
		if (fib % 2 == 0)
		{
			sum += fib;
		}
		next = fib > 2 ? fib - next : next;
	}
	printf("%ld\n", sum);
	return (0);
}

