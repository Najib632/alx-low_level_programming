#include "main.h"

/**
 * wildcmp - a function that compares two strings
 * @str1: doesn't contain wildcard
 * @str2: contains wildcard
 *
 * Return: On Success 1, On Failure 0
 **/
int wildcmp(char *str1, char *str2)
{
	if (*str1 != *str2)
	{
		if (*str2 == '*')
		{
			if (*(str1 + 1) != *(str2 + 1))
			{
				if (*(str2 + 1) == '*' || *(str1 + 1) == '\0' ||
					(*(str2 + 2) == '*' && *(str2 + 1) == *str1))
					return (wildcmp(str1, ++str2));
				else
					return (wildcmp(++str1, str2));
			}
			else
				return (wildcmp(++str1, ++str2));
		}
		if (*str2 != '*')
			return (0);
	}
	if (*str2 == '\0' && *str1 == '\0')
		return (1);
	return (wildcmp(++str1, ++str2));
}
