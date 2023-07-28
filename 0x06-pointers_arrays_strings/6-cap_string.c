#include <stdio.h>
#include "main.h"

/**
 * isDelimiter - wegtsew
 * @a: fwesgf
 *
 * Return: gwesg
 */

int isDelimiter(char a)
{
	int i;
	char dels[] = " \t\n\",.!?(){}";

	for (i = 0; i < 12; ++i)
		if (a == dels[i])
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
	int found = 1;
	char *ptr = c;

	while (*c)
	{
		if (isDelimiter(*c))
			found = 1;
		else if ((*c >= 'a' && *c <= 'z') && found)
		{
			*s -= 32;
			found = 0;
		}
		else
			found = 0;
		s++;
	}
	return (ptr);
}
