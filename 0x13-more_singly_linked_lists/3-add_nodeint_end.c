#include "lists.h"

/**
 * add_nodeint_end - add
 * @head: fafas
 * @n: num
 *
 * Return: list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *pn;

	if (!head || !node)
		return (NULL);
	node->next = NULL;
	node->n = n;

	if (!*head)
		*head = node;
	else
	{
		pn = *head;
		while (pn->next)
			pn = pn->next;
		pn->next = node;
	}

	return (node);
}
