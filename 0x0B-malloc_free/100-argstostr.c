#include "main.h"
#include <stdio.h>

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
	copy = malloc(i * sizeof(char));
	if (copy == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		copy[j] = str[j];
	return (copy);
}

/**
 *_memset -   fills memory with a constant byte
 *@s: pointer block of memory to fill
 *@b: value to set
 *@n: bytes of the memory
 *Return: dest
 */
char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument variables
 *
 * Return: pointer (SUCCESS), NULL (FAILURE)
 **/
char *argstostr(int ac, char **av)
{
	char *s;
	char *c;
	int i, j, k, strl;

	if (ac < 0 || av == NULL)
		return (NULL);

	strl = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			strl++;
		}
	}

	strl += ac;
	s = malloc(strl * sizeof(char));
	if (s == NULL)
		return (NULL);

	_memset(s, '\0', strl * sizeof(char));
	for (i = 0, k = 0; i < ac; i++)
	{
		c = _strdup(av[i]);
		for (strl = 0; c[strl]; strl++)
			;
		for (j = 0; j <= strl; j++, k++)
			if (!c[j])
				s[k] = '\n';
			else
				s[k] = c[j];
		free(c);
	}
	return (s);
}
