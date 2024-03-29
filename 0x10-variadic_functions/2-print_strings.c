#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a newline
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: Nothing
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		char *str = va_arg(args, char *);

		printf("%s", (str != NULL) ? str : "(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	putchar('\n');

	va_end(args);
}
