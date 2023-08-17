#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - gdfgfdd
 * @n: fsgdsg
 * @...: fsfasf
 *
 * Return: gdsgdsg
 */

int sum_them_all(const unsigned int n, ...)
{
	int i = n, sum = 0;
	va_list ag;

	if (n == 0)
		return (0);
	va_start(ag, n);
	while (i--)
		sum += va_arg(ag, int);

	va_end(ag);
	return (sum);
}
