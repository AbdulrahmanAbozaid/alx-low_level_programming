#include "lists.h"

/**
 * add_dnodeint - gsgsg
 * @head: fafasf
 * @n: fsafsd
 * Return: afasf
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL || !head)
		return (node ? node, NULL : NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (!*head)
	{
		*head = node;
		node->next = NULL;
		return (node);
	}
	node->next = *head;
	(*head)->prev = node;
	*head = node;
	return (node);
}
