#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string parameter
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion((s + strlen(s)) - 1);
	}
	else if (*s == '\n')
	{
		_putchar('\n');
	}
}
