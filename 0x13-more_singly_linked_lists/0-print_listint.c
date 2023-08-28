#include "lists.h"

/**
 * print_listint - prints.
 * @h: heaD.
 *
 * Return: size
 */

size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}

	return (s);
}
