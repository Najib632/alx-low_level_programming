#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %llu byte(s)\n", (long long)sizeof(char));
	printf("Size of an int: %llu byte(s)\n", (long long)sizeof(int));
	printf("Size of a long int: %llu byte(s)\n", (long long)sizeof(long int));
	printf("Size of a long long int: %llu byte(s)\n", (long long)sizeof(long long int));
	printf("Size of a float: %llu byte(s)\n", (long long)sizeof(float));
	return (0);
}
