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
	while (str[i] != '\0')
		i++;
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

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";

	size_1 = _strlen(str1);
	size_2 = _strlen(str2);
	size_str = (size_1 + size_2) + 1;

	ptr_c = malloc(sizeof(char) * size_str);
	if (ptr_c == NULL)
		return (NULL);

	for (i = 0; str1[i]; i++)
		ptr_c[i] = str1[i];

	for (j = 0; str2[j]; i++, j++)
		ptr_c[i] = str2[j];

	ptr_c[i + 1] = str2[j];

	return (ptr_c);
}
