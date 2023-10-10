#include "main.h"

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: Always 0
 **/
int main(int argc, char *argv[])
{
	int sum;
	int i;
	int j;
	if (argc < 2)
	{
		printf("%d\n", 0);
		return (1);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		j = atoi(argv[i]);
		if (j != 0)
		{
			sum += j;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

