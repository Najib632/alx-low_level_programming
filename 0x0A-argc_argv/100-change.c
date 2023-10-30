#include "main.h"

/**
 * main - prints the minimum number of coins to
 *        make change for an amount of money
 * @argc: argument count
 * @argv: argument value
 *
 * Return: Always 0 (SUCCESS)
 **/
int main(int argc, char *argv[])
{
	int change;
	int money;

	change = 0;
	money = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (money <= 0)
	{
		printf("%d\n", change);
	}
	else
	{
		while (money > 0)
		{
			if (money >= 25)
				money -= 25;
			else if (money >= 10)
				money -= 10;
			else if (money >= 5)
				money -= 5;
			else if (money >= 2)
				money -= 2;
			else if (money >= 1)
				money--;
			change++;
		}
		printf("%d\n", change);
	}
	return (0);
}
