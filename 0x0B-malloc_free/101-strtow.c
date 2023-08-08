#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * isAlpha - gregrsg
 * @c: gewgwes
 * Return: hgeryher
 */

int isAlpha(char c)
{
	return (c != ' ' && c != '\0');
}

/**
 * getLen - jhrdyhdr
 * @s: gewtgesw
 * Return: getwe
 */

int getLen(char *s)
{
	int size = 0, i = 0;

	for (; s[i]; i++)
	{
		if (s[i] == ' ' && isAlpha(s[i + 1]))
			size++;
		else if (i == 0 && isAlpha(s[i]))
			size++;
	}

	size++;

	return (size);
}

/**
 * strtow - ewtrt
 * @str: hwergre
 *
 * Return: wgheytwetwer
 */

char **strtow(char *str)
{
	char **s;
	int i, j = 0, k, l, n = 0, wc = 0;

	if (str == NULL || *str == '0')
		return (NULL);
	n = getLen(str);
	if (n == 1)
		return (NULL);
	s = (char **)malloc(n * sizeof(char *));
	if (s == 0)
		return (NULL);
	s[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (isAlpha(str[i]) && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] && str[i + j] != ' '; j++)
				;
			j++;
			s[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (s[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(s[k]);
				free(s[n - 1]);
				free(s);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				s[wc][l] = str[i + l];
			s[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (s);
}
