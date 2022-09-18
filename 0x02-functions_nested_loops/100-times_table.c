#include "main.h"
#include <stdio.h>
/**
 * time_table_format - Prints the time table
 * with an arranged format
 * @j: represents i
 * @l: represents k
 * @n: represents n
 * Return: void
 */
void time_table_format(int j, int l, int n)
{
	if ((j * l) <= 9)
	{
		printf("%d", j * l);

		if (l != n)
		{
			if ((j * (l + 1)) > 9)
				printf(",  ");
			else
				printf(",   ");
		}
	}
	else if ((j * l) >= 10)
	{
		if ((j * l) < 100)
		{
			printf("%d", j * l);

			if (l != n)
			{
				if ((j * (l + 1)) > 99)
					printf(", ");
				else
					printf(",  ");
			}
		}
		else if ((j * l) > 99)
		{
			printf("%d", j * l);

			if (l != n)
				printf(", ");
		}
	}
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: parameter that reprenst the n times table to be printed
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
		for (k = 0; k <= n; k++)
		{
			time_table_format(i, k, n);
		}
		putchar('\n');
		}
	}
}

