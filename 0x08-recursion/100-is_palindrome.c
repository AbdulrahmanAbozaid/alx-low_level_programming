#include <stdio.h>
#include "main.h"

/**
 * check - gwedg
 * @s1: gesdgw
 * @s2: gfsdg
 * Return: gsdt
 */

int check(char *s1, char *s2)
{
	if ((s1 == s2 && *s1 == *s1) || (s1 == s2 - 1 && *s1 == *s2))
		return (1);

	if (*s1 != *s2)
		return (0);
	s1++;
	s2--;

	return (check(s1, s2));
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

	while (p[i] != '\0')
	{
		i++;
		p++;
	}
	p--;
	return (check(s, p));
}
