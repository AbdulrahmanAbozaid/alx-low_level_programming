#include <stdio.h>
#include "main.h"

/**
 * _strchr - gherys
 * @s: gwega
 * @c: gewrysw
 *
 * Return: ersyhersy
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; ++i)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
