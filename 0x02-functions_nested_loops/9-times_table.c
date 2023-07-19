#include <stdio.h>
#include "main.h"

/**
 * times_table - prints times
 *
 * Return: nothing
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; ++i)
	{
		k = 0;

		for (j = 0; j < 10; j++)
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
