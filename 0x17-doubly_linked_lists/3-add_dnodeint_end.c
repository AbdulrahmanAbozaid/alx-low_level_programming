#include "lists.h"

/**
 * add_dnodeint_end - gsgsg
 * @head: fafasf
 * @n: fsafsd
 * Return: afasf
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *head;

	if (node == NULL || !head)
		return (node ? free(node), NULL : NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (!*head)
	{
		*head = node;
		node->next = NULL;
		return (node);
	}
	while (tmp->next)
		tmp = tmp->next;

	node->next = NULL;
	node->prev = tmp;
	tmp->next = node;
	return (node);
}
