#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int left, right;

	for (left = 0; left < 100; left++)
	{
		for (right = 0; right < 100; right++)
		{
			if (right > left)
			{
				putchar((left / 10) + '0');
				putchar((left % 10) + '0');
				putchar(' ');
				putchar((right / 10) + '0');
				putchar((right % 10) + '0');
				if (left < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
