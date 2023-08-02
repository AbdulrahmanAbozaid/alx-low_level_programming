#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - hdfyhdrft
 * @a: gewst
 * @size: gregter
 *
 * Return: grsegsergf
 */

void print_diagsums(int *a, int size)
{
	int i, s = 0, sum = 0;

	for (i = 0; i < size; i++)
	{
		s += a[i];
		sum += a[size - i - 1];
		a += size;
	}

	printf("%d, ", s);
	printf("%d\n", sum);
}
