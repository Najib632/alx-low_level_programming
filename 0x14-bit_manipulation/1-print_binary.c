#include "main.h"
#include <unistd.h>

/**
 * zero_once - prints zero once
 * @n: number
 *
 * Return: nothing
 **/
void zero_once(unsigned long int n)
{
	if (n > 0)
		zero_once(n >> 1);

	printf("%lu", n & 1);
}

/**
 * print_binary - Prints the binary representation of a number.
 * @n: number to represent in binary
 *
 * Return: nothing
 **/
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");
	}
	else
	{
		zero_once(n);
	}
}
