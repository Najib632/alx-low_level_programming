#include "main.h"

/**
 * pal_check - really checks if a string is a palindrome or not
 * @s: string to be checked
 * @start: beginning of string count
 * @end: end of string count
 *
 * Return: 1 (Success) else 0 (fail)
 **/
int pal_check(char *s, int start, int end)
{
	if (s[start] == s[end] && start != end / 2)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (pal_check(s, start++, end--));
}

/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: word to be checked
 *
 * Return: returns 1 on success and 0 otherwise
 **/
int is_palindrome(char *s)
{
	int start = 0, end = strlen(s) - 1;

	return (pal_check(s, start, end));
}
