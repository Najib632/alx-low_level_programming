#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to dog type
 *
 * Return: Nothing
 **/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("%s\n", !(d->name) ? (nil) : d->name);
	printf("%s\n", !(d->age) ? (nil) : d->age);
	printf("%s\n", !(d->owner) ? (nil) : d->owner);
}
