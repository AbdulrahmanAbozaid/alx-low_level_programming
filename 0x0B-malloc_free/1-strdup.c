#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - htrhtr
 * @str: greyr
 *
 * Return: yerers
 */

char *_strdup(char *str)
{
	int i, j = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	for (; str[j] != '\0'; j++);

	s = (char *)malloc(j * sizeof(*str) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		s[i] = str[i];

	return (s);
}
