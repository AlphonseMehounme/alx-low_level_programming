#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Compute list length
 * @h: Head of list
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
