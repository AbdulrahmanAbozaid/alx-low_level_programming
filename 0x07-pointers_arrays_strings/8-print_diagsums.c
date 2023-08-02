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
	int i, j, sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j << size; j++)
		{
			sum += a[i][j];
		}
	}

	printf("%d", sum);
}
