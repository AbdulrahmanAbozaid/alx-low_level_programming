#include <stdio.h>
#include "main.h"

/**
 * puts2 - pt
 * @str: dsf
 *
 * Return: regre
*/

void puts2(char *str)
{
	int len = 0, i;

	while (str[len])
		len++;

	for (i = 0; i < len; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar('\n');
}
