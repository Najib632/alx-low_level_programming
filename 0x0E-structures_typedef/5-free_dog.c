#include "dog.h"

/**
 * free_dog - free dogs
 * @d: Dog
 */
void free_dog(dog_t *d)
{
	if (!d)
	{
		return;
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
