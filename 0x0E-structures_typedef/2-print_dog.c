#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print a variable of type struct dog
 * @d: Pointer to the variable
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		} else
		{
			printf("Name: (nil)\n");
		}
		if (d->age)
		{
			printf("Age: %f\n", d->age);
		} else
		{
			printf("Age: (nil)\n");
		}
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		} else
		{
			printf("Owner: (nil)\n");
		}
	}
}