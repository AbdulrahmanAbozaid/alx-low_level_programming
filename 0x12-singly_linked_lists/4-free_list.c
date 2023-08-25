#include "lists.h"

/**
 * free_list - frees a list
 * @head: head
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *pl, *ptl;

	if (!head)
		return;

	pl = head;
	while (pl)
	{
		ptl = node->next;
		free(pl->str);
		free(pl);
		pl = ptl;
	}
}
