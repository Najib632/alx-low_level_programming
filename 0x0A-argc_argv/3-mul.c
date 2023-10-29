#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: Always 0 (SUCCESS)
 **/
int main(int argc, char *argv[])
{
	int multiplicand;
	int multiplier;
	int product;

	if (!(argc > 2))
	{
		printf("Error\n");
		return (1);
	}
	multiplicand = atoi(argv[argc - 1]);
	multiplier = atoi(argv[argc - 2]);
	product = multiplicand * multiplier;
	printf("%d\n", product);

	return (0);
}
