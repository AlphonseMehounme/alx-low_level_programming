#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Sum of data of nodes
 * @head: List
 * Return: Sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
