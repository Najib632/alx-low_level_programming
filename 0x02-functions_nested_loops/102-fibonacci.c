#include <stdio.h>

/**
 * main - Write a program that prints the first 50 Fibonacci numbers,
 *        starting with `1` and `2`, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int fib, next;

	next = 1;
	fib = 0;
	for (i = 0; i < 50; i++)
	{
		fib = fib + next;
		printf("%ld", fib);
		if (i + 1 < 50)
		{
			printf(", ");
		}
		next = fib > 2 ? fib - next : next;
	}
	putchar('\n');
	return (0);
}
