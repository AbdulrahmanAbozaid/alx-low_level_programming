#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _mems - gwsdgswdgegt
 * @s: gfewsdgtsed
 * @b: gewstgsedt
 * @n: gewgstg
 * Return: egwryhewrg
 */

char *_mems(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * _calloc - ghresger
 * @nmemb: gewgtewsg
 * @size: hrsgrsdgt
 * Return: hgrsgsgs
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_mems(m, 0, sizeof(int) * nmemb);

	return (m);
}
