#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Print doudly linked list nodes
 * @h: Head of the list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
