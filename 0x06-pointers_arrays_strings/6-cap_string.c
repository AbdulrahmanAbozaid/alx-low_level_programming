#include <stdio.h>
#include "main.h"

/**
 * isDelimiter - wegtsew
 * @c: fwesgf
 *
 * Return: gwesg
 */

int isDelimiter(char c)
{
	int i;
	char dels[] = "\t\n\",.!?(){}";

	for (i = 0; i < 12; ++i)
		if (c == dels[i])
			return (1);

	return (0);
}

/**
 * cap_string - ghsdg
 * @c: gsdg
 *
 * Return: gehsdfgh
 */

char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i]; ++i)
	{
		if (isDelimiter(c[i]))
		{
			if (c[i + 1] && (c[i + 1] >= 'a' && c[i + 1] <= 'z')
					c[i + 1] -= ('a' - 'A');
		}
	}

	return (c);
}
