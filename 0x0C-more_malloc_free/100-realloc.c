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
	int i, e = old_size < new_size ? old_size : new_size;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	c = malloc(new_size);

	for (i = 0; i < e; ++i)
	{
		c[i] = ptr[i];
	}

	free(ptr);
	return (c);
}
