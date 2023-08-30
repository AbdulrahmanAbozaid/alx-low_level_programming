#include "lists.h"

/**
 * reverse_listint - safa
 * @head: g
 *
 * Return: fafs
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *tmp = NULL;

	if (!head || !*head)
		return (NULL);

	node = *head;
	*head = NULL;
	while (node)
	{
		tmp = node->next;
		node->next = *head;
		*head = node;
		node = tmp
	}
	return (*head);
}
