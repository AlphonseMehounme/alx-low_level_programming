#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Compute the lenght of a list
 * @h: Pointer to head of the list
 * Return: Number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
