#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: str that will have its length counted
 *
 * Return: length of str
 **/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}


