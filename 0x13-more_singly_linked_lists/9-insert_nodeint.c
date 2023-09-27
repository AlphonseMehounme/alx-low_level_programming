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
	int count = idx;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
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
		newh = newh->next;
		count--;
	}
	if (count == 0)
	{
		newnode->next = newh;
		newh->next = newnode;
		return (newnode);
	}
	free(newnode);
	return (NULL);
}
