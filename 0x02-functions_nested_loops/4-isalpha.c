#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: parameter to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
