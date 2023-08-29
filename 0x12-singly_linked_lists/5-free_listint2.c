#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	list_t *pl, *ptl;

	if (!head)
		return;

	pl = head;
	while (pl)
	{
		ptl = pl->next;
		free(pl->str);
		free(pl);
		pl = ptl;
	}
}
