#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of the main function
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: Always 0 (SUCCESS)
 **/
int main(int argc, char *argv[])
{
	int i, number_of_bytes;
	unsigned char *addr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(argv[1]);
	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	addr = (unsigned char *)main;
	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%02x", addr[i]);
		if (i == number_of_bytes - 1)
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
