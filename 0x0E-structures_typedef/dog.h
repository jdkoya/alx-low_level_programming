#ifndef DOG_H
#define DOG_H
#include "dog.h"

/**
 * struct dog - about my dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: a structure that is use to collect data of my dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
