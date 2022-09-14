#include "main.h"

/**
 * _islpha - checks if number is an alphabet
 * @c: parameter to be checked
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
	_putchar('\n');
}
