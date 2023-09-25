#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initialize a struct dog instance
 * @d: Pointer to the struct dog
 * @name: Name to give the dog
 * @age: Age
 * @owner: Owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
