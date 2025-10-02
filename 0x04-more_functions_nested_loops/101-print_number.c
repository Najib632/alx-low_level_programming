#include "main.h"

/**
 * print_number - A function that prints an integer
 * @n: an integer
 *
 * Return: None
 */
void print_number(int n)
{
	unsigned int i = 1;
	unsigned int h;

	if (n < 0)
	{
		_putchar('-');
		h = -n;
	}
	else
	{
		h = 1 * n;
	}

	while ((h / i) > 9)
	{
		i *= 10;
	}

	do {
		_putchar((h / i) + '0');
		h %= i;
		i /= 10;
	} while (i >= 1);
}
