#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes c
 * @c: the character to print
 *
 * Return: On Success 1
 *	   On Error -1
 *
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - checks for lower of c
 * @c: character
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 97)
		return (1);

	return (0);
}


/**
 * _isalpha - checks c is alpha
 * @c: character
 *
 * Return: 0 | 1`
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}


/**
 * _abs - get the abs of n
 * @n: number
 *
 * Return: absolute val
 */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);

	return (n);
}

/**
 * _isupper - is upper of c
 * @c: char
 *
 * Return: integer
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
