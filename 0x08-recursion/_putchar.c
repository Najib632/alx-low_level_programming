#include <string.h>
#include <unistd.h>
/**
 * _putchar - write a character to standard output
 * @s: character to be printed
 * Return: Always 1 (Success), else -1 (Fail)
 */
int _putchar(char c)
{
    return (write(1, &c, strlen(c)));
}