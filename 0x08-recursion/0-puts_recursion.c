#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a newline
 * @s: string parameter
 * Return - void
 */
void _puts_recursion(char *s)
{
    (*s != '\0') ? _putchar(s), _puts_recursion(s + 1)
                 : _putchar('\0');
}