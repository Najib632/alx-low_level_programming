#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	const char *message =
				"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t length;

	for (length = 0; message[length]; length++)
		;

	write(2, message, length);
	return (1);
}
