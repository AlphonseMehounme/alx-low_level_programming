#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Add a new node at the begining of list
 * @head: Head of the list
 * @n: Value of the new node
 *
 * Return: Address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if(new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	head->prev = new;
	new->next = head;
	new->prev = NULL;
	head = new;
	return (new);
}
