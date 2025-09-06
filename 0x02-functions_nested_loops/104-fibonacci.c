#include <stdio.h>
#include <limits.h>

/**
 * main - Write a program that prints the first 50 Fibonacci numbers,
 *        starting with `1` and `2`, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int fib, next, m, j;

	next = 1;
	fib = 0;
	for (i = 0; i < 98; i++)
	{
		if (i <= 90)
		{
			fib = fib + next;
			printf("%ld", fib);
			next = fib > 2 ? fib - next : next;
			if ((next + fib) > ULONG_MAX)
			{
				m = fib % 1000;
				j = next % 1000;
				fib = (fib - m) / 1000;
				next = (next - j) / 1000;
			}
		}
		else
		{
			next = (fib + next) + ((m + j) / 1000);
			printf("%lu%lu", next, (m + j) > 1000 ? (m + j) - 1000 : m + j);
			fib = next - fib;
			j = j + m;
			m = j - m;
		}
		if ((i + 1) < 98)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
