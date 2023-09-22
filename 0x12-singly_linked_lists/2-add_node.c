#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - Add a node at the beginning of list
 * @head: Pointer to pointer of head
 * @str: Pointer to string
 *
 * Return: Address of the new element if successful
 * NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

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
	while (*str != '\0')
	{
		len++;
		str++;
	}
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
