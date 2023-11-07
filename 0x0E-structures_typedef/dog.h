#ifndef _STRUCTURES_TYPEDEF_
#define _STRUCTURES_TYPEDEF_

#include <stdlib.h>

/**
 * struct dog - Define a new type struct dog with the following elements
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _STRUCTURES_TYPEDEF_ */
