#include <stdio.h>
#include "main.h"

/**
 * rev_string - fgds
 * @s: gsdg
 *
 * Return: festfrs
 */

void rev_string(char *s)
{
	int len = 0, i;
	char tmp;

	while (s[i])
		len++;

	for (i = 0; i < len; ++i)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
	}

}
