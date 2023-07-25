#include <stdio.h>
#include "main.h"

/**
 * print_array - gsdg
 * @a: edst
 * @n: size
 *
 * Return: fgesdgse
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
		else
			printf("\n");
	}
}
