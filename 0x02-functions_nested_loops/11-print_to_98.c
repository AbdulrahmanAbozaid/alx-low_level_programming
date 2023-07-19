#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints from n => 98
 * @n: number
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	int tmp = n;

	if (tmp > 98)
		for (; tmp > 98; tmp--)
			printf("%d, ", tmp);
	else
		for (; tmp < 98; tmp++)
			printf("%d, ", tmp);
	printf("98\n");
}
