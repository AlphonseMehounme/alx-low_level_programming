#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Insert node at index
 * @head: List
 * @idx: Index
 * @n: New node n
 *
 * Return: Address of the new node
 * or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *oldh, *newh = *head;
	listint_t *newnode;
	int count = idx;

	if (newh == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (newh != NULL && count > 0)
	{
		oldh = newh;
		newh = newh->next;
		count--;
	}
	if (count == 0)
	{
		newnode->next = newh;
		oldh->next = newnode;
		return (newnode);
	}
	return (NULL);
}
