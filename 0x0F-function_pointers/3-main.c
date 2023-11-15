#include "3-calc.h"
#include <stdio.h>

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: argument variables
 *
 * Return: Always 0 (SUCCESS)
 **/
int main(int argc, char *argv[])
{
	if (!(argc > 3))
	{
		printf("Error\n");
		exit(98);
		return (1);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
		return (1);
	}
	if ((atoi(argv[3]) == 0) && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
		return (1);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
