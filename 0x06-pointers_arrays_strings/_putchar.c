#include <unistd.h>
/**
 * _putchar - writes character to stdout
 * @c: character to print
 *
 * Return: 1 when successful
 * otherwise -1, is returned and errno is set
 * appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
