#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char.
 * @s: string buffer
 * @to: set string to
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	if (!s || !to)
		return;
	*s = to;
}
