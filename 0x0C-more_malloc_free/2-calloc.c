#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - ghresger
 * @nmemb: gewgtewsg
 * @size: hrsgrsdgt
 * Return: hgrsgsgs
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *m;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);

	if (m == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		m[i] = 0;

	return (m);
}
