#include <stdio.h>
#include "main.h"

/**
 * string_toupper - gsdg
 * @c: wersy
 * Return: gsdgds
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		if (c[i] >= 'a')
			c[i] -= ('a' - 'A');
	}
	return (c);
}
