#include <stdio.h>
#include "main.h"

/**
 * check - gwedg
 * @s: gesdgw
 * @i: gfsdg
 * @j: gedsg
 * @e: gdsg
 * Return: gsdt
 */

int check(char *s, int i, int j, int e)
{
	if ((i == j && e != 0) || (i == j + 1 && e == 0))
		return (1);
	else if (s[i] != s[j])
		return (0);

	return (check(s, i + 1, j - 1, e));
}

/**
 * last_index - gesgse
 * @s: gdsgsd
 * Return: gewg
 */

int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - seryers
 * @s: gewsgge
 *
 * Return: gtersgtres
 */

int is_palindrome(char *s)
{
	int i = last_index(s);

	return (check(s, 0, i - 1, i % 2));
}
