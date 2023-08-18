#include "variadic_functions.h"

/**
 * print_strings - gdfdsgsdg
 * @separator: fsafsa
 * @n: gdsgds
 * @...: fsgdsg
 *
 * Return: nsbd
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);

	while (i--)
	{
		printf("%s", (str = va_arg(ap, char *)) ? str : "(nil)");
		printf("%s", i ? (separator ? separator : "") : "\n");
	}
	va_end(ap);
}
