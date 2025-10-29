#include "main.h"

/**
 * rot13 - a simple letter substitution cipher that replaces
 *         a letter with the 13th letter after it in the Latin alphabet.
 * @s: string to be encoded
 *
 * Return: cipher text
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] >= 'A' && s[i] <= 'M' ? s[i] + 13 : s[i] - 13;
		}
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] >= 'a' && s[i] <= 'm' ? s[i] + 13 : s[i] - 13;
		}
	}
	return (s);
}
