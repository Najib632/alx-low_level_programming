#include <stdio.h>

__attribute__((constructor))
/**
 * foo - displays a string before main function is called
 *
 * Return: Nothing.
 **/
void foo(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
