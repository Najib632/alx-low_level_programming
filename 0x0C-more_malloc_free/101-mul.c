#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * is_num_string - checks if a string is a number
 * @str: string to be checked
 *
 * Return: 0 (SUCCESS), 1 (FAILURE)
 **/
int is_num_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
	}
	return (0);
}

/**
 * put_result - diplays result using putchar
 * @result: product
 *
 * Return: Nothing
 **/
void put_result(long long int result)
{
	char num[1024]; //large enough to hold result
	int i = 0;

	if (result == 0)
	{
		putchar('0');
		putchar('\n');
		return;
	}

	while (result > 0)
	{
		num[i++] = (result % 10) + '0';
		result /= 10;
	}

	while (i > 0)
	{
		i--;
		putchar(num[i]);
	}
	putchar('\n');
}

/**
 * multiply - multiplies two numbers
 * @multiplicand: left operand
 * @multiplier: right operand
 *
 * Return: Product
 **/
long long int multiply(char *multiplicand, char *multiplier)
{
	long long int n1 = atoi(multiplicand);
	long long int n2 = atoi(multiplier);

	return (n1 * n2);
}

/**
 * main - entry point
 * @ac: arg count
 * @av: arg vector
 *
 * Return: Always 0 (SUCCESS)
 **/
int main(int ac, char *av[])
{
	long long int product;

	if (ac != 3)
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');
		exit(98);
	}
	if (!is_num_string(av[1]) || !is_num_string(av[2]))
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');
		exit(98);
	}

	product = multiply(av[1], av[2]);
	put_result(product);
	return (0);
}
