#include <stdio.h>
#include "main.h"

/**
 * leet - gsdg
 * @s: gsdgs
 *
 * Return: gsdg
 */

char *leet(char *s)
{
	char *cp = s;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int val[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); ++i)
		{
			if (*c == key[i] || *c == key[i] + 32)
				*c = 48 + val[i];
		}
		c++;
	}
	return (cp);
}
