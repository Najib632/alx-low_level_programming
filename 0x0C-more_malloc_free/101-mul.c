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
	int idxr, i, j, k, l, prod, carry;
	char *result = malloc((size1 + size2 + 1) * sizeof(char));

	idxr = prod = carry = 0;
	for (i = 0, l = size2; str2[i]; i++)
	{
		for (j = 0, k = size1; str1[j]; j++, k--)
		{
			prod = (atoi(&str1[k - 1]) * atoi(&str2[l - 1])) + carry;
			carry = prod / 10;
			result[idxr] = prod % 10;
			printf("%d", result[idxr]);
			idxr++;
		}
	}
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
