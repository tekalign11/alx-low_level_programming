#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes the struct dog
 * @d: pointer to the struct
 * @name: pointer to name of the dog
 * @age: age of the dog
 * @owner: pointer to owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
