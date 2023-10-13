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

	while (str[i] != '\0')
		i++;

	i += 1;
	return (i);
}

/**
 * str_concat - concatenates two strings
 * @str1: start concat
 * @str2: continue concat
 *
 * Return: pointer
 **/
char *str_concat(char *str1, char *str2)
{
	int size_str, size_1, size_2;
	int i, j;
	char *ptr_c;

	size_1 = 0, size_2 = 0;

	size_str = (size_1 + size_2) - 1;
	ptr_c = malloc(sizeof(char) * size_str);
	if (ptr_c != NULL)
	{
		for (j = 0; j < size_1; j++)
			if (str1[j] != '\0')
				ptr_c[j] = str1[j];
			else
				ptr_c[j] = (str1[j] == '\0') ? '\0' : str1[j];

		for (i = 0; i <= size_2; i++, j++)
			if (*str1 != '\0')
				ptr_c[j] = str2[i];
			else
				ptr_c[i + 1] = str2[j];
	}
	else
	{
		return (NULL);
	}

	return (ptr_c);
}
