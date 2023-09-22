#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Free a list
 * @head: Pointer to head of a given list
 */
void free_list(list_t *head)
{
	while (head->next != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
	free(head->str);
	free(head);
}
