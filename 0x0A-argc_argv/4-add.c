#include "main.h"

/**
 * is_num_string - checks if a string is a number
 * @str: string to be checked
 *
 * Return: 1 (SUCCESS), 0 (FAILURE)
 **/
int is_num_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: Always 0 (SUCCESS)
 **/
int main(int argc, char *argv[])
{
	int sum;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", sum);
	}
	else
	{
		int i;

		for (i = 0; i < argc; i++)
		{
			if (!is_num_string(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
