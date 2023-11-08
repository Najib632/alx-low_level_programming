#ifndef _STRUCTURES_TYPEDEF_
#define _STRUCTURES_TYPEDEF_

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

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
/**
 * dog_t - Typedef for struct dog
 **/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _STRUCTURES_TYPEDEF_ */
