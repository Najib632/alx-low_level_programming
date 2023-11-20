#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a newline
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Nothing
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
		return;

	va_start(args, n);
	for (i = n; i > 0; --i)
		if (i != 1)
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d\n", va_arg(args, int));
}
