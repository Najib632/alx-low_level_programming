#include <stdio.h>
#include <limits.h>

/**
 * _atoi - a function that convert a string to an integer
 * @s: string value that should be converted to an integer
 *
 * Return: Always an int
 */
int _atoi(char *s)
{
	unsigned int i = 0;
	int idx = 0;
	int minus = 0;

	while (s[idx] && !(s[idx] >= '0' && s[idx] <= '9'))
	{
		if (s[idx] == '-')
			minus++;
		idx++;
	}
	while (s[idx] && s[idx] >= '0' && s[idx] <= '9')
	{
		if (i > INT_MAX / 10)
		{
			return (minus % 2 != 0 ? INT_MIN : INT_MAX);
		}
		i = i * 10 + (s[idx] - '0');
		idx++;
	}
	if (minus % 2 != 0)
		i = -i;
	return (i);
}
