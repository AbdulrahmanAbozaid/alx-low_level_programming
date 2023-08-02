#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - ersyes
 * @s: gewt
 * @accept: hrehy
 *
 * Return: hreherh
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; accept[j] == '\0'; j++)
		{
			p = &s[i];
			if (accept[j] == s[i])
				return (p);
		}
	}

	return ('\0');
}
