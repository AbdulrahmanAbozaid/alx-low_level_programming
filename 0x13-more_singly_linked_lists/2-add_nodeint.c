#include "lists.h"

/**
 * add_nodeint - asd
 * @head: p-h
 * @n: n
 *
 * Return: listint
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!head || !node)
		return (NULL);

	node->next = NULL;
	node->n = n;
	if (*head)
		node->next = (*head);

	*head = node;
	return (node);
}
