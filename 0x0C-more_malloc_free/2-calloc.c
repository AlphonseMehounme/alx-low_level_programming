#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocate memory for nmemb elements of size size
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (p);
	}
	memset(p, 0, nmemb * size);
	return (p);
}
