#include <stdio.h>
#include "main.h"

/**
 * _puts - gs
 * @str: sdtf
 *
 * Return: stges
 */

void _puts(char *str)
{
	char *c;

	for (c = str; *c != '\0'; c++)
	{
		printf("%c", *c);
	}

	putchar('\n');
}
