#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 *
 * Return: pointer (SUCCESS), NULL (FAILURE)
 **/
char *_strdup(char *str)
{
	char *copy;
	int i;
	int j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;
	copy = malloc((i + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);

	i++;
	for (j = 0; j <= i; j++)
		copy[j] = str[j];
	return (copy);
}
