#include "main.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Prints _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar";
	int count = strlen(c);
	int i;

	for (i = 0; i < count; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
