#include <stdlib.h>
#include "dog.h"
#include "main.h"

/**
 * init_dog - about my dog
 * @d: the to be initialised
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: a structure that is use to collect data of my dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

