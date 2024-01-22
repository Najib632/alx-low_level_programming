#include "dog.h"

/**
 * _strlen - counts the length of a string
 * @str: str to count the length
 *
 * Return: length of str
 **/
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to a dog type (SUCCESS), NULL (FAILURE)
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int namesize, ownsize, i;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	namesize = _strlen(name);
	dog->name = malloc((namesize + 1) * sizeof(char));
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	ownsize = _strlen(owner);
	dog->owner = malloc((ownsize + 1) * sizeof(char));
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= namesize; i++)
		dog->name[i] = name[i];
	for (i = 0; i <= ownsize; i++)
		dog->owner[i] = owner[i];
	dog->age = age;

	return (dog);
}
