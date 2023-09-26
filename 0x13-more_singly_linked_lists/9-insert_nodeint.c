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
	listint_t *newh = *head;
	listint_t *newnode;

	if (newh == NULL)
	{
		return (NULL);
	}
	while (newh->next != NULL && idx > 1)
	{
		newh = newh->next;
		idx--;
	}
	if (idx == 1 || idx == 0)
	{
		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
		{
			return (NULL);
		}
		if (idx == 1)
		{
			newnode->n = n;
			newnode->next = newh->next;
			newh->next = newnode;
			return (newnode);
		}
		if (idx == 0)
		{
			newnode->n = n;
			newnode->next = newh;
			newh = newnode;
			return (newnode);
		}
	}
	return (NULL);
}
