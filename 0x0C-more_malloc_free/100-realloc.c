#include <stddef.h>
#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocate memory
 * @ptr: Old memory
 * @old_size: Old size
 * @new_size: New size
 * Return: Ptr with the new size or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, min = old_size;
	void *p;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	} else if (new_size == old_size)
	{
		return (ptr);
	} else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
	} else
	{
		p = malloc(new_size);
		if (p != NULL)
		{
			if (new_size < old_size)
			{
				min = new_size;
			}
			for (i = 0; i < min; i++)
			{
				*((char *)p + i) = *((char *)ptr + i);
			}
			free(ptr);
			return (p);
		}
		return (NULL);
	}
	return (NULL);
}
