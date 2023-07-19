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
			if (k < 10) 
			{
				_putchar(k + '0);
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			k += i;
		}

		_putchar('\n');
	}
}
