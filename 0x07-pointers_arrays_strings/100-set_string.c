#include <stdio.h>
#include "main.h"

/**
 * set_string - grfsdrges
 * @s: gretger
 * @to: hres
 *
 * Return: hrdhghtrd
 */

void set_string(char **s, char *to)
{
	int i;
	char *p = *s;

	for (i = 0; to[i] >= '\0'; i++)
	{
		p[i] = to[i];
	}
}
