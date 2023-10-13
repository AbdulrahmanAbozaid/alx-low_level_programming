#include "lists.h"

/**
 * sum_dlistint - gsgsg
 * @head: fafasf
 * Return: afasf
 */

int sum_dlistint(dlistint_t *head)
{
	int ctr = 0;

	while (head)
	{
		ctr += head->n;
		head = head->next;
	}

	return (ctr);
}
