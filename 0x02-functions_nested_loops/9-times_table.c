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
			_putchar(k);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			_putchar('\n');
			k += i;
		}
	}
}
