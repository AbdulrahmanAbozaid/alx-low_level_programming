#include <stdio.h>
#include "main.h"

/**
 * print_line - prints line
 * @n: num
 * Return: nothing
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
