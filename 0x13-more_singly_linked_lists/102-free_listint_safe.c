#include "lists.h"

/**
 * find_loop_n - fag
 * @head: fag
 *
 * Return: hshs
 */

listint_t *find_loop_n(listint_t *head)
{
	listint_t *pn, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (pn = head; pn != end; pn = pn->next)
			if (pn == end->next)
				return (end->next);
	}
	return (NULL);
}


/**
 * free_listint_safe - fdsfsdf
 * @h: gdsgs
 *
 * Return: ggsdg
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *nxt, *lnode;
	size_t len;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	lnode = find_loop_n(*h);
	for (len = 0; (*h != lnode || loop) && *h != NULL; *h = nxt)
	{
		len++;
		nxt = (*h)->next;
		if (*h == lnode && loop)
		{
			if (lnode == lnode->next)
			{
				free(*h);
				break;
			}
			len++;
			nxt = nxt->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
