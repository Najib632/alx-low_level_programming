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
	printf("Name: %s\n", !(d->name) ? "(nil)" : d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", !(d->owner) ? "(nil)" : d->owner);
}
