#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to dog type
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog name
 *
 * Return: Nothing
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d || !name || !age || !owner)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
