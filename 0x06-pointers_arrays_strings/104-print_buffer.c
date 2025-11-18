#include "main.h"

/**
 * print_buffer - A function that prints a buffer.
 * @b: buffer to be printed
 * @size: buffer size
 *
 * Return: Nothing.
 */
void print_buffer(char *b, int size)
{
	char b_10[11] = {'\0'};
	int i, j;

	if (size < 1)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		memcpy(b_10, b + i, 10);
		printf("%8x: ", i);
		for (j = 1; j <= 10; j += 2)
		{
			if (i + j - 1 < size)
				printf("%2x%2x ", b_10[j - 1], b_10[j]);
			else
				printf("     ");
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if ((b_10[j] < ' ') || (b_10[j] > '~'))
					putchar('.');
				else
					putchar(b_10[j]);
			}
		}
		putchar('\n');
	}
}
