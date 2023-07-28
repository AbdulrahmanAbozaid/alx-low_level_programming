#include <stdio.h>
#include "main.h"

/**
 * print_number - gsdf
 * @n: ewgwestg
 *
 * Return: gwesgtwe
 */

void print_number(int n)
{
	unsigned int a;

	a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}

	if (a / 10)
	{
		print_number(a / 10);
	}

	_putchar((n1 % 10) + '0');
}
