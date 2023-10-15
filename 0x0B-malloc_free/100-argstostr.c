#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: arg count
 * @av: arg vars
 *
 * Return: pointer (SUCCESS), NULL (FAILURE)
 **/
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, _strlen;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (_strlen = 0, i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			_strlen++;
		_strlen++;
	}
	_strlen++;

	str = malloc(sizeof(char) * _strlen);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*str = av[i][j];
			str++;
		}
		*str = '\n';
		str++;
	}
	return (str);
}
