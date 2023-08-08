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

	while (str[j])
		j++;

	s = (char *)malloc(j * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		s[i] = str[i];

	return (s);
}
