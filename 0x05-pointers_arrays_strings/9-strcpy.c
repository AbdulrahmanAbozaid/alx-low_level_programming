#include <stdio.h>
#include "main.h"

/**
 * _strcpy - sedgtsde
 * @dest: dsg
 * @src: hdsfhgdsf
 *
 * Return: gsrgsr
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
