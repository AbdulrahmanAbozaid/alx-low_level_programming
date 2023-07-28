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
	int i, b = 1, len1 = 0, len2 = 0;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	for (i = 0; s1[i] && s2[i]; ++i)
	{
		if (s1[i] != s2[i])
		{
			b = 0;
			break;
		}
	}

	if (b == 0 || len1 != len2)
	{
		i = 0;

		if (s1[0] != s2[0])
			while (s1[0] == s2[0])
				i++;
		if (s1[i] > s2[i])
			return (1);
		else
			return (-1);
	}
	else
		return (0);
}
