#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int unit, tens;

	for (tens = '0'; tens < '9'; tens++)
	{/* ascii number for 0 is 48 and 57 for 9 */
		for (unit = tens; unit < ':'; unit++)
		{
			if (unit != tens)
			{
				putchar(tens);
				putchar(unit);
				if (tens < '8')
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
