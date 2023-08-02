#include <stdio.h>
#include "main.h"

/**
 * _strstr - sdg
 * @haystack: frsewarw
 * @needle: gewger
 *
 * Return: gresgseder
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1 = haystack;
	char *p2 = needle;
	char *p1Adv = haystack;

	while (*p1 && *needle)
	{
		if (*p1 == *p2)
		{
			p1++;
			p2++;
		}
		else
		{
			p2 = needle;
			p1 = ++p1Adv;
		}
	}
	return ((*needle == '\0') ? p1Adv : NULL);
}
