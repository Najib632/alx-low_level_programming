#include "main.h"

/**
 * _islpha - checks if number is an alphabet
 * @c: parameter to be checked
 *
 * Return: if c is an alphabet return 1,
 * otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
	_putchar('\n');
}
