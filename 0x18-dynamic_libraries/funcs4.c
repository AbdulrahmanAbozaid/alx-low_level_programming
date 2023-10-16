#include <stdio.h>
#include "main.h"




/**
 * _strpbrk - ersyes
 * @s: gewt
 * @accept: hrehy
 *
 * Return: hreherh
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}

	return (0);
}



/**
 * _memset - agwe
 * @s: tgewst
 * @b: gewsyg
 * @n: hersy
 *
 * Return: gewrsyewsg
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; ++i, n--)
	{
		s[i] = b;
	}

	return (s);
}

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

/**
 * _strchr - gherys
 * @s: gwega
 * @c: gewrysw
 *
 * Return: ersyhersy
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; ++i)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}

/**
 * _strspn - gesrg
 * @s: gsergh
 * @accept: gher
 *
 * Return: gwetgreg
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; accept[j] != s[i]; ++j)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}

	return (i);
}
