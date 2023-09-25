#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Newtype for dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
