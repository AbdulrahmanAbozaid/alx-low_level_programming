#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - pritns the digit of n
 * @n: number
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return (n % 10);
}
