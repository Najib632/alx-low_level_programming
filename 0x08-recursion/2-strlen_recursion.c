#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string parameter
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		i++;
	}
	else
	{
		return (0);
	}

	return (i);
}
