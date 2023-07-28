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

	while (*s)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); ++i)
		{
			if (*s == key[i] || *s == key[i] + 32)
				*s = 48 + val[i];
		}
		s++;
	}
	return (cp);
}
