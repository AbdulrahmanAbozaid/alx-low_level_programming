#include "lists.h"

/**
 * insert_dnodeint_at_index - gsgsg
 * @h: fafasf
 * @idx: fsafsd
 * @n: fafsd
 * Return: afasf
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int ct = 0;
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;

	if (node == NULL || !h)
		return (node ? free(node), NULL : NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (!*h)
	{
		return (NULL);
	}
	tmp = *h;
	if (idx == 0)
	{
		node->next = tmp;
		if (tmp->next)
			tmp->next->prev = node;
		tmp = node;
		return (node);
	}
	while (tmp)
	{
		if (ct == idx - 1)
		{
			node->next = tmp->next;
			node->prev = tmp;
			if (tmp->next)
				tmp->next->prev = tmp;
			tmp->next = node;
			return (node);
		}
		ct++;
		tmp = tmp->next;
	}

	return (NULL);
}
