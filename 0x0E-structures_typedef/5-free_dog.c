#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free dog_t element
 * @d: DPointer to dog_t variable
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
			d->name = NULL;
		}
		if (d->owner != NULL)
		{
			free(d->owner);
			d->owner = NULL;
		}
		free(d);
		d = NULL;
	}
}
