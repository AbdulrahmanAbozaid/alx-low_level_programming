#include <stdio.h>
#include "main.h"

/**
 * _strlen - length
 * @s: string
 *
 * Return: integer
 */

int _strlen(char *s)
{
	int ctr = 0;
	char *c;

	for (c = s; c != '\0'; c++)
	{
		ctr++;
	}

	return (ctr);
}
