#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string parameter
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int j = strlen(s);

	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s + j);
		j--;
	}
	else
	{
		_putchar('\n');
	}
}
