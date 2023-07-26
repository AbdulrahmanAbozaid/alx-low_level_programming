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
	int i = 0, j;

	while (dest[i])
		i++;

	for (j = 0; j < n && src[j] != '\0'; ++j)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
