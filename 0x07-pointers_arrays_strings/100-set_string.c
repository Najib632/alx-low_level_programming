#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * set_string - A function that sets the value of a pointer to a char.
 * @s: string buffer
 * @to: set string to
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	if (!s)
	{
		*s = malloc(strlen(to) + 1);
		if (!(*s))
		return;
	}
	*s = to;
}
