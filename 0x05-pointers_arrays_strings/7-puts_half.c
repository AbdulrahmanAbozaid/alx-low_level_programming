#include <stdio.h>
#include "main.h"

/**
 * puts_half - fgsdf
 * @str: gdsfgh
 *
 * Return: gsdfhgds
 */

void puts_half(char *str)
{
	int len = 0, i;

	while (str[len])
		len++;

	if (len % 2 == 0)
		i = len / 2;
	else
		i = len - ((len - 1) / 2);

	for (; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
