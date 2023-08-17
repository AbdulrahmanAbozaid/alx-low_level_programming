#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_iterator - gfdgds
 * @array: fsgd
 * @size: gegdsgs
 * @action: fsafs
 *
 * Return: dgdsgdsgds
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *i = array + size - 1;

	if (array && action && size)
		for (; array <= i; array++)
			action(*array);
}
