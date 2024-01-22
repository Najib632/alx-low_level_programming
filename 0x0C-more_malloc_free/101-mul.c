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
	unsigned int write;
	int i, j, m, size_p = size1 + size2 + 1;
	char *answer = malloc(size_p * sizeof(char));

	carry = 0;
	prod = 0;
	memset(answer, 0, size_p);
	for (i = size2 - 1; i >= 0; --i)
	{
		right = str2[i] - '0';
		for (j = size1 - 1; j >= 0; --j)
		{
			left = str1[j] - '0';
			prod = (left * right) + carry;
			result = prod % 10;
			m = i + j;
			write = answer[m] == 0 ? result : (answer[m] - '0') + result;
			answer[m] = (write % 10) + '0';
			if (write > 9)
				answer[m - 1] = (write / 10) + '0';
			carry = prod / 10;
		}
	}
	printf("%s", answer);
	putchar('\n');
	free(answer);
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
