#include <stdio.h>
#include "main.h"

/**
 * _calloc - ghresger
 * @nmemb: gewgtewsg
 * @size: hrsgrsdgt
 * Return: hgrsgsgs
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *s, *ptr;
	int i, n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * sizeof(int));

	if (m == NULL)
		return (NULL);

	s = m;
	ptr = s;
	n = sizeof(int) * nmemb;

	while (n--)
		*s++ = '0';
	

	return (ptr);
}
