#include "lists.h"

/**
 * free_listint - list
 * @head: h
 *
 * Return: no
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;

		free(node);
	}
}
