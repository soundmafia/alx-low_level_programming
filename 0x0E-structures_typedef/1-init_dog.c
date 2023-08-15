#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Write a function that initialize a
 * variable of type struct dog
 * @d: pointer to struct dog for initialization
 * @name: name of initialization
 * @age: age of initialization
 * @owner: owner of initialzation
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
