#include "main.h"

/**
 * main - prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: Always 0
 **/
int main(int __attribute((unused)) argc, char *argv[])
{
	int i;

	for(i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}

	_putchar('\n');
	return (0);
}
