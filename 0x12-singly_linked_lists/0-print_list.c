#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints a list
 * @h: Pointer to list
 * Return: Number of nodes of the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
