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
	{}
	else
	{
		printf("%s\n", !(d->name) ? "(nil)" : d->name);
		printf("%f\n", d->age);
		printf("%s\n", !(d->owner) ? "(nil)" : d->owner);
	}
}
