#include "main.h"

/**
 * print_times_table - A function that prints the `n` times table,
 *                     starting with 0.
 * @n: n times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, k, prod, base;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = j * i;
				base = 1;
				for (k = 1; prod / 10 != 0; k++)
				{
					prod /= 10;
					base *= 10;
				}
				for (prod = i * j; k > 0; k--, base /= 10)
				{
					_putchar((prod / base) + '0');
					prod = prod - ((prod / base) * base);
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					if (i * j < 100 && (j + 1) * i < 100)
						_putchar(' ');
					if (i * j < 10 && (j + 1) * i < 10)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
