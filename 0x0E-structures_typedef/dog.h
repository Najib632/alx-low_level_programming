#ifndef _DOG_H_
#define _DOG_H_

#include <stddef.h>
#include <stdio.h>

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
};
/* dog_t - Typedef for struct dog */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* _DOG_H_ */
