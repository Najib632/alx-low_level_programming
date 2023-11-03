#include "main.h"

/**
 * string_nconcat - The returned pointer shall point to a newly allocated space
 *                  in memory, which contains s1, followed by the first n bytes
 *                  of s2, and null terminated
 * @s1: string to be concatenated to
 * @s2: string being concatenated
 * @n: number of chars to copy
 *
 * Return: pointer (SUCCESS), NULL (FAILURE)
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	concat = malloc((i + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];
	for (j = 0; j <= n; i++, j++)
		if (j != n)
			concat[i] = s2[j];
		else
			concat[i] = '\0';

	return (concat);
}
