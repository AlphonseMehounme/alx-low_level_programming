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
	char *name2, *owner2;

	name2 = malloc(strlen(name) + 1);
	owner2 = malloc(strlen(owner) + 1);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL || name2 == NULL || owner2 == NULL)
	{
		free(name2);
		free(owner2);
		free(dog);
		return (NULL);
	}
	strcpy(name2, name);
	strcpy(owner2, owner);
	dog->name = name2;
	dog->age = age;
	dog->owner = owner2;
	return (dog);
}
