#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Add new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: New variable of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = strdup(name);
	dog->age = age;
	dog->owner = strdup(owner);
	return (dog);
}
