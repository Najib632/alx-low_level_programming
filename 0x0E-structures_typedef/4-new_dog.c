#include "dog.h"

/**
 * new_dog - creates a dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner name
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
		return (NULL);

	new_dog->name = malloc(sizeof(name) + 1);

	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(owner) + 1);

	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
