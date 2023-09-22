#include <stddef.h>
#include "lists.h"

/**
 * list_len - Print the lenght of a list
 * @h: Head of the list
 * Return: Number of element of the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
