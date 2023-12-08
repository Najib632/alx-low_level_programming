#include "main.h"
#include <stdio.h>

#define IN	1
#define OUT	0

/**
 * free_to - frees allocated memory to a 2D array grid
 * @tow: pointer to 2D array to be freed
 * @height: number of rows
 *
 * Return: Nothing
 **/
void free_to(char **tow, int height)
{
	int i;

	if (tow == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(tow[i]);
	free(tow);
}

/**
 * count - counts the number of words in a string
 * @str: string to count words in
 *
 * Return: Number of words (SUCCESSFUL), 0 (FAILURE)
 **/
int count(char *str)
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
			}
		}
		else if (state == OUT)
		{
			state = IN;
			wordn += 1;
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
	int i, j, k, state = OUT, wrdc = count(str), chrc = 0;

	tow = malloc((wrdc + 1) * sizeof(tow));
	tow[wrdc] = NULL;
	for (i = 0, wrdc = -1; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (state == IN)
			{
				state = OUT;
				chrc = 0;
			}
		}
		else if (state == OUT)
		{
			state = IN;
			wrdc++;
		}
		if (state == IN)
		{
			chrc++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				tow[wrdc] = malloc((chrc + 1) * sizeof(char));
				if (tow[wrdc] == NULL)
				{
					free_to(tow, wrdc);
					return (NULL);
				}
				for (j = 0, k = chrc; j <= chrc; ++j, --k)
					if (j < chrc)
						tow[wrdc][j] = str[(i + 1) - k];
					else
						tow[wrdc][j] = '\0';
			}
		}
	}
	return (tow);
}
