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
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz\n";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm\n";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; input[j]; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
