#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - sdfdsgds
 * @array: faga
 * @size: fagsg
 * @cmp: ffsdfd
 *
 * Return: gdgsgds
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}

	return (-1);
}
