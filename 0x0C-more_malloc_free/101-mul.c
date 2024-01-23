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
 * pop - removes a value at an index
 * @ptr: pointer to array
 * @size: size of array
 * @index: index to remove
 *
 * Return: new array
 **/
void *pop(void *ptr, unsigned int size, unsigned int index)
{
	char *popped, *p_ptr;
	unsigned int i, j;

	if (ptr == NULL)
		return (NULL);
	p_ptr = ptr;
	popped = malloc(size * sizeof(char));
	if (popped == NULL)
		return (NULL);
	for (i = 0, j = 0; i <= size; i++)
	{
		if (i != index)
			popped[j++] = p_ptr[i];
	}
	free(p_ptr);
	return (popped);
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
void *multiply(char *str1, char *str2, size_t size1, size_t size2)
{
	int prod, carry, left, right, result;
	int i, j, m, write, size_p = size1 + size2 + 1, fsize = size_p;
	char *answer = malloc(size_p * sizeof(char));

	if (answer == NULL)
		return (NULL);
	if (str1[0] == '0' ||  str2[0] == '0')
	{
		answer[0] = '0', answer[1] = '\0';
		return (answer);
	}
	carry = prod = 0;
	memset(answer, 0, size_p);
	for (i = size2 - 1; i >= 0; --i)
	{
		right = str2[i] - '0';
		for (j = size1 - 1, m = size_p - 2; j >= 0; --j, --m)
		{
			left = str1[j] - '0';
			prod = (left * right) + carry;
			result = prod % 10;
			write = answer[m] == 0 ? result : (answer[m] - '0') + result;
			answer[m] = (write % 10) + '0';
			if (write > 9)
			{
				carry = write / 10;
				write = (answer[m - 1] - '0') + carry;
				answer[m - 1] = (write % 10) + '0';
				if (write > 9)
					answer[m - 2] = (write / 10) + '0';
			}
			carry = prod / 10;
		}
		--size_p;
	}
	if (carry > 0)
		answer[0] = carry + '0';
	else
		answer = pop(answer, fsize - 1, carry);
	return (answer);
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
	char *multiplicand, *multiplier, *product;

	if (ac != 3 || !(is_num_string(av[1])) || !(is_num_string(av[2])))
	{
		printf("Error\n");
		exit(98);
	}

	multiplicand = av[1];
	multiplier = av[2];
	product = multiply(multiplicand, multiplier, strlen(av[1]), strlen(av[2]));
	printf("%s\n", product);
	free(product);
	return (0);
}
