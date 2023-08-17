#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	int *e = array + size - 1;
	int *c = array;

	if (size <= 0)
		return (-1);
	while (array <= e)
	{
		if ((*cmp)(*array))
		{
			return (array - c);
		}

		array++;
	}

	return (-1);
}
