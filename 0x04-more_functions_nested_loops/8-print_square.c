#include <stdio.h>
#include "main.h"

/**
 * print_square - square if suz
 * @size: sui
 *
 * Return: nothing
 */

void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
