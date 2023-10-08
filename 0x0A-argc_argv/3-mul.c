#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: Always 0
 **/
int main(int argc, char *argv[])
{
	int multiplicand;
	int multiplier;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	multiplicand = atoi(argv[1]);
	multiplier = atoi(argv[2]);
	printf("%d\n", multiplicand * multiplier);
	return (0);
}
