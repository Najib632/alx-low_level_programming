#include <stdio.h>
#include <stdlib.h>

#define IN      1
#define OUT     0

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
	int i, j, charc = 0, k, m;
	int len;

	len = wcount(str);
	if (str == NULL || len == 0)
		return (NULL);
	tow = malloc((len + 1) * sizeof(tow));
	if (tow == NULL)
		return (NULL);
	for (i = 0, k = -1; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			charc++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				k++;
				tow[k] = malloc((charc + 1) * sizeof(char));
				if (tow[k] == NULL)
				{
					free_tow(tow, len);
					return (NULL);
				}
				for (j = 0, m = charc; j <= charc; j++, m--)
					if (j < charc)
						tow[k][j] = str[(i + 1) - m];
					else
						tow[k][j] = '\0';
				charc = 0;
			}
		}
	}
	return (tow);
}
