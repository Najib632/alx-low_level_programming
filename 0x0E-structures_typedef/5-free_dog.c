#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: poiter to a dog_t type
 *
 * Return: Nothing
 **/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
