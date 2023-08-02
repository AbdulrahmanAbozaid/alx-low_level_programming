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

	for (i = 0; to[i] != '\0'; i++)
	{
		*s[i] = to[i];
	}
	*s[i] = '\0';
}
