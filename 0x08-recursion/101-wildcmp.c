#include "main.h"

/**
 * wildcmp - a function that compares two strings
 * @s1: doesn't contain wildcard
 * @s2: contains wildcard
 *
 * Return: On Success 1, On Failure 0
 **/
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
			return (1);
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
		return (0);
	}
	if (*s1 != *s2)
		return (0);
	return (wildcmp(s1 + 1, s2 + 1));
}
