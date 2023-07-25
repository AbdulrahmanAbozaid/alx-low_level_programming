#include <stdio.h>
#include "main.h"

/**
 * print_rev - print
 * @s: str
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	char *c;
	int ctr = 0;

	for (c = s; *c != '\n'; c++)
	{
		ctr++;
	}

	for (c = s + ctr; c != s - 1; c--)
	{
		printf("%c", *c);
	}

	putchar('\n');
}
