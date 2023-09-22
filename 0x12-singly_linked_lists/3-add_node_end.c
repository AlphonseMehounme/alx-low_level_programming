#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * add_node_end - Add a node at the end of a list
 * @head: Pointer to the head
 * @str: Pointer to string to copy
 *
 * Return: Address of the new node if successful
 * NULL if not
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;

	last = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (new);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
