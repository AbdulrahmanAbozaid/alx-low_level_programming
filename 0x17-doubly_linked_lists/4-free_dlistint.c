#include "lists.h"

/**
 * free_dlistint - gsgsg
 * @head: fafasf
 * Return: afasf
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)
		return;
	tmp = head->next;
	while (head)
	{
		free(head);
		head = tmp;
		if (tmp)
			tmp = tmp->next;
	}
}
