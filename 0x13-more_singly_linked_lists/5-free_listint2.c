#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Free listint_t
 * @head: List to free
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
