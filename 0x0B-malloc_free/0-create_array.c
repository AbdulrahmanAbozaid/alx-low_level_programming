#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - gtere
 * @size: gtery
 * @c: gergherher
 *
 * Return: heryhershyer
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *s;

	if (!size)
		return (NULL);
	s = (char *) malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
