#include "lists.h"

/**
 * free_list - frees a list
 * @head: head
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *pl;

	if (!head)
		return;

	while (head)
	{
		pl = head->next;
		free(head);
		head = pl;
	}
	free(pl);
}
