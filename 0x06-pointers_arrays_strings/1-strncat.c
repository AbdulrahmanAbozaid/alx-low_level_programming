#include <stdio.h>
#include "main.h"

/**
 * _strcat - wsde
 * @dest: gesdg
 * @src: setg
 * @n: fsdfgs
 * Return: char*
 */

char *_strncat(char *dest, char *src, int n);
{
	int i = 0, j = 0;

	while (dest[i])
		i++;

	while (src[j])
		j++;

	if (n > j)
		n = j;

	for (j = 0; j < n; ++j)
		dest[i++] = src[j];
	return (dest);
}
