#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: str
 * @s2: str
 *
 * Return: 1 (Success), 0 (Fail)
 **/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == *s1)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '\0')
		return (0);
	else if (*s1 == '\0' && *s2 != '*')
		return (0);
	else if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	else if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	else
		return (0);
}
