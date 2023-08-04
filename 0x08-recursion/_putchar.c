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
