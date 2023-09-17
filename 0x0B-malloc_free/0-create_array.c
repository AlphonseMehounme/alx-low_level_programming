#include <stdlib.h>

/**
 * create_array - Create an array of char
 * @size: Size of the array
 * @c: char to initialize the array with
 *
 * Return: Pointer to the array or NULL if its fails
 */
char *create_array(unsigned int size, char c)
{
	char *p = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (p);
	}
	p = malloc(sizeof(char) * size);
	if (!p)
	{
		return (p);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
