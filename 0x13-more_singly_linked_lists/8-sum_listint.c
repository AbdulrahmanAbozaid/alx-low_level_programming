#include "lists.h"

/**
 * sum_listint - fafs
 * @head: fasg
 *
 * Return: gdssdg
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
