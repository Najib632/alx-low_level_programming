#include <stdio.h>

/**
 * _atoi - a function that convert a string to an integer
 * @s: string value that should be converted to an integer
 *
 * Return: Always an int
 */
int _atoi(char *s)
{
	int idx = 0;
	int i = 0;
	int minus = 0;

	while (s[idx] && !(s[idx] >= '0' && s[idx] <= '9'))
	{
		if (s[idx] == '-')
			minus++;
		idx++;
	}
	while (s[idx] && s[idx] >= '0' && s[idx] <= '9')
	{
		i = i * 10 + (s[idx] - '0');
		idx++;
	}
	if (minus % 2 != 0)
		i = -i;
	return (i);
}
