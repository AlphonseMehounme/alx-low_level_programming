#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Get a node at a specific index
 * @head: List
 * @index: Index
 *
 * Return: Node
 * NULL if noode not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head != NULL)
	{
		while (index > 0 && head != NULL)
		{
			head = head->next;
			index--;
		}
		if (head == NULL)
		{
			return (NULL);
		}
	}
	return (head);
}
