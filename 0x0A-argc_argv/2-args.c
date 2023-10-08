#include "main.h"

/**
 * main - prints all arguments that it receives
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: Always 0
 **/
int main(int argc, char **argv)
{
	int i;
	int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			printf("%c", argv[i][j]);
		_putchar('\n');
	}
	return (0);
}
