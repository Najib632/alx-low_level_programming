#include "main.h"

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
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; k <= strl; j++, k++)
		{
			s[k] = av[i][j];
			if (!s[k])
				s[k] = '\n';
		}
	}
	s[k++] = '\0';
	return (s);
}
