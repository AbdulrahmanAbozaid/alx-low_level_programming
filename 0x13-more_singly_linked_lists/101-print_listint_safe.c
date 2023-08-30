#include "lists.h"

/**
 * _realloc - fsaga
 * @head: fsfs
 * @size: fafa
 * @ele: safsa
 *
 * Return: gdsgsd
 */

const listint_t **_realloc(const listint_t **head, size_t size, const listint_t *ele)
{
	const listint_t **list;
	size_t i;

	list = malloc(size * sizeof(listint_t *));
	if (list == NULL)
	{
		free(head);
		exit(98);
	}

	for (i = 0, i < size - 1; i++)
		list[i] = head[i];
	list[i] = ele;
	free(head);
	return (list);
}


/**
 * print_listint_safe - gdsgdsg
 * @head: fsgsd
 *
 * Return: gsdgdsg
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, n = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (n);
			}
		}

		n++;
		list = _realloc(list, n, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	free(list);
	return (n);
}
