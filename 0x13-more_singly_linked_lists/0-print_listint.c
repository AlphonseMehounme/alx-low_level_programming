#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Print a list
 * @h: Pointer to the head of list
 * Return: Number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
