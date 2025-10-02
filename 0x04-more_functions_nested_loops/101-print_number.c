#include "main.h"

/**
 * print_number - A function that prints an integer
 * @n: an integer
 *
 * Return: None
 */
void print_number(int n)
{
	int i = 1;
	int j = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while ((n / i) > 9)
	{
		i *= 10;
	}

	j = i * 10;
	do {
		_putchar((n / i) % (j / i) + '0');
		j /= 10;
		i /= 10;
	} while (i >= 1);
}
