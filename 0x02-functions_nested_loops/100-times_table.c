#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: parameter that reprenst the n times table to be printed
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, k;

	if (n < 0 || n > 15)
	{
		if (n < 0)
			_putchar('\n');
		else if (n > 15)
			_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
		for (k = 0; k <= n; k++)
		{
			if ((i * k) <= 9)
			{
				printf("%d", i * k);

				if (!(k == n))
				{
				if ((i * (k + 1)) > 9)
					printf(",  ");
				else
					printf(",   ");
				}
				else
				{
				}
			}
			else if ((i * k) >= 10)
			{
				if ((i * k) < 100)
				{
					printf("%d", i * k);

					if (k != n)
					{
					if ((i * (k + 1)) > 99)
						printf(", ");
					else
						printf(",  ");
					}
					else
					{
					}
				}

				else if ((i * k) > 99)
				{
					printf("%d", i * k);

					if (!(k == n))
						printf(", ");
				}
			}
		}
		putchar('\n');
	}
	}
}

