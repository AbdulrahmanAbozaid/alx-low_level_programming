#include <stdio.h>
#include "main.h"

/**
 * reverse_array - sge
 * @a: twest
 * @n: esdt
 *
 * Return: gwsedgtestg
 */

void reverse_array(int *a, int n)
{
	int i, j = n / 2, tmp;

	for (i = 0, j = (n - 1); i < j; ++i, --j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
