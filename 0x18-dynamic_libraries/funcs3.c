#include <stdio.h>
#include "main.h"



/**
 * _strcat - fdsfds
 * @dest: fsaf
 * @src: fsfsf
 * Return: fsfsfds
 */

char *_strcat(char *dest, char *src)
{
}


/**
 * _strncat - wsde
 * @dest: gesdg
 * @src: setg
 * @n: fsdfgs
 * Return: char*
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i])
		i++;

	for (j = 0; j < n && src[j] != '\0'; ++j)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}

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

/**
 * _strcmp - sgged
 * @s1: gsdg
 * @s2: rsfsed
 *
 * Return: gsgetsewgt
 */

int _strcmp(char *s1, char *s2)
{
	int eq = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			eq = *s1 - *s2;
			break;
		}
		s1++;
		s2++;
	}
	return (eq);
}
