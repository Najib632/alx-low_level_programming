#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 *          to the function
 * Return: Nothing
 **/
void print_all(const char * const format, ...)
{
	int i = 0, d = 0;
	char c, *s;
	float f;
	va_list args;

	va_start(args, format);
	while (format[d])
	{
		switch (format[d])
		{
			case 'c':
				c = (char)va_arg(args, int);
				printf("%c", c);
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s", (s != NULL) ? s : "(nil)");
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%i", i);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				break;
			default:
				break;
		}
		d++;
		if (format[d] != '\0' && (format[d] == 'c' || format[d] == 's' ||
			format[d] == 'i' || format[d] == 'f'))
			printf(", ");
	}
	putchar('\n');
	va_end(args);
}
