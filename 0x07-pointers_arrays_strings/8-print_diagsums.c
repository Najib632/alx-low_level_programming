#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of
 * the two diagonals of a square matrix of integers
 * @a: pointer to an integer
 * @size: size of array
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int T = (size * size) - 1; /* Total vectors */
	int R = size - 1; /* Anti-Diagonal */
	int L = T / R; /* Diagonal */
	int diagsum = 0;
	int diagsum2 = 0;
	int i;

	if (a == NULL)
		return;
	if (size <= 1)
		return;
	for (i = L - L; i <= T; i += L)
	{
		diagsum += a[i];
	}
	for (i = R; i <= (T - R); i += R)
	{
		diagsum2 += a[i];
	}
	printf("%d, %d\n", diagsum, diagsum2);
}
