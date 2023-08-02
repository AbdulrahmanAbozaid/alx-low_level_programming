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
	int **p = &a;

	for (i = 0; i < size; i++, p++)
	{
		for (j = 0; j < size; j++)
		{
			sum += p[i][j];
		}
	}

	printf("%d", sum);
}
