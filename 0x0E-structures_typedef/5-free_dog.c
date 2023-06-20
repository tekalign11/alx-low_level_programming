#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * free_dog - frees a struct
 * @d: pointer to the struct
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
