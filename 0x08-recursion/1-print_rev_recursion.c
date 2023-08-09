#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string parameter
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	bool initial = false;

	if (initial != true)
	{
		initial = true;
i		int j = sizeof(s) - 1;
	}

	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s + j);
		j--;
	}
	else if (*s == '\n')
	{
		_putchar('\n');
	}
}
