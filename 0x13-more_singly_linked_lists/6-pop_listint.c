#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Delete first node of listint_t
 * @head: List
 * Return: n of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *current_head = *head;
	listint_t *next_head;
	int n = 0;

	if (current_head != NULL)
	{
		next_head = current_head->next;
		n = current_head->n;
		free(current_head);
		*head = next_head;
	}
	return (n);
}
