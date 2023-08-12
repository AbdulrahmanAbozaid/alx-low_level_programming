#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - rhfdhfdh
 * @ptr: tewtwest
 * @old_size: gewtgewsdgt
 * @new_size: ewtews
 *
 * Return: sgtsdtgstgs
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *c;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		c = malloc(new_size);
		if (c == NULL)
			return (NULL);
		return (c);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	c = malloc(new_size);

	if (c == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; ++i)
	{
		*((char *)p + i) = *((char *)ptr + i);
	}

	free(ptr);
	return (c);
}
