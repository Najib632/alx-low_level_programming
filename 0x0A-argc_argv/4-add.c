#include "main.h"

/**
 * aNum - verify if string is a number
 * @str: str to be checked
 *
 * Return: 0 (SUCCESS), 1 (FAILURE)
 **/
int aNum(char *str)
{
	int i;
	int _strlen;

	_strlen = strlen(str);
	for (i = 0; i < _strlen; i++)
	{
		if (isdigit(str[i]) == 0)
			return (1);
	}
	return (0);
}

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
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (aNum(argv[i]) == 0)
		{
			j = atoi(argv[i]);
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

