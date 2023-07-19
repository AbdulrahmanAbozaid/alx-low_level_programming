#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints times of n
 * @n: number
 *
 * Return: nothing
 */

void print_times_table(int n)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= n; ++i)
	{
		k = 0;

		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				_putchar('0');
				k += i;
				continue;
			}


			if (k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			k += i;
		}

		_putchar('\n');
	}
}
