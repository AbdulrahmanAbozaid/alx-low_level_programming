#include "lists.h"

/**
 * delete_dnodeint_at_index - gsgsg
 * @head: fafasf
 * @index: fsafsd
 * Return: afasf
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = NULL;
	unsigned int i = 0;

	if (!*head || !head)
		return (-1);

	if (index == 0)
	{
		node = *head;
		(*head) = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			node->prev->next = node->next;
			if (node->next)
				node->next->prev = node->prev;
			free(node);
			return (1);
		}

		node = node->next;
		i++;
	}

	return (-1);
}
