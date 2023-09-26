#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Add node at the end of list
 * @head: Pointer to list
 * @n: n of the new node
 *
 * Return: Address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *last;

	last = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = newnode;
	return (newnode);
}
