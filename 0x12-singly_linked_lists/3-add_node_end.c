#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - add to list
 * @head: head
 * @str: s
 *
 * Return: ptr
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *pl = malloc(sizeof(list_t));
	list_t *ptl = *head;

	if (pl == NULL)
		return (NULL);

	if (str)
	{
		pl->str = strdup(str);
		if (!pl->str)
		{
			free(pl);
			return (NULL);
		}

		pl->len = _strlen(pl->str);
	}

	if (!(*head))
	{
		*head = pl;
		pl->next = NULL;
		return (pl);
	}
	while (ptl->next)
		ptl = ptl->next;

	pl->next = NULL;
	ptl->next = pl;

	return (pl);
}
