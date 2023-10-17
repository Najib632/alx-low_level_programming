#include "main.h"

/**
 * wordc - count of words in a string
 * @str: string with words to count
 *
 * Return: number of words contained in the string
 **/
int wordc(char *str)
{
	int i, count;

	for (i = 0, count = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	return (count);
}

/**
 * getw - extract words from a string
 * @str: string to extract from
 * @cidx: current position of the word
 *
 * Return: pointer
 **/
char *getw(char *str, int *cidx)
{
	char *word;
	int i, j, _strlen;

	for (i = *cidx; str[i] == ' '; i++)
		;
	for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
		;
	_strlen = j - i;
	word = malloc((_strlen + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	for (j = 0; j < _strlen; j++)
		word[j] = str[i + j];
	word[j] = '\0';
	*cidx = i + _strlen;
	return (word);
}

/**
 * strtow - splits a string into words
 * @str: str to be checked
 *
 * Return: string (SUCCESS), NULL (FAILURE)
 **/
char **strtow(char *str)
{
	int i, j, _strlen;
	char **sptr;

	if (str == NULL || *str == '\0')
		return (NULL);

	_strlen = wordc(str);
	if (_strlen == 0)
		return (NULL);

	sptr = malloc((_strlen + 1) * sizeof(char *));
	if (sptr == NULL)
		return (NULL);

	for (i = 0, j = 0; i < _strlen; i++)
	{
		sptr[i] = getw(str, &j);
		if (sptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(sptr[j]);
			free(sptr);
			return (NULL);
		}
	}
	sptr[i] = '\0';
	return (sptr);
}
