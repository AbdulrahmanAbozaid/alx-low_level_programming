#include "lists.h"

/**
 * _strlen - string length
 * @s: string.
 *
 * Return: length
 */

int _strlen(char *s)
{
	int ln = 0;

	if (!s)
		return (0);
	while (*s++)
		ln++;
	return (ln);
}


/**
 * print_list - print linked list elemets
 * @h: head ptr
 *
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		len++;
	}

	return (len);
}
