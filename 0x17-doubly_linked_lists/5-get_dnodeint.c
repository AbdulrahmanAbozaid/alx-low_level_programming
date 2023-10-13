#include "lists.h"

/**
 * get_dnodeint_at_index - gsgsg
 * @head: fafasf
 * @index: fs
 * Return: afasf
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t ctr = 0;

	while (head)
	{
		if (ctr == index)
			return (head);
		head = head->next;
		ctr++;
	}

	return (NULL);
}
