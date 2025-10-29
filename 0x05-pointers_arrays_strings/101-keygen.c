#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 *
 * Return: 0 Always.
 */
int main(void)
{
	int rchr;
	int remainder;
	int subtotal;
	int count;
	int T = 0xAD4;
	int i;

	srand((unsigned int) time(NULL));
	rchr = ((rand() % (126 - 32 + 1)) + 32);
	count = T / rchr;
	subtotal = count * rchr;
	remainder = T - subtotal;

	for (i = 0; i < count; i++)
		printf("%c", rchr);
	printf("%c\n", remainder);
	return (0);
}

