#include <stdio.h>
#include "main.h"

/**
 * move_past_star - ghsgs
 * @s2: gergers
 * Return: grewshre
 */

char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	return (s2);
}

/**
 * inception - gewt
 * @s1: gewtgsew
 * @s2: tgfewsgtws
 * Return: gewstgse
 */

int inception(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);
	ret += inception(s1 + 1, s2);
	return (ret);
}


/**
 * wildcmp - ghersgrse
 * @s1: gesdgesd
 * @s2: gewdgfwes
 *
 * Return: gewsdgtesdwtf
 */

int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}

	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret = wildcmp(s1 + 1, s2 + 1);
		ret += inception(s1, s2);
		return (!!ret);
	}
	return (0);
}
