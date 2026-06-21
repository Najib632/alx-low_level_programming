#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: string mesure
 *
 * Return: Length of String.
 **/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
 * go - a function to help
 * @s: buffer
 * @n: buffer length
 * @i: index
 *
 * Return: Nothing
 **/
int go(char *s, int n, int i)
{
	int n2 = n / 2;

	if (s[i] != s[n - i])
	{
		return (0);
	}
	if (i == n2)
		return (1);
	return (go(s, n, i + 1));
}

/**
 * is_palindrome - a function that returns 1 if a string
 *                 is a palindrome and 0 if not
 * @s: word
 *
 * Return: On Success 1, On Failure 0.
 **/
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	return (go(s, n - 1, 0));
}
