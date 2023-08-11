#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - gesgsdgs
 * @s: gfsefsedf
 * Return: ghrsgersg
 */

int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len - 1);
}

/**
 * string_nconcat - gergr
 * @s1: fgestfest
 * @s2: hregrhg
 * @n: gegsdgsrd
 *
 * Return: gregergrfg
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	char *s;

	if (n < len2)
		len2 = n;

	s = malloc(len1 + len2 + 1);

	if (!s)
		return (NULL);

	for (i = 0; i < len1; ++i)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < len2; ++j)
	{
		s[len1 + j] = s2[j];
	}

	s[len1 + len2] = '\0';

	return (s);
}
