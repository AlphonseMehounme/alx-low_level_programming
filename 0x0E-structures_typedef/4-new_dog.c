#include "dog.h"
#include <string.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = strdup(name);
	dog->age = age;
	dog->owner = strdup(owner);
	return (dog);
}
