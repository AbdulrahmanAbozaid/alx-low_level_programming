#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - esgter
 * @s1: gergreg
 * @s2: twetew
 *
 * Return: tgretreter
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j = 0, k = 0, t = 0;



	if (s1 != NULL)
		for (; s1[j] != '\0'; j++)
		;
	if (s2 != NULL)
		for (; s2[k] != '\0'; k++)
		;

	s = (char *)malloc((j + k + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (s1 != NULL)
		for (i = 0; i < j; i++)
			s[i] = s1[i];

	if (s2 != NULL)
		for (i = j; i < (k + 1); i++, t++)
			s[i] = s2[t];
	else
		s[j + k] = '\0';

	return (s);
}
