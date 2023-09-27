#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Delete node at index
 * @head: List
 * @index: Index
 *
 * Return: 1 if successful
 * -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *oldh, *newh = *head;
	unsigned int count = index;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = newh->next;
		free(newh);
		return (1);
	}
	while (newh != NULL && count > 0)
	{
		oldh = newh;
		newh = newh->next;
		count--;
	}
	if (count == 0)
	{
		oldh->next = newh->next;
		free(newh);
		return (1);
	}
	free(newh);
	return (-1);
}
