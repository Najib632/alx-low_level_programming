#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: binary number.
 *
 * Return: the converted number
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv, i, pow;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; ++i)
		;
	for (pow = conv = 0; b[pow]; ++pow, --i)
	{
		if (b[i - 1] == '0' || b[i - 1] == '1')
			conv |= (b[i - 1] == '1') ? (1 << pow) : (0 << pow);
		else
		{
			conv = 0;
			return (conv);
		}
	}

	return (conv);
}
