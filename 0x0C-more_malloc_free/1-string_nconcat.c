#include <stdio.h>
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
		return (len);

	while (s[len] != '\0')
		len++;

	return (len);
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
	unsigned int i, j;
	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n < len2)
		len2 = n;

	s = malloc(len1 + n + 1);

	if (!s)
		return (NULL);

	for (i = 0; i < len1; ++i)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < n; ++j)
	{
		s[i] = s2[j];
		i++;
	}

	s[i] = '\0';

	return (s);
}
