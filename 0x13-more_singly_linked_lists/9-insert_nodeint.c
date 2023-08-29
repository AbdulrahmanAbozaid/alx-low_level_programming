#include "lists.h"

/**
 * insert_nodeint_at_index - fss
 * @head: fas
 * @idx: ffse
 * @n: fafa
 *
 * Return: fafaf
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nod, newNod = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !newNod)
		return (NULL);

	newNod->n = n;
	newNod->next = NULL;

	if (!idx)
	{
		newNod->next = *head;
		*head = newNod;
		return (newNod);
	}

	nod = *head;
	while (nod)
	{
		if (i == idx - 1)
		{
			newNod->next = nod->next;
			nod->next = newNod;
			return (newNod);
		}
		i++;
		nod = nod->next;
	}
	free(newNod);
	return (NULL);
}
