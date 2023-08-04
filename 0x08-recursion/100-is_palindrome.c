#include <stdio.h>
#include "main.h"

/**
 * check - gwedg
 * @s1: gesdgw
 * @s2: gfsdg
 * @l: gre
 * Return: gsdt
 */

int check(char *s1, char *s2, int l)
{
	if (!l)
		return (1);

	if (*s1 != *s2)
		return (0);
	s1++;
	s2--;
	l--;

	return (check(s1, s2, l));
}

/**
 * is_palindrome - seryers
 * @s: gewsgge
 *
 * Return: gtersgtres
 */

int is_palindrome(char *s)
{
	char *p = s;
	int i = 0;

	while (s[i] != '\0')
	{
		p++;
		i++;
	}
	return (check(s, p, i / 2));
}
