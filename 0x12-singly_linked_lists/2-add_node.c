#include "lists.h"
#include <stdlib.h>

/**
 * add_node - add to list
 * @head: head
 * @str: s
 *
 * Return: ptr
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *pl = malloc(sizeof(list_t));

	if (pl == NULL || !head)
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

	pl->next = *head;
	*head = pl;


	return (pl);
}
