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
		return (NULL);
	if (name != NULL)
	{
		dog->name = strdup(name);
	} else
	{
		dog->name = strdup("(nil)");
	}
	dog->age = age;
	if (owner != NULL)
	{
		dog->owner = strdup(owner);
	} else
	{
		dog->owner = strdup("(nil)");
	}
	return (dog);
}
