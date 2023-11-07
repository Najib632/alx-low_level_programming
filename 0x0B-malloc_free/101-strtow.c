#include "main.h"
#include <stdio.h>

#define IN	1
#define OUT	0

/**
 * free_tow - frees allocated memory to a 2D array grid
 * @tow: pointer to 2D array to be freed
 * @height: number of rows
 *
 * Return: Nothing
 **/
void free_tow(char **tow, int height)
{
	int i;

	if (tow == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(tow[i]);
	free(tow);
}

/**
 * wcount - counts the number of words in a string
 * @str: string to count words in
 *
 * Return: Number of words (SUCCESSFUL), 0 (FAILURE)
 **/
int wcount(char *str)
{
	int i, state, wordn;

	wordn = 0;
	state = OUT;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (state == IN)
			{
				state = OUT;
				wordn += 1;
			}
		}
		else if (state == OUT)
		{
			state = IN;
		}
		else
		{
		}
	}
	return (wordn);
}

/**
 * strtow - returns a pointer to an array of strings (words)
 * @str: string to be split in words
 *
 * Return: pointer (SUCCESS), NULL (FAILURE)
 **/
char **strtow(char *str)
{
	char **tow;
	int i, j, k, l, m, state = OUT;
	int len;

	if (str == NULL)
		return (NULL);
	len = wcount(str);
	tow = malloc(len + 1 * sizeof(tow));
	if (tow == NULL)
		return (NULL);
	k = -1, j = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (state == IN)
			{
				j++;
				k++;
				state = OUT;
				tow[k] = malloc((j + 1) * sizeof(*str));
				if (tow[k] == NULL)
				{
					free_tow(tow, len);
					return (NULL);
				}
			}
		}
		else if (state == OUT)
		{
			state = IN;
			for (l = i, m = j; str[l - 1] != ' ' && k >= 0 && m >= 0; m--)
				if ((j - m) != j)
					tow[k][j - m] = str[l - m];
				else
					tow[k][j - m] = '\0';
			j = 0;
		}
		else
		{
			j++;
		}
	}
	tow[len] = NULL;
	return (tow);
}
