#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Print a list
 * @head: List
 * Return: Number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	void *addr = &head;

	while (head != NULL)
	{
		printf("[%p] %d\n", addr, head->n);
		count++;
		head = head->next;
	}
	return (count);
}
