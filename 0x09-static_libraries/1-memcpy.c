#include <stdio.h>
#include "main.h"

/**
 * _memcpy - hersyy
 * @dest: tgewtya
 * @src: gewry
 * @n: gewst
 *
 * Return: gereyterw
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}
