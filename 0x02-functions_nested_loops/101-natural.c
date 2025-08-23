#include <stdio.h>

/**
 * main - A program that computes and prints the sum of all the multiples
 *        of 3 or 5 below 1024 (excluded), followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum, i, natural;

	sum = 0;
	i = 0;
	natural = 0;
	while (i < 1024)
	{
		natural = i +  1;
		sum += natural % 3 == 0 || natural % 5 == 0 ? natural : 0;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
