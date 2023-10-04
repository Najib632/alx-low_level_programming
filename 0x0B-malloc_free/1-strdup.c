#include "main.h"

/**
 * _strlen - returns length of string
 * @str: string to count
 *
 * Return: int
 **/
int _strlen(char *str)
{
	int i;

	i = 0;
	if (*str == '\0')
		return (i);
	else
		while (str[i] !='\0')
			i++;

	return (i);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 *
 * Return: pointer
 **/
char *_strdup(char *str)
{
	char *dup;
	int i;
	int size_str;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		size_str = _strlen(str + 1);
		dup = malloc(sizeof(char) * size_str);
		for (i = 0; str[i] != '\0'; i++)
			dup[i] = str[i];
	}

	return (dup);
}
