#include <stdio.h>
#include "main.h"

/**
 * _memset - agwe
 * @s: tgewst
 * @b: gewsyg
 * @n: hersy
 *
 * Return: gewrsyewsg
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}

	return (s);
}
