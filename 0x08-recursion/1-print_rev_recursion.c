#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string parameter
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;
	int j = strlen(s);
	if (*s != '\0' && *s != '\n')
	{
		_putchar(*s);
		_print_rev_recursion(s + (j - i));
		i++;
	}
	else
	{
		_putchar('\n');
	}
}
