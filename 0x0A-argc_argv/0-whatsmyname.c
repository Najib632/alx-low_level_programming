#include "main.h"

/**
 * main - prints its name, followed by a newline
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: Always 0 (SUCCESS)
 **/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
