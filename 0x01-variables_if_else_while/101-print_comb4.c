#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int hundred, tens, unit;

	for (hundred = '0'; hundred <= '9'; hundred++)
	{
		for (tens = hundred; tens <= '9'; tens++)
		{
			for (unit = tens; unit <= '9'; unit++)
			{
				if (tens != hundred && unit != tens)
				{
					putchar(hundred);
					putchar(tens);
					putchar(unit);
					if (hundred < '7' || tens < '8')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
