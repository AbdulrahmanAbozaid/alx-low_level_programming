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

	for (; tmp < 99; tmp++)
	{
		if (tmp == n)
		{
			if (tmp < 10)
			{
				_putchar(tmp + '0');
			}
			else
			{
				_putchar((tmp / 10) + '0');
				_putchar((tmp % 10) + '0');
			}
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			if (tmp < 10)
			{
				_putchar(tmp + '0');
			}
			else
			{
				_putchar((tmp / 10) + '0');
				_putchar((tmp % 10) + '0');
			}
		}
	}
}
