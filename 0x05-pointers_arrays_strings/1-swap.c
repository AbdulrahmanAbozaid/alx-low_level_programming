#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps
 * @a: num
 * @b: num
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
