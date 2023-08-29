#include "lists.h"

/**
 * get_nodeint_at_index - ff
 * @head: fsaf
 * @index: f
 *
 * Return: sfsdf
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	int i = 0;

	if (!head)
		return (NULL);

	node = head;

	while (node && i < index)
	{
		node = node->next;
	}

	if (i < index - 1)
		return (NULL);

	return (node);
}
