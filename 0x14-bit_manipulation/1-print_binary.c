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
	if (n >> 1 > 0)
		zero_once(n >> 1);

	putchar((n & 1) ? '1' : '0');
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
		putchar('0');
	}
	else
	{
		zero_once(n);
	}
}
