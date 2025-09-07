#include <stdio.h>
#include <limits.h>

/**
 * main - Write a program that prints the first 50 Fibonacci numbers,
 *        starting with `1` and `2`, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, m, j;
	unsigned long int fib, next;

	next = 1;
	fib = 0;
	for (i = 0; i < 91; i++)
	{
		fib = fib + next;
		printf("%ld", fib);
		next = fib > 2 ? fib - next : next;
		if ((i + 1) < 98)
		{
			printf(", ");
		}
	}
	m = fib % 1000;
	j = next % 1000;
	fib = (fib - m) / 1000;
	next = (next - j) / 1000;
	do {
		m = m + j;
		j = m - j;
		fib = (fib + next) + (m / 1000);
		printf("%lu%03d", fib,  (m % 1000));
		next = (fib - next) - (m / 1000);
		m = m % 1000;
		i++;
		if ((i + 1) < 99)
		{
			printf(", ");
		}
	} while (i < 98);
	putchar('\n');
	return (0);
}
