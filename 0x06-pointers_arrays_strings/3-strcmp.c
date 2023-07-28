#include <stdio.h>
#include "main.h"

/**
 * _strcmp - sgged
 * @s1: gsdg
 * @s2: rsfsed
 *
 * Return: gsgetsewgt
 */

int _strcmp(char *s1, char *s2)
{
	int eq = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			eq = *s1 - *s2;
			break;
		}
		s1++;
		s2++;
	}
	return (eq);
}
