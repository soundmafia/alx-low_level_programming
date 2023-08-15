#include <stdio.h>
#include "dog.h"

/**
 * free_dog - Write a function that frees dogs.
 * @d: the struct dog to be freed
 */

void free_dog(dog_t *d)

{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
