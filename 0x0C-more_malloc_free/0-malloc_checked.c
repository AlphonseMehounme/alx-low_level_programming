#include <stdlib.h>

/**
 * malloc_checked - Allocate memory
 * @b: Size of memory allocation
 * Return: Pointer to the memory
 * Exit with 98 if allocation failed
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
		return (p);
	}
	return (p);
}
