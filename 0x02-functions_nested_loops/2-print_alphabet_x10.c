#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print abc
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int ch;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}
