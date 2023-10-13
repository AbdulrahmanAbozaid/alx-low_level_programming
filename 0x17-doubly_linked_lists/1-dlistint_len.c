#include "lists.h"

/**
 * dlistint_len - gsgsg
 * @h: fafasf
 * Return: afasf
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t ctr = 0;

	while (h)
	{
		h = h->next;
		ctr++;
	}

	return (ctr);
}
