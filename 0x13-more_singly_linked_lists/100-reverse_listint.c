#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Reverse a list
 * @head: Head of the old list
 * Return: Head of the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}
