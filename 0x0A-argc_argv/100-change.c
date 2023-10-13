#include "main.h"

/**
 * main - prints the minimum number of coins to
 *        make change for an amount of money
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: Always 0 (SUCCESS)
 **/
int main(int argc, char *argv[])
{
	int cents;
	int change;

	if (argc != 2)
	{
		printf("Error\n"); /* Display: Error followed by newline character*/
		return (1); /* Tells the operating system how the program exited */
	}
	else
	{
		cents = atoi(argv[1]);
		change = 0;
		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
			change += 1;
		}
	}
	printf("%d\n", change);
	return (0);
}
