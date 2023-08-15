#ifndef _DOG_H_
#define _DOG_H_

#include <stddef.h>

/**
 * struct dog - Dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner name
 *
 * Description: Defines a new type dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* _DOG_H_ */
