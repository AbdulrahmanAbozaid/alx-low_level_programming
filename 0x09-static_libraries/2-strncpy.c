#include <stdio.h>
#include "main.h"

/**
 * _strncpy - gdsg
 * @dest: gdsg
 * @src: gr
 * @n: num
 *
 * Return:gsdgets
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
