#include <stdlib.h>
#include <string.h>
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
			return (0);
	}
	return (1);
}

/**
 * multiply - multiplies two numbers
 * @str1: multiplicand: left operand
 * @str2: multiplier: right operand
 * @size1: multiplicand string length
 * @size2: multiplier string length
 *
 * Return: Product
 **/
void multiply(char *str1, char *str2, size_t size1, size_t size2)
{
	int prod, carry, left, right, result;
	int i, j, k, l, write, size_p = size1 + size2;
	char *answer = malloc(size_p * sizeof(char));

	carry = 0;
	prod = 0;
	memset(answer, 0, size_p);
	for (i = 0; str2[i]; ++i)
	{
		k = size2 - (i + 1);
		right = str2[k] - '0';
		for (j = 0; str1[j]; ++j)
		{
			l = size1 - (j + 1);
			left = str1[l] - '0';
			prod = (left * right) + carry;
			carry = prod / 10;
			result = prod % 10;
			write = (answer[l + k] - '0') + result;
			answer[l + k] = (write < 9) ? write + '0' : ;
		}
	}
	printf("%s", answer);
	putchar('\n');
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
	char *multiplicand, *multiplier;

	if (ac != 3 || !(is_num_string(av[1])) || !(is_num_string(av[2])))
	{
		printf("Error\n");
		exit(98);
	}

	multiplicand = av[1];
	multiplier = av[2];
	multiply(multiplicand, multiplier, strlen(av[1]), strlen(av[2]));
	return (0);
}
