#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - hfedsfhdfs
 * @min: gregsdh
 * @max: gesgs
 * Return: gdsfgdsfgsd
 */

int *array_range(int min, int max)
{
	int i, j = 0;
	int *a;

	if (min > max)
		return (NULL);
	a = malloc((max - min) + 1);

	if (!a)
		return (NULL);

	for (i = min; i <= max; i++)
		a[j++] = i;

	return (a);
}
