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

	for (node = head; node && i < index; node = node->next, i++)
		;

	return (node);
}
