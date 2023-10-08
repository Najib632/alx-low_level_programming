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
	int multiplicant;
	int multiple;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	multiplicant = atoi(argv[argc - 1]);
	multiple = atoi(argv[argc]);
	printf("%d\n", multiplicant * multiple);
	return (0);
}
