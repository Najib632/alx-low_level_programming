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

	if (*str1 == '\0' || (*str1 == '\0' && *str2 == '\0'))
		return (NULL);

	size_1 = _strlen(str1), size_2 = _strlen(str2);
	size_str = size_1 + size_2;
	ptr_c = malloc(sizeof(char) * size_str);
	for (i = 0; ptr_c != NULL && i < size_str;)
	{
		for (j = 0; str1[j] != '\0'; i++, j++)
			ptr_c[i] =  str1[j];
		for (j = 0; str2[j] != '\0'; i++, j++)
			ptr_c[i] = str2[j];
	}

	return (ptr_c);
}
