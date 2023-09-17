#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: A pointer to the struct dog to initialize.
 * @name: The name to initialize.
 * @age: The age to initialize.
 * @owner: The owner to initialize.
 *
 * Description: This function initializes a struct dog with the given values.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

