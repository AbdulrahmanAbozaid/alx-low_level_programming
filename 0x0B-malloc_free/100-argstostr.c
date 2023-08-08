#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - gestgsewt
 * @s: tgtestesw
 * Return: hgesrge
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;

	return (size);
}

/**
 * argstostr - heryer
 * @ac: gsedgtsedt
 * @av: gewrtt
 *
 * Return: gewstyewstews
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j = 0, nc = 0, e = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, nc++)
		nc += _strlen(av[i]);

	s = (char *)malloc(nc * sizeof(char) + 1);

	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (; av[i][j] != '\0'; j++, e++)
			s[e] = av[i][j];
		s[e] = '\n';
		e++;
	}
	s[e] = '\0';
	return (s);
}
