#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n1, n2, fn, efn;

	n1 = 1;
	n2 = 2;
	fn = efn = 0;
	while (fn <= 4000000)
	{
		fn = n1 + n2;
		n1 = n2;
		n2 = fn;
		if ((n1 % 2) == 0)
		{
			efn += n1;
		}
	}
	printf("%ld\n", efn);
	return (0);
}
