#include "main.h"

/**
 * str_concat - concatenates two strings
 * Description: The returned pointer should point to a newly allocated space in
 *              memory which contains the contents of s1, followed by the
 *              contents of s2, and null terminated
 * @str1: string to be concatinated to
 * @str2: string to concatinate
 *
 * Return: pointer (SUCCESS), NULL (FAIL)
 **/
char *str_concat(char *str1, char *str2)
{
	char *concat;
	int i;
	int j;
	int s_conc;

	if (str1 == NULL && str2 == NULL)
		return (NULL);

	for (i = 0; str1[i]; i++)
		;
	for (j = 0; str2[j]; j++)
		;

	s_conc = i + j + 1;
	concat = malloc(s_conc * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; str1[i]; i++)
		concat[i] = str1[i];
	for (j = 0; j <= s_conc; i++, j++)
		if (str2[j])
			concat[i] = str2[j];
		else
			concat[i] = '\0';

	return (concat);
}
