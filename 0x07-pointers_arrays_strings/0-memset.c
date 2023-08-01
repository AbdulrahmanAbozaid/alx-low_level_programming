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
	unsigned int i;

	for (i = 0; n > 0; ++i, n--)
	{
		s[i] = b;
	}

	return (s);
}
