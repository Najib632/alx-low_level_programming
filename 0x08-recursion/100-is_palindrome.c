#include "main.h"

/**
 * _strlen_recursion - counts the length of a string
 * @s: string
 *
 * Return: int
 **/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
 * palindrome - return 1 if a string is a palindrome and 0 if not
 * @s: string
 * @start: starting index
 * @end: max length
 *
 * Return: 1(Success), 0 (Fail)
 **/
int palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 *
 * Return: 1 (Success), 0 (Fail)
 **/
int is_palindrome(char *s)
{
	int strlen = _strlen_recursion(s) - 1;

	return (palindrome(s, 0, strlen));
}
