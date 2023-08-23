#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: word to be checked
 *
 * Return: returns 1 on success and 0 otherwise
 **/
int is_palindrome(char *s)
{
	if (*s != '\0')
	{
		return ((*s == is_palindrome(s + 1)) ? 1 : 0);
	}
	else
	{
		return (0);
	}
}